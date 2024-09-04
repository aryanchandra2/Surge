using System;
using UnityEngine;
using UnityEngine.UI;

public class Dimensions : MonoBehaviour
{
    public static Dimensions instance;

    [HideInInspector] public Button levelButton;
    public GameObject checkpointHolder;

    [HideInInspector] public GameObject square;
    public GameObject[] levelButtons;
    public int levelNum;
    public string[] dimensionNames;
    public GameObject[] enterPortals;
    public GameObject[] exitPortals;
    public GameObject levelsObject;
    public GameObject tutorialLevel;
    public GameObject eventLevel;

    public void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        tutorialLevel.SetActive(false); 
        enterPortals = GameObject.FindGameObjectsWithTag("World Enter");
        exitPortals = GameObject.FindGameObjectsWithTag("World Point");
        ChangeDimension();
    }

    public void TeleportToLevel(int level)
    {
        if (level == -1) 
        {
            levelNum = -1;
            LoadTutorialLevel();
            return;
        }

        if (level == -2)
        {
            levelNum = -2;
            LoadEventLevel();
            return;
        }

        levelNum = level;
        for (int i = 0; i < levelsObject.transform.childCount; i++)
        {
            print("ruhnig");
            levelsObject.transform.GetChild(i).gameObject.SetActive(false);
        }
        levelsObject.transform.GetChild(levelNum).gameObject.SetActive(true);
        tutorialLevel.SetActive(false);
        eventLevel.SetActive(false);   
        ChangeDimension();

        PlayerController.instance.trail.enabled = false;
        int levelToTP = level;
        GameObject camParent = Camera.main.transform.parent.gameObject;

        camParent.GetComponent<CameraController>().overridePos = true;
        PlayerController.instance.transform.position = checkpointHolder.transform.GetChild(levelToTP).transform.position;
        PlayerController.instance.GetComponent<FloatUpNDown>().SetTempPosition();
        PlayerController.instance.tempRespawnPosition = level;
        PlayerController.instance.GetComponent<Rigidbody2D>().rotation = 0;
        PlayerController.instance.ResetAngles();

    }

    private void LoadEventLevel()
    {
        for (int i = 0; i < levelsObject.transform.childCount; i++)
        {
            print("ruhnig");
            levelsObject.transform.GetChild(i).gameObject.SetActive(false);
        }
        tutorialLevel.SetActive(false);
        eventLevel.SetActive(true);
        ChangeDimension();

        PlayerController.instance.trail.enabled = false;

        GameObject camParent = Camera.main.transform.parent.gameObject;

        camParent.GetComponent<CameraController>().overridePos = true;
        PlayerController.instance.transform.position = Vector3.zero;
        PlayerController.instance.GetComponent<FloatUpNDown>().SetTempPosition();
        PlayerController.instance.tempRespawnPosition = -1;
        PlayerController.instance.GetComponent<Rigidbody2D>().rotation = 0;
        PlayerController.instance.ResetAngles();
    }

    private void LoadTutorialLevel()
    {
        for (int i = 0; i < levelsObject.transform.childCount; i++)
        {
            print("ruhnig");
            levelsObject.transform.GetChild(i).gameObject.SetActive(false);
        }
        eventLevel.SetActive(false);
        tutorialLevel.SetActive(true);
        ChangeDimension();

        PlayerController.instance.trail.enabled = false;

        GameObject camParent = Camera.main.transform.parent.gameObject;

        camParent.GetComponent<CameraController>().overridePos = true;
        PlayerController.instance.transform.position = Vector3.zero;
        PlayerController.instance.GetComponent<FloatUpNDown>().SetTempPosition();
        PlayerController.instance.tempRespawnPosition = -1;
        PlayerController.instance.GetComponent<Rigidbody2D>().rotation = 0;
        PlayerController.instance.ResetAngles();
    }

    public void ChangeDimension()
    {
/*        print("lvlnum: " + levelNum);*/
        if(levelNum == -1)
        {
            SavePowerArray.instance.levelMat = SetDimensionColor.instance.tutMaterial;
            SavePowerArray.instance.zapsMat = SetDimensionColor.instance.tutZap;

            SetDimensionColor.instance.SetDimensionMaterial();
            PlayerController.instance.GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMat;
            PlayerController.instance.trail.material = SavePowerArray.instance.levelMat;

            return;
        }

        if (levelNum == -2)
        {

            AudioTester.instance.eventMusic = true;
            AudioTester.instance.audioSource.Stop();
            AudioTester.instance.PlayRandomSongs();

            SavePowerArray.instance.levelMat = SetDimensionColor.instance.demonMaterial;
            SavePowerArray.instance.zapsMat = SetDimensionColor.instance.demonZap;

            SetDimensionColor.instance.SetDimensionMaterial();
            PlayerController.instance.GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMat;
            PlayerController.instance.trail.material = SavePowerArray.instance.levelMat;

            return;
        }
        AudioTester.instance.eventMusic = false;
        AudioTester.instance.PlayRandomSongs();


        SavePowerArray.instance.levelMat = SetDimensionColor.instance.dimensionMaterials[levelNum];
        SavePowerArray.instance.zapsMat = SetDimensionColor.instance.zapsMaterials[levelNum];

        SetDimensionColor.instance.SetDimensionMaterial();
        PlayerController.instance.GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMat;
        PlayerController.instance.trail.material = SavePowerArray.instance.levelMat;
        
/*        foreach (GameObject level in levelButtons)
        {
*//*            if (Convert.ToInt32(level.name) <= SaveManager.instance.activeSave.respawnPosition)
            {
                level.GetComponent<Button>().interactable = true;
                level.transform.GetChild(2).gameObject.SetActive(false);
                level.transform.GetChild(1).gameObject.SetActive(true);
            }
            else
            {
                level.GetComponent<Button>().interactable = false;
                level.transform.GetChild(2).gameObject.SetActive(true);
                level.transform.GetChild(1).gameObject.SetActive(false);
            }*//*
        }*/
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            ChangeDimension();
        }   
    }
}
