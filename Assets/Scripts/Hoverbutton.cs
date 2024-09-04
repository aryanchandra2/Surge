using UnityEngine.EventSystems;
using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;

public class Hoverbutton : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{   
    public Vector3 originalScale;

    private void Start()
    {
        originalScale = transform.localScale;
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (TryGetComponent<Button>(out _))
        {
            if (GetComponent<Button>().interactable)
            {
                Biggen();
            }
        }
        else
        {
            Biggen();
        }              
    }

    private void Biggen()
    {
        AudioTester.instance.PlayClick();
        Vector3 tempScale = originalScale * 1.08f;
        LeanTween.scale(gameObject, tempScale, 0.1f).setEaseLinear();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        LeanTween.scale(gameObject, originalScale, 0.1f).setEaseLinear();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        AudioTester.instance.PlayClick();
    }

}
