using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RenderHeads.Media.AVProVideo;
using UnityEngine.SceneManagement;

public class skipCG : MonoBehaviour
{
    public MediaPlayer mp;
    // Start is called before the first frame update
    void Start()
    {
        mp.Events.AddListener(OnVideoEvent);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) || Input.touchCount >= 1)
            {
            SceneManager.LoadScene("level0");
            }   
    }

    // Callback function to handle events
    public void OnVideoEvent(MediaPlayer mp, MediaPlayerEvent.EventType et, ErrorCode
    errorCode)
    {
        if(et == MediaPlayerEvent.EventType.FinishedPlaying)
        {
            SceneManager.LoadScene("level0");
        }
    }
}
