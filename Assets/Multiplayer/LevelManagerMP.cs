using UnityEngine;
using MilkShake;
using System.Collections;

public class LevelManagerMP : MonoBehaviour
{
    
   
    
    

    public static bool inputEnabled;

    public void Start()
    {
        inputEnabled = true;
        Camera.main.GetComponent<Shaker>();
        //PlayerControllerMP.instance = GameObject.FindGameObjectWithTag("PlayerControllerMP.instanceMP").GetComponent<PlayerControllerMP>();        
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