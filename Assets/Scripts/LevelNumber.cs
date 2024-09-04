using TMPro;
using UnityEngine;

public class LevelNumber : MonoBehaviour
{
    void Update()
    {
        GetComponent<TextMeshProUGUI>().text = (SaveManager.instance.activeSave.respawnPosition + 1).ToString();
    }
}
