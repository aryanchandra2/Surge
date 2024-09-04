using UnityEngine;
using MilkShake;
using System.Collections.Generic;

public class AudioTester : MonoBehaviour
{
    public static AudioTester instance;

    public AudioSource audioSource;
    public AudioSource clickSource;
    public AudioSource deathSource;
    public AudioSource risingSource;
    public AudioClip clickClip;
    public AudioClip deathClip;
    public AudioClip risingClip;
    public float updateStep = 0.1f;
    public int sampleDataLength = 1024;

    public ParticleSystem stars;
    public ParticleSystem zaps;

    private float currentUpdateTime = 0f;

    public float clipLoudness;

    private float[] clipSampleData;

    public GameObject[] grids;
    public float sizeFactor = 1;
    public float TsizeFactor = 1;

    public float minSize = 0;
    public float maxSize = 500;

    public GameObject gridSquare;


    public Shaker shaker;
    public ShakePreset shakePreset;
    public float limitShake;

    public float scaleRing;
    public float lerpSpeed;

    public AudioClip[] songs;
    public AudioClip[] sortedSongs;
    public AudioClip[] risingClips;
    public AudioClip eventHorizon;
    public bool eventMusic;

    public int songID;
    public List<int> numbers = new List<int>();    

    private void Awake()
    {
        instance = this;
        clipSampleData = new float[sampleDataLength];
    }

    private void Start()
    {
        minSize = 0.6f;

        grids = GameObject.FindGameObjectsWithTag("Grid");
        stars = GameObject.Find("Main Camera").transform.GetChild(0).GetComponent<ParticleSystem>();
        zaps = GameObject.Find("Main Camera").transform.GetChild(3).GetComponent<ParticleSystem>();

        audioSource = GetComponent<AudioSource>();

        int num = 0;
        
        for (int i = 0; i < songs.Length; i++)
        {
            numbers.Add(num);
            num++;
        }

        sortedSongs = new AudioClip[songs.Length];

        for (int i = 0; i < songs.Length; i++)
        {
            int num2 = numbers[Random.Range(0, numbers.Count)];
            sortedSongs[num2] = songs[i];
            numbers.Remove(num2);
        }

        songID = Random.Range(0, sortedSongs.Length - 1);
        audioSource.clip = sortedSongs[songID];
        audioSource.Play();
    }

    [System.Obsolete]
    private void Update()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            if (GameManagerMP.instance != null)
            {
                if (!GameManagerMP.instance.bigCounting)
                {
                    print("new songwq3");

                    PlayRandomSongs();
                }
            }
            
        }
        else
        {
            PlayRandomSongs();
        }

        if (audioSource.isPlaying)
        {
            MusicAnimations();
        }
        
    }

    public void PlayRandomSongs()
    {
        if (eventMusic && !audioSource.isPlaying)
        {
            audioSource.clip = eventHorizon;
            audioSource.Play();

        }
        else
        {
            if (!audioSource.isPlaying)
            {
                if (songID < sortedSongs.Length - 1)
                {
                    songID++;
                }
                else
                {
                    songID = 0;
                }
                audioSource.clip = sortedSongs[songID];
                audioSource.Play();

            }
        }
    }

    [System.Obsolete]
    private void MusicAnimations()
    {
        currentUpdateTime += Time.deltaTime;
        if (currentUpdateTime >= updateStep)
        {
            currentUpdateTime = 0;
            audioSource.clip.GetData(clipSampleData, audioSource.timeSamples);
            clipLoudness = 0f;
            foreach (var sample in clipSampleData)
            {
                clipLoudness += Mathf.Abs(sample);
            }
            clipLoudness /= sampleDataLength;
            clipLoudness *= sizeFactor;
            clipLoudness = Mathf.Clamp(clipLoudness, minSize, maxSize);

            ParticleSystem.Particle[] particles = new ParticleSystem.Particle[stars.particleCount];
            stars.GetParticles(particles);

            for (int i = 0; i < particles.Length; i++)
            {
                particles[i].size = clipLoudness;
                particles[i].position = new Vector3(particles[i].position.x, particles[i].position.y, 0);
            }


            stars.SetParticles(particles, particles.Length);

            if (clipLoudness >= limitShake)
            {
                zaps.Play();
                shaker.Shake(shakePreset);
            }
        }
    }

    public void PlayClick()
    {
        clickSource.PlayOneShot(clickClip);
    }

    public void PlayDeath()
    {
        if (GameManagerMP.instance == null)
        {
            if (PlayerController.started)
            {
                deathSource.PlayOneShot(deathClip);
            }
        }
        else
        {
            if (GameManagerMP.instance.started)
            {
                deathSource.PlayOneShot(deathClip);
            }
        }
        
    }

    public void PlayRising(int counterNum)
    {        
        risingSource.PlayOneShot(risingClips[counterNum]);
        audioSource.Stop();
    }

    public void StopRising()
    {
        risingSource.Stop();
        audioSource.Play();
    }
}
