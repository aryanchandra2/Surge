using UnityEngine;
using UnityEngine.UI;

public class SavePowerArray : MonoBehaviour
{
    public static SavePowerArray instance;

    public string gameCode;

    public Material levelMat;
    public Material zapsMat;

    public Material levelMatMP;
    public Material zapsMatMP;

    public bool creator;
    public bool publicGame;

    public bool multiplayer;

    public string username;

    public void Awake()
    {
        ChangeMultiplayerState();
        if (instance == null)
        {
            DontDestroyOnLoad(gameObject);
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }
    }

    public void Start()
    {
        username = SaveManager.instance.activeSave.username;
        
    }

    public void SetMat()
    {
        levelMat = levelMatMP;
        zapsMat = zapsMatMP;

        foreach (GameObject UIobject in GameManagerMP.instance.ui)
        {
            if (UIobject.TryGetComponent<Image>(out _))
            {
                UIobject.GetComponent<Image>().material = levelMat;
            }
        }
        GameObject.Find("Zap Particle").GetComponent<Renderer>().material = zapsMat;

        
    }

    public void ChangeMultiplayerState()
    {
        if (GameManagerMP.instance != null)
        {
            multiplayer = true;
        }
        else
        {
            multiplayer = false;
        }
    }
}
