using UnityEngine;
using UnityEngine.UI;
using MilkShake;
using System.Collections;

public class LevelManager : MonoBehaviour
{
    public static LevelManager instance;

    private GameObject square;
    public float respawnDelay;
    public GameObject checkpointHolder;
    public Shaker shaker;
    public ShakePreset shakePreset;
    public GameObject theButton;

    private void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        Camera.main.GetComponent<Shaker>();
        square = GameObject.FindGameObjectWithTag("Square");
    }

    public void Respawn()
    {
        StartCoroutine(RespawnCoroutine());
    }
    public IEnumerator RespawnCoroutine()
    {
        if (AudioTester.instance.eventMusic) 
        {
            PlayerController.instance.horizonStages[0].SetActive(true);
            PlayerController.instance.horizonStages[1].SetActive(true);
            PlayerController.instance.horizonStages[2].SetActive(false);
            PlayerController.instance.horizonStages[3].SetActive(false);
            PlayerController.instance.horizonStages[4].SetActive(false);
        }

        PlayerController.instance.GetComponent<SpriteRenderer>().enabled = false;
        AudioTester.instance.PlayDeath();
        LeanTween.alphaCanvas(PlayerController.instance.timerText.GetComponent<CanvasGroup>(), 0, 0.5f).setEaseOutExpo();
        PlayerController.instance.timerText.text = PlayerController.instance.time.ToString("f2");
        PlayerController.instance.activeTimer = false;
        PlayerController.instance.fadeTimer = true;

        PlayerController.instance.isDead = true;

        foreach (GameObject projectile in GameObject.FindGameObjectsWithTag("Projectile"))
        {
            Destroy(projectile);
        }
        foreach (GameObject turret in GameObject.FindGameObjectsWithTag("Turret"))
        {
            if (turret.TryGetComponent<TurretScript>(out _))
            {
                turret.GetComponent<TurretScript>().shotInterval = 0;
            }
            else
            {
                turret.GetComponent<FlyingTurretScript>().shotInterval = 0;
            }
        }

        

        PlayerController.instance.rigidbody.constraints = RigidbodyConstraints2D.FreezeAll;
        PlayerController.instance.rigidbody.velocity = new Vector3(0,0,0);
        PlayerController.instance.rigidbody.inertia = 0;
        PlayerController.instance.rigidbody.rotation = 0;
        PlayerController.instance.rigidbody.angularVelocity = 0;
        PlayerController.instance.GetComponent<FloatUpNDown>().tempestPos = new Vector3(0, 0, 0); ;
        shaker.Shake(shakePreset);
        DestroyObjects();
        ResetObjects();
        PlayerController.instance.trail.Clear();


        square.transform.eulerAngles = new Vector3(0, 0, 0);
        square.GetComponent<Rigidbody2D>().rotation = 0;

        PlayerController.instance.trail.enabled = false;
        square.GetComponent<CircleCollider2D>().enabled = false;
        //square.SetActive(false);

        //Handheld.Vibrate();
        PlayerController.instance.boostButton.GetComponent<Button>().interactable = false;

        yield return new WaitForSeconds(respawnDelay);
        PlayerController.instance.time = 0;
        GameObject[] movers = GameObject.FindGameObjectsWithTag("Moving");
        foreach (GameObject target in movers)
        {
            if (target.TryGetComponent(out PlatformMovement _))
            {
                target.GetComponent<PlatformMovement>().moving = false;
                target.transform.GetChild(0).localPosition = target.GetComponent<PlatformMovement>().posA;
                LeanTween.cancel(target.transform.GetChild(0).gameObject);
            }
            if (target.TryGetComponent(out PlatformMovement _))
            {
                target.GetComponent<PlatformMovement>().moving = true;
                target.GetComponent<PlatformMovement>().nextPos = target.GetComponent<PlatformMovement>().posB;

            }
        }

        PlayerController.instance.GetComponent<SpriteRenderer>().enabled = true;
        //square.SetActive(true);
        PlayerController.instance.rigidbody.constraints = RigidbodyConstraints2D.None;
        PlayerController.instance.transform.position = new Vector3(0, 0, 0);
        
        square.GetComponent<CircleCollider2D>().enabled = true;
        PlayerController.instance.trail.enabled = true;

        PlayerController.instance.boostButton.GetComponent<Button>().interactable = true;

        if (PlayerController.instance.deds % 20 == 0 && PlayerController.instance.deds != 0)
        {
            InterstitialAds.instance.ShowAd();
        }
        PlayerController.instance.ResetAngles();
        PlayerController.instance.isDead = false;
    }

    public void DestroyObjects()
    {
        GameObject[] gameObjects = GameObject.FindGameObjectsWithTag("Projectile");
        foreach (GameObject target in gameObjects)
        {
            Destroy(target);
        }
    }

    public void ResetObjects()
    {
        GameObject[] gameObjects = GameObject.FindGameObjectsWithTag("Turret");
        foreach (GameObject target in gameObjects)
        {
            if (target.TryGetComponent(out TurretScript _))
            {
                target.GetComponent<TurretScript>().shotInterval = target.GetComponent<TurretScript>().startShotInterval;
            }

            if (target.TryGetComponent(out FlyingTurretScript _))
            {
                target.GetComponent<FlyingTurretScript>().shotInterval = target.GetComponent<FlyingTurretScript>().startShotInterval;
            }
        }

        
    }
}