using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class FadeTween : MonoBehaviour
{
    public static FadeTween instance;

    public float fadeDuration;
    public CanvasGroup gameUI;
    public GameObject button;
    public TextMeshProUGUI icon;

    private void Awake()
    {
        instance = this;
    }

    private void Update()
    {

#if UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX
        button.SetActive(true);
        if (Input.GetKeyDown(KeyCode.Escape) && !transform.GetChild(0).gameObject.activeSelf)
        {
            FadeIn();
        }
#endif
        icon.text = (PlayerController.instance.tempRespawnPosition + 1).ToString();
    }

    public void FadeIn()
    {
        PowerButtonPress.instance.pressed = false;
        
        PlayerController.instance.GetComponent<FloatUpNDown>().enabled = false;
        gameUI.gameObject.SetActive(false);
        transform.GetChild(0).gameObject.SetActive(true);
        BackgroundMusic.instance.MusicFilter(false);
        PlayerController.instance.trail.Clear();
        PlayerController.instance.trail.enabled = false;
        gameObject.GetComponent<CanvasGroup>().interactable = true;
        if (!PlayerController.instance.isDead)
        {            
            if (PlayerController.instance.gameObject.activeSelf)
            {
                PlayerController.instance.GetComponent<FloatUpNDown>().SetTempPosition();
            }            
        }
        else
        {
            PlayerController.instance.GetComponent<FloatUpNDown>().tempestPos = LevelManager.instance.checkpointHolder.transform.GetChild(PlayerController.instance.tempRespawnPosition).transform.position;
            PlayerController.instance.GetComponent<FloatUpNDown>().tempPos = LevelManager.instance.checkpointHolder.transform.GetChild(PlayerController.instance.tempRespawnPosition).transform.position;
            PlayerController.instance.GetComponent<FloatUpNDown>().tempVal = LevelManager.instance.checkpointHolder.transform.GetChild(PlayerController.instance.tempRespawnPosition).transform.position.y;
        }
        PlayerController.started = false;
        PlayerController.instance.GetComponent<FloatUpNDown>().enabled = true;

    }

    public void DisableFloaty(bool on)
    {
        PlayerController.instance.GetComponent<FloatUpNDown>().enabled = on;
    }

    public void Quit()
    {
        Application.Quit();
    }
}
