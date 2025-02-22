using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{

	public GameObject quitCanvas;
	public AudioSource audioSource;
	public AudioClip audioclip;

	public GameObject homeBtn;
	public GameObject nextBtn;
	public GameObject quitBtn;

	public Transform Adbox;

	private void Awake()
	{
		homeBtn.SetActive(false);
		nextBtn.SetActive(false);
		if (SceneManager.GetActiveScene().name.Equals("Menu"))
		{
			quitBtn.SetActive(true);			
		}
		else
		{
			Invoke("EnableButtons", 2f);
		}
		Adbox.SetAsLastSibling();
	}

	void EnableButtons()
	{
		homeBtn.SetActive(true);
		nextBtn.SetActive(true);
	}

	public void LoadPlayScene()
	{
		
		PlaySound();
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
	}

	public void OpenPlaystore(string url)
	{
		PlaySound();
		Application.OpenURL("https://play.google.com/store/apps/details?id=" + url);
	}

	void PlaySound()
	{
		//audioSource.PlayOneShot(audioclip);
		audioSource.Play();
	}
	/*
	public void ToggleMusic()
	{		
		PlaySound ();
		AudioSource audio = GameObject.Find ("BackgroundMusic").GetComponent<AudioSource> ();
		if(audio.isPlaying){
			muteSound = true;
		}else{
			muteSound = false;
		}
		
		if(muteSound)
		{
			//AudioListener.volume =  0.0f;
			musicButton.image.overrideSprite = soundOff;
			GameObject.Find("BackgroundMusic").GetComponent<AudioSource>().Pause() ;
		}
		else
		{
			//AudioListener.volume =  1.0f;
			musicButton.image.overrideSprite = soundOn;
			GameObject.Find("BackgroundMusic").GetComponent<AudioSource>().UnPause() ;
		}
	}
    */

	public void LoadScene(string sceneName)
	{
		PlaySound();
		SceneManager.LoadScene(sceneName);
	}


	public void ShowQuitDialog()
	{
		PlaySound();
		quitCanvas.SetActive(true);
		//DisplayAds.HideBannerAd();
	}


	public void HideQuitDialog()
	{
		PlaySound();
		quitCanvas.SetActive(false);
		//DisplayAds.ShowBannerAd();
	}


	public void Quit()
	{
		PlaySound();
		Application.Quit();
	}

}
