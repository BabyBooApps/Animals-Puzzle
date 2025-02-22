using UnityEngine;
using System.Collections;

public class BackgroundResize : MonoBehaviour {

	void Start () {
		Resize ();
	}
   
    void Resize()
	{
		SpriteRenderer sr=GetComponent<SpriteRenderer>();
		if(sr==null) return;

		float worldScreenHeight = Camera.main.orthographicSize * 2;
		float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;

		transform.localScale = new Vector3(worldScreenWidth / sr.sprite.bounds.size.x,
											worldScreenHeight / sr.sprite.bounds.size.y, 1);		
	}
  
}
