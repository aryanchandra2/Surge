using UnityEngine;

public class ApplicationSet : MonoBehaviour
{
    public int target = 10000;

    private void Start()
    {
        QualitySettings.vSyncCount = 0;
    }

    private void Update()
    {
        if (target != Application.targetFrameRate)
        {
            Application.targetFrameRate = target;
        }
    }

}
