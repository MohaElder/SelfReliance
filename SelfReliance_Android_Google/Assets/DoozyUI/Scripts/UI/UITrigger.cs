// Copyright (c) 2015 - 2018 Doozy Entertainment / Marlink Trading SRL. All Rights Reserved.
// This code can only be used under the standard Unity Asset Store End User License Agreement
// A Copy of the EULA APPENDIX 1 is available at http://unity3d.com/company/legal/as_terms

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace DoozyUI
{
    [AddComponentMenu(DUI.COMPONENT_MENU_UITRIGGER, DUI.MENU_PRIORITY_UITRIGGER)]
    public class UITrigger : MonoBehaviour
    {
        /// <summary>
        /// Helper class for an UnityEvent with one string parameter.
        /// </summary>
        [Serializable]
        public class TriggerEvent : UnityEvent<string> { }

        #region Context Menu Methods
#if UNITY_EDITOR
        [UnityEditor.MenuItem(DUI.GAMEOBJECT_MENU_UITRIGGER, false, DUI.MENU_PRIORITY_UITRIGGER)]
        static void CreateTrigger(UnityEditor.MenuCommand menuCommand)
        {
            GameObject go = new GameObject("UITrigger", typeof(UITrigger));
            UnityEditor.GameObjectUtility.SetParentAndAlign(go, menuCommand.context as GameObject);
            UnityEditor.Undo.RegisterCreatedObjectUndo(go, "Create " + go.name);
            if(go.transform.root.GetComponent<RectTransform>() != null)
            {
                go.AddComponent<RectTransform>();
                go.GetComponent<RectTransform>().localScale = Vector3.one;
            }
            UnityEditor.Selection.activeObject = go;
        }
#endif
        #endregion

        /// <summary>
        /// Internal dictionary that keeps track of all the registered UITrigges that listen for game events.
        /// </summary>
        private static Dictionary<string, List<UITrigger>> m_gameEventsTriggerDatabase;
        /// <summary>
        /// Returns a registry of all the registered UITriggers that listens for game events.
        /// </summary>
        public static Dictionary<string, List<UITrigger>> GameEventsTriggerDatabase { get { if(m_gameEventsTriggerDatabase == null) { m_gameEventsTriggerDatabase = new Dictionary<string, List<UITrigger>>(); } return m_gameEventsTriggerDatabase; } }
        /// <summary>
        /// Internal dictionary that keeps track of all the registered UITrigges that listen for button clicks.
        /// </summary>
        private static Dictionary<string, List<UITrigger>> m_buttonClicksTriggerDatabase;
        /// <summary>
        /// Returns a registry of all the registered UITriggers that listens for button clicks.
        /// </summary>
        public static Dictionary<string, List<UITrigger>> ButtonClicksTriggerDatabase { get { if(m_buttonClicksTriggerDatabase == null) { m_buttonClicksTriggerDatabase = new Dictionary<string, List<UITrigger>>(); } return m_buttonClicksTriggerDatabase; } }
        /// <summary>
        /// Internal dictionary that keeps track of all the registered UITrigges that listen for button double clicks.
        /// </summary>
        private static Dictionary<string, List<UITrigger>> m_buttonDoubleClicksTriggerDatabase;
        /// <summary>
        /// Returns a registry of all the registered UITriggers that listens for button clicks.
        /// </summary>
        public static Dictionary<string, List<UITrigger>> ButtonDoubleClicksTriggerDatabase { get { if(m_buttonDoubleClicksTriggerDatabase == null) { m_buttonDoubleClicksTriggerDatabase = new Dictionary<string, List<UITrigger>>(); } return m_buttonDoubleClicksTriggerDatabase; } }
        /// <summary>
        /// Internal dictionary that keeps track of all the registered UITrigges that listen for button long clicks.
        /// </summary>
        private static Dictionary<string, List<UITrigger>> m_buttonLongClicksTriggerDatabase;
        /// <summary>
        /// Returns a registry of all the registered UITriggers that listens for button clicks.
        /// </summary>
        public static Dictionary<string, List<UITrigger>> ButtonLongClicksTriggerDatabase { get { if(m_buttonLongClicksTriggerDatabase == null) { m_buttonLongClicksTriggerDatabase = new Dictionary<string, List<UITrigger>>(); } return m_buttonLongClicksTriggerDatabase; } }
        /// <summary>
        /// Internal list used as a data container whenever the system needs a list of UITriggers.
        /// </summary>


        /// <summary>
        /// Should this UITrigger execute its actions on game event? Default is false.
        /// </summary>
        public bool triggerOnGameEvent = false;
        /// <summary>
        /// If triggerOnGameEvent is true, this is the game event value that will make this UITrigger execute its actions.
        /// </summary>
        public string gameEvent = string.Empty;

        /// <summary>
        /// Should this UITrigger execute its actions on button click? Default is false.
        /// </summary>
        public bool triggerOnButtonClick = false;
        /// <summary>
        /// Should this UITrigger execute its actions on button double click? Default is false.
        /// </summary>
        public bool triggerOnButtonDoubleClick = false;
        /// <summary>
        /// Should this UITrigger execute its actions on button long click? Default is false.
        /// </summary>
        public bool triggerOnButtonLongClick = false;
        /// <summary>
        /// Used by the custom inspector to allow you to select a button name from the UIButtons Database.
        /// </summary>
        public string buttonCategory = DUI.UNCATEGORIZED_CATEGORY_NAME;
        /// <summary>
        /// If any of triggerOnButtonClick or triggerOnButtonDoubleClick or triggerOnButtonLongClick are true, this is the button name value that will make this UITrigger execute its actions.
        /// </summary>
        public string buttonName = DUI.DEFAULT_BUTTON_NAME;

        /// <summary>
        /// If dispatch all is set to true, game event and button name are set to a special value that make this UITrigger execute its actions on every game event or button click/double click/long click.
        /// </summary>
        public bool dispatchAll = false;

        /// <summary>
        /// Returns the type of event that this UITrigger is listening for.
        /// </summary>
        public DUI.EventType ListeningFor
        {
            get
            {
                if(triggerOnGameEvent) return DUI.EventType.GameEvent;
                if(triggerOnButtonClick) return DUI.EventType.ButtonClick;
                if(triggerOnButtonDoubleClick) return DUI.EventType.ButtonDoubleClick;
                if(triggerOnButtonLongClick) return DUI.EventType.ButtonLongClick;
                return DUI.EventType.GameEvent;
            }
        }

        /// <summary>
        /// Returns true if this UITrigger has proper settings set up and is operational.
        /// </summary>
        public bool Enabled
        {
            get
            {
                if(triggerOnGameEvent && (!string.IsNullOrEmpty(gameEvent) || dispatchAll)) { return true; }
                if(triggerOnButtonClick && (!string.IsNullOrEmpty(buttonName) || dispatchAll)) { return true; }
                if(triggerOnButtonDoubleClick && (!string.IsNullOrEmpty(buttonName) || dispatchAll)) { return true; }
                if(triggerOnButtonLongClick && (!string.IsNullOrEmpty(buttonName) || dispatchAll)) { return true; }
                return false;
            }
        }

        /// <summary>
        /// List of game events that are sent by the UITrigger when it executes its actions.
        /// </summary>
        public List<string> gameEvents;

        /// <summary>
        /// UnityEvent invoked when the UITrigger has been triggered.
        /// </summary>
        public TriggerEvent onTriggerEvent = new TriggerEvent();

        private void OnEnable()
        {
            RegisterToUIManager();
        }

        private void OnDisable()
        {
            UnregisterFromUIManager();
        }

        private void OnDestroy()
        {
            UnregisterFromUIManager();
        }

        /// <summary>
        /// Registers this UITrigger to the UIManager.
        /// </summary>
        protected void RegisterToUIManager()
        {
            if(triggerOnGameEvent)
            {
                if(dispatchAll) { gameEvent = DUI.DISPATCH_ALL; }
                if(string.IsNullOrEmpty(gameEvent))
                {
                    Debug.Log("[DoozyUI] The UITrigger on the '" + gameObject.name + "]'gameObject is disabled. It will not trigger anything because you didn't set a Game Event for it to listen for.");
                    return;
                }
                if(UIManager.GameEventsTriggerDatabase.ContainsKey(gameEvent))
                {
                    UIManager.GameEventsTriggerDatabase[gameEvent].Add(this);
                }
                else
                {
                    UIManager.GameEventsTriggerDatabase.Add(gameEvent, new List<UITrigger>() { this });
                }
                return;
            }

            if(dispatchAll) { buttonName = DUI.DISPATCH_ALL; }
            if(string.IsNullOrEmpty(buttonName))
            {
                Debug.Log("[DoozyUI] The UI Trigger on the '" + gameObject.name + "' gameObject is disabled. It will not trigger anything because you didn't set a Button Name for it to listen for.");
                return;
            }

            if(triggerOnButtonClick)
            {
                if(UIManager.ButtonClicksTriggerDatabase.ContainsKey(buttonName))
                {
                    UIManager.ButtonClicksTriggerDatabase[buttonName].Add(this);
                }
                else
                {
                    UIManager.ButtonClicksTriggerDatabase.Add(buttonName, new List<UITrigger>() { this });
                }
                return;
            }

            if(triggerOnButtonDoubleClick)
            {
                if(UIManager.ButtonDoubleClicksTriggerDatabase.ContainsKey(buttonName))
                {
                    UIManager.ButtonDoubleClicksTriggerDatabase[buttonName].Add(this);
                }
                else
                {
                    UIManager.ButtonDoubleClicksTriggerDatabase.Add(buttonName, new List<UITrigger>() { this });
                }
                return;
            }

            if(triggerOnButtonLongClick)
            {
                if(UIManager.ButtonLongClicksTriggerRegistry.ContainsKey(buttonName))
                {
                    UIManager.ButtonLongClicksTriggerRegistry[buttonName].Add(this);
                }
                else
                {
                    UIManager.ButtonLongClicksTriggerRegistry.Add(buttonName, new List<UITrigger>() { this });
                }
                return;
            }

            Debug.Log("[UITrigger] The UITrigger on the '" + gameObject.name + "' gameObject is disabled. It will not trigger anything because you didn't select if the trigger should listen for game events or button clicks.");
        }

        /// <summary>
        /// Unregisters this UITrigger from the UIManager.
        /// </summary>
        protected void UnregisterFromUIManager()
        {
            if(triggerOnGameEvent)
            {
                if(UIManager.GameEventsTriggerDatabase == null) { return; }
                if(UIManager.GameEventsTriggerDatabase.ContainsKey(gameEvent))
                {
                    UIManager.GameEventsTriggerDatabase[gameEvent].Remove(this);
                    if(UIManager.GameEventsTriggerDatabase[gameEvent].Count == 0)
                    {
                        UIManager.GameEventsTriggerDatabase.Remove(gameEvent);
                    }
                }
                return;
            }

            if(triggerOnButtonClick)
            {
                if(UIManager.ButtonClicksTriggerDatabase == null) { return; }
                if(UIManager.ButtonClicksTriggerDatabase.ContainsKey(buttonName))
                {
                    UIManager.ButtonClicksTriggerDatabase[buttonName].Remove(this);
                    if(UIManager.ButtonClicksTriggerDatabase[buttonName].Count == 0)
                    {
                        UIManager.ButtonClicksTriggerDatabase.Remove(buttonName);
                    }
                }
                return;
            }

            if(triggerOnButtonDoubleClick)
            {
                if(UIManager.ButtonDoubleClicksTriggerDatabase == null) { return; }
                if(UIManager.ButtonDoubleClicksTriggerDatabase.ContainsKey(buttonName))
                {
                    UIManager.ButtonDoubleClicksTriggerDatabase[buttonName].Remove(this);
                    if(UIManager.ButtonDoubleClicksTriggerDatabase[buttonName].Count == 0)
                    {
                        UIManager.ButtonDoubleClicksTriggerDatabase.Remove(buttonName);
                    }
                }
                return;
            }

            if(triggerOnButtonLongClick)
            {
                if(UIManager.ButtonLongClicksTriggerRegistry == null) { return; }
                if(UIManager.ButtonLongClicksTriggerRegistry.ContainsKey(buttonName))
                {
                    UIManager.ButtonLongClicksTriggerRegistry[buttonName].Remove(this);
                    if(UIManager.ButtonLongClicksTriggerRegistry[buttonName].Count == 0)
                    {
                        UIManager.ButtonLongClicksTriggerRegistry.Remove(buttonName);
                    }
                }
                return;
            }
        }

        /// <summary>
        /// Triggers the UITrigger to execute its actions.
        /// </summary>
        public void TriggerTheTrigger(string triggerValue)
        {
            if(triggerOnGameEvent)
            {
                if(gameEvent.Equals(triggerValue) || dispatchAll)
                {
                    onTriggerEvent.Invoke(triggerValue);

                    if(gameEvents != null && gameEvents.Count > 0)
                    {
                        StartCoroutine(SendGameEventsInTheNextFrame());
                    }
                }
            }
            else if(triggerOnButtonClick || triggerOnButtonDoubleClick || triggerOnButtonLongClick)
            {
                if(buttonName.Equals(triggerValue) || dispatchAll)
                {
                    onTriggerEvent.Invoke(triggerValue);

                    if(gameEvents != null && gameEvents.Count > 0)
                    {
                        StartCoroutine(SendGameEventsInTheNextFrame());
                    }
                }
            }
        }

        IEnumerator SendGameEventsInTheNextFrame()
        {
            yield return null;
            UIManager.SendGameEvents(gameEvents);
        }

        #region STATIC METHODS
        /// <summary>
        /// Returns a list of all the UITriggers that are linked to the given triggerValue and of the given triggerType.
        /// </summary>
        /// <param name="triggerValue">This can be either a game event or a button name or the special DUI.DISPATCH_ALL value.</param>
        /// <param name="triggerType">Depending on the triggerType, this method will search in a different registry.</param>
        public static List<UITrigger> GetUITriggers(string triggerValue, DUI.EventType triggerType)
        {
            switch(triggerType)
            {
                case DUI.EventType.GameEvent:
                    if(GameEventsTriggerDatabase == null || GameEventsTriggerDatabase.Count == 0) { return new List<UITrigger>(); }
                    if(GameEventsTriggerDatabase.ContainsKey(triggerValue)) { return new List<UITrigger>(GameEventsTriggerDatabase[triggerValue]); }
                    if(GameEventsTriggerDatabase.ContainsKey(DUI.DISPATCH_ALL)) { return new List<UITrigger>(GameEventsTriggerDatabase[DUI.DISPATCH_ALL]); }
                    break;

                case DUI.EventType.ButtonClick:
                    if(ButtonClicksTriggerDatabase == null || ButtonClicksTriggerDatabase.Count == 0) { return new List<UITrigger>(); }
                    if(ButtonClicksTriggerDatabase.ContainsKey(triggerValue)) { return new List<UITrigger>(ButtonClicksTriggerDatabase[triggerValue]); }
                    if(ButtonClicksTriggerDatabase.ContainsKey(DUI.DISPATCH_ALL)) { return new List<UITrigger>(ButtonClicksTriggerDatabase[DUI.DISPATCH_ALL]); }
                    break;

                case DUI.EventType.ButtonDoubleClick:
                    if(ButtonDoubleClicksTriggerDatabase == null || ButtonDoubleClicksTriggerDatabase.Count == 0) { return new List<UITrigger>(); }
                    if(ButtonDoubleClicksTriggerDatabase.ContainsKey(triggerValue)) { return new List<UITrigger>(ButtonDoubleClicksTriggerDatabase[triggerValue]); }
                    if(ButtonDoubleClicksTriggerDatabase.ContainsKey(DUI.DISPATCH_ALL)) { return new List<UITrigger>(ButtonDoubleClicksTriggerDatabase[DUI.DISPATCH_ALL]); }
                    break;

                case DUI.EventType.ButtonLongClick:
                    if(ButtonLongClicksTriggerDatabase == null || ButtonLongClicksTriggerDatabase.Count == 0) { return new List<UITrigger>(); }
                    if(ButtonLongClicksTriggerDatabase.ContainsKey(triggerValue)) { return new List<UITrigger>(ButtonLongClicksTriggerDatabase[triggerValue]); }
                    if(ButtonLongClicksTriggerDatabase.ContainsKey(DUI.DISPATCH_ALL)) { return new List<UITrigger>(ButtonLongClicksTriggerDatabase[DUI.DISPATCH_ALL]); }
                    break;
            }
            return new List<UITrigger>();
        }
        #endregion
    }
}
