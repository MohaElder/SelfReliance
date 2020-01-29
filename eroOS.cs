using System;
using UnityEngine;
using System.Collections;
using RenderHeads.Media.AVProVideo;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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
        private bool isCorrect = false;
        private bool isAnswered;

        public void SetCorrect(bool choice)
        {
            isCorrect = choice;
        }

        public void SetAnswered(bool answer)
        {
            isAnswered = answer;
        }

        public bool Correct()
        {
            return isCorrect;
        }

        public bool Answered()
        {
            return isAnswered;
        }
    }

    public MediaPlayer mp;
    public Clip[] clips;
    public string SuperText;
    public string StandardText;
    public string FailedText;
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

    private void InitClip()
    {
        selectedClip = clips[saveNum];
        currentPlayNum = 0; //set playlist count to 0 (initialization)
        playVideo(selectedClip.PlayList[currentPlayNum]); //grab video playlist sequences under [saveNum] and play
    }

    private void playVideo(string selectedUrl)
    {
        mp.OpenVideoFromFile(MediaPlayer.FileLocation.AbsolutePathOrURL, selectedUrl, true);
    }

    private void showChoice()
    {
        currentPlayNum += 1;
        if (currentPlayNum < selectedClip.PlayList.Length)
        {playVideo(clips[saveNum].PlayList[currentPlayNum]);}
        else if (selectedClip.Ending){GameOver();}
        else{selectedClip.choice.SetActive(true);} //set choice active
    }

    public void SkipVideo()
    {
        mp.Pause();
        showChoice();
    }

    public void PauseVideo()
    {
        mp.Pause();
    }

    public void ResumeVideo()
    {
        mp.Play();
    }

    private void OnVideoEvent(MediaPlayer mp, MediaPlayerEvent.EventType et, ErrorCode errorCode)
    {
        if (et == MediaPlayerEvent.EventType.FinishedPlaying)
        {
            Debug.Log("Finished Playing");
            showChoice();
        }
    }

    public void ChooseRightAnswer(int Num)
    {
        saveNum = Num;
        selectedClip.SetAnswered(true);
        selectedClip.SetCorrect(true);
        InitClip();
    }

    public void ChooseWrongAnswer(int Num)
    {
        saveNum = Num;
        selectedClip.SetAnswered(true);
        selectedClip.SetCorrect(false);
        InitClip();
    }

    private void GameOver()
    {
        double score = FundamentalCalc();
        string achievementText;
        if(score >= 70)
        {achievementText = SuperText;}
        else if(score > 50 && score < 70)
        {achievementText = StandardText;}
        else{achievementText = FailedText;}
        scoreTextArea.text = score.ToString("0.00") + "%";
        AchievementArea.text = achievementText;
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
        double k;
        for (int i = 0; i < clips.Length; i++)
        {
            if (clips[i].Answered())
            {
                if (clips[i].isImportant)
                {
                    x += 1;
                    if (clips[i].Correct())
                    {
                        correctX += 1;
                    }
                }
                else if (clips[i].isNotImportant)
                {
                    y += 1;
                    if (clips[i].Correct())
                    {
                        correctY += 1;
                    }
                }
                else
                {   
                    z += 1;
                    if (clips[i].Correct())
                    {
                        correctZ += 1;
                    }
                }
            }
        }
        k = 100 / (1.25 * x + 0.75 * y + z);
        if (x + y + z == 1)
        {return (correctX + correctY + correctZ) * 100;}
        else {return 1.25 * correctX * k + 0.75 * correctY * k + correctZ * k;}
    }

    public void Reload()
    {
        Scene activeScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(activeScene.name);
    }
}