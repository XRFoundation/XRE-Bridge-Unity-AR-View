using UnityEngine;
using System.Collections.Generic;

public class AutoExtrusion : MonoBehaviour
{
    void Update()
    {
        GetComponent<Renderer>().material.SetFloat("_Amount", Mathf.PingPong(Time.time * 2, 2) - 1);
    }

}
