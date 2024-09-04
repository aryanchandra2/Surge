using UnityEngine;

public class CameraController : MonoBehaviour
{
    public Transform target;

    public float offsetZ = -10f;
    public float smoothSpeed = 10f;
    public Vector3 offset;
    public Vector3 smoothedPosition;
    public Vector3 desiredPosition;
    public bool overridePos;

    public void Start()
    {
        transform.position = target.position;
        transform.GetChild(0).GetChild(0).gameObject.SetActive(true);
        transform.GetChild(0).GetComponent<Camera>().fieldOfView = 110;
    }

    public void FixedUpdate()
    {
        if (!overridePos)
        {
            desiredPosition = target.position + offset;
            smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed * Time.unscaledDeltaTime);
            transform.position = smoothedPosition;
        }
        else
        {
            transform.position = target.position;
            overridePos = false;
        }
        
    }

    public void Update()
    {
        offset = new Vector3(target.GetComponent<Rigidbody2D>().velocity.x / 2, target.GetComponent<Rigidbody2D>().velocity.y / 2, offsetZ);
    }

}