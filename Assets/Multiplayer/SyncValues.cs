using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class SyncValues : PhotonTransformViewClassic
{
    PlayerControllerMP player;
    Rigidbody2D rigidbody2D;

    private void Start()
    {
        player = GetComponent<PlayerControllerMP>();
        rigidbody2D = GetComponent<Rigidbody2D>();
    }

    private void Update()
    {
        SetSynchronizedValues(new Vector3(player.speed, 0), player.rotationControl);
    }

}
