using System;
using UnityEngine;
using System.Collections;
using RenderHeads.Media.AVProVideo;
using UnityEngine.UI;

public class eroOS : MonoBehaviour
{
    [Serializable]
    public class Clip
    {
        public GameObject choice;
        public string[] PlayList;
        public bool Ending;
        public bool isImportant;
        public bool isNotImportant;
        public bool isCorrect;
    }

    public MediaPlayer mp;
    public Clip[] clips;
    public Text scoreTextArea;
    public Text AchievementArea;
    private Clip selectedClip;
    private int saveNum;
    private int currentPlayNum;

    public void Start()
    {
        mp.Events.AddListener(OnVideoEvent);
        saveNum = 0;
        InitClip();
    }

    public void InitClip()
    {
        Debug.LogWarning(saveNum);
        selectedClip = clips[saveNum];
        currentPlayNum = 0; //set playlist count to 0 (initialization)
        playVideo(selectedClip.PlayList[currentPlayNum]); //grab video playlist sequences under [saveNum] and play
    }

    private void playVideo(string selectedUrl)
    {
        mp.OpenVideoFromFile(MediaPlayer.FileLocation.AbsolutePathOrURL, selectedUrl, true);
    }

    public void showChoice()
    {
        currentPlayNum += 1;
        if (currentPlayNum < selectedClip.PlayList.Length)
        {
            playVideo(clips[saveNum].PlayList[currentPlayNum]);
        }
        else if (selectedClip.Ending)
        {
            GameOver();
        }
        else
        {
            selectedClip.choice.SetActive(true); //set choice active
        }
    }

    public void OnVideoEvent(MediaPlayer mp, MediaPlayerEvent.EventType et, ErrorCode errorCode)
    {
        if (et == MediaPlayerEvent.EventType.FinishedPlaying)
        {
            Debug.Log("Finished Playing");
            showChoice();
        }
    }

    public void choose(int Num)
    {
        saveNum = Num;
        InitClip();
    }

    public void SkipVideo()
    {
        mp.Pause();
        showChoice();
    }

    private void GameOver()
    {
        scoreTextArea.text = FundamentalCalc().ToString();
        AchievementArea.text = "Placeholder";
        
        DoozyUI.UIManager.ShowUiElement("EndGameMenu","SelfReliance");
    }

    private double FundamentalCalc()
    {
        int x = 0;
        int y = 0;
        int z = 0;
        int correctX = 0;
        int correctY = 0;
        int correctZ = 0;

        for (int i = 0; i < clips.Length; i++)
        {
            if (clips[i].isImportant)
            {
                x += 1;
            }
            else if (clips[i].isNotImportant)
            {
                y += 1;
            }
            else
            {
                z += 1;
            }
        }

        double k = 100 / (1.25 * x + 0.75 * y + z);

        for (int i = 0; i < clips.Length; i++)
        {
            if (clips[i].isImportant && clips[i].isCorrect)
            {
                correctX += 1;
            }
            else if (clips[i].isNotImportant && clips[i].isCorrect)
            {
                correctY += 1;
            }
            else if(clips[i].isCorrect)
            {
                correctZ += 1;
            }
        }

        return correctX * k + 1.25 * correctY * k + 0.75 * correctZ * k;
    }
}