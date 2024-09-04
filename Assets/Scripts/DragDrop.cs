using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class DragDrop : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
    private CanvasGroup canvasGroup;
    private Vector3 defaultPos;
    [HideInInspector] public bool droppedOnSlot;
    [HideInInspector] public GameObject equip;
    [HideInInspector] public GameObject equipMenu;

    [Header("Power Identification")]
    public int ID;
    public int cost;
    public float depletionRate;
    public Color32 squareColor;
    [Multiline] public string description;
    public string rarity;

    public void Awake()
    {
        rarity = transform.parent.name;
        transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = name;
        canvasGroup = GetComponent<CanvasGroup>();
        defaultPos = transform.localPosition;
    }

    private void Update()
    {
        
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        defaultPos = transform.localPosition;
        canvasGroup.alpha = 0.6f;
        canvasGroup.blocksRaycasts = false;
        droppedOnSlot = false;
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector3 tarPos = Camera.main.ScreenToWorldPoint(new Vector3(eventData.position.x, eventData.position.y));
        tarPos.z = transform.position.z;
        transform.SetParent(equipMenu.transform);
        transform.position = tarPos;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        canvasGroup.alpha = 1f;
        canvasGroup.blocksRaycasts = true;
        if (!droppedOnSlot)
        {
            transform.localPosition = defaultPos;
            transform.SetParent(equip.transform);
            transform.GetChild(0).localScale = new Vector3(1f, 1f, 1f);
            GetComponent<Hoverbutton>().originalScale = new Vector3(1, 1, 1);
            transform.localScale = eventData.pointerDrag.GetComponent<Hoverbutton>().originalScale;

        }
    }
}
