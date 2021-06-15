using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Rendering;
using UnityEngine.Events;


public class ActorController : MonoBehaviour
{
    bool placeMode = false;

    public static ActorController instance;

    [SerializeField]
    GameObject anchor;

    public bool isPlaced;

    public Material actorMaterial;
    public Renderer groundPlaneRenderer;

    public bool shadowCastingOn = false; // Set quality settings at start
    public bool occlusionOn = false; // Set quality settings at start

    public Transform actorTransformParent;

    [HideInInspector]
    public bool actorHasPlacementPerformance = false;

    public float actorFadeTime = .5f;

    public float actorScaleInitialMaxOnSurface = .5f; // 3 meters
    public float anchorScaleMax = 5f;
    public float anchorScaleMin = .1f;
    float actorScale = 1.0f;

      ///  [HideInInspector]
    public ActorObjectController actor;
      //  [HideInInspector]
    public ActorObjectController actorPlacement;

    ActorUIController m_actorUIController;

    public UnityEvent PlaceModeSet;
    public UnityEvent PlaceModeUnset;

    public void SetPlaceMode(bool mode){
        return;
        placeMode = mode;

        if(placeMode){
            PlaceModeSet.Invoke();
        } else {
            PlaceModeUnset.Invoke();
        }

    }

    public bool GetPlaceMode(){
        return placeMode;
    }

    void Awake()
    {
        instance = this;

        if (PlaceModeSet == null) PlaceModeSet = new UnityEvent();
        if (PlaceModeUnset == null) PlaceModeUnset = new UnityEvent();
    }

    void Start()
    {
        GraphicsSettings.lightsUseLinearIntensity = true;
        GraphicsSettings.lightsUseColorTemperature = true;

        if (shadowCastingOn)
        {
            QualitySettings.shadows = ShadowQuality.All;
        }
        else
        {
            QualitySettings.shadows = ShadowQuality.Disable;

        }
    }

    public Vector3 GetAnchorPosition(){
        return anchor.transform.position;
    }

    public void SetAnchorPosition(Vector3 pos){
        anchor.transform.position = pos;
    }

    public void SetActor(ActorUIController actorObjectController)
    {


        if (m_actorUIController != null)
        {
            m_actorUIController.HideActor();
        }
        m_actorUIController = actorObjectController;
        m_actorUIController.ShowActor();

    }

    public void ResetAnchor(){
        actorScale = 1.0f;
        ScaleAnchor(0);
    }

    public void ScaleAnchor(float val)
    {
        actorScale = Mathf.Clamp(actorScale + (actorScale * val), anchorScaleMin, anchorScaleMax);

            anchor.transform.localScale = Vector3.one * actorScale;

    }


    public void ClampAnchorForSurface()
    {

        actorScale = Mathf.Clamp(actorScale, 0, actorScaleInitialMaxOnSurface);

        anchor.transform.localScale = Vector3.one * actorScale;

    }

    public void RotateActorTowardCamera()
    {
        anchor.transform.LookAt(Camera.main.transform);
        Vector3 rot = new Vector3(0, anchor.transform.eulerAngles.y, 0);
        anchor.transform.eulerAngles = rot;
    }
}
