using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
public class VideoPlayerURP : MonoBehaviour
{
    // Start is called before the first frame update
    public VideoPlayer videoPlayer;
    public Slider slider;

    private void Start()
    {
        slider.maxValue = (float) videoPlayer.length;
    }

    public void OnClickPlayButton() {
        if(videoPlayer.isPlaying)
        {
            videoPlayer.Pause();
        }
        else
        {
            videoPlayer.Play();
        }
    }

    private void Update()
    {
        slider.value = (float)videoPlayer.time;
    }

    public void setTimeOfVideo()
    {
        videoPlayer.time = slider.value;
    }
}
