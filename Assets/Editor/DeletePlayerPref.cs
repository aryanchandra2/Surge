using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class EditorTools : EditorWindow
{
    [MenuItem("Tools/Delete Save Files")]
    public static void DeleteSaves()
    {
        SaveManager.instance.DeleteSaveData();
    }

}
