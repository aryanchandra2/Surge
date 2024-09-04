using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using PlayFab.ClientModels;
using System.Collections.Generic;
using PlayFab;
using System.Collections;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class GameManagerMP : MonoBehaviourPunCallbacks
{
    public bool started;

    public ParticleSystem ambientParticle;

    public CanvasGroup fadeScreen;
    public CanvasGroup startFadeScreen;

    public static GameManagerMP instance;
    public GameObject myPlayer;

    [HideInInspector] public GameObject playerPrefab;
    public Transform spawnPoint;

    [HideInInspector] public GameObject disconnectUI;
    private bool off;

    [HideInInspector] public GameObject playerFeed;
    [HideInInspector] public GameObject feedGrid;
    [HideInInspector] public TMP_Text gameCodeText;


    [HideInInspector] public Canvas canvas;
    public GameObject spectatePanel;
    [HideInInspector] public GameObject gameUI;
    [HideInInspector] public GameObject disconnectPanel;
    [HideInInspector] public GameObject endPanel;
    [HideInInspector] public GameObject waitingPanel;

    public GameObject spawnEffect;
    public GameObject flyingProjectileMP;

    [HideInInspector] public GameObject gameCodeLabel;
    public GameObject spectateButton;

    public TMP_Text spectatingName;
    public int spectatingPlayer;
    public CanvasGroup finishButtons;
    public TMP_Text mainPlacementText;
    public TMP_Text animTrophyGained;
    public TMP_Text animTrophyMain;
    public int trophiesAccessed;
    public int addTrophy;

    public TMP_Text placementText;
    public PowerButtonPress boostButton;
    public Joystick joystick;

    public TMP_Text startTimerText;
    public TMP_Text countdownText;
    public GameObject beginButton;
    public int infiniteTimer = 0;

    public int joins = 1;

    public int currentNumPlayers = 1;

    public GameObject[] ui;
    public string gameOwnerName;

    public bool stagesRunning = false;

    public bool master;
    public GameObject masterObject;
    public List<FlyingTurretMP> flyingTurretMPs = new List<FlyingTurretMP>();
    public bool bigCounting = false;

    public bool leaving = false;
    public Material[] dimensionMaterials;
    public Material[] zapsMaterials;

    public GameObject losersPanel;
    public TMP_Text lTrophyGained;
    public TMP_Text lTrophyMain;
    public bool lost;
    public CanvasGroup backButton;
    public Color32 gainTrophiesTextColor;
    public Color32 loseTrophiesTextColor;

    public void Awake()
    {
        PhotonNetwork.SendRate = 60;
        PhotonNetwork.SerializationRate = 60;

        fadeScreen.alpha = 1;
        instance = this;
        SpawnPlayer();

        SavePowerArray.instance.levelMatMP = dimensionMaterials[SceneManager.GetActiveScene().buildIndex - 1];
        SavePowerArray.instance.zapsMatMP = zapsMaterials[SceneManager.GetActiveScene().buildIndex - 1];
        SavePowerArray.instance.SetMat();

        LeanTween.alphaCanvas(fadeScreen, 0f, 0.5f);

        if (SavePowerArray.instance.publicGame)
        {
            PhotonNetwork.CurrentRoom.IsVisible = true;
            SavePowerArray.instance.gameCode = "";
            beginButton.SetActive(false);
            gameCodeText.text = "";
            gameCodeLabel.GetComponent<TMP_Text>().text = "";
            gameCodeLabel.GetComponentInParent<Image>().enabled = false;
        }
        else
        {
            PhotonNetwork.CurrentRoom.IsVisible = false;
            gameCodeLabel.SetActive(true);
            gameCodeText.text = SavePowerArray.instance.gameCode;
            gameCodeLabel.GetComponentInParent<Image>().enabled = true;
        }

        StartCoroutine(JoinPlayersDelay());

    }

    private void Start()
    {

        print("start1");

        if (PhotonNetwork.IsMasterClient)
        {
            print("start2");
            master = true;
            masterObject = PlayerControllerMP.instance.gameObject;

            
        }

        if (currentNumPlayers == 1)
        {
            print("start3");
            gameOwnerName = PlayerControllerMP.instance.gameObject.name;
            StopCoroutine(WaitForPlayersJoin());
            StartCoroutine(WaitForPlayersJoin());
        }

        if (SavePowerArray.instance.publicGame)
        {
            animTrophyMain.gameObject.SetActive(true);
            animTrophyGained.gameObject.SetActive(true);
        }
        else
        {
            animTrophyMain.gameObject.SetActive(false);
            animTrophyGained.gameObject.SetActive(false);
        }

        backButton.alpha = 0;
    }

    public void ForceBegin()
    {
        if (master)
        {
            for (int i = 0; i < PlacementAssigner.instance.players.Count; i++)
            {
                PlacementAssigner.instance.players[i].GetComponent<PlayerControllerMP>().photonView.RPC("Begin", RpcTarget.AllViaServer);
            }
        }
        
    }

    public void Update()
    {
        currentNumPlayers = GameObject.FindGameObjectsWithTag("SquareMP").Length;
        canvas.worldCamera = GameObject.Find("Main Camera").GetComponent<Camera>();
#if UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX
        CheckEscape();
#endif
        gameCodeText.text = SavePowerArray.instance.gameCode;
    }

    public void Spectate()
    {
        spectatingPlayer = 0;
        myPlayer.GetComponent<PlayerControllerMP>().spectate = true;
        myPlayer.GetComponent<PlayerControllerMP>().SpectateTarget();
        ambientParticle.gameObject.SetActive(false);
        waitingPanel.SetActive(false);
        gameUI.SetActive(false);
        disconnectPanel.SetActive(false);
        spectatePanel.SetActive(true);
        endPanel.SetActive(false);
    }

    public void BackToEndPanel()
    {
        myPlayer.GetComponent<PlayerControllerMP>().spectate = false;
        ambientParticle.gameObject.SetActive(true);
        waitingPanel.SetActive(false);
        gameUI.SetActive(false);
        disconnectPanel.SetActive(false);
        spectatePanel.SetActive(false);
        endPanel.SetActive(true);
    }

    public void ChangePlayerSpectating()
    {
        spectatingPlayer++;
        //spectating player keeps resestting to 0 every time
        if (spectatingPlayer >= myPlayer.GetComponent<PlayerControllerMP>().localPlayers.Count) //print local players.count (not working)
        {
            spectatingPlayer = 0;
        }

        myPlayer.GetComponent<PlayerControllerMP>().SpectateTarget();
    }

    public void ButtonBegin()
    {
        for (int j = 0; j < PlacementAssigner.instance.players.Count; j++)
        {
            if (PlacementAssigner.instance.players.Count > 1)
            {
                print("send countdownsyync");
                PlacementAssigner.instance.players[j].GetComponent<PlayerControllerMP>().photonView.RPC("CountDownSync", RpcTarget.AllViaServer, 3, masterObject.name);
            }
        }
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        print("owenr Leff0");
        if (!started)
        {
            print("owenr Leff1");
            if (currentNumPlayers > 2)
            {
                print("owenr Leff2");
                if (otherPlayer.NickName == gameOwnerName)
                {
                    print("owenr Leff3");
                    myPlayer.GetComponent<PlayerControllerMP>().ChooseNewGameOwner();
                }
            }
        }
        else
        {
            //myPlayer.GetComponent<PlayerControllerMP>().startingPlayerNum = FindObjectsOfType<PlayerControllerMP>().Length;
            PlacementAssigner.instance.disconnectedPlayers.Add(otherPlayer.NickName);
        }

        SendAttractors();

        Destroy(GameObject.Find(otherPlayer.NickName + " Canvas"));
        
        PlacementAssigner.instance.FindList();

        StartCoroutine(LeavePlayerDelay());
    }

    private IEnumerator LeavePlayerDelay()
    {
        yield return new WaitForSeconds(0.25f);

        currentNumPlayers = GameObject.FindGameObjectsWithTag("SquareMP").Length;

        if (!started)
        {
            myPlayer.GetComponent<PlayerControllerMP>().startingPlayerNum = currentNumPlayers;
        }
        print("Left: " + currentNumPlayers);
        PlacementAssigner.instance.UpdateListUI();
        

        if (currentNumPlayers <= 1)
        {
            if (started)
            {
                //myPlayer.GetComponent<PlayerControllerMP>().Finished();
                myPlayer.GetComponent<PlayerControllerMP>().CheckLastPlayer();
            }
            else
            {
                if (SavePowerArray.instance.publicGame)
                {
                    StopCoroutine(WaitForPlayersJoin());
                    StartCoroutine(WaitForPlayersJoin());
                }

            }
        }
    }


    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        PlacementAssigner.instance.FindList();
        SendAttractors();
        StartCoroutine(JoinPlayersDelay());
    }

    public IEnumerator JoinPlayersDelay()
    {
        yield return new WaitForSeconds(1);

        print("Join Total: " + currentNumPlayers);
        //currentNumPlayers = GameObject.FindGameObjectsWithTag("SquareMP").Length;
        if (!started)
        {
            myPlayer.GetComponent<PlayerControllerMP>().startingPlayerNum = currentNumPlayers;
        }
        PlacementAssigner.instance.UpdateListUI();

        if (!SavePowerArray.instance.publicGame)
        {
            if (currentNumPlayers > 1)
            {
                if (SavePowerArray.instance.creator)
                {
                    beginButton.GetComponent<CanvasGroup>().alpha = 0;
                    beginButton.SetActive(true);
                    LeanTween.alphaCanvas(beginButton.GetComponent<CanvasGroup>(), 1, 0.5f);
                }
            }
        }
    }

    private void SendAttractors()
    {
        Attractor[] tempAttractors = FindObjectsOfType<Attractor>();
        for (int i = 0; i < tempAttractors.Length; i++)
        {
            tempAttractors[i].LocateAttractors();
        }
    }

    public IEnumerator WaitForPlayersJoin()
    {
        if (SavePowerArray.instance.publicGame)
        {
            stagesRunning = true;
            print("Stage 1");
            yield return new WaitForSeconds(1);
            print("Stage 1");
            while (PlacementAssigner.instance.players.Count == 1)
            {
                print("whiling");

                startTimerText.text = $"Waiting For Players To Join\nTime Elapsed: {infiniteTimer}";
                LeanTween.alphaCanvas(startTimerText.GetComponent<CanvasGroup>(), 1, 0.5f);
                infiniteTimer++;
                yield return new WaitForSeconds(1);
            }
            LeanTween.scale(startTimerText.gameObject, new Vector3(1, 1, 1), 0.5f).setEaseOutExpo();

            print("Stage 2");

            print("stage 2 master = " + PhotonNetwork.MasterClient.NickName);
            if (master)
            {
                for (int i = 25; i > 0; i--)
                {
                    for (int j = 0; j < PlacementAssigner.instance.players.Count; j++)
                    {
                        if (PlacementAssigner.instance.players.Count > 1)
                        {
                            print("send countdownsyync");
                            PlacementAssigner.instance.players[j].GetComponent<PlayerControllerMP>().photonView.RPC("CountDownSync", RpcTarget.AllViaServer, i, masterObject.name);
                        }
                        else
                        {
                            yield return null;
                        }
                    }
                    yield return new WaitForSeconds(1f);
                }
            }
            stagesRunning = false;
            yield return null;
        }        
    }

    public void Big()
    {
        StartCoroutine(BigCountdown());
    }

    public IEnumerator BigCountdown()
    {
        LeanTween.alphaCanvas(startFadeScreen, 1f, 0.5f).setEaseOutExpo();
        LeanTween.alphaCanvas(startTimerText.GetComponent<CanvasGroup>(), 1f, 0.5f).setEaseOutExpo();
        LeanTween.alphaCanvas(countdownText.GetComponent<CanvasGroup>(), 1f, 0.5f).setEaseOutExpo();
        ambientParticle.gameObject.SetActive(true);

        for (int i = 3; i > 0; i--)
        {
            bigCounting = true;
            AudioTester.instance.PlayRising(i - 1);
            countdownText.text = i.ToString();
            LeanTween.alphaCanvas(countdownText.GetComponent<CanvasGroup>(), 1f, 0.1f).setEaseOutExpo();
            LeanTween.scale(countdownText.gameObject, new Vector3(3, 3, 1), 0.5f).setEaseOutExpo();            
            yield return new WaitForSeconds(1f);
            LeanTween.alphaCanvas(countdownText.GetComponent<CanvasGroup>(), 0f, 0.1f).setEaseOutExpo();
            LeanTween.scale(countdownText.gameObject, new Vector3(0, 0, 1), 0.1f).setEaseOutExpo();
            yield return new WaitForSeconds(0.1f);
        }
        if (master)
        {
            for (int i = 0; i < PlacementAssigner.instance.players.Count; i++)
            {
                PlacementAssigner.instance.players[i].GetComponent<PlayerControllerMP>().photonView.RPC("Begin", RpcTarget.AllViaServer);
            }
        }
        LeanTween.alphaCanvas(startFadeScreen, 0f, 1f).setEaseOutExpo();
        myPlayer.GetComponent<PlayerControllerMP>().CheckLastPlayer();
        yield return null;
    }

    public void SpawnPlayer()
    {
        PhotonNetwork.Instantiate(playerPrefab.name, spawnPoint.position, Quaternion.identity);
        canvas.gameObject.SetActive(true);
    }

    private void CheckEscape()
    {
        if (off && Input.GetKeyDown(KeyCode.Escape))
        {
            EnableDisconnect();
        }
        else if (!off && Input.GetKeyDown(KeyCode.Escape))
        {
            DisableDisconnect();
        }

    }

    public void EnableDisconnect()
    {
        disconnectUI.GetComponent<CanvasGroup>().interactable = true;
        disconnectUI.GetComponent<CanvasGroup>().blocksRaycasts = true;
        disconnectUI.transform.GetChild(0).gameObject.SetActive(true);
        disconnectUI.transform.GetChild(1).gameObject.SetActive(true);
        ambientParticle.gameObject.SetActive(true);
        LeanTween.alphaCanvas(disconnectUI.GetComponent<CanvasGroup>(), 1f, 0.2f)
                .setOnComplete(() =>
                {
                    off = false;
                });
    }

    public void DisableDisconnect()
    {
        ambientParticle.gameObject.SetActive(false);
        LeanTween.alphaCanvas(disconnectUI.GetComponent<CanvasGroup>(), 0f, 0.2f)
                .setOnComplete(() =>
                {
                    off = true;
                    disconnectUI.GetComponent<CanvasGroup>().interactable = false;
                    disconnectUI.GetComponent<CanvasGroup>().blocksRaycasts = false;
                    disconnectUI.transform.GetChild(0).gameObject.SetActive(false);
                    disconnectUI.transform.GetChild(1).gameObject.SetActive(false);
                });
    }

    public void LeaveRoom()
    {
        LeanTween.alphaCanvas(fadeScreen, 1, 0.5f).setEaseOutExpo().setOnComplete(LoadMain);
    }

    public void LoadMain()
    {

        StartCoroutine(LoadMainDelay());
        
        
    }

    private IEnumerator LoadMainDelay()
    {
        PhotonNetwork.AutomaticallySyncScene = false;
        PhotonNetwork.LeaveRoom();
        PhotonNetwork.LeaveLobby();

        yield return new WaitForSeconds(1f);

        PhotonNetwork.LoadLevel("Game");
        SceneManager.LoadScene("Game");
    }

    public void GetStatistics()
    {
        var request = new GetPlayerStatisticsRequest { };
        PlayFabClientAPI.GetPlayerStatistics(request, GetStatisticsResult, GetStatisticsFail);
    }

    private void GetStatisticsResult(GetPlayerStatisticsResult obj)
    {
        for (int i = 0; i < obj.Statistics.Count; i++)
        {
            if (obj.Statistics[i].StatisticName == "Trophies")
            {
                trophiesAccessed = obj.Statistics[i].Value;
                if (!lost)
                {
                    StartCoroutine(TrophiesAnimation());
                }
                else
                {
                    animTrophyGained = lTrophyGained;
                    animTrophyMain = lTrophyMain;

                    print("asd" + animTrophyGained);
                    print("aswd" + lTrophyMain);
                    StartCoroutine(TrophiesAnimation());
                }
                print("Trophies Accessed:" + trophiesAccessed);
                print($"Statistic ({obj.Statistics[i].StatisticName}): {obj.Statistics[i].Value}");
            }
        }

        SendTrophyValue();
    }

    private void GetStatisticsFail(PlayFabError obj)
    {
        print("Couldn't Get Statistics");
    }

    public void SendTrophyValue()
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "Trophies",
                    Value = trophiesAccessed + addTrophy

                }
            }

        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    }

    private void OnLeaderboardUpdate(UpdatePlayerStatisticsResult obj)
    {
        print("YOOOOOO");
        print(obj);
    }

    private void OnError(PlayFabError obj)
    {
        print(obj.GenerateErrorReport());
    }

    public IEnumerator TrophiesAnimation()
    {
        animTrophyGained.gameObject.SetActive(true);

        ambientParticle.gameObject.SetActive(true);

        finishButtons.interactable = false;
        backButton.interactable = false;

        LeanTween.scale(mainPlacementText.gameObject, new Vector3(3, 3, 3), 0.5f).setEaseOutBounce();
        yield return new WaitForSeconds(1f);
        LeanTween.moveLocalY(mainPlacementText.gameObject, 375, 0.5f).setEaseOutExpo();
        LeanTween.scale(mainPlacementText.gameObject, Vector3.one, 0.5f).setEaseOutExpo();

        yield return new WaitForSeconds(1f);
        print("canvussy");
        LeanTween.alphaCanvas(PlacementAssigner.instance.placementLayout.GetComponent<CanvasGroup>(), 1, 0.75f).setEaseOutExpo();

        animTrophyMain.text = "<sprite=\"Trophy 1\" index=0> " + trophiesAccessed.ToString();
        animTrophyGained.text = addTrophy.ToString();
        LeanTween.scale(animTrophyMain.gameObject, Vector3.one, 1f).setEaseOutExpo();
        yield return new WaitForSeconds(0.5f);
        LeanTween.scale(animTrophyGained.gameObject, Vector3.one, 1f).setEaseOutExpo();

        int placeholderGained = addTrophy;
        int placeholderMain = trophiesAccessed;
        bool longWait = true;

        if (addTrophy >= 0)
        {
            animTrophyGained.color = gainTrophiesTextColor;
            for (int i = 0; i < addTrophy; i++)
            {
                if (longWait)
                {
                    animTrophyGained.text = "+" + placeholderGained.ToString();
                    animTrophyMain.text = "<sprite=\"Trophy 1\" index=0> " + placeholderMain.ToString();

                    yield return new WaitForSeconds(2f);
                    longWait = false;
                }
                else
                {
                    yield return new WaitForSeconds(addTrophy / 10000f);
                }
                placeholderMain += 1;
                placeholderGained -= 1;
                animTrophyGained.text = "+" + placeholderGained.ToString();
                animTrophyMain.text = "<sprite=\"Trophy 1\" index=0> " + placeholderMain.ToString();
                
            }
        }
        else
        {
            animTrophyGained.color = loseTrophiesTextColor;
            int tempAddTrophy = Mathf.Abs(addTrophy);
            for (int i = 0; i < tempAddTrophy; i++)
            {
                if (longWait)
                {
                    animTrophyGained.text = placeholderGained.ToString();
                    animTrophyMain.text = "<sprite=\"Trophy 1\" index=0> " + placeholderMain.ToString();

                    yield return new WaitForSeconds(2f);
                    longWait = false;
                }
                else
                {
                    yield return new WaitForSeconds(tempAddTrophy / 10000f);
                }
                placeholderMain -= 1;
                placeholderGained += 1;
                animTrophyGained.text = placeholderGained.ToString();
                animTrophyMain.text = "<sprite=\"Trophy 1\" index=0> " + placeholderMain.ToString();
                
            }
        }        
        LeanTween.scale(animTrophyGained.gameObject, Vector3.zero, 0.5f).setEaseOutExpo().setOnComplete(KillTropyGained);
        finishButtons.interactable = true;
        backButton.interactable = true;
        LeanTween.alphaCanvas(finishButtons.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
        LeanTween.alphaCanvas(backButton, 1, 0.5f).setEaseOutExpo();
    }

    private void KillTropyGained()
    {
        print("bobo");
        animTrophyGained.gameObject.SetActive(false);
    }
}
