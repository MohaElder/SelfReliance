using UnityEngine;

namespace ToastMe
{
    /// <summary>
    /// Provides an interface to trigger the display of toasts.
    /// </summary>
    public class Toastr : MonoBehaviour
    {
        /// <summary>
        /// Used by the ToastTesterEditor script to set the toast type
        /// based on the selected type in the type dropdown of the inspector.
        /// </summary>
        [HideInInspector] public string Type;

        [HideInInspector] public int Selected;
        
        /// <summary>
        /// Reference to the ToastManager used to pop a toast.
        /// </summary>
        [Tooltip("Reference to the ToastManager in the scene used to pop a toast.")]
        public ToastManager ToastManagerRef;
        
        /// <summary>
        /// Title of the toast.
        /// </summary>
        [Tooltip("The title to use when popping the sample toast.")]
        public string Title = "This is a title";

        
        /// <summary>
        /// Message of the toast.
        /// </summary>
        [Tooltip("The message to use when popping the sample toast.")]
        [TextArea] public string Message = "This is a message.";             
        
        /// <summary>
        /// Queues a toast to be displayed by the ToastManager.
        /// </summary>
        public void PopToast()
        {
            if (!Application.isPlaying)
            {
                Debug.LogWarning("You may only test the display of toasts while in Play mode.");
                return;
            }

            if (ToastManagerRef == null)
            {
                Debug.LogError("A ToastManager reference for this toastr has not been set.");
                return;
            }
            
            Debug.Log
            (
                "Popping " + Type + " toast. \n" +
                "  Title: "+ Title + "\n" +
                "  Message: " + Message + "\n"
            );

            // We set the Title or Message to null if empty so that we may tests toasts
            //  were the information presented is defined by the Unity 3d prefab.
            Title = (string.IsNullOrEmpty(Title)) ? null : Title;
            Message = (string.IsNullOrEmpty(Message)) ? null : Message;            
            
            Toast.Pop(ToastManagerRef, Type, Message, Title);
        }        
    }
}