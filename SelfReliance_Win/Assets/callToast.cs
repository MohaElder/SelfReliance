using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ToastMe;

public class callToast : MonoBehaviour
{
    private ToastInfo _toastInstance;
    public void showInfoToast(string message)
    {
            _toastInstance = Toast.Pop("Info",message,"Self Reliance");
    }

    public void showSuccessToast(string message)
    {
            _toastInstance = Toast.Pop("Success", message, "Self Reliance");
    }

    public void showFailToast(string message)
    {
            _toastInstance = Toast.Pop("Fail", message, "Self Reliance");
    }
}
