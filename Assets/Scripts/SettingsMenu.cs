using UnityEngine;
using UnityEngine.Audio;

public class SettingsMenu : MonoBehaviour
{
    private bool isMuted;
    private bool sfxMuted;

    public CanvasGroup check;
    public CanvasGroup sfxCheck;

    public AudioMixer mixer;

    private void Start()
    {
        isMuted = !SaveManager.instance.activeSave.musicToggle;
        sfxMuted = !SaveManager.instance.activeSave.sfxToggle;

        if (isMuted)
        {
            mixer.SetFloat("musicVol", -80);
            LeanTween.alphaCanvas(check, 0, 0.1f);

        }
        else
        {
            mixer.SetFloat("musicVol", 0);
            LeanTween.alphaCanvas(check, 1, 0.1f);

        }

        if (sfxMuted)
        {
            mixer.SetFloat("sfxVol", -80);
            LeanTween.alphaCanvas(sfxCheck, 0, 0.1f);
        }
        else
        {
            mixer.SetFloat("sfxVol", 0);
            LeanTween.alphaCanvas(sfxCheck, 1, 0.1f);
        }
    }

    public void MutePressed ()
    {
        isMuted = !isMuted;
        SaveManager.instance.activeSave.musicToggle = !isMuted;
        if (isMuted)
        {
            mixer.SetFloat("musicVol", -80);
            LeanTween.alphaCanvas(check, 0, 0.1f);

        }
        else
        {
            mixer.SetFloat("musicVol", 0);
            LeanTween.alphaCanvas(check, 1, 0.1f);

        }
    }

    public void SFXMutePressed()
    {
        sfxMuted = !sfxMuted;
        SaveManager.instance.activeSave.sfxToggle = !sfxMuted;
        if (sfxMuted)
        {
            mixer.SetFloat("sfxVol", -80);
            LeanTween.alphaCanvas(sfxCheck, 0, 0.1f);

        }
        else
        {
            mixer.SetFloat("sfxVol", 0);
            LeanTween.alphaCanvas(sfxCheck, 1, 0.1f);

        }
    }
}
