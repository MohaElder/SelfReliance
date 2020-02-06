using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace ToastMe
{	
	/// <summary>
	/// Processes and handles the lifecycle of a toast.
	/// </summary>
	[RequireComponent(typeof(AudioSource), typeof(Canvas), typeof(Toastr))]
	public sealed class ToastManager : MonoBehaviour
	{						
		#region " Inspector References "
		
		/// <summary>
		/// The <see cref="VerticalLayoutGroup"/>  used to render toasts created by the <seealso cref="ToastManager"/>.
		/// </summary>
		[Tooltip("The unity UI component used to set the location, arrangement and padding of visible toasts.")] 
		[FormerlySerializedAs("_toastFeedRef")] public VerticalLayoutGroup ToastFeedRef;

		/// <summary>
		/// The camera prefab used to render toasts on top of whetever else is rendered by the main camera.
		/// </summary>
		[Tooltip("The camera prefab added to the Main Camera used to render toasts on top of everything else that is rendered.")]
		[FormerlySerializedAs("_toastCameraPrefab")] public ToastCamera ToastCameraPrefab;				

		#endregion
		
		#region " Inspector Variables "
		
		/// <summary>
		/// Class containing global settings controlling the way toasts behave and how
		/// users will be able to interact with toasts.
		/// </summary>
		[Tooltip("Global settings that handle the behavior of toasts.")]
		[SerializeField] private ToastConfig _toastConfig = new ToastConfig();
		
		/// <summary>
		/// Collection of registered toasts that can be displayed to the user.
		/// </summary>
		[Tooltip("Registered toasts.")]
		[SerializeField] private List<ToastIdentity> _toasts = new List<ToastIdentity>();				
		
		/// <summary>
		/// UnityEvent that is invoked when a toast is displayed.
		/// </summary>
		[Tooltip("Called when a toast is displayed.")]
		[FormerlySerializedAs("_onShow")] public UnityEvent OnShow;

		/// <summary>
		/// UnityEvent that is invoked when a toast is hidden, before it is destroyed.
		/// </summary>
		[Tooltip("Called when a toast is hidden.")] 
		[FormerlySerializedAs("_onHide")] public UnityEvent OnHide;

		#endregion
		
		#region " Internal Variables "
		
		/// <summary>
		/// The current number of toasts being displayed.
		/// </summary>
		private int _toastCount;

		/// <summary>
		/// The delay between displaying toasts in quick succession.
		/// </summary>
		private float _toastDelay = 0.2f;

		/// <summary>
		/// Used to delay the display of toasts in quick succession.
		/// </summary>
		private WaitForSeconds _toastWaitTime;				
		
		/// <summary>
		/// Contains toasts that are waiting to be displayed.
		/// </summary>
		private static readonly Queue<ToastInfo> _toastsPendingFeed = new Queue<ToastInfo>();
		
		/// <summary>
		/// Contains toasts that are currently being displayed.
		/// </summary>
		private static readonly Queue<ToastInfo> _toastsPendingDeletion = new Queue<ToastInfo>();										

		/// <summary>
		/// Internal reference to the AusioSource used to play the pop sound of a toast.
		/// </summary>
		private AudioSource _audioSourceRef;
		
		/// <summary>
		/// Used by the ToastManager to extend the life of a toast.
		/// </summary>
		private float _repeatTimeThreshold;
		
		/// <summary>
		/// Internal reference to the Main Camera in the scene.
		/// </summary>
		private Camera _mainCamera;
		
		/// <summary>
		/// Name used when creating the ToastQueue GameObject.
		/// </summary>
		private string _toastQueueName = "ToastQueue";
		
		/// <summary>
		/// A child object of the ToastManager that is used as the parent to all pending toasts.
		/// </summary>
		private Transform _toastQueueRef;
		
		#endregion 
		
		#region " Public Methods "
		
		/// <summary>
		/// Fetches the available toast types for all registered toasts.
		/// </summary>
		/// <returns>A collection of toast types.</returns>
		public string[] GetAvailableToastTypes()
		{
			var toasts = _toasts
				.Where(x => x != null)
				.Where(x => !string.IsNullOrEmpty(x.Type))
				.Select(x => x.Type);
			
			return toasts.ToArray();
		}
		
		/// <summary>
		/// Queues a toast of the given type to be displayed. Setting the message and/or title to
		/// null will not change the toast text information. Setting the message and/or title to
		/// string.Empty will clear them respectively.
		/// </summary>
		/// <param name="type">Type of toast.</param>
		/// <param name="message">Content of the toast.</param>
		/// <param name="title">Title of the toast.</param>
		public ToastInfo AddToast(string type, string message = null, string title = null)
		{
			// Create our new toast.
			var toast = CreateToast(type, message, title);
			if (toast == null) { return null; }
			
			// Add our new toasts to the pending feed so it will be processed and displayed
			//  at compoint in the near future.
			_toastsPendingFeed.Enqueue(toast);

			return toast;
		}

		/// <summary>
		/// Updates the ToastConfig location, changing where toasts appear on the screen.
		/// </summary>
		/// <param name="anchor">Location where to display toasts.</param>
		public void SetChildAlignment(TextAnchor anchor)
		{
			_toastConfig.Location = anchor;
		}
		
		#endregion
		
		#region " Private Methods "
		
		/// <summary>
		/// Factory methos used to instantiate a toast of the given type. Setting the message and/or title to
		/// null will not change the toast text information. Setting the message and/or title to
		/// string.Empty will clear them respectively.
		/// </summary>
		/// <param name="type">Type of toast.</param>
		/// <param name="message">Content of the toast.</param>
		/// <param name="title">Title of the toast.</param>
		/// <returns>A ToastInfo object with the given information.</returns>
		private ToastInfo CreateToast(string type, string message = null, string title = null)
		{			
			ToastIdentity toastIdentity = null;
			
			try
			{				
				toastIdentity = _toasts.SingleOrDefault(x => String.Equals(x.Type, type, StringComparison.InvariantCultureIgnoreCase));
			}
			catch (System.InvalidOperationException)
			{
				// There was more than one registered toast with the same type.
				Debug.LogError("More than one toast was found with the same Type: " + type);
				
				gameObject.SetActive(false);
				return null;
			} 

			// Do we have a toast registered with the given type ...
			if (toastIdentity == null || toastIdentity.Toast == null)
			{
				// ... No. Log an error and return.
				Debug.LogError("A toast has not been registered with Type: " + type);
				return null;
			}
			
			// ... Yes. Instantiate our new toast using the registered prefab.
			var toast = Instantiate(toastIdentity.Toast, Vector3.zero, Quaternion.identity);

			// Set the properties of our toast with the given information and
			//  with the settings from the ToastConfig.
			toast.Type = type;

			// Set the toast Title and Message. Note: by passing null we effectively leave the text. Doing
			//  so allows the toast message to be defined by the toast Unity prefab.
			toast.Title = (title == null) ? toast.Title : title;
			toast.Message = (message == null) ? toast.Message : message;			

			toast.Lifetime = _toastConfig.ToastLifetime;			
			toast.ToastEffectTime = _toastConfig.ToastEffectTime;
			toast.TapToDismiss = _toastConfig.TapToDismiss;

			// Set the toast parent to the ToastQueue gameObject. Doing so allows us to keep our
			//  scene organized. Note: We also set the toast gameObject to inactive. Doing so 
			//  prevents the instantiated toast from being displayed until it has been processed
			//  by the ToastManager.
			toast.transform.SetParent(_toastQueueRef, false);			
			toast.gameObject.SetActive(false);
			
			// Return our new toast.
			return toast;
		}
		
		private void Awake()
		{									
			if (ToastCameraPrefab == null)
			{
				Debug.LogError("ToastCamera prefab has not been assigned.");
				
				gameObject.SetActive(false);
				return;
			}
			
			// Creating this here is slightly faster than instantiating a new WaitForSeconds
			//  every time we look to display a new toast. NOTE: this is set from an internal
			//  value and will not change during runtime.
			_toastWaitTime = new WaitForSeconds(_toastDelay);
			
			// Resolve component references.
			_audioSourceRef = GetComponent<AudioSource>();								
			
			// Do we have a main camera?
			_mainCamera = Camera.main;
			if (_mainCamera == null)
			{
				// ... No. Set our ToastManager to inactive, logging our error.
				Debug.LogError("Main Camera has not been found in your scene.");
				
				gameObject.SetActive(false);
				return;
			}

			// Do we have a toast camrea in our scene ...
			var toastCamera = _mainCamera.GetComponentInChildren<ToastCamera>();
			if (toastCamera == null)
			{
				// ... No. Create one now and attach it to the main camera.				
				Instantiate(ToastCameraPrefab, _mainCamera.transform);	
			}			
			
			// Do we already have a ToastQueue ...
			if (_toastQueueRef != null)
			{
				// ... Yes. Destroy it immediately. This allows us keep our scene hierarchy clean
				//  and only create the queue when needed in Play mode. 
				DestroyImmediate(_toastQueueRef.gameObject);
			}
			
			// Create our new ToastQueue. This will be used to hold toasts that are pending.
			_toastQueueRef = new GameObject(_toastQueueName).transform;
			_toastQueueRef.SetParent(transform);
		}	

		private void Update()
		{
			// Do we have a valid ToastFeed component ...
			if (ToastFeedRef != null)
			{
				// ... Yes. Update our feed. Note: If we do not have a ToastFeed reference we
				//  do not process toasts. No ToastFeed means we will not be able to correctly
				//  display out toasts.
				UpdateToastFeed();
				return;
			}		
			
			Debug.LogError("No ToastFeed is available for the ToastManager.");
		}					
		
		/// <summary>
		/// Handles the syncing of property settings on the ToastFeed and triggers an update
		///  to visible toasts, and toasts that are pending deletion. The ToastFeed is a
		///  VerticalLayoutGroup component.
		/// </summary>
		private void UpdateToastFeed()
		{
			// Has the child alignment changed ...
			if (ToastFeedRef.childAlignment != _toastConfig.Location)
			{
				// ... Yes, update the location. This will change the location where 
				//  toasts are displayed.
				ToastFeedRef.childAlignment = _toastConfig.Location;	
			}
			
			// Do we have toasts in our queue waiting to be displayed?
			// Do we have a max toast count?
			// Have we reach our max toast count?
			if (_toastsPendingFeed.Count > 0 && (_toastConfig.MaxToastCount < 0 
				 || _toastCount < _toastConfig.MaxToastCount))
			{								
				// We have toasts to display and we either have no max toast count or
				//  we are under our max toast count so update our visible toasts.
				StartCoroutine(UpdateToasts());
			}
		}

		/// <summary>
		/// Handles the display of new toasts and queues toasts to be destroyed.
		/// </summary>
		/// <returns></returns>
		private IEnumerator UpdateToasts()
		{
			// Do we have toasts in our queue waiting to be displayed?
			// Do we have a max toast count?
			// Have we reach our max toast count?
			while (_toastsPendingFeed.Count > 0 && (_toastConfig.MaxToastCount < 0 
			       || _toastCount < _toastConfig.MaxToastCount))
			{
				// We have toasts to display and we either have no max toast count or
				//  we are under our max toast count so update our visible toasts.
				
				// Increment our toast count to indicate we are displaying a toast. This is
				//  an easier approach than checking the number of children are contained
				//  in the ToastQueue gameObject. 
				_toastCount += 1;
				
				// The next toast to be displayed is at the front of the pending toasts queue so
				//  remove it from the queue, and add it to the queue of toasts pending deletion.
				//  Doing so allows us to display and destory toast on a first-come-first-serve 
				//  basis.
				var toast = _toastsPendingFeed.Dequeue();
				_toastsPendingDeletion.Enqueue(toast);

				var toastType = toast.Type;
				
				// Set the toast gameObject to active and set its parent to the ToastFeed
				// (VerticalLayoutGroup) to display and order our toast correctly.
				toast.gameObject.SetActive(true);
				toast.transform.SetParent(ToastFeedRef.transform, false);

				// Does the toast contain an AudioClip ...
				if (_audioSourceRef != null && toast.PopSound != null)
				{
					// ... Yes. Assign the AudioSource the toast's AutoClip and play it. Doing so
					//  plays the AudioClip on display of the toast.				
					_audioSourceRef.clip = toast.PopSound;
					_audioSourceRef.Play();																	
				}
				
				// Does the toast contain any callback functions when shown ...
				if (toast.OnShow != null)
				{
					// ... Yes. Invoke them now.
					toast.OnShow.Invoke();
				}

				// Does the ToastManager contain any callback functions when showing
				//  a toast ...
				if (OnShow != null)
				{
					// ... Yes. Invoke them now.
					OnShow.Invoke();
				}

				// Is the ToastConfig effect set to fade ...
				if (_toastConfig.ToastEffect == ToastEffect.Fade)
				{
					// ... Yes. Begin fade-in effect now. Note: We wait for the FadeIn coroutine
					//  to finish before queuing the toast to be destoyed. 
					yield return StartCoroutine(toast.FadeIn());										
				}						
				
				// Queue this toast to be destroyed.
				StartCoroutine(DestroyToast());																						
				
				yield return _toastWaitTime;
			}						
		}

		/// <summary>
		/// Handles the delayed dismissal of toasts and their eventual destruction.
		/// </summary>
		/// <returns></returns>
		private IEnumerator DestroyToast()
		{
			// Remove the toast from the deletion queue.
			var toast = _toastsPendingDeletion.Dequeue();
			
			// Has our toast been destroyed?
			// Is our toast set to be manually dismissed?
			// Has our toast lived past its life expectency?
			var endLifetime = Time.time + toast.Lifetime;
			while (!toast.Destroyed && (toast.Lifetime == -1 || Time.time < endLifetime))
			{
				// No. Return next iteration. 
				yield return null;
				
				// Is the toast unable to be dismissed because a user is hovering over it or
				//  because the Persist property has been set to true ...				
				if (toast.Persist || !toast.Destroyed && _toastConfig.PreventDismissalOnHover && !toast.CanDismiss)
				{
					// ... Yes. Extend the life expentency of the toast. 
					endLifetime = Time.time + toast.Lifetime;
				}								
			}						

			// Is the ToastConfig effect set to fade ...
			if (!toast.Destroyed && _toastConfig.ToastEffect == ToastEffect.Fade)
			{
				// ... Yes. Begin fade-out effect now. Note: We wait for the FadeOut coroutine to finish
				// before we finally destroy the toast.
				yield return StartCoroutine(toast.FadeOut());
			}
			
			// Does the toast contain any callback functions when destroyed ...
			if (toast.OnHide != null)
			{
				// ... Yes. Invoke them now.
				toast.OnHide.Invoke();
			}

			// Does the ToastManager contain any callback functions when destorying
			// a toast ...
			if (OnHide != null)
			{
				// ... Yes. Invoke them now.
				OnHide.Invoke();
			}
			
			// We are destroying this toast so decrement the total number of displayed toasts
			// by one. Doing so allows a new pending toast to be processed and displayed.
			_toastCount -= 1;

			// The toast has reached the end of its lifetime. Destory it now.
			Destroy(toast.gameObject);					
		}
		
		#endregion
	}
}