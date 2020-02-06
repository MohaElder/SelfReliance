#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using System.Collections;
using System.IO;
using System.Linq;

namespace HeurekaGames.AssetHunter
{
    public class AssetHunterSettingsCreator : MonoBehaviour
    {
        public const string NAME = "AssetHunterSettingsData";

        internal static string GetAssetPath()
        {
            //SettingsData
            string[] scriptableAssetsFound = AssetDatabase.FindAssets("Settings t:AssetHunterSettings", null);
            if (scriptableAssetsFound.Length >= 1)
            {
                return AssetDatabase.GUIDToAssetPath(scriptableAssetsFound[0]);
            }
            //If the scriptableObject does not exist
            else
            {
                string assetHunterEditorPath = Directory.GetDirectories(Application.dataPath, string.Format("Editor", Path.DirectorySeparatorChar), SearchOption.AllDirectories).FirstOrDefault(val => val.Contains("AssetHunter"));
                if (string.IsNullOrEmpty(assetHunterEditorPath))
                    Debug.LogError("Missing folder 'AssetHunter/Editor' - Re-Install Asset Hunter");
                else
                {
                    string folderPath = assetHunterEditorPath + Path.DirectorySeparatorChar + "Settings";
                    System.IO.Directory.CreateDirectory(folderPath);

                    string relativepath = "";

                    if (folderPath.StartsWith(Application.dataPath))
                    {
                        relativepath = "Assets" + folderPath.Substring(Application.dataPath.Length) + Path.DirectorySeparatorChar;
                    }

                    AssetHunterSettings asset = ScriptableObject.CreateInstance<AssetHunterSettings>();
                    string assetPathAndName = AssetDatabase.GenerateUniqueAssetPath(relativepath + NAME + ".asset");

                    AssetDatabase.CreateAsset(asset, assetPathAndName);

                    AssetDatabase.SaveAssets();

                    return assetPathAndName;
                }
            }
            return null;
        }
    }
}
#endif