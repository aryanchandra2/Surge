using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using TMPro;
using UnityEngine.UI;
using Photon.Pun;
using PlayFab.CloudScriptModels;
using System;
using UnityEngine.Analytics;

public class PlayfabManager : MonoBehaviour
{
    public static PlayfabManager instance;

    public GameObject rowPrefab;
    public GameObject rowPrefab2;
    public TMP_Text keyText;

    [HideInInspector] public Transform rowsParent;
    [HideInInspector] public TMP_Text messageText;
    [HideInInspector] public TMP_Text titleText;
    [HideInInspector] public TMP_InputField passwordInput;
    [HideInInspector] public TMP_InputField emailInput;
    [HideInInspector] public TMP_InputField usernameInput;

    [HideInInspector] public GameObject changeNameButton;
    [HideInInspector] public GameObject resetEmailButton;
    [HideInInspector] public GameObject acctMainMenu;
    [HideInInspector] public GameObject acctInputMenu;
    [HideInInspector] public GameObject loginButton;
    [HideInInspector] public GameObject registerButton;
    public GameObject backButton;

    public GameObject mustLoginText;
    public GameObject changeLeaderboard;
    public GameObject mustLoginTextMP;
    public GameObject startMPGame;

    public RectTransform logoutPanel;
    public CanvasGroup fadeBG;
    public CanvasGroup nfadeBG;
    public CanvasGroup fadeScreen;
    public GameObject logoutButton;

    public int leaderboardNum;
    public int totalBoardNum;
    public bool loggedIn;
    private bool login;

    public int trophyCount;
    public TMP_Text trophiesText;
    public bool trophiesBoard;

    public ScrollRect scroll;
    public bool tp;

    public GameObject loginAlertPanel;
    public GameObject deleteAlertPanel;

    public MenuController menu;
    public LeanTweenType logoutType;

    public CanvasGroup[] boardButtonIcons;
    public CanvasGroup wifi;
    public bool checkWifi;

    public GameObject deleteAccountButton;
    public CanvasGroup fadeBG2;
    public GameObject keyPanel;
    public float orgPos = 57.90002f;
    public bool firstPress =true;
    public string playfabID;
    public TMP_Text eventTimeText;
    public GameObject noVictors;

    public void Awake()
    {
        instance = this;
        
    }

