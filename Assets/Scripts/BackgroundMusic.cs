using UnityEngine;
using DG.Tweening;

public class BackgroundMusic : MonoBehaviour
{
    public static BackgroundMusic instance;
    public AudioLowPassFilter audioLowPassFilter;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        audioLowPassFilter = GetComponent<AudioLowPassFilter>();
    }

    public void MusicFilter(bool start)
    {
        print("odp");
        if (start)
        {
            print("op");
            DOTween.To(() => audioLowPassFilter.cutoffFrequency, x => audioLowPassFilter.cutoffFrequency = x, 22000f, 1f);
        }
        else
        {
            DOTween.To(() => audioLowPassFilter.cutoffFrequency, x => audioLowPassFilter.cutoffFrequency = x, 900f, 1f);
        }
    }

}
