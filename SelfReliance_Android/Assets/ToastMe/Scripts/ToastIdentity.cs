using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ToastMe
{
    /// <summary>
    /// Utility class used to store the relationship between a toast Type and
    /// the prefab used when displaying this type of toast. 
    /// </summary>
    [System.Serializable]
    public class ToastIdentity
    {
        public string Type;

        public ToastInfo Toast;
    }
}