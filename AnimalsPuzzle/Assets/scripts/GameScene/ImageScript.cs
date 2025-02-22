using UnityEngine;

public class ImageScript : MonoBehaviour
{

	#region Variables

	public GameObject sparklesPrefab;

	Transform target;
    public AudioClip animalSound;
	AudioSource mainAudio;

	string goName;

	bool drag = false;
	bool snapped = false;
	[HideInInspector]
	public Vector3 initialPosition;

	public float scaleTo = 0.7F;
	private SpriteRenderer sprite;
	private bool isTouchDevice = true;
	#endregion

	void Awake()
	{
		if (Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.Android)
			isTouchDevice = true;
		else
			isTouchDevice = false;
	}



	#region Unity Methods

	void Start()
	{
		snapped = false;
		sprite = GetComponent<SpriteRenderer>();
		goName = gameObject.name;
		target = GameObject.Find(goName + "_shadow").transform;
		mainAudio = gameObject.GetComponent<AudioSource>();
		//initialPosition = transform.position;
	}

	void Update()
	{
		if (drag)
		{
			DragMe();
			if (TestCollision(target))
			{
				drag = false;
				SnapMe();
			}
		}
	}

	void OnMouseDown()
	{
		if (!snapped)
		{
			drag = true;
			sprite.sortingOrder = 4;
		}
	}

	void OnMouseUp()
	{
		if (drag)
		{
			drag = false;
			if (TestCollision(target))
			{
				SnapMe();
			}
			else
			{
				Controller_GameScene.PlayEncourageSound();
				iTween.MoveTo(transform.gameObject, iTween.Hash("position", initialPosition, "easetype", iTween.EaseType.spring, "time", 0.5f));
				sprite.sortingOrder = 2;
			}
		}
	}

	private void DisplayNextImage()
	{
		Camera.main.GetComponent<Controller_GameScene>().DisplayOneImage();
	}

	private void HideShadow()
	{
		target.gameObject.SetActive(false);
	}

	void EnableDrag()
	{
		drag = true;
	}

	void DragMe()
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

	bool TestCollision(Transform target)
	{
		return Vector3.Distance(target.position, transform.position) < 2;
		/*
		Vector3 offset = target.position - transform.position;
		float sqrLen = offset.sqrMagnitude;
		return(sqrLen < 0.8);
		*/
	}

	void SnapMe()
	{
		if (!snapped)
		{
			snapped = true;
			iTween.MoveTo(gameObject, target.position, 0.5f);
			transform.gameObject.GetComponent<CircleCollider2D>().enabled = false;
			Invoke("HideShadow", 0.3f);
			sprite.sortingOrder = 2;
			Controller_GameScene.objCount -= 1;
			if (Controller_GameScene.objCount > 0 && Controller_GameScene.oneAtATime)
			{
				Invoke("DisplayNextImage", 1.5f);
			}
			mainAudio.Play();
			//GameObject instance = Instantiate(Resources.Load("sparkles", typeof(ParticleSystem)), target.position, target.rotation) as GameObject;
			GameObject instance = Instantiate(sparklesPrefab, target.position, target.rotation) as GameObject;
            Invoke("PlayAnimalSound", 0.5f);
		}
	}
    void PlayAnimalSound()
    {
        if (animalSound != null)
        {
            AudioSource audioSource = Camera.main.GetComponent<AudioSource>();
            if (audioSource.isPlaying)
                audioSource.Stop();
            audioSource.volume = 0.5f;
            audioSource.PlayOneShot(animalSound);
        }
    }

	#endregion
}
