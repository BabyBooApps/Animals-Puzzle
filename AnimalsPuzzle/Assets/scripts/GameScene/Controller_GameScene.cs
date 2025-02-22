using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Controller_GameScene : MonoBehaviour
{

	#region Variables
	public GameObject[] imageObjects;
	public GameObject[] shadowObjects;
	[Space]
	public AudioSource audioSource;
	[Space]
	public GameObject trigger;
	//public GameObject nextBtn;
	//public GameObject quitBtn;
	[Space]
	public AudioClip shadowAppearClip;
	public AudioClip imageAppearClip;
	[HideInInspector]
	public static int objCount = 3;

	int typeSel;
	List<int> objectsOrder;
	List<int> positionsOrder;

	AudioClip appreciateSound;
	string spritesFolder;

	Vector3[] imagePositions;
	Vector3[] shadowPositions;

	bool imagesOnTop = false;
	bool slideFromOutside = false;
	[HideInInspector]
	public static bool oneAtATime = false;
	//string[] sprites;
	DataRow[] currentRowSet = null;

	static AudioObjectScript audioScript;

	public int SuccessCount = 0;
	#endregion

	#region Unity Methods

	void Awake()
	{
		objCount = 3;

		//audioSource = GetComponent<AudioSource>();
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
		AdsManager.Instance.ReduceInterstitial_Ads_Countdown();
		//AdsManager.Instance.interstitial.ShowAd();
		//DisplayAds_IAP.DisplayInterstitial();
	}

	void Start()
	{
		objectsOrder = GetRandPosOfArrayList(3);

		positionsOrder = GetRandPosOfArrayList(3);


		int positionsSelector = UnityEngine.Random.Range(0, 10);
		if (positionsSelector < 5)
		{
			imagesOnTop = true;
			imagePositions = StaticArrays.topPositions;
			shadowPositions = StaticArrays.bottomPositions;
		}
		else
		{
			imagesOnTop = false;
			shadowPositions = StaticArrays.topPositions;
			imagePositions = StaticArrays.bottomPositions;
		}

		slideFromOutside = UnityEngine.Random.Range(0, 10) < 5 ? true : false;
		oneAtATime = UnityEngine.Random.Range(0, 10) < 5 ? true : false;

		StartCoroutine(InstantiateOverTime());
		string appreciate = "appreciate_" + GenerateRand().ToString();
		appreciateSound = (AudioClip)Resources.Load("appreciate/" + appreciate);

	}

	//void EnableMenuBtns()
	//{
	//	nextBtn.SetActive(true);
	//	quitBtn.SetActive(true);
	//}

	int GenerateRand()
	{
		return UnityEngine.Random.Range(1, 23);
	}

	public void LoadNextScene()
	{
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}

	void Update()
	{
		if (objCount == 0)
		{
			objCount = 3;
			Invoke("PlayAppreciateSound", 1F);
			Invoke("ActivateTrigger", 0.5F);
		}
	}

	void ActivateTrigger()
	{
		trigger.SetActive(true);
	}

	IEnumerator InstantiateOverTime()
	{
		audioSource.volume = 0.3f;
		//sprites = GetRandomTriplet(3);
		//int currentCategoryIndex = UnityEngine.Random.Range(0, DataFeed.OBJECT_TYPES.Length);
		//int currentCategoryIndex = 2;
		string whereClause = DataFeed.Attributes[1] + "=" + false;
		//+ " AND " + DataFeed.Attributes[6] + "=" + true;
		currentRowSet = DAL.getFixedRandomRowsOrNull(whereClause, 3);
		//Debug.Log(currentRowSet.Length);
		//Debug.Log(currentRowSet.Length);
		//if (currentRowSet == null) // RETURNING NULL FROM DAL IF ALL ROWS MARKED 'YES'
		if (currentRowSet.Length == 0)
		{
			Debug.Log("All Images Displayed for the category ");
			string markWhereClause = "1=1";
			DAL.ResetMarkedRows(markWhereClause);
			currentRowSet = DAL.getFixedRandomRowsOrNull(whereClause, 3);
		}

		for (int i = 0; i < 3; i++)
		{
			audioSource.PlayOneShot(shadowAppearClip);
			int j = positionsOrder[0];
			positionsOrder.RemoveAt(0);
			//shadowObjects[i].GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(spritesFolder + sprites[j] + "_S");
			//shadowObjects[i].name = sprites[j] + "_shadow";
			shadowObjects[i].GetComponent<SpriteRenderer>().sprite = (Sprite)currentRowSet[j][3];
			shadowObjects[i].name = currentRowSet[j][0] + "_shadow";
			currentRowSet[j][1] = true;
			shadowObjects[i].transform.position = shadowPositions[j];
			shadowObjects[i].SetActive(true);
			yield return new WaitForSeconds(0.25f);
		}
		if (!oneAtATime)
		{
			for (int i = 0; i < 3; i++)
			{
				audioSource.PlayOneShot(imageAppearClip);
				int j = objectsOrder[0];
				objectsOrder.RemoveAt(0);
				//imageObjects[i].GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(spritesFolder + sprites[i]);
				//imageObjects[i].name = sprites[i];
				//imageObjects[i].GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("blocks/" + sprites[i]);

				imageObjects[i].GetComponent<SpriteRenderer>().sprite = (Sprite)currentRowSet[i][2];
				imageObjects[i].name = currentRowSet[i][0].ToString();
				imageObjects[i].GetComponent<AudioSource>().clip = (AudioClip)currentRowSet[i][4];
				if (currentRowSet[i][5] != DBNull.Value)
					imageObjects[i].GetComponent<ImageScript>().animalSound = (AudioClip)currentRowSet[i][5];
				DestroyImmediate(imageObjects[i].GetComponent<CircleCollider2D>(), true);
				imageObjects[i].AddComponent<CircleCollider2D>();
				imageObjects[i].transform.position = imagePositions[j];
				imageObjects[i].GetComponent<ImageScript>().initialPosition = imagePositions[j];
				if (slideFromOutside)
				{
					if (imagesOnTop)
					{
						iTween.MoveFrom(imageObjects[i], imagePositions[j] + new Vector3(0, 4, 0), 0.5f);
					}
					else
					{
						iTween.MoveFrom(imageObjects[i], imagePositions[j] - new Vector3(0, 4, 0), 0.5f);
					}
				}
				else
				{
					iTween.MoveFrom(imageObjects[i], imagePositions[i] - new Vector3(0, 4, 0), 0.5f);
				}

				imageObjects[i].SetActive(true);
				yield return new WaitForSeconds(0.5f);
			}
		}
		else
		{
			DisplayOneImage();
			yield return new WaitForSeconds(1f);
		}

		//yield return new WaitForSeconds(0.1f);
		//EnableMenuBtns();
	}

	public void DisplayOneImage()
	{
		int index = 3 - objCount;

		audioSource.PlayOneShot(imageAppearClip);
		//imageObjects[index].GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(spritesFolder + sprites[index]);
		//imageObjects[index].name = sprites[index];
		//imageObjects[index].GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("blocks/" + sprites[index]);

		imageObjects[index].GetComponent<SpriteRenderer>().sprite = (Sprite)currentRowSet[index][2];
		imageObjects[index].name = currentRowSet[index][0].ToString();
		imageObjects[index].GetComponent<AudioSource>().clip = (AudioClip)currentRowSet[index][4];
		if (currentRowSet[index][5] != DBNull.Value)
			imageObjects[index].GetComponent<ImageScript>().animalSound = (AudioClip)currentRowSet[index][5];


		DestroyImmediate(imageObjects[index].GetComponent<CircleCollider2D>(), true);
		imageObjects[index].AddComponent<CircleCollider2D>();
		imageObjects[index].transform.position = imagePositions[1];

		imageObjects[index].GetComponent<ImageScript>().initialPosition = imagePositions[1];

		Vector3 fromPos;
		if (imagesOnTop)
		{
			//iTween.MoveFrom(imageObjects[index], imagePositions[1] + new Vector3(0, 4, 0), 0.5f);
			//iTween.MoveFrom(imageObjects[index], iTween.Hash("position", imagePositions[1] + new Vector3(0, 4, 0),
			//	"time", 0.5f, "easetype", iTween.EaseType.spring));
			fromPos = imagePositions[1] + new Vector3(0, 4, 0);
		}
		else
		{
			fromPos = imagePositions[1] - new Vector3(0, 4, 0);
			//iTween.MoveFrom(imageObjects[index], imagePositions[1] - new Vector3(0, 4, 0), 0.5f);
		}
		iTween.MoveFrom(imageObjects[index], iTween.Hash("position", fromPos, "time", 0.5f, "easetype", iTween.EaseType.spring));
		imageObjects[index].SetActive(true);
	}

	List<int> GetRandPosOfArrayList(int length)
	{

		List<int> a = new List<int>();
		for (int i = 0; i < length; i++)
		{
			a.Add(i);
		}
		int[] arr = a.ToArray();

		for (int i = 0; i < arr.Length; i++)
		{
			int randIndex = UnityEngine.Random.Range(i, arr.Length);
			int tmp = arr[randIndex];
			arr[randIndex] = arr[i];
			arr[i] = tmp;
		}
		List<int> s = new List<int>();
		s.AddRange(arr);

		return s;

	}


	public string[] GetRandomTriplet(int size)
	{
		string[] retArray = new string[size];

		if (StaticArrays.blocksList == null || StaticArrays.blocksList.Count < size)
		{
			StaticArrays.blocksList.Clear();
			StaticArrays.blocksList.AddRange(StaticArrays.blocks);
		}

		for (int i = 0; i < size; i++)
		{
			//int index = rand.Next(0, StaticArrays.blocksList.Count);
			int index = UnityEngine.Random.Range(0, StaticArrays.blocksList.Count);
			spritesFolder = "blocks/";
			retArray[i] = StaticArrays.blocksList[index];
			StaticArrays.blocksList.RemoveAt(index);
		}
		return retArray;
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
