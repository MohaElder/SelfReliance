using UnityEngine;

namespace ToastMe
{        
    /// <summary>
    /// Static interface used to queue a toast to be displayed. 
    /// </summary>
    public static class Toast
    {                  
        /// <summary>
        /// Queues a toasts of the given type to be processed and displayed by the first found
        ///  ToastManager in the scene. Setting the message and/or title to
        /// null will not change the toast text information. Setting the message and/or title to
        /// string.Empty will clear them respectively.
        /// </summary>
        /// <param name="type">Type of toast.</param>
        /// <param name="message">Message content of the toast.</param>
        /// <param name="title">Title of the toast.</param>
        public static ToastInfo Pop(string type, string message = null, string title = null)
        {
            // Get the ToastManager reference.
            var toastManager = GetToastManager();
            
            // Queue the toast to be displayed.
            var toast = toastManager.AddToast(type, message, title);
            return toast;
        }
        
        /// <summary>
        /// Queues a toasts of the given type to be processed and displayed by the given ToastManager.
        /// Setting the message and/or title to null will not change the toast text information. Setting
        /// the message and/or title to string.Empty will clear them respectively.
        /// </summary>
        /// <param name="toastManager">The ToastManager reference to display the toast.</param>
        /// <param name="type">Type of toast.</param>
        /// <param name="message">Message content of the toast.</param>
        /// <param name="title">Title of the toast.</param>
        public static ToastInfo Pop(ToastManager toastManager, string type, string message = null, string title = null)
        {                        
            // Queue the toast to be displayed.
            var toast = toastManager.AddToast(type, message, title);
            return toast;
        }

        /// <summary>
        /// Finds a reference to the ToastManager in the scene.
        /// </summary>
        /// <returns>ToastManager reference.</returns>
        private static ToastManager GetToastManager()
        {
            var toastManager = GameObject.FindObjectOfType<ToastManager>();

            if (toastManager != null) { return toastManager; }
            
            Debug.LogError("ToastManager was not found in your scene.");
            return null;

        }
    }
}