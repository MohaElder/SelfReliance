using UnityEngine;

namespace ToastMe
{
    /// <summary>
    /// Contains global settings defining how toasts will behave.
    /// </summary>
    [System.Serializable]
    public sealed class ToastConfig
    {                              
        /// <summary>
        /// Used by the ToastManager to get the toast display location.
        /// </summary>
        public TextAnchor Location { get { return _location; } set { _location = value; } }

        /// <summary>
        /// Indicates the type of effect used to hide and show toasts.
        /// </summary>
        public ToastEffect ToastEffect { get { return _toastEffect; } }
        
        /// <summary>
        /// The time in seconds it takes the toast to be shown or hidden using a ToastEffect.
        /// </summary>
        public float ToastEffectTime { get { return _toastEffectTime; } }
        
        /// <summary>
        /// Used by the ToastManager to get the max number of toasts that can be displayed.
        /// </summary>
        public int MaxToastCount { get { return _maxToastCount; } }        

        /// <summary>
        /// Used by the ToastManager to check if toasts can be tapped to be dismissed.
        /// </summary>
        public bool TapToDismiss { get { return _tapToDismiss; } }       
        
        /// <summary>
        /// Used by the ToastManager to check if the toast dismissal can be delayed.
        /// </summary>
        public bool PreventDismissalOnHover { get { return _preventDismissalOnHover; } }
        
        /// <summary>
        /// Used by the ToastManager to check how long a toast can be displayed before being destroyed.
        /// </summary>
        public float ToastLifetime { get { return _toastLifetime; } }          
        
        /// <summary>
        /// Determines where on the screen toasts will appear.
        /// </summary>   
        [Tooltip("Controls where toasts will appear on the screen.")]
        [SerializeField] private TextAnchor _location = TextAnchor.LowerRight;

        /// <summary>
        /// Indicates the type of effect that will be used to show and hide toasts.
        /// </summary>
        [Tooltip("The type of effect used to show and hide toasts.")]
        [SerializeField] private ToastEffect _toastEffect = ToastEffect.Fade;

        /// <summary>
        /// Indicates the amount of time in seconds that it will take for a toast to be shown or hidden by
        /// a toast effect.
        /// </summary>
        [Tooltip("The amount of time in seconds that it takes a toast to be shown or hidden by a ToastEffect.")]
        [SerializeField] private float _toastEffectTime = 0.25f;
        
        /// <summary>
        /// The max number of toasts that can be displayed at any given time. Setting this to -1 will allow
        /// an unlimited number of toasts to be displayed. 
        /// </summary>
        [Tooltip("Max number of toasts that can be displayed at any given time. Setting this to -1 will allow"
              + " an unlimited number of toasts to be displayed.")]
        [SerializeField] private int _maxToastCount = 5;
        
        /// <summary>
        /// The time in seconds that a toast will remain displayed. Setting this to -1 will require the
        /// toast to be dismissed manually.
        /// </summary>
        [Tooltip("The time in seconds that a toast will be displayed. Setting this to -1 will require the "
               + "toast to be dismissed manually.")]
        [SerializeField] private float _toastLifetime = 2.5f;
        
        /// <summary>
        /// Indicates if a toast can be destroyed by clicking it.
        /// </summary>
        [Tooltip("Indicates whether a toast can be manually destoryed by clicking it.")]
        [SerializeField] private bool _tapToDismiss = true;

        /// <summary>
        /// Indicates if a toast be be hovered over, preventing it from being deleted.
        /// </summary>
        [Tooltip("Indicates if hovering over the toast will prevent it from being destroyed.")]
        [SerializeField] private bool _preventDismissalOnHover = true;              
    }
}