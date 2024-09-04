using UnityEngine;

public class FlyingTurretScript : MonoBehaviour
{

    [HideInInspector] public GameObject spawnPosition;
    [HideInInspector] public float shotInterval;
    public float startShotInterval;
    public GameObject spawnEffect;
    [HideInInspector] public GameObject square;
    [HideInInspector] public GameObject projectile;
    public float distance;

    [HideInInspector] public GameObject closestEnemy = null;

    public void Awake()
    {

        spawnPosition = transform.GetChild(1).gameObject;
        square = GameObject.FindGameObjectWithTag("Square");

    }

    public void Start()
    {
        shotInterval = startShotInterval;
        
    }

    [System.Obsolete]
    public void Update()
    {
        if (Vector3.Distance(transform.position, square.transform.position) < distance)
        {
            if (PlayerController.started)
            {
                if (shotInterval <= 0f)
                {
                    Instantiate(spawnEffect, transform.position, Quaternion.identity);
                    GameObject proj = Instantiate(projectile, spawnPosition.transform.position, Quaternion.identity, transform);
                    proj.GetComponent<FlyingProjectile>().target = square;
                    
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
        else
        {
            shotInterval = startShotInterval;
        }

    }

    
}
