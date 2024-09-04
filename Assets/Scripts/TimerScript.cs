using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour
{
    public GameObject turret;

    void Update()
    {
        gameObject.GetComponent<Image>().fillAmount = turret.GetComponent<TurretScript>().shotInterval/ turret.GetComponent<TurretScript>().startShotInterval;
    }
}
