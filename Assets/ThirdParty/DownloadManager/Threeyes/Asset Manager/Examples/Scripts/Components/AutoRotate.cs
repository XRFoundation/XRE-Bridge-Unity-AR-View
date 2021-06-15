using UnityEngine;
using System.Collections.Generic;

public class AutoRotate : MonoBehaviour
{
    public float rotateSpeed = 60;
    void Update()
    {
        this.transform.Rotate(new Vector3(0, -rotateSpeed * Time.deltaTime, 0));
    }

}
