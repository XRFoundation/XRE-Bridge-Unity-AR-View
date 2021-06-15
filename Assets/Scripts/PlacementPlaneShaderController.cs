using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementPlaneShaderController : MonoBehaviour {

    public static List<PlacementPlaneShaderController> placementPlanes;

    LineRenderer lineRenderer;

    Renderer thisRenderer;

    public bool isGroundPlane = false;


    public static float pulseMin = 0.0f;
    public static float pulseMaxGround = 3.0f;
    public static float pulseMaxSurface = .5f;

    public static float speed = 2.0f;
    float counter = 0f;
    float fadeOutWaitTime = 1f;
    float fadeTime = .5f;
    float timeOffset = 0;
    bool coroutineIsRunning = false;

    bool isPlacementMaterial = false;

    void Start()
    {
        thisRenderer = GetComponent<Renderer>();
        lineRenderer = GetComponent<LineRenderer>();
        if (lineRenderer != null) lineRenderer.enabled = false;
    }

    public void ToggleOcclusion(){
        if(ActorController.instance.GetPlaceMode() == false){
            SetMaterialToCameraView();
        }
    }

    public void SetMaterialToPlaceView()
    {
        if (isGroundPlane)
            thisRenderer.sharedMaterial = PlacementMaterialManager.instance.placementMatGround;

        else
            thisRenderer.sharedMaterial = PlacementMaterialManager.instance.placementMat;

    }

    public void SetMaterialToCameraView()
    {
        if (ActorController.instance.occlusionOn && !isGroundPlane)
            thisRenderer.sharedMaterial = PlacementMaterialManager.instance.occlusionMat;
        else
            thisRenderer.sharedMaterial = PlacementMaterialManager.instance.shadowMat;
    }



    void LateUpdate()
    {
        if (!isGroundPlane)
        {
            if (lineRenderer == null) lineRenderer = GetComponent<LineRenderer>();

            if(ActorController.instance.GetPlaceMode()){
            
                if (lineRenderer != null) lineRenderer.enabled = true;
            
            } else {
                if (lineRenderer != null) lineRenderer.enabled = false;
            }
            SetPosition(ActorController.instance.GetAnchorPosition());

        }

    }

    IEnumerator FadeOut(){
        if(ActorController.instance.GetPlaceMode()){
            yield break;
        }
        coroutineIsRunning = true;
        // float alpha = thisRenderer.sharedMaterial.GetFloat("_Alpha");
        // float timer = 0f;
        // while(timer < fadeTime){
        //     timer += Time.deltaTime;
        //     thisRenderer.sharedMaterial.SetFloat("_Alpha", Mathf.Lerp(alpha, 0f, timer / fadeTime));
        //     yield return null;

        // }
        // thisRenderer.sharedMaterial.SetFloat("_Alpha", 0);
       // thisRenderer.sharedMaterial = ARPlaneVisualizer.instance.shadowMaterial;
        coroutineIsRunning = false;
    }

    // Set a pulse on a sin

    public void Show(){
        timeOffset = Time.time;
      //  thisRenderer.sharedMaterial = ARPlaneVisualizer.instance.placementMaterial;
        if (!ActorController.instance.GetPlaceMode())
        {
            thisRenderer.sharedMaterial.SetFloat("_Alpha", 1f);
        }
        if(coroutineIsRunning){
            StopAllCoroutines();
        }
    }

    public void Hide(){
        if (!coroutineIsRunning)
        {
            StartCoroutine(FadeOut());
        }

        Debug.Log("Hide called!");

       // thisRenderer.sharedMaterial.SetInt("_Visibility", 0);
     //   thisRenderer.sharedMaterial = ARPlaneVisualizer.instance.shadowMaterial;

    }

    void SetPosition(Vector3 pos){
        thisRenderer.sharedMaterial.SetFloat("_PositionX", pos.x);
        thisRenderer.sharedMaterial.SetFloat("_PositionZ", pos.z);

    }

     void OnEnable()
    {
        if (placementPlanes == null)
        {
            placementPlanes = new List<PlacementPlaneShaderController>();
        }

        thisRenderer = GetComponent<Renderer>();
        placementPlanes.Add(this);

        ActorController.instance.PlaceModeSet.AddListener(Show);
        ActorController.instance.PlaceModeUnset.AddListener(Hide);

        ActorController.instance.PlaceModeSet.AddListener(SetMaterialToPlaceView);
        ActorController.instance.PlaceModeUnset.AddListener(SetMaterialToCameraView);


        if(ActorController.instance.GetPlaceMode()){
            SetMaterialToPlaceView();
        } else {
            SetMaterialToCameraView();
        }

    }

    void OnDisable()
    {
        placementPlanes.Remove(this);
        ActorController.instance.PlaceModeSet.RemoveListener(Show);
        ActorController.instance.PlaceModeUnset.RemoveListener(Hide);

        ActorController.instance.PlaceModeSet.RemoveListener(SetMaterialToPlaceView);
        ActorController.instance.PlaceModeUnset.RemoveListener(SetMaterialToCameraView);

    }

    void Update()
    {
        if(ActorController.instance.GetPlaceMode()){
            float maxDist = 0;
            if(isGroundPlane){
                 maxDist = Mathf.Lerp(pulseMin, pulseMaxGround, Mathf.Abs(Mathf.Sin(Time.time - timeOffset * speed)));

            } else {
                 maxDist = Mathf.Lerp(pulseMin, pulseMaxSurface, Mathf.Abs(Mathf.Sin(Time.time - timeOffset * speed)));

            }

            thisRenderer.sharedMaterial.SetFloat("_MaxDistance", maxDist);

        }
    }
}
