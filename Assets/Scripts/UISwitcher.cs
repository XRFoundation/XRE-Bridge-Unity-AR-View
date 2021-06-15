using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UISwitcher : MonoBehaviour
{

    public RectTransform recordButton;
    public RectTransform menuButton;

    public RectTransform recordButtonLandscape;
    public RectTransform menuButtonLandscape;
    public RectTransform settingsButtonLandscape;

        ScreenOrientation lastOrientation;

    void Start()
    {
        lastOrientation = Screen.orientation;

        ToggleOrientation();

    }


    void SetToPortraitOrientation()
    {

        recordButton.gameObject.SetActive(true);
        menuButton.gameObject.SetActive(true);

        recordButtonLandscape.gameObject.SetActive(false);
        menuButtonLandscape.gameObject.SetActive(false);

    }

    void SetToLandscapeOrientation()
    {
        recordButton.gameObject.SetActive(false);
        menuButton.gameObject.SetActive(false);

        recordButtonLandscape.gameObject.SetActive(true);
        menuButtonLandscape.gameObject.SetActive(true);

    }

    void ToggleOrientation(){
        if (Screen.orientation == ScreenOrientation.Portrait)
        {
            SetToPortraitOrientation();
        }
        else if (Screen.orientation == ScreenOrientation.LandscapeLeft || Screen.orientation == ScreenOrientation.LandscapeRight)
        {
            SetToLandscapeOrientation();
        }
    }

    // Update is called once per frame
    void Update()
    {

            if (Screen.orientation != lastOrientation)
            {
                lastOrientation = Screen.orientation;

            ToggleOrientation();


            }
        }

}
