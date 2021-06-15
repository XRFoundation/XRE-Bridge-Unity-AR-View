using UnityEngine;  
using System.Collections;
using UnityEngine.UI;

public class AnimatedSequence : MonoBehaviour  
{  
	//An array of Objects that stores the results of the Resources.LoadAll() method  
	public string ResourceFolder;
    public Sprite[] sprites;
    Image img;
    int frameCounter = 0;     
	float currentTime = 0;
	public int frameRate = 30;
	
	void Awake()  
	{
        //Get a reference to the Material of the game object this script is attached to  
        img = GetComponent<Image>();
	}  
	
	void Start ()  
	{
        img.sprite = sprites[0];
	}  
	
	void Update ()  
	{
		currentTime += Time.fixedDeltaTime;

		if (currentTime >= 1.0f / frameRate) {
			currentTime -= currentTime;
			frameCounter = (++frameCounter)%sprites.Length;  
            img.sprite = sprites[frameCounter];  

		}
		
	}  
	
}