    public void Start()
    {
        StartCoroutine(WifiWait());
        trophiesBoard = true;
        acctInputMenu.SetActive(false);
        usernameInput.gameObject.SetActive(false);
        if (SaveManager.instance.hasLoaded)
        {
            if (!string.IsNullOrEmpty(SaveManager.instance.activeSave.email) && !string.IsNullOrEmpty(SaveManager.instance.activeSave.password))
            {                
                emailInput.text = SaveManager.instance.activeSave.email;
                passwordInput.text = SaveManager.instance.activeSave.password;
                LoginButton();
                changeNameButton.SetActive(true);
                logoutButton.SetActive(true);
                loggedIn = true;
                deleteAccountButton.SetActive(true);
            }
            else
            {
                changeNameButton.SetActive(false);
                logoutButton.SetActive(false);
                loggedIn = false;
                messageText.text = "Not Logged In!";
                deleteAccountButton.SetActive(false);
                keyText.text = SaveManager.instance.activeSave.keys.ToString();

            }
        }

        if (!loggedIn)
        {
            loginAlertPanel.SetActive(true);
            LeanTween.alphaCanvas(nfadeBG, 1, 0.5f).setEaseOutExpo().setOnStart(EnableFadeBG);
            LeanTween.alphaCanvas(loginAlertPanel.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
            LeanTween.scale(loginAlertPanel, Vector3.one, 0.5f).setEaseOutBack();

        }
    }

    private IEnumerator WifiWait()
    {
        checkWifi = false;
        yield return new WaitForSeconds(3f);
        checkWifi = true;
    }

    private void Update()
    {
        if (PhotonNetwork.IsConnectedAndReady)
        {
            print("connected");
        }

    }

    public void OpenLoginPage()
    {
        EscapeLoginAlert();
        menu.MoveMenu(7);
    }

    public void EscapeLoginAlert()
    {
        LeanTween.alphaCanvas(nfadeBG, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG);
        LeanTween.alphaCanvas(loginAlertPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(loginAlertPanel, Vector3.zero, 0.5f).setEaseInExpo().setOnComplete(DisablePanel);
    }

    private void DisablePanel()
    {
        loginAlertPanel.SetActive(true);
    }

    public void Logout()
    {
        Dimensions.instance.TeleportToLevel(0);
        SaveManager.instance.DeleteSaveData();
        PlayFabClientAPI.ForgetAllCredentials();
        messageText.text = "Not Logged In!";
        changeNameButton.SetActive(false);
        SaveManager.instance.activeSave.email = "";
        SaveManager.instance.activeSave.password = "";
        SaveManager.instance.activeSave.username = "";
        SavePowerArray.instance.username = "";
        SaveManager.instance.activeSave.respawnPosition = 0;
        SaveManager.instance.activeSave.keys = 0;
        SaveManager.instance.activeSave.unlocks = "10000";

        PlayerController.instance.Die();
        for (int i = 0; i < SaveManager.instance.activeSave.times.Count; i++)
        {
            SaveManager.instance.activeSave.times[i] = 0;
            LevelTimes.instance.unlocks[i] = false;

        }

        SaveManager.instance.Save();
        logoutButton.SetActive(false);
        loggedIn = false;
        deleteAccountButton.SetActive(false);
        LevelTimes.instance.SetTimeTexts();
        CancelLogoutPanel();
    }

    public void Back()
    {
        acctMainMenu.SetActive(true);
        acctInputMenu.SetActive(false);
        usernameInput.gameObject.SetActive(false);
        titleText.text = "Account";
        if (loggedIn)
        {
            messageText.text = "Logged In As: " + SaveManager.instance.activeSave.username + "!";
        }
        else
        {
            messageText.text = "Not Logged In!";
        }
    }

    public void Press(bool log)
    {
        login = log;
        acctMainMenu.SetActive(false);

        acctInputMenu.SetActive(true);
        if (!log)
        {
            titleText.text = "Register";
            passwordInput.text = "";
            emailInput.text = "";
            messageText.text = "";
            resetEmailButton.gameObject.SetActive(false);
        }
        else
        {
            titleText.text = "Login";
            emailInput.text = SaveManager.instance.activeSave.email;
            passwordInput.text = SaveManager.instance.activeSave.password;            
            if (loggedIn)
            {
                messageText.text = "Logged In As: " + SaveManager.instance.activeSave.username + "!";
            }
            else
            {
                messageText.text = "";
            }
            resetEmailButton.gameObject.SetActive(true);
        }
        
    }

    public void PressedButton()
    {
        if (login)
        {
            LoginButton();
        }
        else
        {
            RegisterButton();
        }
    }

    public void GetTrophyCount()
    {
        if (loggedIn)
        {
            var request = new GetPlayerStatisticsRequest { };
            PlayFabClientAPI.GetPlayerStatistics(request, GetTrophyCountResult, GetStatisticsFail);
        }
    }

    private void GetTrophyCountResult(GetPlayerStatisticsResult obj)
    {
        bool hasTrophyCount = false;
        for (int i = 0; i < obj.Statistics.Count; i++)
        {
            if (obj.Statistics[i].StatisticName == "Trophies")
            {
                hasTrophyCount = true;
                trophyCount = obj.Statistics[i].Value;
                trophiesText.text = "<sprite=\"Trophy 1\" index=0> " + trophyCount.ToString();
            }
        }
        if (!hasTrophyCount)
        {
            trophyCount = 0;
            trophiesText.text = "<sprite=\"Trophy 1\" index=0> " + trophyCount.ToString();
        }
    }

    public void GetStatistics()
    {
        if (loggedIn)
        {
            print("<GetStatistics()");
            var request = new GetPlayerStatisticsRequest { };
            PlayFabClientAPI.GetPlayerStatistics(request, GetStatisticsResult, GetStatisticsFail);
        }        
    }

    private void GetStatisticsFail(PlayFabError obj)
    {
        print("Couldn't Get Statistics");
    }

    private void GetStatisticsResult(GetPlayerStatisticsResult obj)
    {
        GetLevelUnlocks();

        print("<GetStatisticsResult");
        for (int i = 0; i < SaveManager.instance.activeSave.times.Count; i++)
        {
            SaveManager.instance.activeSave.times[i] = 0;
        } 
        LevelTimes.instance.ClearTimeTexts();

        for (int i = 0; i < obj.Statistics.Count; i++)
        {
            if (obj.Statistics[i].StatisticName != "Trophies")    
            {
                switch (obj.Statistics[i].StatisticName)
                {
                    case "Level 0":
                        SaveManager.instance.activeSave.times[0] = obj.Statistics[i].Value;
                        break;
                    case "Level 1":
                        SaveManager.instance.activeSave.times[1] = obj.Statistics[i].Value;
                        break;
                    case "Level 2":
                        SaveManager.instance.activeSave.times[2] = obj.Statistics[i].Value;
                        break;
                    case "Level 3":
                        SaveManager.instance.activeSave.times[3] = obj.Statistics[i].Value;
                        break;
                    case "Level 4":
                        SaveManager.instance.activeSave.times[4] = obj.Statistics[i].Value;
                        break;
                    case "Keys":
                        SaveManager.instance.activeSave.keys = obj.Statistics[i].Value;
                        break;
                    case "Level -1":
                        SaveManager.instance.activeSave.eventTime = obj.Statistics[i].Value;
                        break;
                }
            }
        }

        int maxNum = 0;
        for (int i = 0; i < SaveManager.instance.activeSave.times.Count; i++)
        {
            if (SaveManager.instance.activeSave.unlocks.ToCharArray()[i].Equals("1"))
            {
                maxNum++;
                print("<maxNum:" + maxNum);
            }
        }

        if (maxNum < 5)
        {
            SaveManager.instance.activeSave.respawnPosition = maxNum;
        }
        else
        {
            SaveManager.instance.activeSave.respawnPosition = maxNum - 1;
        }
        
        PlayerController.instance.tempRespawnPosition = SaveManager.instance.activeSave.respawnPosition;
        CheckIfTime();
        if (tp)
        {
            print(SaveManager.instance.activeSave.respawnPosition);
            Dimensions.instance.TeleportToLevel(SaveManager.instance.activeSave.respawnPosition);
        }
        tp = false;

        PlayerController.instance.Die();
        LevelTimes.instance.SetTimeTexts();

        LeanTween.alphaCanvas(fadeScreen, 0, 0.5f).setEaseInExpo();
    }

    public void CheckIfTime()
    {
        eventTimeText.transform.parent.gameObject.SetActive(SaveManager.instance.activeSave.eventTime < 0);
        eventTimeText.text = (-(SaveManager.instance.activeSave.eventTime / 10000)).ToString("F2");
    }

    public void RegisterButton()
    {      
        if (passwordInput.text.Length < 6)
        {
            messageText.text = "Password Too Short!";
            return;
        }

        var request = new RegisterPlayFabUserRequest
        {
            Email = emailInput.text,
            Password = passwordInput.text,
            RequireBothUsernameAndEmail = false
        };
        PlayFabClientAPI.RegisterPlayFabUser(request, OnRegisterSuccess, OnError);
    }

    public void SelectUsername()
    {
        var request = new UpdateUserTitleDisplayNameRequest
        {
            DisplayName = usernameInput.text,            
        };
        PlayFabClientAPI.UpdateUserTitleDisplayName(request, OnNameCreateSuccess, OnError);
        
    }

    public void ChangeUserName()
    {
        acctInputMenu.SetActive(false);
        acctMainMenu.SetActive(false);
        usernameInput.gameObject.SetActive(true);
        usernameInput.text = SaveManager.instance.activeSave.username;
    }

    public void LoginButton()
    {
        var request = new LoginWithEmailAddressRequest
        {
            Email = emailInput.text,
            Password = passwordInput.text,
            InfoRequestParameters = new GetPlayerCombinedInfoRequestParams
            {
                GetPlayerProfile = true
            }
        };
        PlayFabClientAPI.LoginWithEmailAddress(request, OnLoginSuccess, OnError);

    }    

    public void ResetPasswordButton()
    {
        var request = new SendAccountRecoveryEmailRequest
        {
            Email = emailInput.text,
            TitleId = "E25F1"
        };
        PlayFabClientAPI.SendAccountRecoveryEmail(request, OnPasswordReset, OnError);
    }

    private void OnPasswordReset(SendAccountRecoveryEmailResult obj)
    {
        messageText.text = "Password Reset Mail Sent";
    }

    public void SendLeaderboard(int time, int level)
    {
        print("bwomp");
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {                    
                    StatisticName = "Level " + level,
                    Value = time
                }
            }
        };

        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
        LevelTimes.instance.SetTimeTexts();
    }   

