using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TextureDivider : MonoBehaviour
{

	#region Variables
	public Sprite[] allSprites;
	Texture2D source;
	[HideInInspector]
	public int count = 4;
	//GameObject[] childObjects = new GameObject[4];

	#endregion

	#region Unity Methods
	private void Awake()
	{
		GetComponent<SpriteRenderer>().sprite = allSprites[UnityEngine.Random.Range(0, allSprites.Length)];
	}

	// Use this for initialization
	void Start()
	{
		Invoke("SplitIntoPieces",0.7f);
	}

	private void SplitIntoPieces()
	{

		source = GetComponent<SpriteRenderer>().sprite.texture;
		//GameObject spritesRoot = GameObject.Find("SpritesRoot");
		float halfWidth = source.width / 2;
		float halfHeight = source.height / 2;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				Vector2 pivot = new Vector2(-i + 1, -j + 1);
				Sprite newSprite = Sprite.Create(source, new Rect(i * halfWidth, j * halfHeight, halfWidth, halfHeight), pivot);
				GameObject n = new GameObject();
				n.SetActive(false);
				SpriteRenderer sr = n.AddComponent<SpriteRenderer>();
				sr.sprite = newSprite;
				n.transform.localScale = new Vector3(2, 2, 2);
				//n.AddComponent<PolygonCollider2D>()/*;*/
				n.AddComponent<BoxCollider2D>();
				//n.transform.position = new Vector3(i * 2, j * 2, 0);
				float xPos = i * 4 + (-2);
				float yPos = j * 4 + (-2);
				//n.transform.position = new Vector3(xPos, yPos, 0);

				n.transform.position = new Vector3(0, 0, 0);
				n.transform.rotation = Quaternion.Euler(0, 0, 0);

				n.AddComponent<PuzzleDraggable>();
				n.GetComponent<PuzzleDraggable>().initialPos = new Vector2(xPos, yPos);


				//iTween.RotateTo(n, new Vector3(0, 0, 45), 3f);
				//iTween.MoveTo(n, new Vector3(xPos, yPos, 0), 3f);
				StartCoroutine(MovePieces(n, new Vector3(xPos, yPos, 0)));
				/*
				//iTween.RotateTo(n, new Vector3(0, 0, 45), 0.3f);
				Hashtable ht = new Hashtable();
				ht.Add("amount", new Vector3(0, 0, 45f));
				ht.Add("time", 0.3f);
				iTween.RotateBy(n, ht);
				//iTween.RotateBy(n, iTween.Hash("amount",new Vector3(0,0, 45f),"time", 0.3f));
				//iTween.MoveFrom(n, new Vector2(0, 0), 0.3f);
				//iTween.MoveTo(n, new Vector3(xPos, yPos, 0), 0.3f);
				//ht = new Hashtable();
				ht.Clear();
				ht.Add("position", new Vector3(xPos, yPos, 0));
				ht.Add("time", 0.3f);
				iTween.MoveTo(n, ht);
				//iTween.MoveTo(n,iTween.Hash("x",xPos,"y", yPos,"time", 0.3f));
				*/


				n.SetActive(true);
				n.transform.parent = gameObject.transform;

			}
		}

		GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, 0.38f);
	}

	IEnumerator MovePieces(GameObject go, Vector3 pos)
	{
		iTween.RotateTo(go, new Vector3(0, 0, 45), 0.3f);		
		yield return new WaitForEndOfFrame();
		iTween.MoveTo(go, pos, 0.3f);
		//Hashtable ht = new Hashtable();
		//ht.Add("amount", new Vector3(0, 0, 0.125f));
		//ht.Add("time", 0.1f);
		//iTween.RotateBy(go, ht);
		////yield return new WaitForEndOfFrame();
		//yield return new WaitForEndOfFrame();
		////ht = new Hashtable();
		//ht.Clear();
		//ht.Add("position", new Vector3(0, 0, 0));
		//ht.Add("time", 0.3f);
		//iTween.MoveFrom(go, ht);
		//yield return new WaitForEndOfFrame();

	}

	internal void GameOver()
	{
		StartCoroutine(FinalAnimation());
	}

	IEnumerator FinalAnimation()
	{
		yield return new WaitForSeconds(0.5f);
		GetComponent<SpriteRenderer>().color = Color.white;
		GetComponent<SpriteRenderer>().sortingOrder = 3;
		foreach (Transform child in transform)
			child.gameObject.SetActive(false);
		iTween.ScaleTo(gameObject, transform.localScale*1.2f, 2f);
		yield return new WaitForSeconds(1f);
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}
	#endregion
}
