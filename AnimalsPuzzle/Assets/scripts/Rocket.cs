using UnityEngine;
using System.Collections;

public class Rocket : MonoBehaviour {

	//GameObject go;
	void Awake()
	{
		GetComponent<Animator> ().enabled = false;
	}

	// Use this for initialization
	void Start () {
		//gameObject.GetComponent<Rigidbody2D> ().gravityScale = -0.01f;
		//gameObject.GetComponent<Rigidbody>().velocity = Vector3(0,10,0);
		Vector3 nw =new Vector3(0,1.5F,0);
		GetComponent<Rigidbody2D>().velocity = nw * 2;

		//int rocketId = UnityEngine.Random.Range (1,2);
		//gameObject.GetComponent<SpriteRenderer> ().sprite = Resources.Load<Sprite>("rocket_" +rocketId);

	}

	/*
	// Update is called once per frame
	void Update() {
		if (Input.GetMouseButtonDown (0)) {
			
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction);
			
			if(hit != null && hit.collider != null){
					
					//Rocket aimation
					//hit.transform.gameObject.GetComponent<SpriteRenderer> ().sprite = Resources.Load<Sprite>("rocket_1");
					hit.transform.gameObject.GetComponent<Animator>().enabled = true;
					hit.transform.gameObject.GetComponent<Rigidbody2D>().gravityScale = -1f;								
				
			}
			
		}
	}*/


}