    private void OnLeaderboardUpdate(UpdatePlayerStatisticsResult obj)
    {
        print("SUccess");
    }

    public void ChangeLeaderboard(int boardNum)
    {
        leaderboardNum = boardNum;
        int tempBoard = boardNum;
        if (boardNum == 0)
        {
            leaderboardNum = 0;
            tempBoard = 6;
        }

        trophiesBoard = false;

        if (boardNum == -2)
        {
            trophiesBoard = true;
            tempBoard = 0;
        }

        print("tmppd" + tempBoard);
        for (int i = 0; i < boardButtonIcons.Length; i++)
        {
            if (i != tempBoard)
            {
                LeanTween.alphaCanvas(boardButtonIcons[i], 0.4f, 0.5f).setEaseOutSine();
            }
            else
            {
                LeanTween.alphaCanvas(boardButtonIcons[i], 1, 0.5f).setEaseOutSine();
            }
        }
        UpdateLeaderboardButton();
    }

    private void UpdateLeaderboardButton()
    {
        GetLeaderboard();
    }

    public void GetLeaderboard()
    {       
        //if (!PlayFabClientAPI.IsClientLoggedIn())
        //{
        //    var reques = new LoginWithCustomIDRequest
        //    {
        //        CustomId = SystemInfo.deviceUniqueIdentifier,
        //        CreateAccount = true
        //    };
        //    PlayFabClientAPI.LoginWithCustomID(reques, OnCustomSuccess, OnCustomFail);
        //}

        if (!trophiesBoard)
        {
            var requestLevel = new GetLeaderboardRequest
            {
                StatisticName = "Level " + (leaderboardNum - 1) ,
                StartPosition = 0,
                MaxResultsCount = 25
            };

            PlayFabClientAPI.GetLeaderboard(requestLevel, OnLeaderBoardGet, OnError);
        }
        else
        {
            var requestTrophies = new GetLeaderboardRequest
            {
                StatisticName = "Trophies",
                StartPosition = 0,
                MaxResultsCount = 25
            };

            PlayFabClientAPI.GetLeaderboard(requestTrophies, OnLeaderBoardGet, OnError);
        }
        
        
    }

