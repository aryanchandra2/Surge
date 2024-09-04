using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowHover : MonoBehaviour
{
    public GameObject movePoint;
    public Vector3 original;
    public float moveSpeed = 1f;
    // Start is called before the first frame update
    void Start()
    {
        original = transform.localPosition;
        GoToMovePoint();
    }

    public void GoToMovePoint()
    {
        LeanTween.moveLocal(gameObject, movePoint.transform.localPosition, moveSpeed).setOnComplete(GoToOriginal).setEaseInOutSine();
    }

    public void GoToOriginal()
    {
        LeanTween.moveLocal(gameObject, original, moveSpeed).setOnComplete(GoToMovePoint).setEaseInOutSine();
    }
}
