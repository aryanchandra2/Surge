using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attractor : MonoBehaviour
{
	const float G = 667.4f;

	public Attractor target;

	public Rigidbody2D rb;

	void FixedUpdate()
	{
		if (gameObject.CompareTag("BlackHole"))
			Attract(target);
	}

    private void Start()
    {
		StartCoroutine(OpenLocate());
    }

	private IEnumerator OpenLocate()
    {
		yield return new WaitForSeconds(2f);
		LocateAttractors();
    }

	public void LocateAttractors()
    {

		if (gameObject.CompareTag("BlackHole"))
        {
			if (SavePowerArray.instance.multiplayer)
            {
				target = GameManagerMP.instance.myPlayer.GetComponent<Attractor>();
            }
		}
	}

	void Attract(Attractor objToAttract)
	{
		bool ded;
		if (SavePowerArray.instance.multiplayer)
        {
			ded = GameManagerMP.instance.myPlayer.GetComponent<PlayerControllerMP>().isDead;
        }
        else
        {
			ded = PlayerController.instance.isDead;
		}

		if (!ded)
        {
			Rigidbody2D rbToAttract = objToAttract.rb;

			Vector3 direction = rb.position - rbToAttract.position;
			float distance = direction.magnitude;

			if (distance == 0f)
				return;

			float forceMagnitude = G * (rb.mass * rbToAttract.mass) / Mathf.Pow(distance, 2);
			Vector3 force = direction.normalized * forceMagnitude;

			rbToAttract.AddForce(force);
		}
		
	}

}