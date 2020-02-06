using System;
using System.Collections;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace ToastMe
{
    /// <summary>
    /// Contains all information to set the content of a toast and to change the
    ///  way a toast behaves when processed by the ToastManager.
    /// </summary>
    [RequireComponent(typeof(Button), typeof(CanvasRenderer))]
    [RequireComponent(typeof(LayoutElement), typeof(EventTrigger))]
    public class ToastInfo : MonoBehaviour
    {
        /// <summary>
        /// Uses out-of-process to prevent this toast from being dismissed until manually set to false.
        /// </summary>
        public bool Persist
        {
            get { return _persist; }
            set { _persist = value; }
        }

        /// <summary>
        /// Used by the ToastManager to get any callbacks to invoke when showing this toast.
        /// </summary>
        [Tooltip("Callbacks to invoke when this toast is displayed.")]
        [FormerlySerializedAs("_onShow")] public UnityEvent OnShow;

        /// <summary>
        /// Used by the ToastManager to get any callbacks to invoke when destorying this toast.
        /// </summary>
        [Tooltip("Callbacks to invoke when this toast id hidden.")] 
        [FormerlySerializedAs("_onHide")] public UnityEvent OnHide;

        /// <summary>
        /// Used by the ToastManager to get the sound to play when showing this toast.
        /// </summary>
        [Tooltip("Sound to play when this toast is displayed.")]
        [FormerlySerializedAs("_popSound")] public AudioClip PopSound;
        
        /// <summary>
        /// Used by the ToastManager to determine if this toast can be dismissed.
        /// </summary>
        public bool CanDismiss { get { return _lifetime != -1 && _canDismiss; } }

        /// <summary>
        /// Used to determine if this toast us currently in the process of fading-in or fading-out.
        /// </summary>
        public bool Fading { get { return _fading; } }
        
        /// <summary>
        /// Used by the ToastManager to Get or Set the type of this toast. Note: The type of
        ///  a toast is set within the ToastManager Toast collection.
        /// </summary>
        public string Type
        {
            get { return _type; }

            set { _type = value; }
        }
        
        /// <summary>
        /// Used to determine when this toast was created. Note: This is only being displayed
        ///  as a readonly field in the editor for a reference.
        /// </summary>
        public DateTime? DateCreated
        {
            get
            {
                if (string.IsNullOrEmpty(_dateCreated))
                {                    
                    return null;
                }
                
                return DateTime.Parse(_dateCreated);
            }
        }

        public float ToastEffectTime
        {
            get { return _toastEffectTime; }

            set { _toastEffectTime = value; }
        }
        
        /// <summary>
        /// Used by the ToastManager to check if this toast has already been destroyed.
        /// </summary>
        public bool Destroyed { get { return _destroyed; } }                
        
        /// <summary>
        /// Indicated when this toast was created.
        /// </summary>
        [Tooltip("The date and time when this toast was created.")]
        [ReadOnly]
        [SerializeField] private string _dateCreated;
        
        /// <summary>
        /// Indicates what type of toast this is.
        /// </summary>
        [Tooltip("The type of this toast.")] 
        [ReadOnly]
        [SerializeField] private string _type; 
        
        [Tooltip("Indicates if this toast cannot be dismissed automatically by the ToastManager.")]
        private bool _persist;        

        /// <summary>
        /// The reference to the TextMeshPro text title component.
        /// </summary>
        [Tooltip("The TMPro component used for the title of this toast.")]
        [FormerlySerializedAs("_titleTextRef")] public TextMeshProUGUI TitleTextRef;

        /// <summary>
        /// The reference to the TextMeshPro text message component.
        /// </summary>
        [Tooltip("The TMPro component used for the message of this toast.")]
        [FormerlySerializedAs("_messageTextRef")] public TextMeshProUGUI MessageTextRef;

        /// <summary>
        /// The reference to the image component used for the icon of this toast.
        /// </summary>
        [Tooltip("The Image component used for the icon of this toast.")]
        [FormerlySerializedAs("_iconRef")] public Image IconRef;

        /// <summary>
        /// The reference to the image component used for the background of this toast.
        /// </summary>
        [Tooltip("The image component used for the background of this toast.")]
        [FormerlySerializedAs("_backgroundRef")] public Image BackgroundRef;

        /// <summary>
        /// The reference to the button component used to compose this toast.
        /// </summary>
        [Tooltip("The button component used to create this toast.")]
        [SerializeField] private Button _toastButtonRef;                              

        private void Awake()
        {
            // This toast is being created so set the dateCreated so we may reference it 
            //  within the inspector.
            _dateCreated = DateTime.Now.ToString("g");
        }

        /// <summary>
        /// Used to Get or Set the title text color of this toast.
        /// </summary>
        public Color? TitleTextColor
        {
            get
            {
                if (TitleTextRef == null)
                {
                    return null;
                }

                return TitleTextRef.color;
            }

            set
            {
                if (TitleTextRef == null)
                {
                    return;
                }

                TitleTextRef.color = value.Value;
            }
        }

        /// <summary>
        /// Used to Get or Set the message text color of this toast.
        /// </summary>
        public Color? MessageTextColor
        {
            get
            {
                if (MessageTextRef == null)
                {
                    return null;
                }

                return MessageTextRef.color;
            }

            set
            {
                if (MessageTextRef == null)
                {
                    return;
                }

                MessageTextRef.color = value.Value;
            }
        }

        /// <summary>
        /// Used to Get or Set the background color of this toast.
        /// </summary>
        public Color? BackgroundColor
        {
            get
            {
                if (BackgroundRef == null)
                {
                    return null;
                }

                return BackgroundRef.color;
            }

            set
            {
                if (BackgroundRef == null)
                {
                    return;
                }

                BackgroundRef.color = value.Value;
            }
        }

        /// <summary>
        /// Used to Get or Set the icon of this toast.
        /// </summary>
        public Sprite Icon
        {
            get
            {
                if (IconRef == null)
                {
                    return null;
                }

                return IconRef.sprite;
            }

            set
            {
                if (IconRef == null)
                {
                    return;
                }

                IconRef.sprite = value;
            }
        }

        /// <summary>
        /// Used to Get or Set the icon color  of this toast.
        /// </summary>
        public Color? IconColor
        {
            get
            {
                if (IconRef == null)
                {
                    return null;
                }

                return IconRef.color;
            }

            set
            {
                if (IconRef == null)
                {
                    return;
                }

                IconRef.color = value.Value;
            }
        }

        
        /// <summary>
        /// Used to Get or Set the title text of this toast.
        /// </summary>
        public string Title
        {
            get
            {
                if (TitleTextRef == null)
                {
                    return null;
                }

                return TitleTextRef.text;
            }

            set
            {
                if (TitleTextRef == null)
                {
                    return;
                }

                TitleTextRef.text = value;
            }
        }

        /// <summary>
        /// Used to Get or Set the message text of this toast.
        /// </summary>
        public string Message
        {
            get
            {
                if (MessageTextRef == null)
                {
                    return null;
                }

                return MessageTextRef.text;
            }

            set
            {
                if (MessageTextRef == null)
                {
                    return;
                }

                MessageTextRef.text = value;
            }
        }

        /// <summary>
        /// Used to Get or Set the ability to manually dismiss this toast.
        /// </summary>
        public bool TapToDismiss
        {
            get { return _tapToDismiss; }

            set { _tapToDismiss = value; }
        }

        /// <summary>
        /// Used to Get or Set the lifetime this toast will remain visible.
        /// </summary>
        public float Lifetime
        {
            get { return _lifetime; }

            set { _lifetime = value; }
        }

        /// <summary>
        /// Indicates how long this toast will remain visible.
        /// </summary>
        private float _lifetime;

        /// <summary>
        /// The time in deconds it takes the toast to show or hide from the ToastEffect.
        /// </summary>
        private float _toastEffectTime;
        
        /// <summary>
        /// Indicates whether this toast can be dismissed. Note: This is used to support the
        ///  delayed dismissal of this toast. 
        /// </summary>
        private bool _canDismiss = true;

        /// <summary>
        /// Indicates whether this toast can be manually dismissed.
        /// </summary>
        private bool _tapToDismiss = true;
        
        /// <summary>
        /// Indicates if this toast has been queued to be destoryed.
        /// </summary>
        private bool _destroyed;

        /// <summary>
        /// Indicates whether this toast is in the process of being faded-in or faded-out.
        /// </summary>
        private bool _fading;

        /// <summary>
        /// Prevents this toast from being destroyed. Note: This is called when the mouse OnHover
        ///  event is triggered.
        /// </summary>
        public void PreventDismissal()
        {
            _canDismiss = false;            
        }

        /// <summary>
        /// Allows this toast to be destoryed. Note: This is called when the mouse OnLeave event
        ///  is triggered.
        /// </summary>
        public void EnableDismissal()
        {
            _canDismiss = true;
        }

        /// <summary>
        /// Called by the ToastManager to begin a fade-in effect on this toast.
        /// </summary>
        /// <returns></returns>
        public IEnumerator FadeIn()
        {                        
            _fading = true;
            
            // Fetch all instances of text and images so that we may access their Color components easily.
            var images = GetComponentsInChildren<Image>().ToArray();
            var text = GetComponentsInChildren<TextMeshProUGUI>().ToArray();

            // Get a reference to all initial colors so that we may interpolate their colors correctly. 
            var initialImageColors = images.Select(x => x.color).ToArray();
            var initialTextColors = text.Select(x => x.color).ToArray();
                                    
            var percentage = 0f;
            var fadeSpeed = 1f / _toastEffectTime;
            while (!_destroyed && percentage < 1f)
            {
                percentage += Time.deltaTime * fadeSpeed;

                // Interpolate colors.
                for(int i = 0; i < images.Length; i++) { images[i].color = Color.Lerp(Color.clear, initialImageColors[i], percentage); }
                for(int i = 0; i < text.Length; i++) { text[i].color = Color.Lerp(Color.clear, initialTextColors[i], percentage); }
                         
                yield return null;
            }

            _fading = false;
        }

        /// <summary>
        /// Called by the ToastManager to begin a fade-out effect on this toast.
        /// </summary>
        /// <returns></returns>
        public IEnumerator FadeOut()
        {                                
            _fading = true;

            // Fetch all instances of text and images so that we may access their Color components easily.
            var images = GetComponentsInChildren<Image>().ToArray();
            var text = GetComponentsInChildren<TextMeshProUGUI>().ToArray();

            // Get a reference to all initial colors so that we may interpolate their colors correctly. 
            var initialImageColors = images.Select(x => x.color).ToArray();
            var initialTextColors = text.Select(x => x.color).ToArray();
                        
            var percentage = 0f;
            var fadeSpeed = 1f / _toastEffectTime;
            while (!_destroyed && percentage < 1f)
            {
                percentage += Time.deltaTime * fadeSpeed;

                // Interpolate colors.
                for(int i = 0; i < images.Length; i++) { images[i].color = Color.Lerp(initialImageColors[i], Color.clear, percentage); }
                for(int i = 0; i < text.Length; i++) { text[i].color = Color.Lerp(initialTextColors[i], Color.clear, percentage); }
                
                yield return null;
            }

            _fading = false;
        }
        
        /// <summary>
        /// Used by the ToastManager to destroy this toast. Note: This is also called when a user
        ///  clicks this toast to manually dismiss this toast.
        /// </summary>
        public void Destroy()
        {
            if(_persist) { return; }
            
            // Is our lifetime set to -1, forcing us to manually dismiss this toast?
            // Is the setting to tap to dismiss this toast enabled?
            if (_lifetime != -1 && !_tapToDismiss) { return; }
            
            _destroyed = true;                        
        }                
    }
}