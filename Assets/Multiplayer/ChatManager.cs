using UnityEngine.UI;
using UnityEngine;
using Photon.Pun;
using TMPro;
using System.Collections;

public class ChatManager : MonoBehaviourPunCallbacks
{
    public GameObject speechObjectPrefab;
    public TMP_InputField chatInputField;

    private void Update()
    {
        //if (chatInputField.text != "" && chatInputField.text.Length > 0 && Input.GetKeyDown(KeyCode.T))
        //{
        //    GameObject objFeed = PhotonNetwork.Instantiate(speechObjectPrefab.name, new Vector2(0, 0), Quaternion.identity);
        //    objFeed.transform.SetParent(transform);
        //    objFeed.GetComponent<TMP_Text>().text = chatInputField.text;
        //    objFeed.GetComponent<TMP_Text>().color = Color.yellow;
        //}
    }
}



