using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.Experimental.XR;



public class ARController : MonoBehaviour {
    public static ARController instance;

    public ARSessionOrigin aRSessionOrigin;
    public ARSession aRSession;
    public ARPlaneManager aRPlaneManager;

    void Start()
    {
        instance = this;
    }

}
