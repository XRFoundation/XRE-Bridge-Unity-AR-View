using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundPlaneController : MonoBehaviour
{

    public static GroundPlaneController instance;

    public float height = 1.1f; // 43  inches

    public Transform cam;

    public Transform groundPlaneTransform;

    public bool guessGround = true;

    public void Align(){
            transform.position = new Vector3(cam.position.x, cam.position.y - height, cam.position.z);

    }

    private void Awake()
    {
        groundPlaneTransform = transform;
        if (instance == null) instance = this;
    }

    // Use this for initialization
    void Start () {

        if (cam == null) cam = Camera.main.transform;
	}
	
	// Update is called once per frame
	void LateUpdate () {
        if(guessGround) Align();

        if (instance.transform.position.y > Camera.main.transform.position.y)
        { // Why would the ground plane be above our camera? Fix it! Also a good hack to get the plane onto the floor
            instance.transform.position = new Vector3(instance.transform.position.x, Camera.main.transform.position.y - .01f, instance.transform.position.z);
        }

	}



}
