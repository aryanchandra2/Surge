using UnityEngine;

public class PlatformMovement : MonoBehaviour
{
    public Vector3 posA;
    public Vector3 posB;
    public Vector3 nextPos;
    [SerializeField]
    public float speed;
    [SerializeField]
    public Transform childTransform;
    [SerializeField]
    private Transform transformB;
    public LeanTweenType tweenType;
    public bool moving = true;
    public Transform TransformB { get => transformB; set => transformB = value; }

    void Start()
    {
        posA = childTransform.localPosition;
        posB = TransformB.localPosition;
        nextPos = posB;
        moving = true;
    }

    void Update()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            if (GameManagerMP.instance != null)
            {
                if (GameManagerMP.instance.started)
                {
                    MoveMP();
                }
            }                
        }
        else
        {
            if (PlayerController.started && moving)
            {
                Move();
            }
            else
            {
                LeanTween.pause(gameObject);
            }
        }
        
    }

    private void Move()
    {
        if (!LeanTween.isTweening(childTransform.gameObject))
        {
            LeanTween.moveLocal(childTransform.gameObject, nextPos, speed).setEase(tweenType);
        }

        if (Vector3.Distance(childTransform.localPosition, nextPos) <= 0.1)
        {
            ChangeDestination();
        }
    }

    private void MoveMP()
    {
        if (!LeanTween.isTweening(childTransform.gameObject))
        {
            LeanTween.moveLocal(childTransform.gameObject, nextPos, speed).setEase(tweenType);
        }

        if (Vector3.Distance(childTransform.localPosition, nextPos) <= 0.1)
        {
            ChangeDestination();
        }
    }

    private void ChangeDestination()
    {
        nextPos = nextPos != posA ? posA : posB;
    }

}
