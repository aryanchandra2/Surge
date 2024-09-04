using UnityEngine;

public class TurretScript : MonoBehaviour
{
    [HideInInspector] public GameObject spawnPosition;
    public float shotInterval;
    public float startShotInterval;
    public GameObject projectile;
    [HideInInspector] public GameObject spawnEffect;
    [HideInInspector] public GameObject square;
    public float distance;

    public void Start()
    {
        shotInterval = startShotInterval;
        if (!SavePowerArray.instance.multiplayer)
        {
            square = GameObject.FindGameObjectWithTag("Square");
        }
    }

    [System.Obsolete]
    public void Update()
    {
        if (!SavePowerArray.instance.multiplayer)
        {
            if (PlayerController.started)
            {
                Shot();
            }
        }
        else
        {
            if (GameManagerMP.instance != null)
            {
                if (GameManagerMP.instance.started)
                {
                    ShotMP();
                }
            }            
        }
    }

    private void Shot()
    {
        if (shotInterval <= 0f)
        {
            if (square.activeSelf && Vector3.Distance(gameObject.transform.position, square.transform.position) < distance)
            {
                GameObject spawn = Instantiate(spawnEffect, transform.position, Quaternion.identity);
                spawn.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;

                GameObject proj = Instantiate(projectile, spawnPosition.transform.position, Quaternion.identity, transform);
                proj.GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMat;
                proj.GetComponent<TrailRenderer>().material = SavePowerArray.instance.levelMat;
            }
            shotInterval = startShotInterval;
        }
        else
        {
            shotInterval -= Time.deltaTime;
        }
    }

    private void ShotMP()
    {
        if (shotInterval <= 0f)
        {
            GameObject spawn = Instantiate(spawnEffect, transform.position, Quaternion.identity);
            spawn.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;

            GameObject proj = Instantiate(projectile, spawnPosition.transform.position, Quaternion.identity, transform);
            proj.GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMat;
            proj.GetComponent<TrailRenderer>().material = SavePowerArray.instance.levelMat;
            shotInterval = startShotInterval;
        }
        else
        {
            shotInterval -= Time.deltaTime;
        }
    }
}
