using UnityEngine;
using TMPro;
using DG.Tweening;
using UnityEngine.EventSystems;

public class MenuController : MonoBehaviour
{
    public static MenuController instance;

    public RectTransform menuContainer;
    
    [SerializeField] private bool smooth = true;
    [SerializeField] private float smoothSpeed = 0.1f;
    [SerializeField] private Vector3 desiredPosition;
    public int currentMenuID;
    public GameObject ambient;
    public Vector3[] menuPositions;
    public GameObject privateGameLevels;
    public GameObject bg;

    private void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        DOTween.To(() => transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>().characterSpacing, x => transform.GetChild(0).GetChild(0).GetComponent<TMP_Text>().characterSpacing = x, 70, 1);

        bg.SetActive(true);
        menuPositions = new Vector3[menuContainer.childCount];
        for (int i = 0; i < menuPositions.Length; i++)
        {
            menuPositions[i] = menuContainer.GetChild(i).localPosition;
        }
    }

    public void Update()
    {
        if (smooth)
        {
            menuContainer.anchoredPosition = Vector3.Lerp(menuContainer.anchoredPosition, desiredPosition, smoothSpeed * Time.deltaTime);
        }
        else
        {
            menuContainer.anchoredPosition = desiredPosition;
        }
    }

    public void MoveMenu(int id)
    {        
        if (id == 1)
        {
            privateGameLevels.SetActive(false);
        }
        else
        {
            privateGameLevels.SetActive(true);
        }
        if (id == 0)
        {
            for (int i = 1; i <  transform.childCount; i++)
            {
                transform.GetChild(i).GetChild(0).GetComponent<TMP_Text>().characterSpacing = 50;
            }
            ambient.SetActive(false);
        }
        else
        {
            DOTween.To(() => transform.GetChild(id).GetChild(0).GetComponent<TMP_Text>().characterSpacing, x => transform.GetChild(id).GetChild(0).GetComponent<TMP_Text>().characterSpacing = x, 70, 1);
            ambient.SetActive(true);
        }
        print(134);
        desiredPosition = -menuPositions[id];
        currentMenuID = id;
    }
}
