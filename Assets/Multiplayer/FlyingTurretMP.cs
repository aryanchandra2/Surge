using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;


public class FlyingTurretMP : MonoBehaviour
{
    public int turretID = 0;

    public GameObject spawnPosition;
    public float shotInterval;
    public float startShotInterval;
    public bool collided;
    private GameObject spawnEffect;
    public GameObject target;
    public GameObject projectile;
    public float distance;
    public GameObject closestPlayer = null;
    public bool canShoot = true;

    void Start()
    {
        spawnEffect = GameManagerMP.instance.spawnEffect;
        spawnPosition = transform.GetChild(1).gameObject;
        projectile = GameManagerMP.instance.flyingProjectileMP;
        GameManagerMP.instance.flyingTurretMPs.Add(GetComponent<FlyingTurretMP>());
        for (int i = 0; i < GameManagerMP.instance.flyingTurretMPs.Count; i++)
        {
            if (GetComponent<FlyingTurretMP>() == GameManagerMP.instance.flyingTurretMPs[i])
            {
                turretID = i;
            }
        }
    }

    void Update()
    {
        if (GameManagerMP.instance.started)
        {
            if (shotInterval <= 0f)
            {
                if (GameManagerMP.instance.master)
                {
                    SendShootRPC();
                }
                shotInterval = startShotInterval;
            }
            else
            {
                shotInterval -= Time.deltaTime;
            }
        }
    }


    void SendShootRPC()
    {
        float distanceToClosestPlayer = Mathf.Infinity;
        closestPlayer = null;

        print("players: " + PlacementAssigner.instance.players.Count);

        foreach (GameObject currentPlayer in PlacementAssigner.instance.players)
        {
            if (currentPlayer != null)
            {
                print("current player:" + currentPlayer);

                float distanceToEnemy = (currentPlayer.transform.position - transform.position).sqrMagnitude;
                if (distanceToEnemy < distanceToClosestPlayer)
                {
                    distanceToClosestPlayer = distanceToEnemy;
                    closestPlayer = currentPlayer;
                }
            }

        }

        print("clostst enment:" + closestPlayer);

        if (closestPlayer != null)
        {
            for (int i = 0; i < PlacementAssigner.instance.players.Count; i++)
            {
                print("snedning rpc" + PlacementAssigner.instance.players.Count);
                PlacementAssigner.instance.players[i].GetComponent<PlayerControllerMP>().photonView.RPC("SendSpawnerTargeting", RpcTarget.AllViaServer, closestPlayer.name, turretID); //All means all clones
            }
            Debug.DrawLine(transform.position, closestPlayer.transform.position);
        }
    }

    public void SpawnProjectile()
    {
        if (canShoot)
        {
            StartCoroutine(SpawnDelay());
        }
    }

    private IEnumerator SpawnDelay()
    {
        canShoot = false;
        
        Instantiate(spawnEffect, transform.position, Quaternion.identity);
        GameObject proj = Instantiate(projectile, spawnPosition.transform.position, Quaternion.identity, transform);
        proj.GetComponent<FlyingProjectile>().target = target;

        shotInterval = startShotInterval;

        proj.GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMat;
        proj.GetComponent<TrailRenderer>().material = SavePowerArray.instance.levelMat;

        yield return new WaitForSeconds(0.2f);
        canShoot = true;
    }
}