    public void GetLeaderboardButton()
    {
        if (loggedIn)
        {
            mustLoginText.SetActive(false);
            changeLeaderboard.SetActive(true);
            GetLeaderboard();
        }
        else
        {
            mustLoginText.SetActive(true);
            changeLeaderboard.SetActive(false);
        }
    }

    public void GetMultiplayerButton()
    {
        if (loggedIn)
        {
            mustLoginTextMP.SetActive(false);
            startMPGame.SetActive(true);
        }
        else
        {
            mustLoginTextMP.SetActive(true);
            startMPGame.SetActive(false);
        }
    }

    private void OnCustomFail(PlayFabError obj)
    {
        print("Couldn't Create Custom Player");
    }

    private void OnCustomSuccess(LoginResult obj)
    {

    }

    private void OnLeaderBoardGet(GetLeaderboardResult obj)
    {
        foreach (Transform item in rowsParent)
        {
            Destroy(item.gameObject);
        }

        if (!trophiesBoard)
        {
            int odd = 0;

            noVictors.SetActive(obj.Leaderboard.Count == 0);

            foreach (var item in obj.Leaderboard)
            {
                if (item.Position < 50)
                {
                    if (odd % 2 == 0)
                    {

                        GameObject newRow = Instantiate(rowPrefab, rowsParent);
                        TMP_Text[] texts = newRow.GetComponentsInChildren<TMP_Text>();
                        texts[0].text = (item.Position + 1).ToString();
                        texts[1].text = item.DisplayName;
                        texts[2].text = $"<sprite=\"Timer\" index=0> { -item.StatValue / 10000f:f2}";

                        if (texts[1].text == SaveManager.instance.activeSave.username)
                        {
                            texts[0].color = Color.cyan;
                            texts[1].color = Color.cyan;
                            texts[2].color = Color.cyan;
                        }
                    }
                    else
                    {
                        GameObject newRow = Instantiate(rowPrefab2, rowsParent);
                        TMP_Text[] texts = newRow.GetComponentsInChildren<TMP_Text>();
                        texts[0].text = (item.Position + 1).ToString();
                        texts[1].text = item.DisplayName;
                        texts[2].text = $"<sprite=\"Timer\" index=0> { -item.StatValue / 10000f:f2}";

                        if (texts[1].text == SaveManager.instance.activeSave.username)
                        {
                            texts[0].color = Color.cyan;
                            texts[1].color = Color.cyan;
                            texts[2].color = Color.cyan;
                        }
                    }
                    odd++;
                }
                    
            }
            StartCoroutine(ScrollToTop());
        }
        else
        {
            int odd = 0;
            foreach (var item in obj.Leaderboard)
            {
                if (item.Position < 50)
                {
                    if (odd % 2 == 0)
                    {
                        GameObject newRow = Instantiate(rowPrefab, rowsParent);
                        TMP_Text[] texts = newRow.GetComponentsInChildren<TMP_Text>();
                        texts[0].text = (item.Position + 1).ToString();
                        texts[1].text = item.DisplayName;
                        texts[2].text = $"<sprite=\"Trophy 1\" index=0> {item.StatValue}";

                        if (texts[1].text == SaveManager.instance.activeSave.username)
                        {
                            texts[0].color = Color.cyan;
                            texts[1].color = Color.cyan;
                            texts[2].color = Color.cyan;
                        }
                    }
                    else
                    {
                        GameObject newRow = Instantiate(rowPrefab2, rowsParent);
                        TMP_Text[] texts = newRow.GetComponentsInChildren<TMP_Text>();
                        texts[0].text = (item.Position + 1).ToString();
                        texts[1].text = item.DisplayName;
                        texts[2].text = $"<sprite=\"Trophy 1\" index=0> {item.StatValue}";

                        if (texts[1].text == SaveManager.instance.activeSave.username)
                        {
                            texts[0].color = Color.cyan;
                            texts[1].color = Color.cyan;
                            texts[2].color = Color.cyan;
                        }
                    }
                    odd++;
                }                    
            }
        }
        StartCoroutine(ScrollToTop());
        if (firstPress)
        {
            firstPress = false;
            ChangeLeaderboard(1);

        }
    }

