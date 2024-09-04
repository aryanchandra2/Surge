using Photon.Pun;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MilkShake;
using DG.Tweening;
using System.Collections;
using PHastable = ExitGames.Client.Photon.Hashtable;
using System.Collections.Generic;
using System;
using Photon.Realtime;

public class PlayerControllerMP : MonoBehaviourPunCallbacks, IPunObservable
{
    public float speed;
    public float acceleration;
    public float rotationControl;


    public int placement;
    public float totalDist;
    public float time;
    public bool isDead;
    public bool spectate;
    public bool hidden;
    public bool inputOn = true;
    public bool finished;
    public bool slow;
    public float bounceDelay;
    public bool activeTimer;

    public int startingPlayerNum;

    [SerializeField]
    public int testSendData;

    public TrailRenderer trail;

    [HideInInspector] public static PlayerControllerMP instance;

    [HideInInspector] public GameObject deathEffect;
    [HideInInspector] public float respawnDelay;
    public TMP_Text nameTag;
    [HideInInspector] public PhotonView view;
    public ShakePreset cameraShakePreset;


    public Shaker cameraShaker;
    [HideInInspector] public int deds;
    [HideInInspector] private float moveY;
    [HideInInspector] public readonly float moveX = 1;
    [HideInInspector] public Rigidbody2D rigidbody;
    public Camera camera;
    public GameObject placementEnd;
    [HideInInspector] public Shaker bounceShaker;
    [HideInInspector] public ShakePreset bounceShake;
    public GameObject bounceParticle;
    public GameObject boostParticle;

    private bool lastPlacementLock;

    public PHastable placementTable = new PHastable();

    public int trophiesGained;
    public int totalPlayerNum;

    public Vector2 dir = Vector2.zero;
    public float angle = 0;
    public float savedAngle;

    public List<GameObject> localPlayers = new List<GameObject>();
    public Gradient trailLowOpacityGradient;

    public void Awake()
    {
        instance = this;
        SavePowerArray.instance.multiplayer = true;

        placementTable.Add("1st", "nullPlayer");
        placementTable.Add("2nd", "nullPlayer");
        placementTable.Add("3rd", "nullPlayer");
        placementTable.Add("4th", "nullPlayer");
        placementTable.Add("5th", "nullPlayer");

        placementTable.Add("Time1", "0");
        placementTable.Add("Time2", "0");
        placementTable.Add("Time3", "0");
        placementTable.Add("Time4", "0");
        placementTable.Add("Time5", "0");

        PhotonNetwork.CurrentRoom.SetCustomProperties(placementTable);
    }

