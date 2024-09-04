using UnityEngine;

public class FloatUpNDown : MonoBehaviour
{
    public float amplitude;
    public float speed;
    public float tempVal;
    public Vector3 tempPos;
    public Vector3 tempestPos;

    public void Start()
    {
        SetTempPosition();
    }
    
    public void SetTempPosition()
    {
        tempestPos = transform.position;
        tempPos = transform.position;
        tempVal = transform.position.y;
    }

    public void Update()
    {        
        tempPos.y = tempVal + amplitude * Mathf.Sin(speed * Time.time);
        transform.position = tempPos;
    }
}
