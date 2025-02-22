using UnityEngine;
using UnityEngine.SceneManagement;

public class PreInitializingSceneScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Invoke("Start_InitializingScene", 0.1f);
	}

	void Start_InitializingScene()
    {
		SceneManager.LoadScene("InitializingScene");
	}



}