    [System.Obsolete]
    public void Start()
    {
        trail.material = SavePowerArray.instance.levelMatMP;
        PhotonNetwork.NickName = SavePowerArray.instance.username;
        rigidbody = GetComponent<Rigidbody2D>();

        GetComponent<SpriteRenderer>().material = SavePowerArray.instance.levelMatMP;

        GameManagerMP.instance.joystick.gameObject.SetActive(true);

        if (photonView.IsMine)
        {
            GameManagerMP.instance.myPlayer = gameObject;
            camera = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Camera>();
            camera.transform.parent.GetComponent<CameraController>().target = gameObject.transform;
            cameraShaker = camera.GetComponent<Shaker>();
            bounceShaker = camera.GetComponent<Shaker>();
            FindObjectOfType<AudioTester>().shaker = cameraShaker;

            nameTag.text = PhotonNetwork.NickName;
            nameTag.color = Color.cyan;
            name = PhotonNetwork.NickName;
            nameTag.transform.parent.name = PhotonNetwork.NickName + " Canvas";

            if (GameManagerMP.instance.currentNumPlayers == 1)
            {
                print("start3");
                GameManagerMP.instance.gameOwnerName = name;
            }
        }
        else
        {
            name = photonView.Owner.NickName;
            nameTag.text = photonView.Owner.NickName;
            nameTag.color = Color.white;
            nameTag.transform.parent.name = photonView.Owner.NickName + " Canvas";

            print("gop" + name);

            GetComponent<CircleCollider2D>().enabled = false;
            trail.colorGradient = trailLowOpacityGradient;
            GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 175);
        }
        GameManagerMP.instance.gameUI.SetActive(false);
        GameManagerMP.instance.endPanel.SetActive(false);
    }

    public void ChooseNewGameOwner()
    {
        StartCoroutine(NewOwnerArrayDelay());

    }

    private IEnumerator NewOwnerArrayDelay()
    {
        yield return new WaitForSeconds(1f);
        print("choose new gameowner");
        GameObject[] objNames = new List<GameObject>(GameObject.FindGameObjectsWithTag("SquareMP")).ToArray();

        print("objnames");
        string[] alphaNames = new string[objNames.Length];

        for (int i = 0; i < objNames.Length; i++)
        {
            alphaNames[i] = objNames[i].name;
        }

        Array.Sort(alphaNames, (x, y) => string.Compare(x, y));


        for (int i = 0; i < alphaNames.Length; i++)
        {
            print("alphanames:" + alphaNames[i]);
        }

        GameManagerMP.instance.gameOwnerName = alphaNames[0];

        print("gameOwnerName " + GameManagerMP.instance.gameOwnerName);

        if (name == GameManagerMP.instance.gameOwnerName)
        {
            print("name == " + GameManagerMP.instance.gameOwnerName);

            GameManagerMP.instance.master = true;
            GameManagerMP.instance.masterObject = gameObject;

            GameManagerMP.instance.StopCoroutine(GameManagerMP.instance.WaitForPlayersJoin());
            GameManagerMP.instance.StartCoroutine(GameManagerMP.instance.WaitForPlayersJoin());
        }
        else
        {
            GameManagerMP.instance.master = false;
            GameManagerMP.instance.masterObject = GameObject.Find(GameManagerMP.instance.gameOwnerName);
        }
    }

    [PunRPC]
    public void CountDownSync(int timerValue, string gameOwner)
    {
        print("bef: " + GameManagerMP.instance.gameOwnerName);
        GameManagerMP.instance.gameOwnerName = gameOwner;
        print("aft: " + GameManagerMP.instance.gameOwnerName);
        if (timerValue == 3)
        {
            StartCoroutine(GameManagerMP.instance.BigCountdown());
        }
        else
        {
            if (GameManagerMP.instance.startTimerText.GetComponent<CanvasGroup>().alpha == 0)
            {
                LeanTween.alphaCanvas(GameManagerMP.instance.startTimerText.GetComponent<CanvasGroup>(), 1, 0.5f);
            }
            GameManagerMP.instance.startTimerText.text = $"starting in {timerValue} to allow more people to join";
        }
    }

    [PunRPC]
    public void Begin()
    {
        GameManagerMP.instance.bigCounting = false;

        AudioTester.instance.StopRising();
        GetComponent<FloatUpNDown>().enabled = false;

        trail.enabled = true;

        GameManagerMP.instance.gameUI.SetActive(true);
        GameManagerMP.instance.waitingPanel.SetActive(false);
        GameManagerMP.instance.started = true;

        inputOn = true;

        totalPlayerNum = PlacementAssigner.instance.players.Count;
        GameManagerMP.instance.ambientParticle.gameObject.SetActive(false);
        startingPlayerNum = PlacementAssigner.instance.players.Count;
        print("Starting Player Num: " + PlacementAssigner.instance.players.Count);

        if (photonView.IsMine)
        {
            BackgroundMusic.instance.MusicFilter(true);
        }

        StartCoroutine(KeepCheckingLastPlayer());
    }

    private IEnumerator KeepCheckingLastPlayer()
    {
        while (true)
        {
            CheckLastPlayer();
            yield return new WaitForSeconds(3);
        }
    }

    [System.Obsolete]
    public void Update()
    {
        nameTag.transform.parent.SetParent(null);
        nameTag.transform.position = new Vector3(transform.position.x, transform.position.y + 1, 0);
        GameManagerMP.instance.boostButton.UpdateBoostVisual();

        if (photonView.IsMine)
        {
            Movement();
            if (GameManagerMP.instance.started)
            {
                Timer();
                GetComponent<FloatUpNDown>().enabled = false;
            }

            if (!activeTimer)
            {
                rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
            }
            else
            {
                if (!isDead)
                {
                    rigidbody.constraints = RigidbodyConstraints2D.None;
                }
                else
                {
                    rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;

                }
            }

            Boost(); 
        }
    }

    public void SpectateTarget()
    {
        localPlayers = new List<GameObject>(GameObject.FindGameObjectsWithTag("SquareMP"));

        for (int i = 0; i < localPlayers.Count; i++)
        {
            if (localPlayers[i].GetComponent<PlayerControllerMP>().IsFinishedPlayer())
            {
                localPlayers.Remove(localPlayers[i]);
            }
        }

        if (spectate)
        {
            if (localPlayers.Count >= 2)
            {
                camera.transform.parent.GetComponent<CameraController>().target = localPlayers[GameManagerMP.instance.spectatingPlayer].transform; //default spectate player 0
                GameManagerMP.instance.spectatingName.text = localPlayers[GameManagerMP.instance.spectatingPlayer].name;
            }
            else
            {
                GameManagerMP.instance.endPanel.SetActive(true);
            }
        }
    }

    [PunRPC]
    public void HideAndDisablePlayer()
    {
        if (finished == true)
        {
            GetComponent<SpriteRenderer>().enabled = false;
            GetComponent<TrailRenderer>().enabled = false;
            GetComponent<PlayerControllerMP>().nameTag.gameObject.SetActive(false);
            GetComponent<Rigidbody2D>().constraints = RigidbodyConstraints2D.FreezeAll;
        }
    }

    private void Timer()
    {
        if (!finished)
        {
            time += Time.unscaledDeltaTime;

            if (time >= 300)
            {
                finished = true;
                GameManagerMP.instance.losersPanel.SetActive(true);
                if (SavePowerArray.instance.publicGame)
                {
                    GameManagerMP.instance.lost = true;
                    GameManagerMP.instance.addTrophy = -50;
                    GameManagerMP.instance.GetStatistics();
                }

                HideAndDisablePlayer();
            }
        }

        
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine)
        {
            PlayerMove();
        }
    }

    private void PlayerMove()
    {
        if (moveX != 0 && moveY != 0)
        {
            if (inputOn)
            {
                dir = new Vector2(GameManagerMP.instance.joystick.Horizontal, GameManagerMP.instance.joystick.Vertical);
                angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            }
        }

        if (angle != 0)
        {
            activeTimer = true;
            savedAngle = angle;
        }
        if (GameManagerMP.instance.started)
        {
            if (!isDead)
            {
                print(4);

                if (!finished)
                {
                    GetComponent<CircleCollider2D>().enabled = true;
                }

                Vector2 vel = dir * (moveX * acceleration);
                rigidbody.AddForce(vel);

                if (acceleration > 0)
                {
                    rigidbody.rotation = angle;
                }

                float thrustForce = Vector2.Dot(rigidbody.velocity, rigidbody.GetRelativeVector(Vector2.down)) * 2.0f;
                Vector2 relForce = Vector2.up * thrustForce;
                rigidbody.AddForce(rigidbody.GetRelativeVector(relForce));

                if (rigidbody.velocity.magnitude > speed)
                {
                    rigidbody.velocity = rigidbody.velocity.normalized * speed;
                }
            }


        }
        else
        {
            GetComponent<CircleCollider2D>().enabled = false;
            rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
        }
    }

    [System.Obsolete]
    private void Boost()
    {
        if (!slow)
        {
            if (GameManagerMP.instance.boostButton.pressed)
            {
                DOTween.To(() => speed, x => speed = x, 30, 0.5f);
            }
            else
            {
                DOTween.To(() => speed, x => speed = x, 15, 0.5f);

            }
        }
        else
        {
            DOTween.To(() => speed, x => speed = x, 5f, 0.5f);
        }

        if (isDead)
        {
            GameManagerMP.instance.boostButton.GetComponent<Button>().interactable = false;
        }
    }



    [System.Obsolete]
    public void Movement()
    {
        moveY = GameManagerMP.instance.joystick.Vertical;
    }

    public void ResetAngles()
    {
        print("resettinh angle");

        angle = 0;
        savedAngle = 0;
        dir = Vector2.zero;
        rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
        rigidbody.velocity = new Vector3(0, 0, 0);
        rigidbody.inertia = 0;
        rigidbody.rotation = 0;
        rigidbody.angularVelocity = 0;
    }

    public void OnCollisionEnter2D(Collision2D other)
    {
        if (photonView.IsMine)
        {
            if (other.collider.CompareTag("Ground"))
            {
                rigidbody.velocity = new Vector2(rigidbody.velocity.x, 0);
                rigidbody.rotation = other.transform.rotation.z;
            }
            if (other.gameObject.CompareTag("Dedley") || other.gameObject.CompareTag("Projectile") || other.gameObject.CompareTag("Turret"))
            {
                ResetAngles();
                Die();
            }

            if (other.gameObject.CompareTag("NoParticleDedley"))
            {
                ResetAngles();
                if (!isDead)
                {
                    isDead = true;
                    photonView.RPC("SeeDie", RpcTarget.Others, false);
                    if (photonView.IsMine)
                    {
                        StartCoroutine(Respawn(false));
                    }
                }
            }
        }        
    }

    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (photonView.IsMine)
        {
            if (collision.CompareTag("World Enter"))
            {
                Finished();
            }

            if (collision.CompareTag("Bounce"))
            {
                slow = true;
                moveY = 0;
                rigidbody.rotation = collision.transform.eulerAngles.z;
                bounceShaker.Shake(bounceShake);

                GameObject bounce = Instantiate(bounceParticle, collision.transform);
                bounce.transform.localScale = collision.transform.localScale;
                bounce.transform.localPosition = Vector3.zero;
                bounce.GetComponent<Renderer>().material = SavePowerArray.instance.levelMatMP;
                StartCoroutine(InputWait());
            }
            if (collision.CompareTag("Camera Trigger"))
            {
                if (photonView.IsMine)
                {
                    camera.DOFieldOfView(float.Parse(collision.name), 1f);
                }
            }

            if (collision.gameObject.CompareTag("Dedley") || collision.gameObject.CompareTag("Projectile") || collision.gameObject.CompareTag("Turret"))
            {
                ResetAngles();
                Die();
            }

            if (collision.gameObject.CompareTag("NoParticleDedley"))
            {
                ResetAngles();
                if (!isDead)
                {
                    isDead = true;
                    photonView.RPC("SeeDie", RpcTarget.Others, false);
                    if (photonView.IsMine)
                    {
                        StartCoroutine(Respawn(false));
                    }
                }
            }
        }
    }

    IEnumerator InputWait()
    {
        yield return new WaitForSeconds(bounceDelay);
        slow = false;
        yield return null;
    }

    public void Die()
    {
        ResetAngles();
        if (!isDead)
        {
            isDead = true;
            photonView.RPC("SeeDie", RpcTarget.Others, true);
            if (photonView.IsMine)
            {
                StartCoroutine(Respawn(true));
            }
        }
    }

    [PunRPC]
    public void SeeDie(bool createParticle)
    {
        print("DIERPC: " + name);
        AudioTester.instance.PlayDeath();

        trail.enabled = false;
        nameTag.gameObject.SetActive(false);

        if (createParticle)
        {
            GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
            death.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;

        }

        transform.position = GameManagerMP.instance.spawnPoint.position;
        
        GetComponent<SpriteRenderer>().enabled = false;

        rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
        rigidbody.constraints = RigidbodyConstraints2D.None;
    }

    [PunRPC]
    public void SeeRespawn()
    {
        transform.position = GameManagerMP.instance.spawnPoint.position;
        StartCoroutine(TrailWait());
    }

    private IEnumerator TrailWait()
    {
        yield return new WaitForSeconds(0.1f);
        nameTag.gameObject.SetActive(true);
        GetComponent<SpriteRenderer>().enabled = true;
        trail.enabled = true;
        trail.Clear();
    }

    [PunRPC]
    public void PullOutSpectators()
    {
        camera.transform.parent.GetComponent<CameraController>().target = gameObject.transform;
        GameManagerMP.instance.spectateButton.SetActive(false);
        GameManagerMP.instance.spectatePanel.SetActive(false);
        GameManagerMP.instance.endPanel.SetActive(true);
    }

    public IEnumerator CheckAndUpdatePlacementHashtable()
    {
        PHastable placementTable = new PHastable();

        Debug.Log("hashing");
        placementTable.Add("1st", PhotonNetwork.CurrentRoom.CustomProperties["1st"].ToString());
        placementTable.Add("2nd", PhotonNetwork.CurrentRoom.CustomProperties["2nd"].ToString());
        placementTable.Add("3rd", PhotonNetwork.CurrentRoom.CustomProperties["3rd"].ToString());
        placementTable.Add("4th", PhotonNetwork.CurrentRoom.CustomProperties["4th"].ToString());
        placementTable.Add("5th", PhotonNetwork.CurrentRoom.CustomProperties["5th"].ToString());

        placementTable.Add("Time1", PhotonNetwork.CurrentRoom.CustomProperties["Time1"].ToString());
        placementTable.Add("Time2", PhotonNetwork.CurrentRoom.CustomProperties["Time2"].ToString());
        placementTable.Add("Time3", PhotonNetwork.CurrentRoom.CustomProperties["Time3"].ToString());
        placementTable.Add("Time4", PhotonNetwork.CurrentRoom.CustomProperties["Time4"].ToString());
        placementTable.Add("Time5", PhotonNetwork.CurrentRoom.CustomProperties["Time5"].ToString());

        if (placementTable["1st"].ToString() == "nullPlayer")
        {
            placementTable.Remove("1st");
            placementTable.Add("1st", name);
        }
        else if (placementTable["2nd"].ToString() == "nullPlayer")
        {
            placementTable.Remove("2nd");
            placementTable.Add("2nd", name);
        }
        else if (placementTable["3rd"].ToString() == "nullPlayer")
        {
            placementTable.Remove("3rd");
            placementTable.Add("3rd", name);
        }
        else if (placementTable["4th"].ToString() == "nullPlayer")
        {
            placementTable.Remove("4th");
            placementTable.Add("4th", name);
        }
        else if (placementTable["5th"].ToString() == "nullPlayer")
        {
            placementTable.Remove("5th");
            placementTable.Add("5th", name);
        }


        if (placementTable["Time1"].ToString() == "0")
        {
            placementTable.Remove("Time1");
            placementTable.Add("Time1", time);
        }
        else if (placementTable["Time2"].ToString() == "0")
        {
            placementTable.Remove("Time2");
            placementTable.Add("Time2", time);
        }
        else if (placementTable["Time3"].ToString() == "0")
        {
            placementTable.Remove("Time3");
            placementTable.Add("Time3", time);
        }
        else if (placementTable["Time4"].ToString() == "0")
        {
            placementTable.Remove("Time4");
            placementTable.Add("Time4", time);
        }
        else if (placementTable["Time5"].ToString() == "0")
        {
            placementTable.Remove("Time5");
            placementTable.Add("Time5", time);
        }

        PhotonNetwork.CurrentRoom.SetCustomProperties(placementTable);

        yield return new WaitForSeconds(1f);
        UpdateArrays();
        //yield return new WaitForSeconds(3f);

        placementEnd = GameManagerMP.instance.endPanel.transform.GetChild(0).gameObject;
        for (int i = 0; i < PlacementAssigner.instance.finishedNames.Count; i++)
        {
            if (name == PlacementAssigner.instance.finishedNames[i])
            {
                placementEnd.GetComponent<TMP_Text>().text = AddOrdinal(i + 1);
                placement = i;
            }
        }

        TrophyReward();

        //if two human players - for loop executes on all four players
        for (int i = 0; i < PlacementAssigner.instance.players.Count; i++)
        {
            PlacementAssigner.instance.players[i].GetComponent<PlayerControllerMP>().photonView.RPC("CheckLastPlayer", RpcTarget.All); //All means all clones
        }

        while (true)
        {
            yield return new WaitForSeconds(1f);
            UpdateArrays();
        }
    }

    private void TrophyReward()
    {
        GameManagerMP.instance.addTrophy = CalculateTrophiesGiven();
        GameManagerMP.instance.GetStatistics();
    }

    private int CalculateTrophiesGiven()
    {
        int numberGiven = 0;

        if (!SavePowerArray.instance.publicGame)
        {
            return 0;
        }

        switch (startingPlayerNum)
        {
            case 2:
                switch (placement)
                {
                    case 0:
                        return 50;
                    case 1:
                        return -25;
                }
                break;
            case 3:
                switch (placement)
                {
                    case 0:
                        return 75;
                    case 1:
                        return 25;
                    case 2:
                        return -25;
                }
                break;
            case 4:
                switch (placement)
                {
                    case 0:
                        return 100;
                    case 1:
                        return 50;
                    case 2:
                        return -25;
                    case 3:
                        return -50;
                }
                break;
            case 5:
                switch (placement)
                {
                    case 0:
                        return 150;
                    case 1:
                        return 100;
                    case 2:
                        return 50;
                    case 3:
                        return -25;
                    case 4:
                        return -75;
                }
                break;
            default:
            break;
        }
        

        return numberGiven;
    }

    public void UpdateArrays()
    {
        print("Update Arrays");
        PlacementAssigner.instance.finishedNames[0] = PhotonNetwork.CurrentRoom.CustomProperties["1st"].ToString();
        PlacementAssigner.instance.finishedNames[1] = PhotonNetwork.CurrentRoom.CustomProperties["2nd"].ToString();
        PlacementAssigner.instance.finishedNames[2] = PhotonNetwork.CurrentRoom.CustomProperties["3rd"].ToString();
        PlacementAssigner.instance.finishedNames[3] = PhotonNetwork.CurrentRoom.CustomProperties["4th"].ToString();
        PlacementAssigner.instance.finishedNames[4] = PhotonNetwork.CurrentRoom.CustomProperties["5th"].ToString();

        PlacementAssigner.instance.finishedTimes[0] = float.Parse(PhotonNetwork.CurrentRoom.CustomProperties["Time1"].ToString());
        PlacementAssigner.instance.finishedTimes[1] = float.Parse(PhotonNetwork.CurrentRoom.CustomProperties["Time2"].ToString());
        PlacementAssigner.instance.finishedTimes[2] = float.Parse(PhotonNetwork.CurrentRoom.CustomProperties["Time3"].ToString());
        PlacementAssigner.instance.finishedTimes[3] = float.Parse(PhotonNetwork.CurrentRoom.CustomProperties["Time4"].ToString());
        PlacementAssigner.instance.finishedTimes[4] = float.Parse(PhotonNetwork.CurrentRoom.CustomProperties["Time5"].ToString());

        PlacementAssigner.instance.EndScreen();

        if (NumFinishedPlayers() == GameManagerMP.instance.currentNumPlayers)
        {
            GameManagerMP.instance.spectateButton.SetActive(false);
        }
    }

    [PunRPC]
    public void CheckLastPlayer()
    {
        print("odsfg23");
        UpdateArrays();
        print("1odsfg33: " + NumFinishedPlayers() + " " + PlacementAssigner.instance.disconnectedPlayers.Count);

        if (NumFinishedPlayers() + PlacementAssigner.instance.disconnectedPlayers.Count == startingPlayerNum - 1)
        {
            print("odsfg33: " + NumFinishedPlayers() + " " + PlacementAssigner.instance.disconnectedPlayers.Count);
            if (!IsFinishedPlayer())
            {
                print("odsfg43");
                if (photonView.IsMine)
                {
                    print("PPOOsafafsasfPP");
                    time = 0;
                    GameManagerMP.instance.spectateButton.SetActive(false);
                    GameManagerMP.instance.endPanel.SetActive(true);
                    finished = true;

                    rigidbody.constraints = RigidbodyConstraints2D.FreezeAll; //doesnt work

                    StartCoroutine(CheckAndUpdatePlacementHashtable());


                    for (int j = 0; j < PlacementAssigner.instance.players.Count; j++)
                    {
                        PlacementAssigner.instance.players[j].GetComponent<PlayerControllerMP>().photonView.RPC("PullOutSpectators", RpcTarget.All);
                    }
                }
            }
        }
    }

    public int NumFinishedPlayers()
    {
        int countFinishedPlayers = 0;
        for (int i = 0; i < PlacementAssigner.instance.finishedNames.Count; i++)
        {
            if (PlacementAssigner.instance.finishedNames[i] != "nullPlayer")
            {
                countFinishedPlayers++;
            }
        }
        return countFinishedPlayers;
    }

    private bool IsFinishedPlayer()
    {
        for (int i = 0; i < PlacementAssigner.instance.finishedNames.Count; i++)
        {
            if (name == PlacementAssigner.instance.finishedNames[i])
            {
                return true;
            }
        }

        return false;
    }

    public void Finished()
    {
        print("End Panel Active");
        if (photonView.IsMine)
        {
            GameManagerMP.instance.endPanel.SetActive(true);

            if (photonView.IsMine)
            {
                BackgroundMusic.instance.MusicFilter(false);
            }

            finished = true;
            rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
            StartCoroutine(CheckAndUpdatePlacementHashtable());

            print("End Panel Asfdghdctive");
        }
    }

    public IEnumerator Respawn(bool createParticle)
    {
        isDead = true;
    
        AudioTester.instance.PlayDeath();

        GetComponent<SpriteRenderer>().enabled = false;
        cameraShaker.Shake(cameraShakePreset);
        trail.Clear();

        if (createParticle)
        {
            GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
            death.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;
        }
        
        transform.eulerAngles = new Vector3(0, 0, 0);
        GetComponent<Rigidbody2D>().rotation = 0;
        trail.enabled = false; //teleporting trail thing
        GetComponent<CircleCollider2D>().enabled = false;
        nameTag.gameObject.SetActive(false);
        rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;

#if UNITY_IOS
        Handheld.Vibrate();
#endif
        GameManagerMP.instance.boostButton.gameObject.GetComponent<Button>().interactable = false;

        yield return new WaitForSeconds(0.5f);

        photonView.RPC("SeeRespawn", RpcTarget.Others);

        trail.enabled = true;
        rigidbody.constraints = RigidbodyConstraints2D.None;

        transform.position = GameManagerMP.instance.spawnPoint.position;
        GetComponent<CircleCollider2D>().enabled = true;
        GetComponent<SpriteRenderer>().enabled = true;

        GameManagerMP.instance.boostButton.gameObject.GetComponent<Button>().interactable = true;

        nameTag.gameObject.SetActive(true);
        deds++;
        activeTimer = false;
        isDead = false;
        ResetAngles();
    }

    public string AddOrdinal(int num)
    {
        switch (num % 100)
        {
            case 11:
            case 12:
            case 13:
                return num + "th";
        }

        switch (num % 10)
        {
            case 1:
                return num + "st";
            case 2:
                return num + "nd";
            case 3:
                return num + "rd";
            default:
                return num + "th";
        }
    }

    public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {

    }

    [PunRPC]
    public void SendSpawnerTargeting(string targetedPlayer, int spawnerID)
    {
        //Debug.Log("targetedplayer: " + targetedPlayer + "spawnerID: " + spawnerID);
        
        GameManagerMP.instance.flyingTurretMPs[spawnerID].target = GameObject.Find(targetedPlayer);
        GameManagerMP.instance.flyingTurretMPs[spawnerID].SpawnProjectile();
    }

}