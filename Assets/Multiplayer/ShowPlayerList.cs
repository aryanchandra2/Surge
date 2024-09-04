using UnityEngine;

public class ShowPlayerList : MonoBehaviour
{
    public CanvasGroup playersUI;
    bool showing = false;

    public void ShowList()
    {
        if (!showing)
        {
            LeanTween.moveLocalX(gameObject, -550f, 0.25f).setEaseOutExpo();
            LeanTween.alphaCanvas(playersUI, 1f, 0.25f).setEaseOutExpo();
            showing = true;
        }
        else
        {
            LeanTween.moveLocalX(gameObject, -700, 0.25f).setEaseOutExpo();
            LeanTween.alphaCanvas(playersUI, 0f, 0.25f).setEaseOutExpo();
            showing = false;
        }
    }
    
}
