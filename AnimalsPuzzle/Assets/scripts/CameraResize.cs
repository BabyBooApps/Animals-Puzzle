using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class CameraResize : MonoBehaviour 
{
	public GameObject background;
	public GameObject Floor;

	float orthographicSize = 6;
	float aspect = 1.55f;
    
    Camera cam;
	

	void Awake()
	{
		cam = Camera.main;		
			if (StaticArrays.aspect == 0f)
			{
				float screenAspect = (float)Screen.width / (float)Screen.height;
				StaticArrays.aspect = screenAspect;
			}
			aspect = StaticArrays.aspect;
			if (aspect <= 1.6f)
			{
				cam.orthographicSize = cam.orthographicSize * (2.298f - (0.749f * aspect));

			}

			Resize();
		
	}


	
	void Resize()
	{
		SpriteRenderer sr = background.GetComponent<SpriteRenderer>();
		if(sr==null) return;

		float worldScreenHeight = 2f * cam.orthographicSize;
		float worldScreenWidth = 2f * cam.orthographicSize * aspect;

		float heightScale = (float) worldScreenHeight / (float)sr.sprite.bounds.size.y ;
		float widthScale = (float) worldScreenWidth / (float)sr.sprite.bounds.size.x ;
        //Debug.Log(aspect);
        Vector3 pos = Floor.transform.position;
        float factor = (cam.orthographicSize - 6f)/aspect;
        Floor.transform.position = new Vector3(pos.x, pos.y - factor, pos.z);

		background.transform.localScale = new Vector3(widthScale, heightScale, 1);
      
        if (StaticArrays.leftX == 0f)
        {   
            StaticArrays.leftX = -(Camera.main.orthographicSize * Camera.main.aspect) + 2.0f;           
        }

    }
	

}