    private IEnumerator ScrollToTop()
    {
        yield return new WaitForSeconds(0.02f);
        scroll.verticalNormalizedPosition = 1;

    }

    private void OnError(PlayFabError obj)
    {
        messageText.text = obj.ErrorMessage;
        if (passwordInput.text.Length < 6)
        {
            messageText.text = "Password Too Short!";
        }
    }

    private void OnLoginSuccess(LoginResult obj)
    {
        LeanTween.alphaCanvas(fadeScreen, 1, 0.5f).setEaseOutExpo();
        SaveManager.instance.activeSave.email = emailInput.text;
        SaveManager.instance.activeSave.password = passwordInput.text;

        if (obj.InfoResultPayload.PlayerProfile != null)
        {
            SaveManager.instance.activeSave.username = obj.InfoResultPayload.PlayerProfile.DisplayName;
            SavePowerArray.instance.username = obj.InfoResultPayload.PlayerProfile.DisplayName;
        }
        loggedIn = true;
        deleteAccountButton.SetActive(true);

        print("<OnLoginSuccess()");
        GetStatistics();
        logoutButton.SetActive(true);
        playfabID = obj.PlayFabId;
        messageText.text = "Logged In As: " + SaveManager.instance.activeSave.username + "!";
        SaveManager.instance.Save();
        SetDimensionColor.instance.SetDimensionMaterial();

        tp = true;
        changeNameButton.SetActive(true);

        if (SavePowerArray.instance.username.Length > 11)
        {
            if (SavePowerArray.instance.username.Substring(0, 11) == "deletedUser")
            {
                Logout();
            }

        }

        keyText.text = SaveManager.instance.activeSave.keys.ToString();

        Back();
    }

    private void OnNameCreateSuccess(UpdateUserTitleDisplayNameResult obj)
    {
        SaveManager.instance.activeSave.username = usernameInput.text;
        SavePowerArray.instance.username = SaveManager.instance.activeSave.username;
        messageText.text = "Logged In As: " + SaveManager.instance.activeSave.username + "!";
        LevelTimes.instance.SetTimeTexts();
        loggedIn = true;
        Back();
        backButton.SetActive(true);

    }

