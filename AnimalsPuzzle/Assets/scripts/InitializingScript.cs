using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;



public class InitializingScript : MonoBehaviour
{

	#region Variables
	
	public Sprite[] animals_sprites;
	public Sprite[] animals_shadows;
    
    public AudioClip[] animalNameAudio;
    public AudioClip[] animalSoundAudio;
    
	#endregion

	#region Unity Methods
	void Start()
	{

		

		DataFeed.DataGen(animals_sprites, animals_shadows, animalNameAudio, animalSoundAudio);

        System.GC.Collect();

		DataFeed.CheckForNullValues(2);
		DataFeed.CheckForNullValues(3);
		DataFeed.CheckForNullValues(4);
		DataFeed.CheckForNullValues(5);
        DataFeed.CheckForNullValues(6);
		//SceneManager.LoadScene("GameScene");
		//SceneManager.LoadScene("PuzzleScene");

		Invoke("Load_Menu", 0.1f);
	}

	void Load_Menu()
    {
		SceneManager.LoadScene("Menu");
	}

	#endregion
}
