using UnityEngine;

public class Projectile : MonoBehaviour
{
    public float speed;
    public GameObject deathEffect;
    private Transform target;
    public bool go;
    public bool gravity = false;

    private void Awake()
    {
        if (name == "GravityProjectile(Clone)")
        {
            gravity = true;
        }
    }

    public void Update()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            go = true;
        }
        else
        {
            go = PlayerController.started;
        }


        if (go)
        {
            if (gravity)
            {
                GetComponent<Rigidbody2D>().AddTorque(1);
            }
            target = gameObject.transform.parent.GetChild(0);
            gameObject.transform.position = Vector3.MoveTowards(gameObject.transform.position, new Vector2(target.transform.position.x, target.transform.position.y), speed * Time.deltaTime);
            if (gameObject.transform.position == target.transform.position)
            {
                Destroy(gameObject);
            }
        }
        
    }
    public void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject != GameObject.Find("Square"))
        {
            GameObject explode = Instantiate(deathEffect, transform.position, Quaternion.identity);
            explode.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;
        }
        
        Destroy(gameObject);
    }
}
