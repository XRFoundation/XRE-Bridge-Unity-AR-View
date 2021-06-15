using System.Collections;
using UnityEngine;
using UnityEngine.Rendering;
using Download;

public class ActorObjectController : MonoBehaviour
{
    public Renderer ren;
    UnityEngine.Video.VideoPlayer actor;
    public Material material;

	// Use this for initialization
	void Awake()
    {
        // TODO: ACTOR HERE
        actor = new UnityEngine.Video.VideoPlayer();
        ren = GetComponent<Renderer>();
    }


    public bool isPlaying(){
        if (actor != null)
        {
            return actor.isPlaying;
        }
        else
        {
            return false;
        }
    }

    public void FadeInActor(bool shouldEnable, bool playAtStart)
    {
		if(gameObject.activeSelf == false)
		{
			return;
		}

        if (shouldEnable)
        {
            ren.enabled = true;

        }
        if (playAtStart && actor != null)
        {

                Play(true);
        }

        StartCoroutine(iFadeInActor());
    }

    IEnumerator iFadeInActor()
    {
        bool hasReceivedTexture = false;

        if (ren == null) ren = GetComponent<Renderer>();
        if(ren.sharedMaterial == null){
            ren.sharedMaterial = material;
        }
        ren.sharedMaterial.renderQueue = (int)RenderQueue.Transparent;
        ren.sharedMaterial.SetFloat("_Alpha", 0f);

        float t = 0;
        while (t < ActorController.instance.actorFadeTime)
        {

            // Enable the renderer if there is a texture
            if (!hasReceivedTexture && ren.sharedMaterial.GetTexture("_MainTex") != null)
            {
                hasReceivedTexture = true;
            }

            // Debug.Log(ren.name + " : " + t / actorFadeTime);
            t += Time.smoothDeltaTime;
            ren.sharedMaterial.SetFloat("_Alpha", Mathf.Lerp(0f, 1f, t / ActorController.instance.actorFadeTime));
            yield return null;
        }
        ren.sharedMaterial.SetFloat("_Alpha", 1f);
        ren.sharedMaterial.renderQueue = (int)RenderQueue.AlphaTest;
    }

    public void FadeOutActor(bool shouldDisable, bool stopAtEnd)
    {
		//if((gameObject.activeSelf == false && !ren.enabled)
        if (gameObject.activeSelf == false )
        {
            return;
        }
        StartCoroutine(iFadeOutActor(shouldDisable, stopAtEnd));
    }

    IEnumerator iFadeOutActor(bool shouldDisable, bool stopAtEnd)
    {
        if(ren == null){
            Debug.Log("Renderer is null");
        }
        if(ren.sharedMaterial == null){
            ren.sharedMaterial = material;
        }
        ren.sharedMaterial.renderQueue = (int)RenderQueue.Transparent;

        float t = 0;

        while (t < ActorController.instance.actorFadeTime)
        {
            t += Time.smoothDeltaTime;
            ren.sharedMaterial.SetFloat("_Alpha", Mathf.Lerp(1f, 0f, t / ActorController.instance.actorFadeTime));

            yield return null;
        }
        ren.sharedMaterial.SetFloat("_Alpha", 0f);

        ren.sharedMaterial.renderQueue = (int)RenderQueue.AlphaTest;

        if (stopAtEnd && actor != null)
        {
                Play(false);
        }

        if (shouldDisable)
        {
            ren.enabled = false;
        }
    }

    public void RotateActor(float val)
    {
        transform.Rotate(0f, 0f, val);
    }
    public void Play(bool shouldPlay)
    {
        if(shouldPlay == true){
            if (!actor.isPlaying)
            {
                    PlayActor();
            }
        } else {
            if (actor.isPlaying)
            {
                    StopActor();
            }
        }
    }

    void PlayActor(){
        actor.Play();
    }

    void StopActor()
    {
        actor.Stop();
    }


}