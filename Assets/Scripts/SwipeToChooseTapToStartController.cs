using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwipeToChooseTapToStartController : MonoBehaviour {
    
    public static SwipeToChooseTapToStartController instance;

    float startPos; // If this gameobject is set inactive, then the user has swiped
    public bool hasTriggeredMessaging = false;

    public Image SwipeToChooseImage;
    public Image TapToStartImage;

    public Transform pagedRectParent;

    public Color onColor;
    public Color offColor;

    public float fadeTime = .2f;

    bool isInited = false;

    public void Reset()
    {
        hasTriggeredMessaging = false;

        FadeToColor(SwipeToChooseImage, SwipeToChooseImage.color, onColor);
        FadeToColor(TapToStartImage, TapToStartImage.color, offColor);

        hasTriggeredMessaging = false;

    }


    void Awake(){
        instance = this;
    }

    public void Init()
    {
        if (isInited == false)
        {
            startPos = pagedRectParent.transform.position.x;
            isInited = true;
        }
    }

    void Update()
    {
        if (!isInited) return;

        if(hasTriggeredMessaging == false &&  pagedRectParent.transform.position.x < startPos - 1f){
            hasTriggeredMessaging = true;
            UpdateMessaging();
        }
    }


    IEnumerator FadeToColor(Image image, Color startColor, Color endColor){

        float t = 0f;

        while (t < fadeTime)
        {
            t += Time.smoothDeltaTime;
            image.color = Color.Lerp(startColor, endColor, t / fadeTime);
            yield return null;
        }

        image.color = endColor;
        yield return null;

    }


    void UpdateMessaging(){
    //    Debug.Log("Update messaging called");
        StartCoroutine(FadeToColor(SwipeToChooseImage, SwipeToChooseImage.color, offColor));
        StartCoroutine(FadeToColor(TapToStartImage, TapToStartImage.color, onColor));
        hasTriggeredMessaging = true;

    }



}
