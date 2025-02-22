using UnityEngine;
using System.Collections;
using System;

public class Fall : MonoBehaviour {

	public Sprite[] splashSprites;

	public SpriteRenderer spriteRenderer;
	private PolygonCollider2D polygonCollider2D;
	
	/*
	// Use this for initialization
	void Start () {
		Vector3 nw =new Vector3(0,-1.5F,0);
		gameObject.GetComponent<Rigidbody2D>().velocity = nw * 2;
	}
	*/
	void Start()
	{
		
			//transform.localScale = new Vector3(1, 1, 1);
		
		Vector3 nw = new Vector3(0, -1.5F, 0);
		gameObject.GetComponent<Rigidbody2D>().velocity = nw * 2;

		polygonCollider2D = GetComponent<PolygonCollider2D>();
	}


	public void SplashMe()
	{
		polygonCollider2D.enabled = false;
		spriteRenderer.sortingOrder = 3;
		gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
		gameObject.GetComponent<Rigidbody2D>().velocity = new Vector2(0, 0);
		iTween.ScaleFrom(gameObject, new Vector3(0, 0, 0), 0.2f);
		//transform.rotation = transform.rotation.eulerAngle * UnityEngine.Random.Range(0,360);
		int index = Int32.Parse(spriteRenderer.sprite.name) - 1;
		spriteRenderer.sprite = splashSprites[index];
		StartCoroutine(FadeOut());
	}

	IEnumerator FadeOut()
	{
		Color objcolor = spriteRenderer.color;
		yield return new WaitForSeconds(1f);
		//for (int i = 0; i < 21; i++)
		while (objcolor.a > 0)
		{
			//objcolor.a = (1 - 0.05f * i);
			objcolor.a = (objcolor.a - 0.05f);
			gameObject.GetComponent<SpriteRenderer>().color = objcolor;
			yield return new WaitForSeconds(0.15f);
		}
	}


}
