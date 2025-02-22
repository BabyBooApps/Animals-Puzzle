using System;
using UnityEngine;

public class PuzzleDraggable : MonoBehaviour {

	#region Variables
	bool dragMe = false;
	public Vector2 initialPos =  new Vector2(0,0);
	private bool isTouchDevice = true;

	Controller_PuzzleScene controller;
	#endregion

	#region Unity Methods

	void Awake()
	{
		if (Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.Android)
			isTouchDevice = true;
		else
			isTouchDevice = false;
	}

	private void Start()
	{
		try
		{
			controller = GameObject.Find("Object").GetComponent<Controller_PuzzleScene>();
		}
		catch (Exception)
		{

			//throw;
		}
		
	}

	void Update () 
	{
		if (dragMe)
		{
			DragMe();
			Debug.Log("Vector2.Distance(new Vector2(0, 0), transform.position) : " + Vector2.Distance(new Vector2(0, 0), transform.position));
			if (Vector2.Distance(new Vector2(0, -1), transform.position) < 1.5)
			{
				SnapMe();
				//controller.PlaySnapSound();
				//GetComponent<SpriteRenderer>().sortingOrder = -2;
				//dragMe = false;
				//iTween.MoveTo(gameObject, new Vector2(0, 1), 0.3f);
				//GetComponent<BoxCollider2D>().enabled = false;
				//controller.count -= 1;
				//if (controller.count < 1)
				//{
				//	controller.GameOver();
				//}
			}
		}
	}

	private void DragMe()
	{
		float distance_to_screen = Camera.main.WorldToScreenPoint(gameObject.transform.position).z;

		Vector3 touchPosition;
		if (isTouchDevice)
		{
			touchPosition = Input.GetTouch(0).position;
		}
		else
		{
			touchPosition = Input.mousePosition;
		}
		Vector3 pos_move = Camera.main.ScreenToWorldPoint(new Vector3(touchPosition.x, touchPosition.y, distance_to_screen));
		transform.position = new Vector3(pos_move.x, pos_move.y, pos_move.z);
	}

	private void OnMouseDown()
	{
		dragMe = true;
		GetComponent<SpriteRenderer>().sortingOrder = -1;
		//transform.rotation = Quaternion.Euler(0, 0, 0);
		iTween.RotateTo(gameObject, new Vector3(0, 0, 0), 0.2f);
	}


	private void OnMouseUp()
	{
		if (dragMe)
		{
			dragMe = false;
			if (Vector2.Distance(new Vector2(0, 1), transform.position) < 0.5)
			{
				SnapMe();
				//iTween.MoveTo(gameObject, new Vector2(0, 1), 0.3f);
				//GetComponent<BoxCollider2D>().enabled = false;
				//transform.parent.GetComponent<Controller_PuzzleScene>().count -= 1;
				//if (transform.parent.GetComponent<Controller_PuzzleScene>().count < 1)
				//{
				//	transform.parent.GetComponent<Controller_PuzzleScene>().GameOver();
				//}
			}
			else
			{
				Controller_PuzzleScene.PlayEncourageSound();
				iTween.MoveTo(gameObject, initialPos, 0.5f);
				GetComponent<SpriteRenderer>().sortingOrder = -2;
			}
		}
	}

	void SnapMe()
	{
		controller.PlaySnapSound();
		GetComponent<SpriteRenderer>().sortingOrder = -2;
		dragMe = false;
		iTween.MoveTo(gameObject, new Vector2(0, -1), 0.3f);
		GetComponent<BoxCollider2D>().enabled = false;
		controller.count -= 1;
		if (controller.count < 1)
		{
			controller.GameOver();
		}
	}


	
	#endregion
}
