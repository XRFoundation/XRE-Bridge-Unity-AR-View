using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;
using System;
using UnityEngine.UI;
using Amar;


public class ArTapToPlaceObject : MonoBehaviour
{
	public static ArTapToPlaceObject Instance;
	public GameObject objectToPlace;
	public GameObject placementIndicator;

	private ARSessionOrigin arOrigin;
	private ARRaycastManager arRaycastManager;
	public Pose placementPose;
	private bool placementPoseIsValid = false;
	public int placedObject;
	public GameObject Base;
	public bool HideObject;
	public GameObject CheckMark;
	private bool check = true;


	private bool first;
	private bool second;
	private bool third;
	private bool forth;

	private void Awake()
	{
		if (Instance == null)
		{
			Instance = this;
		}
	}

	private void OnEnable()
	{
		Base.SetActive(false);
		//UIManager.Instance.AnimationActive(true);
		
	}

	void Start()
	{
		UIController.Instance.Onfinding();
		arOrigin = FindObjectOfType<ARSessionOrigin>();
		arRaycastManager = FindObjectOfType<ARRaycastManager>();
		//UIManager.Instance.ToggleBottom(false);
	}

	void Update()
	{
		UpdatePlacementPose();
		UpdatePlacementIndicator();
	}

	private void OnDisable()
	{
		BehaviousController.Instance.PlacementPos = placementPose.position;
		//UIManager.Instance.AnimationActive(false);
		
	}

	public void Placeobject(GameObject SetCurrentGameobject)
	{
		/*if (placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		{
			PlaceObject();
		}*/

		objectToPlace = SetCurrentGameobject;


		//SetObject();
	}

	public void SetID(int ButtonID)
	{
		placedObject = ButtonID;
		Debug.Log("Placed object" + ButtonID);
	}

	public void SetObject()
	{
		if (placementPoseIsValid && objectToPlace != null)
			Instantiate(objectToPlace, placementPose.position, placementPose.rotation);

#if UNITY_EDITOR
		Instantiate(objectToPlace, placementPose.position, placementPose.rotation);
#endif
	}

	private void UpdatePlacementIndicator()
	{
		if (placementPoseIsValid && !HideObject)
		{
			UIController.Instance.OnSurfaceDetected();
			//UIManager.Instance.AnimationActive(false);
			Base.SetActive(true);
			if(!first)
			{
				//UIManager.Instance.SwitchTotorial(0);
				first = true;
			}
		
			placementIndicator.SetActive(true);
			placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
			Base.gameObject.transform.position = new Vector3(0, placementIndicator.transform.position.y, 0);  //For Horizontal
;
			if (check)
			{
				StartCoroutine(Showcheckmark());
				check = false;
			}

			// _Collider.gameObject.transform.position = new Vector3(0, 0, placementIndicator.transform.position.z);	// For verical
		}
		else
		{
			//check = true;
			placementIndicator.SetActive(false);
			//UIManager.Instance.AnimationActive(true);
			UIController.Instance.OnNextFinding();
		}
	}

	private void UpdatePlacementPose()
	{
		var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));
		var hits = new List<ARRaycastHit>();

		arRaycastManager.Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);

		placementPoseIsValid = hits.Count > 0;
		if (placementPoseIsValid)
		{
			placementPose = hits[0].pose;

			var cameraForward = Camera.current.transform.forward;
			var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
			placementPose.rotation = Quaternion.LookRotation(cameraBearing);
		}
	}

	public void AddObject(GameObject _object)
	{
		//objectToPlace.Add(_object);
	}

	public void OnTakePictureButtonClick()
	{

		HideObject = !HideObject;
		Debug.Log("Toggle" + HideObject);
	}

	IEnumerator Showcheckmark()
	{
		CheckMark.SetActive(true);
		yield return new WaitForSeconds(4.0f);
		CheckMark.SetActive(false);
	}

}
