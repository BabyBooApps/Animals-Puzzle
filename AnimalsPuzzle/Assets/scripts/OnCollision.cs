using UnityEngine;
using System.Collections;

public class OnCollision : MonoBehaviour {

	public GameObject eggParticles;

	private void Start()
	{
		Vector3 nw = new Vector3(0, -1.5F, 0);
		gameObject.GetComponent<Rigidbody2D>().velocity = nw * 2;
	}
	void OnCollisionEnter2D(Collision2D collision)
    {       
        
        if (collision.relativeVelocity.magnitude > 3)
        {
            //Debug.Log(collision.relativeVelocity.magnitude);

            if (gameObject.name.StartsWith("Egg"))
            {
				//GameObject instance = Instantiate(Resources.Load("EggParticles", typeof(ParticleSystem)), gameObject.transform.position, gameObject.transform.rotation) as GameObject;
				GameObject instance = Instantiate(eggParticles, gameObject.transform.position, gameObject.transform.rotation) as GameObject;

			}			
		}
    }  
}
