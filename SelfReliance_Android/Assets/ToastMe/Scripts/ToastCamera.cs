using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ToastMe
{
    [RequireComponent(typeof(Camera))]
    public class ToastCamera : MonoBehaviour
    {
        /// <summary>
        /// Name of the LayerMask used to render toasts to the Ui.
        /// </summary>
        private string _toastLayerMask = "Toast";
        
        /// <summary>
        /// Unity Camera that is a child of the main camera with the sole purpose of rendering toasts to the Ui.
        /// </summary>
        private Camera _toastCamera;

        /// <summary>
        /// Unity camera tagged as the Main Camera within a Unity Scene.
        /// </summary>
        private Camera _mainCamera;

        private void Awake()
        {
            // Resolve our references.
            _toastCamera = GetComponent<Camera>();
            _mainCamera = Camera.main;

            if (_mainCamera == null)
            {
                gameObject.SetActive(false);
                Debug.LogError("Main Camera has not been found in your scene.");
                return;
            }                        
        }

        private void FixedUpdate()
        {
            // Set the parent of this child camera to the main camera.
            transform.SetParent(_mainCamera.transform);
            
            // Update the properties of the child camera.
            _toastCamera.clearFlags = CameraClearFlags.Depth;
            _toastCamera.depth = 1f;
            
            // Add the Toast layer to be rendered by the child camera.                         
            _toastCamera.LayerCullingShow(_toastLayerMask);                        
            
            // Remove the Toast layer from being rendered by the main camera.            
            _mainCamera.LayerCullingHide(_toastLayerMask);
        }
    }
}