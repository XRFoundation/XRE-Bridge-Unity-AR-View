using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetInactiveAfterTime : MonoBehaviour {

    public GameObject objectToDisable;
    public float activeTime = 2f;

	// Use this for initialization
	void OnEnable () {
        Invoke("Disable", activeTime);
	}

    void Disable()
    {
        objectToDisable.SetActive(false);
    }

}
