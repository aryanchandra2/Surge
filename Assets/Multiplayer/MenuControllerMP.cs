using Photon.Pun;
using Photon.Realtime;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

public class MenuControllerMP : MonoBehaviourPunCallbacks
{
    public static MenuControllerMP instance;

    [SerializeField] private readonly string versionName = "0.1";

    public TMP_InputField joinGameInput;
    public CanvasGroup fadeScreen;
    public ParticleSystem ambientParticle;
    public GameObject rankedMenu;
    public GameObject privateMenu;
    public GameObject rankButton;
    public GameObject privateButton;
    public Button playRanked;
    public Button joinGameButton;
    public Button createGameButton;
    public GameObject MPPanel;
    public string levelName;

    const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";           
    public string gameCode;
    public int selectedSceneID;

    public void Awake()
    {
        instance = this;
        PhotonNetwork.ConnectUsingSettings();
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    private void Start()
    {
        SetDimensionColor.instance.SetDimensionMaterial();

    }

    private void Update()
    {
        if (Input.GetKeyUp(KeyCode.L)) {
            TypedLobby lobby = new TypedLobby("myLobby", LobbyType.Default);
            PhotonNetwork.GetCustomRoomList(lobby, "your filter criteria");
        }

    }

    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby(TypedLobby.Default);
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    public void JoinInput()
    {
        if (joinGameInput.text.Length > 0)
        {
            joinGameInput.text = joinGameInput.text.ToUpper();            
        }
        if (joinGameInput.text.Length >= 4)
        {
            joinGameButton.interactable = true;
        }
        else
        {
            joinGameButton.interactable = false;
        }
    }

    public void CreateGame(string level)
    {
        Material matSelected = SetDimensionColor.instance.dimensionMaterials[int.Parse(level.Substring(0, 1)) - 1];
        Material zapMatSelected = SetDimensionColor.instance.zapsMaterials[int.Parse(level.Substring(0, 1)) - 1];
        SavePowerArray.instance.levelMatMP = matSelected;

        print("gob3");
        SavePowerArray.instance.zapsMatMP = zapMatSelected;
        levelName = level;
        createGameButton.interactable = false;
        gameCode = null;
        for (int i = 0; i < 4; i++)
        {
            gameCode += alphabet[Random.Range(0, alphabet.Length)];
        }
        SavePowerArray.instance.gameCode = gameCode;

        SavePowerArray.instance.creator = true;
        SavePowerArray.instance.publicGame = false;
        PhotonNetwork.CreateRoom(gameCode, new RoomOptions() { MaxPlayers = 5 }, null);
    }

    public void JoinGame()
    {
        if (PhotonNetwork.IsConnected)
        {
            print("random join sss");

            LeanTween.alphaCanvas(fadeScreen, 1, 0.5f).setEaseOutExpo();
            ambientParticle.gameObject.SetActive(false);
            SavePowerArray.instance.creator = false;
            SavePowerArray.instance.publicGame = false;
            SavePowerArray.instance.gameCode = joinGameInput.text;
            print("gobstopper1");

            PhotonNetwork.JoinRoom(joinGameInput.text);
        }
        else
        {
            print("wasnt connected");
        }
    }

    public override void OnJoinedLobby()
    {
        print("lobbyed");
    }

    public override void OnJoinedRoom()
    {
        SavePowerArray.instance.multiplayer = true;
        if (!SavePowerArray.instance.publicGame)
        {
            print("gobstopper2");

            PhotonNetwork.LoadLevel(levelName);
        }
        else
        {
            if (PhotonNetwork.IsMasterClient)
            {
                SavePowerArray.instance.levelMatMP = SetDimensionColor.instance.dimensionMaterials[selectedSceneID - 1];
                SavePowerArray.instance.zapsMatMP = SetDimensionColor.instance.zapsMaterials[selectedSceneID - 1];
                PhotonNetwork.LoadLevel(selectedSceneID);
            }
        }
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        print(message);

    }    

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        for (int i = 0; i < roomList.Count; i++)
        {
            print(roomList[i].Name);
        }
    }

    public void JoinRandomGame()
    {
        print("gobstopper3");

        if (PhotonNetwork.IsConnected)
        {
            print("random join good");

            LeanTween.alphaCanvas(fadeScreen, 1, 0.5f).setEaseOutExpo();
            ambientParticle.gameObject.SetActive(false);
            SavePowerArray.instance.publicGame = true;
            PhotonNetwork.JoinRandomRoom();
        }
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        print("random join fail");
        playRanked.interactable = false;

        PhotonNetwork.CreateRoom(Random.Range(0,int.MaxValue).ToString(), new RoomOptions() { MaxPlayers = 5 , IsVisible = true, IsOpen = true}, null);
    }

    public override void OnCreatedRoom()
    {
        selectedSceneID = Random.Range(1, 6);
    }

    public void RankedGameMenu()
    {
        rankedMenu.SetActive(true);
        privateMenu.SetActive(false);
        LeanTween.alphaCanvas(privateButton.GetComponent<CanvasGroup>(), 0.7f, 0.25f).setEaseOutExpo();
        LeanTween.alphaCanvas(rankButton.GetComponent<CanvasGroup>(), 1f, 0.25f).setEaseOutExpo();
    }

    public void PrivateGameMenu()
    {
        privateMenu.SetActive(true);
        rankedMenu.SetActive(false);
        LeanTween.alphaCanvas(privateButton.GetComponent<CanvasGroup>(), 1f, 0.25f).setEaseOutExpo();
        LeanTween.alphaCanvas(rankButton.GetComponent<CanvasGroup>(), 0.7f, 0.25f).setEaseOutExpo();
    }

    public void OpenYoutubeLink()
    {
        Application.OpenURL("https://www.youtube.com/channel/UCa_I_IeecLRIVddeIHmVpTw?sub_confirmation=1");
    }


}
