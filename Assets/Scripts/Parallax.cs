using UnityEngine;

public class Parallax : MonoBehaviour
{
    public Transform cam;
    public float relativeMove = 0.3f;

    void Start()
    {
        if (GameObject.FindGameObjectWithTag("Square") != null)
        {
            cam = GameObject.FindGameObjectWithTag("Square").transform;
        }
        relativeMove = Random.Range(1, 9);
    }

    void Update()
    {
        transform.position = new Vector2(cam.position.x * relativeMove, cam.position.y * relativeMove);
    }
}
