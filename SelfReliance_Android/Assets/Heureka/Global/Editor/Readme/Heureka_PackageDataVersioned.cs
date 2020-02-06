using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace HeurekaGames
{ 
    public class Heureka_PackageDataVersioned : Heureka_PackageData
    {
        public List<PackageVersion> VersionData = new List<PackageVersion>();
        internal bool FoldOutVersionHistory;

        internal void AddNewVersion(int major, int minor, int patch)
        {
            VersionData.Add(new PackageVersion(major,minor,patch));
            //TODO SORT
        }

        internal void CollapseAll()
        {
            foreach (var item in VersionData)
            {
                item.FoldOut = false;
            }
        }
    }

    [System.Serializable]
    public class PackageVersion
    {
        [SerializeField] public PackageVersionNum VersionNum = new PackageVersionNum();
        [SerializeField] public List<string> VersionChanges = new List<string>();

        [SerializeField] public bool FoldOut = false;
        [SerializeField] private string versionDescription;

        PackageVersionNum newVersionNum = new PackageVersionNum();

        private const float btnWidth = 150;


        public PackageVersion(int major, int minor, int patch)
        {
            this.VersionNum = newVersionNum = new PackageVersionNum(major,minor,patch);
            this.FoldOut = true;
        }

        internal void OnGUI()
        {
            GUILayout.Space(10);
            FoldOut = EditorGUILayout.Foldout(FoldOut, VersionNum.GetVersionString());
            if (FoldOut)
            {
                EditorGUILayout.BeginHorizontal();


                if (GUILayout.Button("Update Version", GUILayout.Width(btnWidth)))
                    updateVersion();

                //Allow for changing version num
                newVersionNum.Major = EditorGUILayout.IntField(newVersionNum.Major);
                newVersionNum.Minor = EditorGUILayout.IntField(newVersionNum.Minor);
                newVersionNum.Patch = EditorGUILayout.IntField(newVersionNum.Patch);

                EditorGUILayout.EndHorizontal();
                EditorGUILayout.BeginHorizontal();

                EditorGUI.BeginDisabledGroup(string.IsNullOrEmpty(versionDescription));
                if (GUILayout.Button("Add Element", GUILayout.Width(btnWidth)))
                    addNewDescription();
                EditorGUI.EndDisabledGroup();

                versionDescription = GUILayout.TextArea(versionDescription);

                EditorGUILayout.EndHorizontal();

                if (VersionChanges.Count > 0)
                {
                    GUILayout.Space(10);
                    GUILayout.Label("VersionHistory");

                    for (int i = VersionChanges.Count - 1; i >= 0; i--)
                    {
                        EditorGUILayout.BeginHorizontal();
                        if (GUILayout.Button("Delete line", GUILayout.Width(90)))
                        {
                            VersionChanges.RemoveAt(i);
                            continue;
                        }

                        VersionChanges[i] = GUILayout.TextField(VersionChanges[i]);
                        EditorGUILayout.EndHorizontal();
                    }
                }
            }
        }

        private void updateVersion()
        {
            VersionNum = new PackageVersionNum(newVersionNum.Major, newVersionNum.Minor, newVersionNum.Patch);
            //TODO SORT Parent list
        }

        private void addNewDescription()
        {
            VersionChanges.Add(versionDescription);
            versionDescription = "";
        }
    }

    [System.Serializable]
    public struct PackageVersionNum : IComparable<PackageVersionNum>
    {
        [SerializeField] public int Major;
        [SerializeField] public int Minor;
        [SerializeField] public int Patch;

        public PackageVersionNum(int major, int minor, int path)
        {
            this.Major = major;
            this.Minor = minor;
            this.Patch = path;
        }

        public int CompareTo(PackageVersionNum other)
        {
            if (this.Major != other.Major)
                return this.Major.CompareTo(other.Major);
            else if (this.Minor != other.Minor)
                return this.Minor.CompareTo(other.Minor);
            else
                return this.Patch.CompareTo(other.Patch);
        }

        internal class VersionComparer : IComparer<PackageVersionNum>
        {
            int IComparer<PackageVersionNum>.Compare(PackageVersionNum objA, PackageVersionNum objB)
            {
                return objA.CompareTo(objB);
            }
        }

        public string GetVersionString()
        {
            return string.Format("{0}.{1}.{2}", Major, Minor, Patch);
        }

        internal bool IsEmpty()
        {
            return (Major == 0 && Minor == 0 && Patch == 0);
        }
    }
}