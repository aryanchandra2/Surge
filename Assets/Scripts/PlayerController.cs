using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using MilkShake;
using DG.Tweening;
using TMPro;

public class PlayerController : MonoBehaviour
{
    public static PlayerController instance;

    public int deds = 0;
    public bool isDead;
    public bool inputOn;
    public float bounceDelay;
    public float speed;
    public float acceleration;
    public float rotationControl;
    public float time;
    public bool slow;

    private float moveY;
    private readonly float moveX = 1;
    public PowerButtonPress boostButton;

    public int tempRespawnPosition;
    [HideInInspector] public Rigidbody2D rigidbody;

    [HideInInspector] public Vector3 lastVelocity;
 
    [HideInInspector] public GameObject gameUI;
    public GameObject mainMenu;
    [HideInInspector] public Transform checkpointHolder;
    [HideInInspector] public GameObject checkpointEffect;
    [HideInInspector] public GameObject worldEffect;

    public TrailRenderer trail;

    [HideInInspector] public Joystick joystick;
    [HideInInspector] public LevelManager levelManager;
    [HideInInspector] public Canvas canvas;

    public Shaker shaker;
    [HideInInspector] public ShakePreset bounceShake;
    [HideInInspector] public GridLayoutGroup powersContainer;
    public TMP_Text timerText;
    public GameObject bounceParticle;
    public GameObject boostParticle;
    public bool isTouchingGround;
    public RectTransform lvlFinishPanel;
    public TMP_Text finishTimeText;
    public TMP_Text bestTimeText;
    public TMP_Text levelNameText;
    public CanvasGroup fadeBG;
    public static bool started;
    public GameObject levelsObject;
    public Image dimensionIcon;

    public Vector2 dir = Vector2.zero;
    public float angle = 0;
    public float savedAngle;

    public bool activeTimer;
    public bool fadeTimer = true;

    public int recentLevel;
    public int lvl;
    public GameObject deathEffect;

    public GameObject[] horizonStages;

    public void Awake()
    {
        instance = this;
        trail.enabled = false;
        SavePowerArray.instance.multiplayer = false;

    }

    public void Start()
    {/*
        print("numnull " + LevelTimes.instance.numNotNull);*/
        Material levelMat = SetDimensionColor.instance.dimensionMaterials[LevelTimes.instance.numNotNull];
        Material zapsMat = SetDimensionColor.instance.zapsMaterials[LevelTimes.instance.numNotNull];
        GetComponent<SpriteRenderer>().material = levelMat;
        trail.material = levelMat;
        SavePowerArray.instance.levelMat = levelMat;
        SavePowerArray.instance.zapsMat = zapsMat;
        gameUI.SetActive(false);
        if (SaveManager.instance.hasLoaded)
        {
            LeanTween.delayedCall(0.2f, StartDelayed);

        }

        tempRespawnPosition = LevelTimes.instance.numNotNull;
        Camera.main.transform.parent.position = transform.position;
        canvas.gameObject.SetActive(true);
        mainMenu.SetActive(true);

        rigidbody = GetComponent<Rigidbody2D>();
        joystick.gameObject.SetActive(true);
        SetDimensionColor.instance.SetDimensionMaterial();

    }

    public void StartDelayed()
    {
        int latestLevel = 0;
        for (int i = 0; i < 5; i++)
        {
            if (SaveManager.instance.activeSave.unlocks.ToCharArray()[i].Equals('1'))
            {
                latestLevel = i;
            }
        }
        Dimensions.instance.TeleportToLevel(latestLevel);
    }

    public void Begin()
    {
        started = true;
        activeTimer = false;
        mainMenu.SetActive(false);
        gameUI.SetActive(true);
        GetComponent<FloatUpNDown>().enabled = false;
        BackgroundMusic.instance.MusicFilter(true);
        GetComponent<CircleCollider2D>().enabled = true;
        trail.enabled = true;
        trail.Clear();
    }