    private void OnRegisterSuccess(RegisterPlayFabUserResult obj)
    {
        acctInputMenu.SetActive(false);
        usernameInput.text = "";
        usernameInput.gameObject.SetActive(true);
        backButton.SetActive(false);
        logoutButton.SetActive(true);
        changeNameButton.SetActive(true);
        SaveManager.instance.activeSave.email = emailInput.text;
        SaveManager.instance.activeSave.password = passwordInput.text;
        SaveManager.instance.Save();
        
        playfabID = obj.PlayFabId;

        //if we are not already logged in
        if (!loggedIn)
        {
            loggedIn = true;
            for (int i = 0; i < 5; i++)
            {
                print("gogo: " + i);
                if ((int)SaveManager.instance.activeSave.times[i] < 0)
                    SendLeaderboard((int)SaveManager.instance.activeSave.times[i], i);
            }
            UploadCurrentUnlocks(SaveManager.instance.activeSave.unlocks);
            AddKeys(0);
        }
        else
        {
            UploadCurrentUnlocks("10000");
            SetKeys(0);
        }

        CreateTrophyStatistic();

        deleteAccountButton.SetActive(true);


        GetStatistics();


        LevelTimes.instance.SetTimeTexts();
        messageText.text = "Choose Username";

        Dimensions.instance.TeleportToLevel(0);

        
    }

