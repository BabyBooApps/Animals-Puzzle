using System.Collections;
using UnityEngine;

public class AudioObjectScript : MonoBehaviour {

	#region Variables
	public AudioClip[] appreciate;
	public AudioClip[] encourage;
	public AudioSource audioSource;
	#endregion

	#region Unity Methods
	private void Awake()
	{
		DontDestroyOnLoad(gameObject);
	}
	void Start () 
	{		
		audioSource = GetComponent<AudioSource>();		
	}

	public void AttachAudio()
	{
		audioSource = Camera.main.GetComponent<AudioSource>();
	}

	public void PlayAppreciateSound()
	{
		StartCoroutine(AppreciateRoutine());
	}

	IEnumerator AppreciateRoutine()
	{
		while (audioSource != null && audioSource.isPlaying)
		{
			yield return new WaitForEndOfFrame();
		}
		if (audioSource != null)
			audioSource.PlayOneShot(appreciate[UnityEngine.Random.Range(0, 22)]);
	}


	public void PlayEncourageSound()
	{
		if (audioSource != null && !audioSource.isPlaying)
		{
			audioSource.PlayOneShot(encourage[UnityEngine.Random.Range(0, 4)]);
		}
	}

	#endregion
}
