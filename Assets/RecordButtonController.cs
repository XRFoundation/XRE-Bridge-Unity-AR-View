using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using NatSuite.Recorders;
using NatSuite.Examples;

[RequireComponent(typeof(EventTrigger))]
public class RecordButtonController : MonoBehaviour
{

    public ScreenOrientation screenOrientationAtStartOfRecording;

    public static RecordButtonController instance;

    public Color buttonRecordColor;
    public Color buttonStartColor;

    public Image[] buttons;
    public bool isPressed;

    public float fadeTime = .5f;

    void Awake()
    {
        instance = this;

    }



    public void HideRecordButton()
    {
        foreach (Image button in buttons)
        {
            if (button.gameObject.activeSelf && button.enabled)
            {
                StartCoroutine(FadeOutAndHide(button));
            }
        }
    }

    public void ShowRecordButton()
    {
        foreach (Image button in buttons)
        {
            if (button.gameObject.activeSelf && !button.enabled)
            {
                StartCoroutine(ShowAndFadeIn(button));
            }
        }
    }

    IEnumerator FadeOutAndHide(Image button)
    {

        yield return StartCoroutine(FadeToColor(button, button.color, new Color(0, 0, 0, 0)));

        button.enabled = false;


    }

    IEnumerator ShowAndFadeIn(Image button)
    {

        button.enabled = true;
        yield return StartCoroutine(FadeToColor(button, button.color, buttonStartColor));

    }

    IEnumerator FadeToColor(Image button, Color startColor, Color endColor)
    {

        float t = 0f;
        while (t < fadeTime)
        {
            t += Time.deltaTime;

            button.color = Color.Lerp(startColor, endColor, t / fadeTime);
            yield return null;

        }

        button.color = endColor;

    }

    void Reset()
    {
        foreach (Image button in buttons)
        {

            StartCoroutine(FadeToColor(button, button.color, buttonStartColor));
            isPressed = false;
        }
    }

    void Start()
    {
        screenOrientationAtStartOfRecording = Screen.orientation;
    }




    public void ToggleRecord()
    {
        Debug.Log("ToggleRecord");
        if (isPressed) StopRecording();
        else
        {
            StartRecording();
        }
    }

    void StopRecording()
    {
        isPressed = false;
        foreach (Image button in buttons)
        {
            StartCoroutine(FadeToColor(button, button.color, buttonStartColor));
        }
        ReplayCam.instance.StopRecording();
    }


    void StartRecording()
    {

        screenOrientationAtStartOfRecording = Screen.orientation;

        // Lock orientation

        if (Input.deviceOrientation == DeviceOrientation.LandscapeLeft)
        {
            Screen.orientation = ScreenOrientation.LandscapeLeft;
        }
        else if (Input.deviceOrientation == DeviceOrientation.LandscapeRight)
        {
            Screen.orientation = ScreenOrientation.LandscapeRight;
        }
        else if (Input.deviceOrientation == DeviceOrientation.Portrait)
        {
            Screen.orientation = ScreenOrientation.Portrait;

        }
        else if (Input.deviceOrientation == DeviceOrientation.PortraitUpsideDown)
        {
            Screen.orientation = ScreenOrientation.PortraitUpsideDown;

        }

        isPressed = true;


        if (ActorController.instance.actor != null && ActorController.instance.actor.isPlaying() == false)
        {
            isPressed = false;
            Debug.Log("ActorController.instance.actor.IsPlaying == false");
            return;

        }

        if (Input.deviceOrientation == DeviceOrientation.Portrait)
        {
            //   TutorialController.instance.Show_TryWalkingAroundImage();
        }
        ReplayCam.instance.StartRecording();
        foreach (Image button in buttons)
        {

            StartCoroutine(FadeToColor(button, button.color, buttonRecordColor));
        }
    }
}