using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FlyingTurretTimer : MonoBehaviour
{
  
    public FlyingTurretMP flyingTurretMP;
    public FlyingTurretScript flyingTurret;

    private void Start()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            flyingTurretMP = transform.GetComponentInParent<FlyingTurretMP>();
        }
        else
        {
            flyingTurret = transform.GetComponentInParent<FlyingTurretScript>();
        }
    }

    void Update()
    {
        if (SavePowerArray.instance.multiplayer)
        {
            if (flyingTurretMP != null)
            {
                gameObject.GetComponent<Image>().fillAmount = flyingTurretMP.shotInterval / flyingTurretMP.startShotInterval;
            }
        }
        else
        {
            gameObject.GetComponent<Image>().fillAmount = flyingTurret.shotInterval / flyingTurret.startShotInterval;

        }
    }
}