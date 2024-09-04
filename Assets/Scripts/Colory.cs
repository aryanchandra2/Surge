using UnityEngine;

public class Colory : MonoBehaviour
{
    public Color32 colory = new Color32(255, 255, 0, 255);

    void Update()
    {
        gameObject.GetComponent<SpriteRenderer>().color = colory;

        if (colory[1] > 0)
        {
            colory[0]--;
        }
        if (colory[1] == 0 && colory[2] == 0)
        {

        }
        
    }
}
