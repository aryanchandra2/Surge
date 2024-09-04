using UnityEngine;

public class Gyroscope : MonoBehaviour
{
    public GameObject square;

    void Start()
    {
        if (GameObject.FindGameObjectWithTag("Square") != null)
        {
            square = GameObject.FindGameObjectWithTag("Square");
        }
        if (GameObject.FindGameObjectWithTag("SquareMP") != null)
        {
            square = GameObject.FindGameObjectWithTag("SquareMP");
        }
    }
    
    void Update()
    {
        GetComponent<RectTransform>().eulerAngles = square.transform.eulerAngles;
    }
}
