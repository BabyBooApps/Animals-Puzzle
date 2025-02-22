using UnityEngine;
using System.Collections;

public class AutoDestroyParticles : MonoBehaviour {

	private ParticleSystem thisParticleSystem ;


	void Start () {

		thisParticleSystem = this.GetComponent<ParticleSystem>();		
		if (!thisParticleSystem.main.loop) {
			Destroy(this.gameObject, thisParticleSystem.main.duration + 0.2f);
		}
	}
	

}
