using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BubbleBurst : MonoBehaviour {

    public ParticleSystem particleSystem;    
    
    IEnumerator Die()
    {
        //particleSystem.emission = true;
        //particleSystem.GetComponent<ParticleEmitter>().enabled = true;
        //GetComponent("ParticleRenderer").enabled = true;
        GetComponent<SpriteRenderer>().enabled = false;
        particleSystem.Play();
        yield return new WaitForSeconds(0.5f);
        //Debug.Log("bye");
        Destroy(gameObject);
    }


    void OnMouseDown()
    {
		GetComponent<AudioSource>().Play();
        float bubbleWidth = gameObject.GetComponent<SpriteRenderer>().bounds.size.x;    
        ParticleSystem.ShapeModule shapeModule = particleSystem.shape;
        shapeModule.radius = bubbleWidth / 2;
        //Debug.Log("hi");
        StartCoroutine(Die());
    }

	private void OnCollisionEnter2D(Collision2D collision)
	{
		if(collision.collider.gameObject.tag == "bubble")
		{
			Physics2D.IgnoreCollision(collision.collider,gameObject.GetComponent<Collider2D>());
		}
	}
}
