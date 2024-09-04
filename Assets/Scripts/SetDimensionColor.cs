using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;

public class SetDimensionColor : MonoBehaviour
{
    public static SetDimensionColor instance;
    public List<Material> dimensionMaterials;
    public List<Material> zapsMaterials;
    public GameObject[] dedlies;
    public GameObject[] ui;
    public Material tutMaterial;
    public Material tutZap;
    public Material demonMaterial;
    public Material demonZap;

    public void Awake()
    {
        instance = this;
    }

    public void Start()
    {
        GameObject.FindGameObjectsWithTag("UI Change").CopyTo(ui,0);
        SetDimensionMaterial();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Return))
        {
            SetDimensionMaterial();
        }
    }

    public void SetDimensionMaterial()
    {
        foreach (GameObject UIobject in ui)
        {
            if (UIobject.TryGetComponent<Image>(out _))
            {
                UIobject.GetComponent<Image>().material = SavePowerArray.instance.levelMat;
            }
        }
        AudioTester.instance.zaps.GetComponent<Renderer>().material = SavePowerArray.instance.zapsMat;
    }
}
