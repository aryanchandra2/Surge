using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Xml;
using System.Xml.Serialization;

public class SaveManager : MonoBehaviour
{

    public static SaveManager instance;

    public SaveData activeSave;
    public CanvasGroup fadeScreen;
    public bool hasLoaded;

    [System.Obsolete]
    public void Awake()
    {
        fadeScreen.alpha = 1;
        instance = this;

        Load();
    }

    public void Save()
    {
        string dataPath = Application.persistentDataPath;

        var serializer = new XmlSerializer(typeof(SaveData));
        var stream = new FileStream(dataPath + "/" + activeSave.saveName + ".save", FileMode.Create);
        serializer.Serialize(stream, activeSave);
        stream.Close();
    }

    [System.Obsolete]
    public void Load()
    {
        string dataPath = Application.persistentDataPath;

        if(File.Exists(dataPath + "/" + activeSave.saveName + ".save"))
        {
            var serializer = new XmlSerializer(typeof(SaveData));
            var stream = new FileStream(dataPath + "/" + activeSave.saveName + ".save", FileMode.Open);
            activeSave = serializer.Deserialize(stream) as SaveData;
            stream.Close();

            hasLoaded = true;
            
        }
        StartCoroutine(StartFade());
    }

    public IEnumerator StartFade()
    {
        yield return new WaitForSeconds(2f);
        LeanTween.alphaCanvas(fadeScreen, 0f, 0.5f).setOnComplete(OpenLoggedInAlert);

    }

    private void OpenLoggedInAlert()
    {
        //PlayfabManager.instance.OpenLogoutPanel();
    }

    public void DeleteSaveData()
    {
        string dataPath = Application.persistentDataPath;

        if (File.Exists(dataPath + "/" + activeSave.saveName + ".save"))
        {
            File.Delete(dataPath + "/" + activeSave.saveName + ".save");
        }

    }

}

[System.Serializable]
public class SaveData
{
    public string saveName;

    public int respawnPosition;
    public int test;

    public string email;
    public string password;
    public string username;

    public bool musicToggle;
    public bool sfxToggle;

    public int keys;
    public string unlocks;

    public float eventTime;

    public List<float> times = new List<float>();
}
