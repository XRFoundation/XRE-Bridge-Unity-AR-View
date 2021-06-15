using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TutorialController : MonoBehaviour
{

    public static TutorialController instance;

    // Reference to all the UI images
    public GameObject tryWalkingAround, turnUpSound;

    // Have they been show?
    bool hasShownTryWalkingAroundImage = false;

    public float tutorialFadeTime = .5f;

    public bool tutorialModeIsSet = true; // Has it been set / stored in player prefs?

    public float messageHoldTime = 2f; // How long to display before fading out

    public float uiFadeTime = .25f;

     void Start()
    {
      //  turnUpSound.SetActive(true);
        tryWalkingAround.SetActive(false);
    }

    public void Show_TryWalkingAroundImage()
    {

        Debug.Log("Showing try walking around image");

        if (tutorialModeIsSet == false && hasShownTryWalkingAroundImage == false)
        {
            hasShownTryWalkingAroundImage = true;

            StartCoroutine(FadeInAndActivateImage(tryWalkingAround, .25f));

            Invoke("Hide_TryWalkingAroundImage", messageHoldTime);


        }
    }

    void Hide_TryWalkingAroundImage()
    {
        if (tryWalkingAround.gameObject.activeSelf)
        {
            StartCoroutine(FadeOutAndDeactivateImage(tryWalkingAround));
        }

    }

    IEnumerator FadeInAndActivateImage(GameObject go, float delay)
    {
        yield return new WaitForSeconds(delay);
        StartCoroutine(FadeInAndActivateImage(go));

    }

    IEnumerator FadeInAndActivateImage(GameObject go)
    {

        Debug.Log("FadeInAndActivateImage called");

        CanvasGroup canvasGroup = go.GetComponent<CanvasGroup>();
        if(canvasGroup == null){
            yield break;
        }



        go.gameObject.SetActive(true);



        float t = 0;


        while (t < uiFadeTime)
        {
            t += Time.smoothDeltaTime;

            canvasGroup.alpha =   Mathf.Lerp(0.0f, 1.0f, t / uiFadeTime);


            yield return null;
        }
      
        canvasGroup.alpha = 1.0f;
    }

    IEnumerator FadeOutAndDeactivateImage(GameObject go)
    {

        CanvasGroup canvasGroup = go.GetComponent<CanvasGroup>();
        if (canvasGroup == null)
        {
            yield break;
        }

        float t = 0;

        while (t < uiFadeTime)
        {
            t += Time.smoothDeltaTime;

            canvasGroup.alpha = Mathf.Lerp(0.0f, 1.0f, t / uiFadeTime);
                        yield return null;
        }
        yield return null;

        canvasGroup.alpha = 0.0f;

        go.gameObject.SetActive(false);


    }


    void Awake()
    {
        instance = this;
    }



}