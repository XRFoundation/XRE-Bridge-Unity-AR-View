using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Download;

public class ActorUIController : MonoBehaviour
{
    
    public string ActorName;
    public GameObject actorPrefab;
    [SerializeField]
    GameObject actor;
    public ActorObjectController actorObject;
    public GameObject placementMarkerPrefab;
    [SerializeField]
    GameObject placementMarker;
    public ActorObjectController actorPlacementObject;

    bool justStarted = true; // We need to do this because otherwise our actor won't play

    void Awake()
    {
        Invoke("Init", .1f);
    }

    public void ShowActor (){

        Init();

        if(justStarted){
            justStarted = false;
            Invoke("ShowActor", .1f);
            return;
        }

        ActorController.instance.actor = actorObject;

        ActorController.instance.actorPlacement = actorPlacementObject;

		actorPlacementObject.FadeInActor(true, true);

        actorObject.FadeOutActor(true, true);
    }

    void Init(){
		if (actor == null)
		{
			actor = Instantiate(actorPrefab, ActorController.instance.actorTransformParent.transform);
			actorPrefab.SetActive(false);

			actor.SetActive(true);
		}
        actorObject = actor.GetComponent<ActorObjectController>();

		if (placementMarker == null)
		{
			placementMarker = Instantiate(placementMarkerPrefab, ActorController.instance.actorTransformParent.transform);
			placementMarker.SetActive(false);
			placementMarker.SetActive(true);
		}
        actorPlacementObject = placementMarker.GetComponent<ActorObjectController>();
    }

    public void HideActor(){

        if (actorObject != null || Time.time < 3.0f){

            actorObject.FadeOutActor(true, true);

        }

        if(actorPlacementObject != null|| Time.time < 3.0f){
          
            actorPlacementObject.FadeOutActor(true, true);

        }


    }



}
