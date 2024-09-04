using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class LevelTimes : MonoBehaviour
{
    public static LevelTimes instance;
    public TMP_Text[] lvlTimeTexts;
    public GameObject[] locks;
    public int numNotNull = 0;
    public bool[] unlocks;


    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        SetTimeTexts();
    }

    public void SetTimeTexts()
    {
        numNotNull = 0;
        for (int i = 0; i < 5; i++)
        {
            unlocks[i] = false;
            if (SaveManager.instance.activeSave.unlocks.ToCharArray()[i].Equals('1'))
            {
/*                print("nbigga");
*/                unlocks[i] = true;
                numNotNull = i;
                if (SaveManager.instance.activeSave.times[i] < 0)
                {
                    lvlTimeTexts[i].text = (-SaveManager.instance.activeSave.times[i] / 10000f).ToString("f2") + " <sprite=\"TimerBlack\" index=0>";
                }

            }
            else if (SaveManager.instance.activeSave.unlocks.ToCharArray()[i].Equals('0'))
            {
                if (numNotNull < 5)
                {
/*                    print(locks[i].transform.childCount);
*/
                    lvlTimeTexts[i].transform.GetChild(0).gameObject.SetActive(false);
                    locks[i].transform.parent.gameObject.SetActive(true);
                    if (lvlTimeTexts[i].GetComponentInParent<Button>() != null)
                        lvlTimeTexts[i].GetComponentInParent<Button>().interactable = false;


                    lvlTimeTexts[i].text = "";
                }                    
            }
        }

        for (int i = 0; i < SaveManager.instance.activeSave.times.Count; i++)
        {
            if (unlocks[i])
            {
                lvlTimeTexts[i].transform.GetChild(0).gameObject.SetActive(true);
                if (lvlTimeTexts[i].GetComponentInParent<Button>() != null)
                    lvlTimeTexts[i].GetComponentInParent<Button>().interactable = true;
                locks[i].transform.parent.gameObject.SetActive(false);

            }

        }
    }

    public void ClearTimeTexts()
    {
        for (int i = 0; i < lvlTimeTexts.Length; i++)
        {
            lvlTimeTexts[i].text = "";
        }        
    }
}