using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using DG.Tweening;

public class PowerButtonPress : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDeselectHandler
{
    public static PowerButtonPress instance;
    public bool pressed;

    public Volume volume;
    MotionBlur motionBlur;
    Bloom bloom;

    private void Awake()
    {
        instance = this;
    }


    public void Update()
    {
        Controls();
        
    }

    public void UpdateBoostVisual()
    {
        if (!SavePowerArray.instance.multiplayer)
        {
            if (!PlayerController.instance.slow)
            {
                if (pressed && PlayerController.started)
                {
                    if (volume.profile.TryGet(out motionBlur))
                    {
                        DOTween.To(() => motionBlur.intensity.value, x => motionBlur.intensity.value = x, 1f, 2f);
                    }
                    if (volume.profile.TryGet(out bloom))
                    {
                        DOTween.To(() => bloom.intensity.value, x => bloom.intensity.value = x, 15f, 2f);
                    }

                }
                else
                {
                    if (volume.profile.TryGet(out motionBlur))
                    {
                        DOTween.To(() => motionBlur.intensity.value, x => motionBlur.intensity.value = x, 0f, 1f);
                    }

                    if (volume.profile.TryGet(out bloom))
                    {
                        DOTween.To(() => bloom.intensity.value, x => bloom.intensity.value = x, 3f, 1f);
                    }
                }
            }
            else
            {
                if (volume.profile.TryGet(out bloom))
                {
                    DOTween.To(() => bloom.intensity.value, x => bloom.intensity.value = x, 0f, 1f);
                }
            }
        }
        else
        {
            if (!GameManagerMP.instance.myPlayer.GetComponent<PlayerControllerMP>().slow)
            {
                if (pressed && GameManagerMP.instance.started)
                {
                    if (volume.profile.TryGet(out motionBlur))
                    {
                        DOTween.To(() => motionBlur.intensity.value, x => motionBlur.intensity.value = x, 1f, 2f);
                    }
                    if (volume.profile.TryGet(out bloom))
                    {
                        DOTween.To(() => bloom.intensity.value, x => bloom.intensity.value = x, 15f, 2f);
                    }

                }
                else
                {
                    if (volume.profile.TryGet(out motionBlur))
                    {
                        DOTween.To(() => motionBlur.intensity.value, x => motionBlur.intensity.value = x, 0f, 1f);
                    }

                    if (volume.profile.TryGet(out bloom))
                    {
                        DOTween.To(() => bloom.intensity.value, x => bloom.intensity.value = x, 3f, 1f);
                    }
                }
            }
            else
            {
                if (volume.profile.TryGet(out bloom))
                {
                    print("GAE");
                    DOTween.To(() => bloom.intensity.value, x => bloom.intensity.value = x, 0f, 1f);
                }
            }
        }
        
    }

    public void BoostVisualOff()
    {
        motionBlur.intensity.value = 0;
        bloom.intensity.value = 3;
    }

    private void Controls()
    {
        if (!GetComponent<Button>().interactable)
            pressed = false;


//#if UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX
//        if (!SavePowerArray.instance.multiplayer)
//        {
//            if (Input.GetKey(KeyCode.Space))
//            {
//                pressed = true;
//            }
//            else
//            {
//                pressed = false;
//            }
//        }
        
//#endif
    }


    public void OnPointerDown(PointerEventData data)
    {
        if (GetComponent<Button>().interactable)
        {
            pressed = true;
        }        
    }

    public void OnPointerUp(PointerEventData data)
    {
        pressed = false;
    }

    public void OnDeselect(BaseEventData eventData)
    {
        pressed = false;
    }


}
