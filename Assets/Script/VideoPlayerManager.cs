using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class VideoPlayerManager : MonoBehaviour
{
    public static string VideoPath = "";
    public static int VideoWidth = 0;
    public static int VideoHeight = 0;
    
    public VideoPlayer VideoPlayer;
	public RawImage VideoDisplay;
	public Image _ButtonImage;
    public Sprite _play, _pause;

    private void OnEnable()
    {
        if (String.IsNullOrEmpty(VideoPath))
            return;
        if(VideoWidth == 0 || VideoHeight == 0)
            return;
        
        
        VideoPlayer.url = VideoPath;
        var texture = new RenderTexture(VideoWidth, VideoHeight, 24);
        VideoDisplay.texture = texture;
        VideoPlayer.targetTexture = texture;
        VideoPlayer.Play();

    }

    private void OnDisable()
    {
        VideoPath = "";
        VideoPlayer.Stop();
    }

    public void Resume_PauseVideo()
    {
		if (VideoPlayer.isPaused)
		{
			VideoPlayer.Play();
            _ButtonImage.sprite = _pause;
        }
		else
		{
            VideoPlayer.Pause();
            _ButtonImage.sprite = _play;
        }
          
    }

}