    [System.Obsolete]
    public void Update()
    {
        boostButton.UpdateBoostVisual();
        SaveManager.instance.Save();
        if (started)
        {
            Movement();
            Boost();

            if (activeTimer)
            {
                Timer();
                rigidbody.constraints = RigidbodyConstraints2D.None;

                if (fadeTimer)
                {
                    LeanTween.alphaCanvas(timerText.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
                }
                fadeTimer = false;
                
            }
            else
            {
                rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;

            }
        }
    }

    public void FixedUpdate()
    {
        if (moveX != 0 && moveY != 0)
        {
            if (inputOn)
            {
                dir = new Vector2(joystick.Horizontal, joystick.Vertical);
                angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            }
        }

        if (started)
        {
            if (!isDead)
            {
                if (angle != 0)
                {
                    activeTimer = true;
                    savedAngle = angle;
                }

                transform.position = new Vector3(transform.position.x, transform.position.y, 0);

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

    private void Timer()
    {
        time += Time.unscaledDeltaTime;
        timerText.text = time.ToString("f2");
    }

    [System.Obsolete]
    public void Movement()
    {
        moveY = joystick.Vertical;
        if (rigidbody.rotation != 0)
        {
            GetComponent<Attractor>().enabled = true;
        }
        else
        {
            GetComponent<Attractor>().enabled = false;
        }
    }

    public void ResetAngles()
    {
        angle = 0;
        savedAngle = 0;
        dir = Vector2.zero;
        
        rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
        rigidbody.velocity = new Vector3(0, 0, 0);
        rigidbody.inertia = 0;
        rigidbody.rotation = 0;
        rigidbody.angularVelocity = 0;
        print("resett");
    }


    [System.Obsolete]
    private void Boost()
    {
        if (!slow)
        {
            if (boostButton.pressed)
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
            boostButton.GetComponent<Button>().interactable = false;
        }        
    }

    public void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Ground"))
        {
            isTouchingGround = true;
            rigidbody.velocity = new Vector2(rigidbody.velocity.x, 0);
            rigidbody.rotation = other.transform.rotation.z;
        }
        if (other.gameObject.CompareTag("Dedley") || other.gameObject.CompareTag("Projectile") || other.gameObject.CompareTag("Turret"))
        {
            Die();
            deds++;

        }
        if (other.gameObject.CompareTag("NoParticleDedley"))
        {
            ResetAngles();
            inputOn = true;
            if (!isDead)
            {
                levelManager.Respawn();
            }
        }
        if (other.gameObject.CompareTag("Moving"))
        {
            if (gameObject.activeSelf)
            {
                gameObject.transform.SetParent(other.transform);
            }
        }
    }

    public void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Ground"))
        {
            isTouchingGround = false;
        }
        if (other.gameObject.CompareTag("Moving"))
        {
            if (gameObject.activeSelf)
            {
                gameObject.transform.SetParent(null);
                gameObject.transform.localScale = new Vector3(0.5f, 0.5f);
            }
        }
    }

    [System.Obsolete]
    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Open"))
        {
            horizonStages[int.Parse(collision.name[5..]) - 1].SetActive(true);
            horizonStages[int.Parse(collision.name[5..]) - 3].SetActive(false);
        }

        if (collision.gameObject.CompareTag("Dedley") || collision.gameObject.CompareTag("Projectile") || collision.gameObject.CompareTag("Turret"))
        {
            Die();
            deds++;
        }

        if (collision.gameObject.CompareTag("NoParticleDedley"))
        {
            ResetAngles();
            inputOn = true;
            if (!isDead)
            {
                levelManager.Respawn();
            }
        }

        if (collision.CompareTag("World Enter"))
        {           
            if (collision.GetComponent<Level>().levelID != tempRespawnPosition)
            {
                tempRespawnPosition = collision.gameObject.GetComponent<Level>().levelID;
                if (collision.GetComponent<Level>().levelID > SaveManager.instance.activeSave.respawnPosition)
                {
                    if (SaveManager.instance.activeSave.respawnPosition < 5)
                    {
                        SaveManager.instance.activeSave.respawnPosition = collision.gameObject.GetComponent<Level>().levelID;
                    }
                }
                
                SaveManager.instance.Save();
                rigidbody.rotation = 0;
            }
        }

        if (collision.CompareTag("World Point"))
        {
            lvl = int.Parse(collision.name.Substring(4)) - 1;
            print(lvl);
            if (lvl == -1)
            {
                Dimensions.instance.levelNum = 0;

                Dimensions.instance.TeleportToLevel(Dimensions.instance.levelNum);
                FadeTween.instance.FadeIn();

                MenuController.instance.MoveMenu(4);
                dimensionIcon.material = SetDimensionColor.instance.dimensionMaterials[1];

                return;
            }
            else if (lvl == -2)
            {
                Dimensions.instance.levelNum = -2;
                dimensionIcon.material = SetDimensionColor.instance.demonMaterial;
                Dimensions.instance.TeleportToLevel(Dimensions.instance.levelNum);
                FadeTween.instance.FadeIn();

                MenuController.instance.MoveMenu(0);

                finishTimeText.text = time.ToString("f2") + "  <sprite=\"Timer\" index=0>";
                levelNameText.text = "  Horizon";
                LeanTween.alphaCanvas(fadeBG, 1, 0.5f).setEaseOutExpo().setOnStart(EnableFadeBG);
                LeanTween.alphaCanvas(lvlFinishPanel.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
                LeanTween.scale(lvlFinishPanel, Vector3.one, 0.5f).setEaseOutBounce();

                if (time < -(SaveManager.instance.activeSave.eventTime / 10000) || SaveManager.instance.activeSave.eventTime == 0 || SaveManager.instance.activeSave.eventTime == 1)
                {
                    SaveManager.instance.activeSave.eventTime = Mathf.RoundToInt(-time * 10000);
                    print(123456);
                    if (PlayfabManager.instance.loggedIn)
                    {
                        PlayfabManager.instance.SendLeaderboard((int)SaveManager.instance.activeSave.eventTime, -1);

                    }
                    PlayfabManager.instance.AddKeys(1000);
                }

                bestTimeText.text = (-(SaveManager.instance.activeSave.eventTime / 10000)).ToString("f2") + "  <sprite=\"Timer\" index=0>";
                trail.enabled = false;
                trail.Clear();

                return;
            }
            else
            {
                recentLevel = lvl + 1;

                dimensionIcon.material = SetDimensionColor.instance.dimensionMaterials[lvl];
                print("lvl: " + lvl);
                Dimensions.instance.levelNum = int.Parse(collision.name.Substring(collision.name.Length - 2));
                finishTimeText.text = time.ToString("f2") + "  <sprite=\"Timer\" index=0>";
                levelNameText.text = "Level " + recentLevel;
                LeanTween.alphaCanvas(fadeBG, 1, 0.5f).setEaseOutExpo().setOnStart(EnableFadeBG);
                LeanTween.alphaCanvas(lvlFinishPanel.GetComponent<CanvasGroup>(), 1, 0.5f).setEaseOutExpo();
                LeanTween.scale(lvlFinishPanel, Vector3.one, 0.5f).setEaseOutBounce();

                if (time < -(SaveManager.instance.activeSave.times[lvl] / 10000) || SaveManager.instance.activeSave.times[lvl] == 0 || SaveManager.instance.activeSave.times[lvl] == 1)
                {
                    SaveManager.instance.activeSave.times[lvl] = Mathf.RoundToInt(-time * 10000);
                    print(123456);
                    if (PlayfabManager.instance.loggedIn)
                    {
                        PlayfabManager.instance.SendLeaderboard((int)SaveManager.instance.activeSave.times[lvl], lvl);

                    }
                    PlayfabManager.instance.SetLevelUnlocks(lvl + 1);
                    PlayfabManager.instance.AddKeys(5);
                }

                bestTimeText.text = (-(SaveManager.instance.activeSave.times[lvl] / 10000)).ToString("f2") + "  <sprite=\"Timer\" index=0>";
                trail.enabled = false;
                trail.Clear();


                if (Dimensions.instance.levelNum > 4)
                {
                    Dimensions.instance.levelNum = 4;
                }
                Dimensions.instance.TeleportToLevel(Dimensions.instance.levelNum);
                FadeTween.instance.FadeIn();
                time = 0;
            }
            
        }

        if (collision.CompareTag("Bounce"))
        {
            slow = true;
            moveY = 0;
            rigidbody.rotation = collision.transform.eulerAngles.z;
            shaker.Shake(bounceShake);
            
            GameObject bounce = Instantiate(bounceParticle,collision.transform);
            bounce.transform.localScale = collision.transform.localScale;
            bounce.transform.localPosition = Vector3.zero;
            bounce.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;
            StartCoroutine(InputWait());
        }

        if (collision.CompareTag("Camera Trigger"))
        {
            Camera.main.DOFieldOfView(float.Parse(collision.name), 1f);
        }
    }

    IEnumerator InputWait()
    {
        yield return new WaitForSeconds(bounceDelay);
        slow = false;
        yield return null;
    }

    public void ExitFinishPanel()
    {
        LeanTween.alphaCanvas(fadeBG, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG);
        LeanTween.alphaCanvas(lvlFinishPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(lvlFinishPanel, Vector3.zero, 0.5f).setEaseInBounce();
    }

    public void ReplayLvl()
    {
        LeanTween.alphaCanvas(fadeBG, 0, 0.5f).setEaseOutExpo().setOnComplete(DisableFadeBG);
        LeanTween.alphaCanvas(lvlFinishPanel.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        LeanTween.scale(lvlFinishPanel, Vector3.zero, 0.5f).setEaseInBounce();


        Dimensions.instance.TeleportToLevel(recentLevel -1);

        ResetAngles();
        Begin();
    }

    private void EnableFadeBG()
    {
        fadeBG.gameObject.SetActive(true);
    }

    private void DisableFadeBG()
    {
        fadeBG.gameObject.SetActive(false);
    }

    public void Die()
    {
        ResetAngles();
        inputOn = true;
        if (!isDead)
        {
            GameObject death = Instantiate(deathEffect, transform.position, Quaternion.identity);
            death.GetComponent<Renderer>().material = SavePowerArray.instance.levelMat;
            levelManager.Respawn();
        }
        
    }
}
