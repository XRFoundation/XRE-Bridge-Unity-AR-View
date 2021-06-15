using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementArrowController : MonoBehaviour {

    Renderer thisRenderer;
    float fadeOutWaitTime = 1f;
    float fadeTime = .5f;
    float timeOffset = 0;
    bool coroutineIsRunning = false;

	// Use this for initialization
	void Start () {
        thisRenderer = GetComponent<Renderer>();
        ActorController.instance.PlaceModeSet.AddListener(Show);
        ActorController.instance.PlaceModeUnset.AddListener(Hide);

	}

    public void Show()
    {
        timeOffset = Time.time;
        //  thisRenderer.sharedMaterial = ARPlaneVisualizer.instance.placementMaterial;
        thisRenderer.sharedMaterial.SetFloat("_Alpha", 1f);
        if (coroutineIsRunning)
        {
            StopAllCoroutines();
        }
    }

    IEnumerator FadeOut()
    {
        coroutineIsRunning = true;
        float alpha = thisRenderer.sharedMaterial.GetFloat("_Alpha");        float timer = 0f;
        while (timer < fadeTime)
        {
            timer += Time.deltaTime;
            thisRenderer.sharedMaterial.SetFloat("_Alpha", Mathf.Lerp(alpha, 0f, timer / fadeTime));
            yield return null;

        }
        thisRenderer.sharedMaterial.SetFloat("_Alpha", 0);
        // thisRenderer.sharedMaterial = ARPlaneVisualizer.instance.shadowMaterial;
        coroutineIsRunning = false;
    }

    public void Hide()
    {
        if (!coroutineIsRunning)
        {
            StartCoroutine(FadeOut());
        } else {
            StopAllCoroutines();
            thisRenderer.sharedMaterial.SetFloat("_Alpha", 0f);

        }


    }

	
	// Update is called once per frame
	void Update () {
		
	}
}
