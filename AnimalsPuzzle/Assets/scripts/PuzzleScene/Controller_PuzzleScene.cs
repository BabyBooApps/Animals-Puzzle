using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Controller_PuzzleScene : MonoBehaviour {

	#region Variables
	public GameObject gameFloor;
	public PhysicsMaterial2D objectMaterial;
	public GameObject trigger;
	public AudioClip snappingClip;
	//public AudioClip WoodBreakClip;
	Texture2D source;
	[HideInInspector]
	public int count = 4;
	DataRow currentDataRow;
	//Vector3[] piecesPositions = new Vector3[4] {new Vector3(-4f,-0.8f,0f), new Vector3(-4f,3f,0f), new Vector3(4f,-0.8f,0f), new Vector3(3.5f,3f,0f)};
	Vector3[] piecesPositions = new Vector3[4] { new Vector3(-4f, -2.8f, 0f), new Vector3(-4f, 1f, 0f), new Vector3(4f, -3f, 0f), new Vector3(3.5f, 1.8f, 0f) };

	//Vector3[] bottomPiecesPositions = new Vector3[4] { new Vector3(-6.5f, -0.8f, 0f), new Vector3(-6.5f, 4f, 0f), new Vector3(5.5f, -1f, 0f), new Vector3(5.5f, 4f, 0f) };
	List<int> positionsIndexList;
	bool collided = false;

	static AudioObjectScript audioScript;

	GameObject[] pieceObjects = new GameObject[4]; 
	#endregion

	#region Unity Methods

	private void Awake()
	{
       
        try
		{
			GameObject audioObject = GameObject.Find("AudioObject");
			//Debug.Log(audioObject.name);
			audioScript = audioObject.GetComponent<AudioObjectScript>();
		}
		catch (System.Exception)
		{
			//Debug.Log("Exception");
			//throw;
		}

		AdsManager.Instance.banner.ShowAd();
		//AdsManager.Instance.interstitial.ShowAd();
		AdsManager.Instance.ReduceInterstitial_Ads_Countdown();

       // DisplayAds_IAP.DisplayInterstitial();

       //      string whereClause = DataFeed.Attributes[1] + "=" + false + " AND " + DataFeed.Attributes[6] + "=" + true;
		////Debug.Log(whereClause);
		//currentDataRow = DAL.getSingleDataRow(whereClause);
		
		//if (currentDataRow == null) // RETURNING NULL FROM DAL IF ALL ROWS MARKED 'YES'
		//{
		//	//Debug.Log("completed!!!!!!");
		//	string markWhereClause = "1=1";
		//	DAL.ResetMarkedRows(markWhereClause);
		//	currentDataRow = DAL.getSingleDataRow(whereClause);
		//}
		////Debug.Log(((Sprite)currentDataRow[3]).name);
		//currentDataRow[1] = true;

		//GetComponent<SpriteRenderer>().sprite = (Sprite)currentDataRow[2];
		//gameObject.AddComponent<PolygonCollider2D>();
		//GetComponent<PolygonCollider2D>().sharedMaterial = objectMaterial;
	}

	// Use this for initialization
	void Start()
	{

        string whereClause = DataFeed.Attributes[1] + "=" + false + " AND " + DataFeed.Attributes[6] + "=" + true;
        //Debug.Log(whereClause);
        currentDataRow = DAL.getSingleDataRow(whereClause);

        if (currentDataRow == null) // RETURNING NULL FROM DAL IF ALL ROWS MARKED 'YES'
        {
            //Debug.Log("completed!!!!!!");
            string markWhereClause = "1=1";
            DAL.ResetMarkedRows(markWhereClause);
            currentDataRow = DAL.getSingleDataRow(whereClause);
        }
        //Debug.Log(((Sprite)currentDataRow[3]).name);
        currentDataRow[1] = true;

        GetComponent<SpriteRenderer>().sprite = (Sprite)currentDataRow[2];
        gameObject.AddComponent<PolygonCollider2D>();
        GetComponent<PolygonCollider2D>().sharedMaterial = objectMaterial;


        List<int> tempList = new List<int>();
		tempList.AddRange(Enumerable.Range(0, 4));
		positionsIndexList = new List<int>();
		for (int i = 0; i < 4; i++)
		{
			int index = UnityEngine.Random.Range(0,tempList.Count);
			positionsIndexList.Add(tempList[index]);
			tempList.RemoveAt(index);
		}		
	}

	private void SplitIntoPieces()
	{
		gameObject.GetComponent<PolygonCollider2D>().enabled = false;
		gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GetComponent<SpriteRenderer>().enabled = false;
		source = GetComponent<SpriteRenderer>().sprite.texture;
		float halfWidth = source.width / 2;
		float halfHeight = source.height / 2;

		int currentPieceIndex = 0;

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				Vector2 pivot = new Vector2(-i + 1, -j + 1);
				Sprite newSprite = Sprite.Create(source, new Rect(i * halfWidth, j * halfHeight, halfWidth, halfHeight), pivot);
				GameObject n = new GameObject();
				n.name = "piece_" + (currentPieceIndex + 1).ToString();
				n.SetActive(false);
				SpriteRenderer sr = n.AddComponent<SpriteRenderer>();
				sr.sprite = newSprite;
				sr.sortingOrder = -2;
				n.transform.localScale = gameObject.transform.localScale;
				n.AddComponent<BoxCollider2D>();
				n.transform.position = new Vector3(0, 0, 0);
				n.transform.rotation = Quaternion.Euler(0, 0, 0);
				n.AddComponent<PuzzleDraggable>();
				Vector3 currentPiecePos = GetPiecePosition(currentPieceIndex, positionsIndexList[currentPieceIndex]);
				n.GetComponent<PuzzleDraggable>().initialPos = new Vector2(currentPiecePos.x, currentPiecePos.y);
				StartCoroutine(MovePieces(n, currentPiecePos));	
				n.SetActive(true);
				pieceObjects[currentPieceIndex] = n;
				currentPieceIndex++;
			}
		}

        //GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, 0.38f);
        GetComponent<SpriteRenderer>().sprite = (Sprite)currentDataRow[3];

        transform.localPosition = new Vector3(0, -1, 0);
		transform.rotation = Quaternion.Euler(0, 0, 0);
		GetComponent<SpriteRenderer>().enabled = true;
	}

	Vector3 GetPiecePosition(int pieceIndex, int positionIndex)
	{
		float xCorrection = 2f;
		float yCorrection = 2.5f;
		if(pieceIndex == positionIndex)
		{
			xCorrection = 0f;
			yCorrection = 0f;
		}
		else if (pieceIndex + positionIndex == 3)
		{
			if (pieceIndex > 1) xCorrection = -xCorrection;
			if (pieceIndex % 2 != 0) yCorrection = -yCorrection;
		}else if (Math.Abs(positionIndex - pieceIndex) == 1)
		{
			xCorrection = 0f;
			if (pieceIndex > positionIndex) yCorrection = -yCorrection;			
		}else
		{
			if(pieceIndex > positionIndex) xCorrection = -xCorrection;
			yCorrection = 0f;
		}

		return new Vector3(piecesPositions[positionIndex].x + xCorrection,
			piecesPositions[positionIndex].y + yCorrection, 0);
	}

	IEnumerator MovePieces(GameObject go, Vector3 pos)
	{
		iTween.RotateTo(go, new Vector3(0, 0, UnityEngine.Random.Range(-25f,25f)), 0.3f);
		yield return new WaitForEndOfFrame();
		iTween.MoveTo(go, pos, 0.3f);	
	}

	internal void GameOver()
	{
		StartCoroutine(FinalAnimation());
	}

	IEnumerator FinalAnimation()
	{
		
		yield return new WaitForSeconds(0.5f);
		GetComponent<SpriteRenderer>().color = Color.white;
        GetComponent<SpriteRenderer>().sprite = (Sprite)currentDataRow[2];
        GetComponent<SpriteRenderer>().sortingOrder = 2;
		GetComponent<SpriteRenderer>().sortingOrder = 3;
		for (int i = 0; i < 4; i++)
		{
			//GameObject.Find("piece_" + i).SetActive(false);
			pieceObjects[i].SetActive(false);
		}
		GetComponent<AudioSource>().PlayOneShot((AudioClip)currentDataRow[4]);

		iTween.ScaleTo(gameObject, transform.localScale * 1.2f, 2f);
		yield return new WaitForSeconds(1f);
        //PlayAppreciateSound();
        try
        {
            GetComponent<AudioSource>().PlayOneShot((AudioClip)currentDataRow[5]);
        }
        catch (Exception e)
        {

            Debug.Log("error " +e.ToString());
        }

        

        gameFloor.SetActive(false);
		trigger.SetActive(true);
	}	
	
	private void OnCollisionEnter2D(Collision2D collision)
	{
		if (!collided)
		{
			GetComponent<AudioSource>().Play();
			collided = true;
			Invoke("SplitIntoPieces", 0.2f);
		}
	}

	public void PlaySnapSound()
	{
		GetComponent<AudioSource>().PlayOneShot(snappingClip);
	}


	void PlayAppreciateSound()
	{
		/*
		audioSource.volume = 1;
		audioSource.PlayOneShot(appreciateSound);
		*/
		if (audioScript != null)
		{
			audioScript.PlayAppreciateSound();
		}
	}


	public static void PlayEncourageSound()
	{
		if (audioScript != null)
		{
			audioScript.PlayEncourageSound();
		}
	}

	#endregion
}
