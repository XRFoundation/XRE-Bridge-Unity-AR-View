using System.Diagnostics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Experimental.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine;
using UnityEngine.XR.ARSubsystems;

public class InputController : MonoBehaviour
{
    public static InputController instance;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    [SerializeField] ARRaycastManager raycastManager;
    
    enum SurfaceType
    {
        Surface,
        Ground
    };

    SurfaceType currentSurface;

    public RectTransform clickableArea;
    public RectTransform landscapeClickableArea;


    public bool usePinchToScale = true;
    public bool enableOneFingerDragToPlace = true;
    public bool enableTwoFingerLightControl = true;
    public bool allowActorRotation = false;
    public bool tapAnywhereToPlace = false;

    public Transform raycaster;

    public LayerMask arGroundLayer;

    public float groundPlaneClosenessMatchLimit = .3f; // Put our ground onto a plane if we find one close enough!

    public float rotateSensivity = .25f;

    public float scaleSensitivity = .025f;

    public float lightAdjustSensitivity = .025f;

    public float temperatureAdjustSensitivity = 25f;

    public float shadowStrengthScaleSensitivity = .1f;

    public Vector2 lightIntensityRange;
    public Vector2 colorTemperatureRange;

    RaycastHit hit;
    float oldAngle = 0;


    private void Awake()
    {
        instance = this;
    }

    void Update()
    {
        HandleInput();
        // UpdateCaptureView();
    }


    void HandleInput()
    {
        List<Touch> validTouches = new List<Touch>();


        for (int i = 0; i < Input.touchCount; i++)
        {
            // Use landscape clickable area if that's the mode we're in
            RectTransform area = (Screen.orientation == ScreenOrientation.Landscape)
                ? landscapeClickableArea
                : clickableArea;

            if (RectTransformUtility.RectangleContainsScreenPoint(area, Input.GetTouch(i).position))
            {
                validTouches.Add(Input.GetTouch(i));
                //  Debug.Log("Added " + Input.GetTouch(i));
            }
        }

        if (validTouches.Count < 1 && !Input.GetMouseButton(0))
        {
            return;
        }

        else if (validTouches.Count == 2)
        {
            if (usePinchToScale)
            {
                // Scale with two fingers

                // Find the position in the previous frame of each touch.
                Vector2 touchZeroPrevPos = validTouches[0].position - validTouches[0].deltaPosition;
                Vector2 touchOnePrevPos = validTouches[1].position - validTouches[1].deltaPosition;

                // Find the magnitude of the vector (the distance) between the touches in each frame.
                float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
                float touchDeltaMag = (validTouches[0].position - validTouches[1].position).magnitude;

                // Find the difference in the distances between each frame.
                float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;


                ActorController.instance.ScaleAnchor(deltaMagnitudeDiff * scaleSensitivity * -1f);
            }


            if (allowActorRotation)
            {
                var v2 = validTouches[0].position - validTouches[1].position;
                var newAngle = Mathf.Atan2(v2.y, v2.x);
                var deltaAngle = Mathf.DeltaAngle(newAngle, oldAngle);
                oldAngle = newAngle;
                ActorController.instance.actor.RotateActor(deltaAngle * rotateSensivity);
            }
        }

        else if (validTouches.Count == 1) // Handle single touch input
        {
            if (validTouches[0].phase == TouchPhase.Moved)
            {
                TryRaycastFromScreenPosition(Camera.main.ScreenPointToRay(validTouches[0].position));

                ActorController.instance.SetPlaceMode(true);
            }
            else if (validTouches[0].phase == TouchPhase.Ended)
            {
                ActorController.instance.SetPlaceMode(false);
            }
        }
        validTouches.Clear();

    }

    void HandleRaycastMissing()
    {
        ActorController.instance.SetPlaceMode(false);

        if (ActorController.instance.actor != null)
        {
            ActorController.instance.actor.GetComponent<MeshRenderer>().enabled = false;
        }

        if (ActorController.instance.actorPlacement != null &&
            ActorController.instance.actorPlacement.GetComponent<ActorObjectController>() != null && ActorController
                .instance.actorPlacement.GetComponent<ActorObjectController>().isPlaying())
        {
            ActorController.instance.actorPlacement.GetComponent<ActorObjectController>().Play(false);
        }
    }

    void HandleRaycastOnARPlane()
    {
        ActorController.instance.SetPlaceMode(true);


        if (currentSurface != SurfaceType.Surface)
        {
            currentSurface = SurfaceType.Surface;
            ActorController.instance.ClampAnchorForSurface();

            ActorController.instance.groundPlaneRenderer.enabled = false;

            var planes = ARController.instance.aRPlaneManager.trackables;

            foreach (ARPlane plane in planes)
                plane.gameObject.SetActive(true);
        }
    }

    void HandleRaycastOnGround()
    {
        ActorController.instance.SetPlaceMode(true);


        if (currentSurface != SurfaceType.Ground)
        {
            currentSurface = SurfaceType.Ground;
            ActorController.instance.ResetAnchor();
            ActorController.instance.groundPlaneRenderer.enabled = true;
        }

        var planes = ARController.instance.aRPlaneManager.trackables;

        foreach (ARPlane plane in planes)
            plane.gameObject.SetActive(false);
    }

    void TryRaycastFromScreenPosition(Ray ray)
    {
        if (raycastManager.Raycast(ray, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            UnityEngine.Debug.Log("raycastManager.Raycast");

            HandleRaycastHit(s_Hits[0].pose.position);

            HandleRaycastOnARPlane();
        }
        else if (Physics.Raycast(ray, out hit, 500, arGroundLayer) &&
                 hit.transform.gameObject.name.Contains("HitPlane"))
        {
            HandleRaycastHit(hit.point);
            HandleRaycastOnGround();
        }
        else
        {
                                    UnityEngine.Debug.Log("HandleRaycastMissing");

            HandleRaycastMissing();
        }
    }

    void TryRaycastFromCamera()
    {
        Ray ray = Camera.main.ViewportPointToRay(new Vector3(0.5F, 0.5F, 0));

        if (raycastManager.Raycast(ray, s_Hits, TrackableType.PlaneWithinPolygon))
        {
            HandleRaycastHit(s_Hits[0].pose.position);
            HandleRaycastOnARPlane();
        }
        else if (Physics.Raycast(raycaster.position, raycaster.forward, out hit, 500, arGroundLayer) &&
                 hit.transform.gameObject.name.Contains("HitPlane"))
        {
            HandleRaycastHit(hit.point);
            HandleRaycastOnGround();
        }
        else
        {
            HandleRaycastMissing();
        }
    }

    void HandleRaycastHit(Vector3 pos)
    {
        ActorController.instance.SetPlaceMode(true);
        UnityEngine.Debug.Log("Hit" + pos);


            ActorController.instance.actor.GetComponent<MeshRenderer>().enabled = true;
        ActorController.instance.actor.gameObject.transform.position = pos;

        ActorController.instance.SetAnchorPosition(pos);

        ActorController.instance.RotateActorTowardCamera();
    }


    void UpdateCaptureView()
    {
            // Make the anchor rotate toward us, so our actors are always facing us to start
            TryRaycastFromCamera();
    }
}