    public void CreateTrophyStatistic()
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "Trophies",
                    Value = 0
                }
            }

        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    }

    public void AddKeys(int keysAdded)
    {
        SaveManager.instance.activeSave.keys += keysAdded;
        SaveManager.instance.Save();
        if (loggedIn)
        {
            SetKeys(SaveManager.instance.activeSave.keys);
        }
        keyText.text = SaveManager.instance.activeSave.keys.ToString();
    }

    public void SetKeys(int newVal)
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
                {
                    new StatisticUpdate
                    {
                        StatisticName = "Keys",
                        Value = newVal

                    }
                }
        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    }

    public void OpenLogoutPanel()
    {
        LeanTween.alphaCanvas(fadeBG, 1, 0.5f).setEaseOutExpo().setOnStart(EnableFadeBG);
        LeanTween.alphaCanvas(logoutPanel.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
        LeanTween.scale(logoutPanel, Vector3.one, 0.5f).setEaseOutBack();
    }

    public void CancelLogoutPanel()
    {
        LeanTween.alphaCanvas(fadeBG, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG);
        LeanTween.alphaCanvas(logoutPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(logoutPanel, Vector3.zero, 0.5f).setEaseInExpo();
    }

    private void EnableFadeBG()
    {
        fadeBG.gameObject.SetActive(true);
    }

    private void DisableFadeBG()
    {
        fadeBG.gameObject.SetActive(false);
    }

    public void SureDelete()
    {
        deleteAlertPanel.SetActive(true);
        LeanTween.alphaCanvas(nfadeBG, 1, 0.5f).setEaseOutExpo().setOnStart(EnableFadeBG);
        LeanTween.alphaCanvas(deleteAlertPanel.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
        LeanTween.scale(deleteAlertPanel, Vector3.one, 0.5f).setEaseOutBack();
    }

    public void CancelDeletePanel()
    {
        LeanTween.alphaCanvas(fadeBG, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG);
        LeanTween.alphaCanvas(deleteAlertPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(deleteAlertPanel, Vector3.zero, 0.5f).setEaseInExpo();
    }

    public void DeleteMasterPlayer()
    {
        print("bwomp");

        for (int i = 0; i < 5; i++)
        {
            var request = new UpdatePlayerStatisticsRequest
            {
                Statistics = new List<StatisticUpdate>
                {
                    new StatisticUpdate
                    {
                        StatisticName = "Level " + i,
                        Value = int.MinValue
                    }
                }
            };

            PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
            LevelTimes.instance.SetTimeTexts();
        }

        var request2 = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                    new StatisticUpdate
                    {
                        StatisticName = "Trophies",
                        Value = 0
                    }
            }
        };
        SetKeys(0);
        UploadCurrentUnlocks("00000");
        PlayFabClientAPI.UpdatePlayerStatistics(request2, OnLeaderboardUpdate, OnError);

        var request3 = new UpdateUserTitleDisplayNameRequest
        {
            DisplayName = "deletedUser " + UnityEngine.Random.Range(0, 1000000000)
        };
        PlayFabClientAPI.UpdateUserTitleDisplayName(request3, OnNameCreateSuccess, OnError);
        SaveManager.instance.activeSave.username = "";

        CancelDeletePanel();
        Logout();

    }

    public int selectedLevel = -1;
    public int selectedPrice = -1;
    public TMP_Text keyTextLevel;
    public TMP_Text keyTextPrice;
    public void UnlockLevel(int level)
    {
        if (selectedLevel == -1)
        {
            switch (level)
            {
                case 1: selectedPrice = 4;
                    break;
                case 2: selectedPrice = 8;
                    break;
                case 3: selectedPrice = 16;
                    break;
                case 4: selectedPrice = 32;
                    break;
            }

            if (SaveManager.instance.activeSave.keys >= selectedPrice)
            {
                selectedLevel = level;


                keyTextLevel.text = "Unlock Level " + (selectedLevel + 1);
                keyTextPrice.text = "-" + selectedPrice.ToString();

                LeanTween.alphaCanvas(fadeBG2, 1, 0.5f).setEaseOutExpo().setOnStart(EnableFadeBG2);
                LeanTween.alphaCanvas(keyPanel.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
                LeanTween.scale(keyPanel, Vector3.one, 0.5f).setEaseOutBack();
            }
            else
            {
                keyText.color = Color.red;
                LeanTween.moveLocalX(keyText.gameObject, orgPos + 10f, .2f).setEasePunch();
                LeanTween.moveLocalX(keyText.gameObject, orgPos, 0.1f).setEasePunch().setDelay(0.2f).setOnComplete(OrgColor);

            }
        }
        
    }
    private void OrgColor()
    {
        keyText.color = Color.white;
        keyText.transform.localPosition = new Vector2(orgPos, -4.7f);
    }

    public void SurePurchase()
    {

        if (SaveManager.instance.activeSave.keys >= selectedPrice)
        {
            AddKeys(-selectedPrice);
        }

        LeanTween.alphaCanvas(fadeBG2, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG2);
        LeanTween.alphaCanvas(keyPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(keyPanel, new Vector3(1.8f,0,1), 0.5f).setEaseInExpo();



        print("new " + selectedLevel);
        SaveManager.instance.activeSave.respawnPosition = selectedLevel;

        SetLevelUnlocks(selectedLevel);

        LevelTimes.instance.SetTimeTexts();
        SaveManager.instance.Save();
        selectedLevel = -1;
        selectedPrice = -1;
    }

    public void CancelPurchase()
    {

        LeanTween.alphaCanvas(fadeBG2, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG2);
        LeanTween.alphaCanvas(keyPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(keyPanel, new Vector3(1.8f, 0, 1), 0.5f).setEaseInExpo();

        selectedLevel = -1;
        selectedPrice = -1;
    }

    private void EnableFadeBG2()
    {
        fadeBG2.gameObject.SetActive(true);
    }

    private void DisableFadeBG2()
    {
        fadeBG2.gameObject.SetActive(false);
    }

    public void SetLevelUnlocks(int levelNum)
    {
        char[] unlockString = SaveManager.instance.activeSave.unlocks.ToCharArray();
        unlockString[levelNum] = "1".ToCharArray()[0];
        SaveManager.instance.activeSave.unlocks = new string(unlockString);

        if (loggedIn)
        {
            UploadCurrentUnlocks(SaveManager.instance.activeSave.unlocks);
        }
        

    }

    public void UploadCurrentUnlocks(string value)
    {
        PlayFabClientAPI.UpdateUserData(new UpdateUserDataRequest()
        {
            Data = new Dictionary<string, string>() {
            {"Unlocks", value}
        }
        },
        result => GetLevelUnlocks(),
        error => {
            Debug.Log("Got error setting user data Ancestor to Arthur");
            Debug.Log(error.GenerateErrorReport());
        });
    }

    void GetLevelUnlocks()
    {
        PlayFabClientAPI.GetUserData(new GetUserDataRequest()
        {
            PlayFabId = playfabID,
            Keys = null
        }, result => {
            Debug.Log("Got user data:");
            if (result.Data == null || !result.Data.ContainsKey("Unlocks"))
            {
                for (int i = 0; i < SaveManager.instance.activeSave.times.Count; i++)
                {
                    if (SaveManager.instance.activeSave.times[i] < 0)
                    {
                        SetLevelUnlocks(i);
                    }
                }
            }
            else
            {
                SaveManager.instance.activeSave.unlocks = result.Data["Unlocks"].Value;
            }
        }, (error) => {
            Debug.Log("Got error retrieving user data:");
            Debug.Log(error.GenerateErrorReport());
        });;
    }

}