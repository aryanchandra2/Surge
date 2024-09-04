using UnityEngine;

public class NameTag : MonoBehaviour
{
    private Quaternion rotation;
    private Vector3 position;

    private void Awake()
    {
        rotation = transform.rotation;
    }

    void Update()
    {
        transform.rotation = rotation;
        position = new Vector3(transform.parent.position.x, transform.parent.position.y + 1);
        transform.position = position;
    }
}
