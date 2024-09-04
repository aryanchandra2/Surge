using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DestroyFeed : MonoBehaviour
{
    public float destroyTime = 4f;

    public void OnEnable()
    {
        StartCoroutine(FadeText());
    }

    public IEnumerator FadeText()
    {
        yield return new WaitForSeconds(destroyTime);
        LeanTween.alphaCanvas(GetComponent<CanvasGroup>(), 0f, 0.75f).setOnComplete(Destry);
        
    }

    public void Destry()
    {
        Destroy(gameObject);
    }
    
}
