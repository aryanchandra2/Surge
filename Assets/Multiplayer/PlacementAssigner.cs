using UnityEngine;
using System.Collections.Generic;
using TMPro;
using Photon.Pun;
using System.Collections;

public class PlacementAssigner : MonoBehaviourPunCallbacks
{
    public static PlacementAssigner instance;
    public List<GameObject> players;
    public List<float> finishedTimes;
    public List<string> finishedNames;
    public List<string> disconnectedPlayers;
    public Transform placementLayout;
    public Transform playerList;
    public int lastAssignedPlace;
    public int boxWait;

    public void Awake()
    {
        instance = this;
    }

    public void FindList()
    {
        players = new List<GameObject>(GameObject.FindGameObjectsWithTag("SquareMP"));        
    }

    public void Update()
    {
        FindList();
        if (!GameManagerMP.instance.started)
        {
            UpdateListUI();
        }

    }

    public void UpdateListUI()
    {
        for (int i = 0; i < playerList.childCount; i++)
        {
            playerList.GetChild(i).gameObject.SetActive(false);
            playerList.GetChild(i).GetComponent<TMP_Text>().text = "";
        }
        for (int i = 0; i < players.Count; i++)
        {
            playerList.GetChild(i).gameObject.SetActive(true);
            playerList.GetChild(i).GetComponent<TMP_Text>().text = "• " + players[i].name;
        }
    }

    public void EndScreen()
    {
        print("ending");

        for (int i = 0; i < finishedTimes.Count; i++)
        {
            int truncatedTime = (int)finishedTimes[i];
            int minTime = truncatedTime / 60;
            int secTime = truncatedTime % 60;
            string secString = secTime.ToString();
            if (secTime / 10 < 1)
            {
                secString = "0" + secString;
            }

            placementLayout.GetChild(i).GetChild(1).GetChild(1).GetComponent<TMP_Text>().text = minTime.ToString() + ":" + secString;
            if (finishedTimes[i] == 0) 
            {
                placementLayout.GetChild(i).GetChild(1).GetChild(1).GetComponent<TMP_Text>().text = "N/A";
            }
        }

        for (int i = 0; i < finishedNames.Count; i++)
        {
            placementLayout.GetChild(i).GetChild(1).GetChild(0).GetComponent<TMP_Text>().text = finishedNames[i];
            
            if (finishedNames[i] == "nullPlayer")
            {
                placementLayout.GetChild(i).gameObject.SetActive(false);
            }
            else
            {
                StartCoroutine(PlayerBoxAnim(i));
            }
        }

        //for (int i = 0; i < disconnectedPlayers.Count; i++)
        //{
        //    placementLayout.GetChild(i + lastRealPlayerIndex).GetChild(1).GetChild(0).GetComponent<TMP_Text>().text = finishedNames[i];
        //    placementLayout.GetChild(i + lastRealPlayerIndex).GetChild(1).GetChild(1).GetComponent<TMP_Text>().text = "N/A";

        //    StartCoroutine(PlayerBoxAnim(i + lastRealPlayerIndex));
        //}

        GameManagerMP.instance.myPlayer.GetComponent<PlayerControllerMP>().photonView.RPC("HideAndDisablePlayer", RpcTarget.All); //double chack
    }

    public IEnumerator PlayerBoxAnim(int j)
    {
        yield return new WaitForSeconds(boxWait);
        GameObject playerBox = placementLayout.GetChild(j).gameObject;
        playerBox.SetActive(true);
        LeanTween.scale(playerBox, Vector3.one, 0.5f).setEaseOutBounce();
    }
}
