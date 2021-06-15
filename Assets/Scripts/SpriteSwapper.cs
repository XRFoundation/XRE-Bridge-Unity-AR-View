using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpriteSwapper : MonoBehaviour {

    Image image;
    SpriteRenderer spr;
    int counter = 0;

    public Sprite[] sprites;
    public float duration;
    float timer = 0;

    void OnEnable()
    {
        counter = 0;
        timer = 0;
    }

    // Use this for initialization
    void Start () {
        
        image = GetComponent<Image>();
        if (image != null)
        {
            image.sprite = sprites[0];
        }
        spr = GetComponent<SpriteRenderer>();
        if (spr != null)
        {
            spr.sprite = sprites[0];
        }
	}
	
	// Update is called once per frame
	void Update () {

        timer += Time.deltaTime;
		if(timer >= duration){
            timer -= duration;
            counter = (counter + 1) % sprites.Length;

            if (image != null)
            {
                image.sprite = sprites[counter];
            }
            if (spr != null)
            {
                spr.sprite = sprites[counter];
            }
        }


	}
}
