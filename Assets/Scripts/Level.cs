using UnityEngine;

public class Level : MonoBehaviour
{
    [HideInInspector]
    public int levelID;

    private void Start()
    {
        levelID = transform.GetSiblingIndex();
    }
}
