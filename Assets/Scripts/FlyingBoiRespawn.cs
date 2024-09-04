using UnityEngine;

public class FlyingBoiRespawn : MonoBehaviour
{
    public GameObject flyingBoi;
    public GameObject deathEffect;
    public float targetTime = 5.0f;

    void Update()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            if (GameManagerMP.instance.started)
            {
                targetTime -= Time.deltaTime;
                if (targetTime <= 0.0f)
                {
                    TimerEnded();
                }
            }
        }
        else
        {
            if (PlayerController.started)
            {
                targetTime -= Time.deltaTime;
                if (targetTime <= 0.0f)
                {
                    TimerEnded();
                }
            }
        }
        
    }

    public void TimerEnded()
    {
        GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
        death.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;

        Destroy(gameObject);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Square"))
        {
            TimerEnded();
        }
    }
}
