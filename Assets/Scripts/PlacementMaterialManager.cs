using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementMaterialManager : MonoBehaviour {

    public Material occlusionMat;
    public Material shadowMat;
    public Material placementMat;
    public Material placementMatGround;


    public static PlacementMaterialManager instance;

     void OnEnable()
    {
        instance = this;
    }






}
