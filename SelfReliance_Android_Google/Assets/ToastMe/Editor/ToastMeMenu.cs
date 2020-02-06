using UnityEngine;
using UnityEditor;

namespace ToastMe 
{
    public class ToastMeMenu : EditorWindow
    {
        private const string RootMenu = "Window/Toast Me";

        private const string MissingToastManagerPrefabError =
            "ToastManager prefab could not be found. Please try re-importing Toast Me from the Unity Asset Store and try again.";

        private const string ToastManagerAlreadyExistsError = "The scene already contains a ToastManager prefab. Do you want to add another one?";       
        
        [MenuItem(RootMenu + "/Add Toast Manager")]
        private static void AddToastManager()
        {
            if (FindObjectOfType<ToastManager>() != null)
            {
                if (EditorUtility.DisplayDialog("Are you sure?", ToastManagerAlreadyExistsError, "Yes", "No"))
                {
                    CreateToastManager();
                }
            }
            else
            {
                CreateToastManager();
            }
        }

        private static void CreateToastManager()
        {
            ToastManager lToastManager =
                AssetDatabase.LoadAssetAtPath<ToastManager>("Assets/ToastMe/Prefabs/ToastManager.prefab");

            if (lToastManager == null)
            {
                EditorUtility.DisplayDialog("Error", MissingToastManagerPrefabError, "OK");
                return;
            }

            PrefabUtility.InstantiatePrefab(lToastManager);
        }
    }
}