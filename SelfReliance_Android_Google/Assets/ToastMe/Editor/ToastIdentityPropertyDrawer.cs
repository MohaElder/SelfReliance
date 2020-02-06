using UnityEditor;
using UnityEngine;

namespace ToastMe
{
    [CustomPropertyDrawer(typeof(ToastIdentity))]
    public class ToastIdentityPropertyDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            // Using BeginProperty / EndProperty on the parent property means that
            // prefab override logic works on the entire property.
            EditorGUI.BeginProperty(position, label, property);

            // Draw label
            position = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);

            // Don't make child fields be indented
            var indent = EditorGUI.indentLevel;
            EditorGUI.indentLevel = 0;

            // Calculate rects
            var typeRect = new Rect(position.x, position.y, 200, position.height);
            var toastRect = new Rect(position.x + 205, position.y, position.width - 205, position.height);            

            // Draw fields - passs GUIContent.none to each so they are drawn without labels
            EditorGUI.PropertyField(typeRect, property.FindPropertyRelative("Type"), GUIContent.none);
            EditorGUI.PropertyField(toastRect, property.FindPropertyRelative("Toast"), GUIContent.none);            

            // Set indent back to what it was
            EditorGUI.indentLevel = indent;

            EditorGUI.EndProperty();
        }
    }
}