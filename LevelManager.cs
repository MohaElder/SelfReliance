using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class LevelManager : MonoBehaviour
{

    public string CreditListLevelName;
    public string MainMenuLevelName;
    public AudioSource BGM;

    public void LoadCreditList()
    {
        SceneManager.LoadScene(CreditListLevelName);
    }

    public void LoadMainMenu()
    {
        SceneManager.LoadScene(MainMenuLevelName);
    }

    public void LoadLevel(string levelname)
    {
        SceneManager.LoadScene(levelname);
    }
    public void ToggleBGM()
    {
        BGM.mute = !BGM.mute;
    }
    public void QuitGame()
    {
        Application.Quit();
    }
}
