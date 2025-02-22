using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Random : MonoBehaviour
{

	string theObject;
	GameObject prefab;
	GameObject theDestroyable;
	//public int ObjectCount = 40;
	AudioSource blastAudioSource;

	public GameObject floor;
	[Space]
	public AudioClip balloonPop;
	public AudioClip fruitPop;
	public AudioClip rocketPop;
	public AudioClip eggPop;
	[Space]
	public GameObject fruit;
	public GameObject rocket;
	public GameObject balloon;
	public GameObject egg;
	public GameObject bubble;
	[Space]
	public Sprite[] fruitSprites;
	public Sprite[] balloonSprites;
	public Sprite[] rocketSprites;
	public Sprite[] eggSprites;
	public Sprite[] babySprites;
	[Space]
	public GameObject eggParticles;

	float lowerY = -7F;
	int sceneNo;

	void Awake()
	{
		blastAudioSource = gameObject.GetComponent<AudioSource>();
		lowerY = Camera.main.ScreenToWorldPoint(new Vector3(0.0f, 0.0f, 0.0f)).y - 2.5f;
		//	Debug.Log(lowerY);
	}

	void Start()
	{
		sceneNo = UnityEngine.Random.Range(1, 11);
		//sceneNo = 7;
		StartCoroutine(InstantiateOverTime(sceneNo));
		Invoke("ReloadLevel", 12F);

	}

	void Update()
	{
		if (Input.GetMouseButtonDown(0))
		{
			if (sceneNo == 1 || sceneNo == 4)
				handleBalloonClicks();
			else if (!(sceneNo == 9 || sceneNo == 10))
				handleClicks();
		}
	}

	void handleBalloonClicks()
	{

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction);

		if (hit.collider != null)
		{
			blastAudioSource.PlayOneShot(balloonPop);
			theDestroyable = hit.transform.gameObject;
			StartCoroutine(DestroyObject(theDestroyable, 0.1f));
		}
	}

	void handleClicks()
	{
		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction);

		if (hit.collider != null)
		{
			theDestroyable = hit.transform.gameObject;
			if (("Rocket").Equals(theObject))
			{
				blastAudioSource.PlayOneShot(rocketPop);
				hit.transform.gameObject.GetComponent<PolygonCollider2D>().enabled = false;
				hit.transform.gameObject.GetComponent<Animator>().enabled = true;
				hit.transform.gameObject.GetComponent<Rigidbody2D>().gravityScale = -4f;
			}
			else if (("Fall").Equals(theObject))
			{
				blastAudioSource.PlayOneShot(fruitPop);
				hit.transform.gameObject.GetComponent<Fall>().SplashMe();
			}
			else if (theObject == "Egg")
			{
				blastAudioSource.PlayOneShot(eggPop);
				if (hit.transform.gameObject.name.StartsWith("Egg"))
				{
					//GameObject instance = Instantiate(Resources.Load("EggParticles", typeof(ParticleSystem)), hit.transform.position, hit.transform.rotation) as GameObject;
					GameObject instance = Instantiate(eggParticles, hit.transform.position, hit.transform.rotation) as GameObject;
					GameObject currentEggObj = hit.transform.gameObject;
					//currentEggObj.GetComponent<SpriteRenderer>().sprite = hideNSeekScript.babySprites[UnityEngine.Random.Range(0, hideNSeekScript.babySprites.Length)];
					currentEggObj.GetComponent<SpriteRenderer>().sprite = babySprites[UnityEngine.Random.Range(0, babySprites.Length)];
					currentEggObj.GetComponent<Rigidbody2D>().gravityScale = 2f;
					currentEggObj.name = "baby";
					//currentEggObj.transform.localScale = new Vector3(1.6f, 1.6f, 1.6f);
					DestroyImmediate(currentEggObj.GetComponent<PolygonCollider2D>(), true);
					currentEggObj.AddComponent<PolygonCollider2D>();
				}
				else
				{
					hit.transform.gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(0, 70f));
				}
			}
			StartCoroutine(DestroyObject(theDestroyable, 6f));
		}
	}

	IEnumerator DestroyObject(GameObject theDestroyable, float delayTime)
	{
		yield return new WaitForSeconds(delayTime);
		Destroy(theDestroyable);
	}

	IEnumerator InstantiateOverTime(int sceneNo)
	{
		int spawned = 0;
		switch (sceneNo)
		{
			case 1:
			case 4:
				floor.SetActive(false);
				prefab = balloon;
				while (spawned < 80)
				{
					Vector3 position;
					position = new Vector3(UnityEngine.Random.Range(-8.0F, 8.0F), lowerY, UnityEngine.Random.Range(-9.5F, -0.5F));
					int balloonNo = UnityEngine.Random.Range(0, 9);
					GameObject go = Instantiate(prefab, position, Quaternion.identity) as GameObject;
					go.GetComponent<SpriteRenderer>().sprite = balloonSprites[balloonNo];
					go.transform.SetParent(gameObject.transform);
					float scaleFactor = 1.2f;
					if (SceneManager.GetActiveScene().name.ToLower().Contains("puzzle"))
					{
						scaleFactor = 1.4f;
					}
					ScaleTheObject(go, scaleFactor);
					spawned++;
					yield return new WaitForSeconds(0.4f);
				}
				break;

			case 2:
			case 5:
				floor.SetActive(false);
				prefab = rocket;
				theObject = prefab.name;
				while (spawned < 80)
				{
					Vector3 position = new Vector3(UnityEngine.Random.Range(-8.0F, 8.0F), lowerY, UnityEngine.Random.Range(-9.5F, -0.5F));
					int rocketNo = UnityEngine.Random.Range(0, 4);
					GameObject go = Instantiate(prefab, position, Quaternion.identity) as GameObject;
					go.GetComponent<SpriteRenderer>().sprite = rocketSprites[rocketNo];
					go.transform.SetParent(gameObject.transform);
					float scaleFactor = 1.2f;
					if (SceneManager.GetActiveScene().name.ToLower().Contains("puzzle"))
					{
						scaleFactor = 1.4f;
					}
					ScaleTheObject(go, scaleFactor);
					spawned++;
					yield return new WaitForSeconds(0.4f);
				}
				break;

			case 3:
			case 6:
				floor.SetActive(false);
				prefab = fruit;
				theObject = prefab.name;
				while (spawned < 80)
				{
					int fruitNo = UnityEngine.Random.Range(0, 4);
					Vector3 position = new Vector3(UnityEngine.Random.Range(-8.0F, 8.0F), -lowerY, UnityEngine.Random.Range(-9.5F, -0.5F));
					//(Instantiate(prefab, position, Quaternion.identity) as GameObject).transform.SetParent(gameObject.transform);
					GameObject go = Instantiate(prefab, position, Quaternion.identity) as GameObject;
					go.GetComponent<SpriteRenderer>().sprite = fruitSprites[fruitNo];
					DestroyImmediate(go.GetComponent<PolygonCollider2D>(), true);
					go.AddComponent<PolygonCollider2D>();
					go.transform.SetParent(gameObject.transform);
					float scaleFactor = 1.2f;
					if (SceneManager.GetActiveScene().name.ToLower().Contains("puzzle"))
					{
						scaleFactor = 1.4f;
					}
					ScaleTheObject(go, scaleFactor);
					spawned++;
					yield return new WaitForSeconds(0.3f);
				}
				break;


			case 7:
			case 8:
				floor.SetActive(true);
				prefab = egg;
				theObject = prefab.name;
				while (spawned < 80)
				{
					int eggNo = UnityEngine.Random.Range(0, 4);
					Vector3 position = new Vector3(UnityEngine.Random.Range(-8.0F, 8.0F), -lowerY, UnityEngine.Random.Range(-9.5F, -0.5F));
					//(Instantiate(prefab, position, Quaternion.identity) as GameObject).transform.SetParent(gameObject.transform);
					GameObject go = Instantiate(prefab, position, Quaternion.identity) as GameObject;
					go.GetComponent<SpriteRenderer>().sprite = eggSprites[eggNo];
					DestroyImmediate(go.GetComponent<PolygonCollider2D>(), true);
					go.AddComponent<PolygonCollider2D>();
					go.transform.SetParent(gameObject.transform);
					ScaleTheObject(go, 1.2f);
					spawned++;
					yield return new WaitForSeconds(0.4f);
				}
				break;

			case 9:
			case 10:
				floor.SetActive(false);
				prefab = bubble;
				theObject = prefab.name;
				float[] scaleFactors = new float[4] { 0.4f, 0.55f, 0.65f, 0.75f };
				float[] velocityFactors = new float[4] { 1f, 2f, 3f, 4f };
				int[] sortingOrders = new int[4] { 6, 7, 8, 9 };
				while (true)
				{
					GameObject bubbleGO = Instantiate(prefab, new Vector3(UnityEngine.Random.Range(-7.5f, 7.5f), lowerY + 2f, 0f), Quaternion.identity);

					int index = UnityEngine.Random.Range(0, scaleFactors.Length);

					float scaleFactor = scaleFactors[index];
					bubbleGO.transform.localScale = new Vector3(scaleFactor, scaleFactor, scaleFactor);
					ScaleTheObject(bubbleGO, 1.2f);
					float velocityFactor = velocityFactors[index];
					bubbleGO.GetComponent<Rigidbody2D>().velocity = new Vector2(0, velocityFactor);
					bubbleGO.GetComponent<SpriteRenderer>().sortingOrder = sortingOrders[index];

					yield return new WaitForSeconds(0.25f);
				}
			//break;

			default:
				floor.SetActive(false);
				prefab = rocket;
				theObject = prefab.name;
				while (spawned < 80)
				{
					Vector3 position = new Vector3(UnityEngine.Random.Range(-8.0F, 8.0F), lowerY, UnityEngine.Random.Range(-9.5F, -0.5F));
					int rocketNo = UnityEngine.Random.Range(0, 4);
					prefab.GetComponent<SpriteRenderer>().sprite = rocketSprites[rocketNo];
					//(Instantiate(prefab, position, Quaternion.identity) as GameObject).transform.SetParent(gameObject.transform);
					GameObject go = Instantiate(prefab, position, Quaternion.identity) as GameObject;
					go.transform.SetParent(gameObject.transform);
					float scaleFactor = 1.2f;
					if (SceneManager.GetActiveScene().name.ToLower().Contains("puzzle"))
					{
						scaleFactor = 1.4f;
					}
					ScaleTheObject(go, scaleFactor);
					spawned++;
					yield return new WaitForSeconds(0.25f);
				}
				break;
		}

	}

	void ScaleTheObject(GameObject theObject, float scaleFactor)
	{
		if (SceneManager.GetActiveScene().name.ToLower().Contains("game"))
		{
			if (Camera.main.orthographicSize > 7)
			{
				theObject.transform.localScale = theObject.transform.localScale * 1.5f;
			}
			else if (Camera.main.orthographicSize > 6.5)
			{
				theObject.transform.localScale = theObject.transform.localScale * 1.3f;
			}
			else
			{
				theObject.transform.localScale = theObject.transform.localScale * 1.2f;
			}
		}
		else
		{
			theObject.transform.localScale = theObject.transform.localScale * scaleFactor;
		}
	}


	public void ReloadLevel()
	{
		//Application.LoadLevel (Application.loadedLevel);
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}

}
