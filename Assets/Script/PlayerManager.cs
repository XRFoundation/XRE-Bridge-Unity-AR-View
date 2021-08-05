using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerManager : MonoBehaviour
{
    private bool _isPlaying = false;
    public AudioSource audioSource;
    public Slider slider;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void LateUpdate()
    {
        slider.SetValueWithoutNotify(audioSource.time /audioSource.clip.length);
    }

    public void SilderSeek(Single sliderValue)
    {
        audioSource.time = audioSource.clip.length * sliderValue;
        
        if(_isPlaying)
            audioSource.Play();
    }

    public void PlayAudio()
    {
        audioSource.Play();
        _isPlaying = true;
    }

    public void PauseAudio()
    {
        audioSource.Pause();
        _isPlaying = false;
    }
}
