using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlyingProjectile : MonoBehaviour
{
    public float speed;
    public GameObject deathEffect;
    public GameObject target;
    public bool go;
    public bool multiplayer;

    public void Update()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            if (!target.GetComponent<SpriteRenderer>().enabled)
            {
                DestroyProjectile();
            }            

            if (GameManagerMP.instance.started)
            {
                Shoot();
            }
        }
        else
        {
            if (PlayerController.started)
            {
                Shoot();
            }
        }
    }

    private void Shoot()
    {
        if (target.activeSelf || target.GetComponent<SpriteRenderer>().enabled)
        {
            transform.position = Vector2.MoveTowards(transform.position, target.transform.position, speed * Time.deltaTime);
        }
        else
        {
            DestroyProjectile();
        }
    }

    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Dedley") || other.CompareTag("Projectile") || other.CompareTag("Turret") || other.CompareTag("Ground"))
        {
            DestroyProjectile();
        }
    }

    void DestroyProjectile()
    {
        GameObject explode = Instantiate(deathEffect, transform.position, Quaternion.identity);
        explode.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;
        Destroy(gameObject);
    }
}
