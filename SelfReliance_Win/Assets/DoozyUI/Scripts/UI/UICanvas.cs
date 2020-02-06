// Copyright (c) 2015 - 2018 Doozy Entertainment / Marlink Trading SRL. All Rights Reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement
// A Copy of the EULA APPENDIX 1 is available at http://unity3d.com/company/legal/as_terms

using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace DoozyUI
{
    [AddComponentMenu(DUI.COMPONENT_MENU_UICANVAS, DUI.MENU_PRIORITY_UICANVAS)]
    [RequireComponent(typeof(Canvas))]
    [DisallowMultipleComponent]
    public class UICanvas : MonoBehaviour
    {

#if UNITY_EDITOR
        [UnityEditor.MenuItem(DUI.GAMEOBJECT_MENU_UICANVAS, false, DUI.MENU_PRIORITY_UICANVAS)]
        static void CreateCanvas(UnityEditor.MenuCommand menuCommand)
        {
            string canvasName = MASTER_CANVAS_NAME;
            UICanvas[] searchResults = FindObjectsOfType<UICanvas>();
            if (searchResults != null && searchResults.Length > 0)
            {
                bool renameRequired = true;
                int canvasCount = 0;
                while (renameRequired)
                {
                    renameRequired = false;
                    for (int i = 0; i < searchResults.Length; i++)
                    {
                        if (canvasName.Equals(searchResults[i].canvasName))
                        {
                            canvasCount++;
                            canvasName = "UICanvas " + canvasCount;
                            renameRequired = true;
                            break;
                        }
                    }
                }
            }
            UICanvas canvas = UIManager.CreateCanvas(canvasName);
            UnityEditor.Undo.RegisterCreatedObjectUndo(canvas.gameObject, "Create " + canvas.gameObject.name);
            UnityEditor.Selection.activeObject = canvas.gameObject;
        }
#endif


        /// <summary>
        /// Internal dictionary that keeps track of all the registered UICanvases.
        /// </summary>
        private static Dictionary<string, UICanvas> m_Database;
        /// <summary>
        /// Gets a registry of all the registered UICanvases.
        /// </summary>
        /// <value>
        /// The database.
        /// </value>
        public static Dictionary<string, UICanvas> Database { get { if(m_Database == null) { m_Database = new Dictionary<string, UICanvas>(); } return m_Database; } }

        /// <summary>
        /// Internal static reference to the UICanvas named 'MasterCanvas'. There can be only one.
        /// </summary>
        private static UICanvas masterCanvas;


        /// <summary>
        /// Default name given to a new canvas. The name is 'MasterCanvas' and you should have ONLY ONE per scene as this is considered your main/default canvas.
        /// </summary>
        public const string MASTER_CANVAS_NAME = "MasterCanvas";

        /// <summary>
        /// The name of this canvas.
        /// </summary>
        public string canvasName = MASTER_CANVAS_NAME;
        /// <summary>
        /// Used by the custom inspector to allow you to type a canvas name instead of selecting it from the Canvas Names Database.
        /// </summary>
        public bool customCanvasName = false;

        /// <summary>
        /// Makes this UICanvas gameObject not get destroyed automatically when loading a new scene.
        /// </summary>
        public bool dontDestroyOnLoad = false;

        /// <summary>
        /// Returns true if this canvas name is 'MasterCanvas' and if it has been registered to the UIManager as the MasterCanvas
        /// </summary>
        public bool IsMasterCanvas { get { return canvasName == MASTER_CANVAS_NAME && UIManager.GetMasterCanvas() == this; } }

        /// <summary>
        /// Internal variable that holds a reference to the RectTransform component.
        /// </summary>
        private RectTransform m_rectTransform;
        /// <summary>
        /// Returns the RectTransform component.
        /// </summary>
        public RectTransform RectTransform { get { if (m_rectTransform == null) { m_rectTransform = GetComponent<RectTransform>() == null ? gameObject.AddComponent<RectTransform>() : GetComponent<RectTransform>(); } return m_rectTransform; } }

        /// <summary>
        /// Internal variable that holds a reference to the Canvas component.
        /// </summary>
        private Canvas m_canvas;
        /// <summary>
        /// Returns the Canvas component.
        /// </summary>
        public Canvas Canvas { get { if (m_canvas == null) { m_canvas = GetComponent<Canvas>(); } return m_canvas; } }

        /// <summary>
        /// Internal variable that is set to true if this canvas has been registered to the UIManager.
        /// </summary>
        private bool registeredToUIManager = false;

        private void Awake()
        {
            if (Canvas == null)
            {
                Debug.LogError("[DoozyUI] The UICanvas, attached to the " + name + " gameObject, does not have a Canvas component attached. Fix this by adding a Canvas component.");
                Destroy(this);
                return;
            }
            if (!Canvas.isRootCanvas)
            {
                Debug.LogError("[DoozyUI] The Canvas, attached to the " + name + " gameObject, is to a root canvas. The UICanvas component must be attached to a top (root) canvas in the Hierarchy.");
                return;
            }
            if(dontDestroyOnLoad)
            {
                DontDestroyOnLoad(gameObject);
            }
        }

        private void OnEnable()
        {
            RegisterToDatabase();
        }

        private void OnDisable()
        {
            UnregisterFromDatabase();
        }

        private void OnDestroy()
        {
            UnregisterFromDatabase();
        }

        /// <summary>
        /// Registers this UICanvas to the Database.
        /// </summary>
        public void RegisterToDatabase()
        {
            if (Canvas == null || !Canvas.isRootCanvas) { return; }
            if (registeredToUIManager) { return; }
            if (Database.ContainsKey(canvasName))
            {
                Debug.LogError("[DoozyUI] Error duplicate UICanvas found. " +
                               "You cannot have multiple UICanvases with the same canvas name. " +
                               "This error orginated from the UICanvas component attached to the " + name + " gameObject. " +
                               "The duplicate canvas name is '" + canvasName + "'.");
                return;
            }

            Database.Add(canvasName, this);
            registeredToUIManager = true;
        }

        /// <summary>
        /// Unregisteres this UICanvas from the Database.
        /// </summary>
        public void UnregisterFromDatabase()
        {
            if (Canvas == null || !Canvas.isRootCanvas) { return; }
            if (!registeredToUIManager) { return; }
            if (Database.ContainsKey(canvasName))
            {
                Database.Remove(canvasName);
                registeredToUIManager = false;
            }
        }

        #region STATIC METHODS
        /// <summary>
        /// Returns a reference to an UICanvas that is considered and used as a 'MasterCanvas'. If no such canvas exists, one will get created automatically by default.
        /// </summary>
        /// <param name="createMasterCanvasIfNotFound">Should a 'MasterCanvas' be created if it is missing.</param>
        public static UICanvas GetMasterCanvas(bool createMasterCanvasIfNotFound = true)
        {
            if(masterCanvas != null) { return masterCanvas; } //MasterCanvas has already been found
            if(Database.Count == 0) //CanvasDatabase is empty -> check if there is an UICanvas named MasterCanvas, in the scene, that did not register (sanity check)
            {
                UICanvas[] searchResults = FindObjectsOfType<UICanvas>(); //Look for the MasterCanvas using find (inefficient, but necessary)
                int searchResultsLength = searchResults.Length;
                if(searchResults != null && searchResultsLength > 0)
                {
                    for(int i = 0; i < searchResultsLength; i++)
                    {
                        if(searchResults[i].canvasName == MASTER_CANVAS_NAME)
                        {
                            masterCanvas = searchResults[i];
                            return masterCanvas;
                        }
                    }
                }
            }
            else if(Database.ContainsKey(MASTER_CANVAS_NAME)) //Check CanvasDatabase for the MasterCanvas
            {
                masterCanvas = Database[MASTER_CANVAS_NAME];
                return masterCanvas;
            }
            //MasterCanvas not found!
            if(!createMasterCanvasIfNotFound) { return null; }
            //Create a MasterCanvas
            masterCanvas = CreateCanvas(MASTER_CANVAS_NAME);
            return masterCanvas;
        }

        /// <summary>
        /// Retruns a reference to an UICanvas that has the given canvas name. It can also create the canvas you are searching for or just return the 'MasterCanvas' UICanvas.
        /// </summary>
        /// <param name="canvasName">The canvas name you are looking for.</param>
        /// <param name="createCanvasIfNotFound">Should the system create an UICanvas with the canvas name you are looking for?</param>
        /// <param name="returnMasterCanvasIfTargetCanvasNotFound">Should this method return a reference to the 'MasterCanvas' UICanvas if the canvas name you are looking for was not found?</param>
        public static UICanvas GetCanvas(string canvasName, bool createCanvasIfNotFound = false, bool returnMasterCanvasIfTargetCanvasNotFound = true)
        {
            if(string.IsNullOrEmpty(canvasName))
            {
                Debug.Log("[DoozyUI] You cannot get a Canvas without entering a name. The canvasName you provided, when calling UIManager.GetCanvas, was an empty string. Returned null.");
                return null;
            }
            if(Database.ContainsKey(canvasName)) { return Database[canvasName]; }
            if(UIManager.Instance.debugUICanvases) { Debug.Log("[DoozyUI] There is no UICanvas with the '" + canvasName + "' canvasName in the Database. Returned the Master Canvas instead."); }
            if(createCanvasIfNotFound)
            {
                return CreateCanvas(canvasName);
            }
            if(returnMasterCanvasIfTargetCanvasNotFound)
            {
                return GetMasterCanvas();
            }
            return null;
        }

        /// <summary>
        /// Creates an UICanvas with the given canvas name and retuns the reference to it.
        /// </summary>
        /// <param name="canvasName">The canvas name for the new UICanvas.</param>
        /// <returns></returns>
        public static UICanvas CreateCanvas(string canvasName)
        {
            //Look for the EventSystem
            EventSystem es = GameObject.FindObjectOfType<EventSystem>();
            if(es != null)
            {
                es.transform.SetParent(null);
            }
            else
            {
                new GameObject("EventSystem", typeof(EventSystem), typeof(StandaloneInputModule));
            }
            if(string.IsNullOrEmpty(canvasName))
            {
                Debug.Log("[DoozyUI] You cannot create a new UICanvas without entering a name. The canvasName you provided, when calling CreateCanvas, was an empty string. No canvas was created and this method returned null.");
                return null;
            }
            if(Database.ContainsKey(canvasName))
            {
                if(UIManager.Instance.debugUICanvases) { Debug.Log("[DoozyUI] Cannot create a new UICanvas with the '" + canvasName + "' canvas name because another UICanvas with the same name already exists in the Database. Returned the existing one instead."); }
                return Database[canvasName];
            }
            GameObject go = new GameObject(canvasName, typeof(RectTransform), typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
            go.GetComponent<Canvas>().renderMode = RenderMode.ScreenSpaceOverlay;
            UICanvas canvas = go.AddComponent<UICanvas>();
            canvas.canvasName = canvasName;
            canvas.customCanvasName = true;
            return canvas;
        }
        #endregion
    }
}
