#if UNITY_EDITOR
using System;
using System.Linq;
using System.Collections.Generic;
using UnityEditor;
using HeurekaGames.AssetHunter;

public static class AssetHunterPreferences
{
    public const string AHPrefsColorTextDefault = "AssetHunter.ColorText.Default";
    public const string AHPrefsColorTextPro = "AssetHunter.ColorText.Pro";
    public const string AHPrefsAutoStart = "AssetHunter.AutoStart";

    internal static UnityEngine.Color InitialColorTextDefault = UnityEngine.Color.black;

    public static UnityEngine.Color DefaultColorText
    {
        get { return (EditorPrefs.HasKey(AHPrefsColorTextDefault) ? readColorFromPrefs(AHPrefsColorTextDefault) : InitialColorTextDefault); }
        internal set {writeColorToPrefs(AHPrefsColorTextDefault, value); }
    }

    private static UnityEngine.Color readColorFromPrefs(string editoPrefString)
    {
        UnityEngine.Color storedColor;
        storedColor.r = EditorPrefs.GetFloat(AHPrefsColorTextDefault+"_R");
        storedColor.g = EditorPrefs.GetFloat(AHPrefsColorTextDefault + "_G");
        storedColor.b = EditorPrefs.GetFloat(AHPrefsColorTextDefault + "_B");
        storedColor.a = EditorPrefs.GetFloat(AHPrefsColorTextDefault + "_A");

        return storedColor;
    }

    private static void writeColorToPrefs(string editoPrefString, UnityEngine.Color color)
    {
        EditorPrefs.SetFloat(AHPrefsColorTextDefault + "_R", color.r);
        EditorPrefs.SetFloat(AHPrefsColorTextDefault + "_G", color.g);
        EditorPrefs.SetFloat(AHPrefsColorTextDefault + "_B", color.b);
        EditorPrefs.SetFloat(AHPrefsColorTextDefault + "_A", color.a);
    }
}
#endif