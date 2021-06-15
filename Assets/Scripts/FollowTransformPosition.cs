using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowTransformPosition : MonoBehaviour {

    public Transform targetToFollow;
	
	// Update is called once per frame
	void Update () {
       // transform.position = targetToFollow.position;
       // transform.rotation = targetToFollow.rotation;
	}
    // Update is called once per frame
    void LateUpdate()
    {
        transform.position = targetToFollow.position;
        transform.rotation = targetToFollow.rotation;
    }

}
