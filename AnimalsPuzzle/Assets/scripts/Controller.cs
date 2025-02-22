using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class Controller : MonoBehaviour
{

	public GameObject trigger;
	//public int noOfPieces;
	public AudioSource audioSource;

	public static int objCount = 3;
	public GameObject nextBtn;
	public GameObject quitBtn;

	int typeSel;
	List<int> objectsOrder;
	List<int> positionsOrder;
	System.Random rand = new System.Random();

	AudioClip appreciateSound;
	string spritesFolder;

	void Awake()
	{
		objCount = 3;
	}

	void Start()
	{

		objectsOrder = GetRandPosOfArrayList(3);

		//if (StaticArrays.random == null)
		//{
		//	StaticArrays.random = new System.Random();
		//}
		positionsOrder = GetRandPosOfArrayList(3);
		StartCoroutine(InstantiateOverTime());
		string appreciate = "appreciate_" + GenerateRand().ToString();
		appreciateSound = (AudioClip)Resources.Load("appreciate/" + appreciate);
		Invoke("EnableMenuBtns", 3f);

	}
	void EnableMenuBtns()
	{
		nextBtn.SetActive(true);
		quitBtn.SetActive(true);
	}
	int GenerateRand()
	{
		//return StaticArrays.random.Next(1, 23);
		return UnityEngine.Random.Range(1, 23);
	}
	public void LoadNextScene()
	{
		//Application.LoadLevel (Application.loadedLevel);
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

	/*
	void LoadNext(){
		//Application.LoadLevel (Application.loadedLevel);
		//Application.LoadLevel (2);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    */
	IEnumerator InstantiateOverTime()
	{

		//int count = 2;
		string[] sprites = GetRandomTriplet(3);


		for (int i = 0; i < 3; i++)
		{
			//if(spawned == 0)
			//{
			int j = positionsOrder[0];
			positionsOrder.RemoveAt(0);
			//Debug.Log(j);
			//instantiate targets
			GameObject go = Resources.Load<GameObject>("target");
			go.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(spritesFolder + sprites[j] + "_S");
			go.name = sprites[j] + "_shadow";
			go.GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("blocks/" + sprites[j]);
			Instantiate(go, StaticArrays.targetPositions[j], Quaternion.identity);
			yield return new WaitForSeconds(0.5f);
		}

		for (int i = 0; i < 3; i++)
		{
			int j = objectsOrder[0];
			objectsOrder.RemoveAt(0);
			//instantiate main obj
			GameObject goMain = Resources.Load<GameObject>("main");
			goMain.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>(spritesFolder + sprites[i]);
			goMain.name = sprites[i];
			goMain.GetComponent<AudioSource>().clip = Resources.Load<AudioClip>("blocks/" + sprites[j]);
			DestroyImmediate(goMain.GetComponent<CircleCollider2D>(), true);
			goMain.AddComponent<CircleCollider2D>();
			Instantiate(goMain, StaticArrays.initialPositions[j], Quaternion.identity);
			yield return new WaitForSeconds(0.5f);
		}



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
			int randIndex = rand.Next(i, arr.Length);
			int tmp = arr[randIndex];
			arr[randIndex] = arr[i];
			arr[i] = tmp;
			//Debug.Log (tmp);
		}
		List<int> s = new List<int>();
		s.AddRange(arr);

		return s;

	}


	public string[] GetRandomTriplet(int size)
	{
		string[] retArray = new string[size];
		//if (StaticArrays.random == null)
		//{
		//	StaticArrays.random = new System.Random();
		//}

		if (StaticArrays.blocksList == null || StaticArrays.blocksList.Count < size)
		{
			StaticArrays.blocksList.Clear();
			StaticArrays.blocksList.AddRange(StaticArrays.blocks);
		}

		for (int i = 0; i < size; i++)
		{
			int index = rand.Next(0, StaticArrays.blocksList.Count);
			spritesFolder = "blocks/";
			retArray[i] = StaticArrays.blocksList[index];
			StaticArrays.blocksList.RemoveAt(index);
		}

		return retArray;
	}

	void PlayAppreciateSound()
	{
		audioSource.PlayOneShot(appreciateSound);
	}



}
