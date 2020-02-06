using System.Collections;
using System.Collections.Generic;
using TMPro;
using ToastMe;
using UnityEngine;
using UnityEngine.UI;

public class DisconnectedController : MonoBehaviour
{
    private const string HideMsg = "Hide Controller";
    
    private const string ShowMsg = "Show Controller";

    private const string ToastType = "Disconnected"; 
    
    private bool _isVisible;
    
    private TextMeshProUGUI _lblType;

    private ToastInfo _toastInstance;   

    private void Awake()
    {        
        _lblType = GetComponentInChildren<TextMeshProUGUI>();        
    }

    private void FixedUpdate()
    {
        _lblType.text = (_isVisible)
            ? HideMsg
            : ShowMsg;
    }

    public void Toggle()
    {
        var prevVisible = _isVisible;
        
        _isVisible = !_isVisible;

        if (!prevVisible && _toastInstance == null)
        {
            _toastInstance = Toast.Pop(ToastType);
            _toastInstance.Persist = true;
        }
        else
        {
            _toastInstance.Persist = false;
            _toastInstance = null;
        }
    }        
}
