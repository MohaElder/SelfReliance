using UnityEditor;
using UnityEngine;

namespace ToastMe
{
    [CustomEditor(typeof(Toastr))]
    public class ToastTesterEditor : Editor
    {                
        public override void OnInspectorGUI()
        {
            DrawDefaultInspector();
            
            var toastr = target as Toastr;
            var toastManager = toastr.ToastManagerRef;

            if (toastManager == null) { return; }
            
            string[] options = toastManager.GetAvailableToastTypes();           
            if (options.Length == 0) { return; }                        
            
            toastr.Selected = EditorGUILayout.Popup("Type", toastr.Selected, options);
            toastr.Type = options[toastr.Selected];
            
            if (Application.isPlaying && GUILayout.Button("Pop Toast!"))
            {
                toastr.PopToast();
            }
        }
    }
}