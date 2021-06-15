using System.Diagnostics;
using System.Collections;
using System.Collections.Generic;
using NatSuite.Sharing;
using UI.Pagination;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.Video;


public class ViewController : MonoBehaviour
{

    // Master singleton controller
    // Handles all the views, current state, etc

    public static ViewController instance;

    bool justStarted = true; // Just started, so don't try to fade in actor at start

    public enum ApplicationState { Init, CaptureView }; // Current mode

    public ApplicationState currentState = ApplicationState.Init; // Start off initialized

    public Transform shadowCastingLight;
    public string previewPath;

    public static bool settingsActive = false;

    void Start()
    {
        ActorController.instance.SetPlaceMode(true);
        Screen.orientation = ScreenOrientation.AutoRotation;
    }

    public void Awake()
    {
        instance = this;
        GetAuthorization();
    }

    public void SetLightDirection()
    {
        shadowCastingLight.transform.rotation = Camera.main.transform.rotation;
    }

    public void ShowVideoPreview(string path)
    {
       UnityEngine.Debug.Log("Video recorded at " + path);
    }

    void GetAuthorization()
    {
        if (!Application.HasUserAuthorization(UserAuthorization.WebCam))
        {
            Application.RequestUserAuthorization(UserAuthorization.WebCam);

        }
    }

}
