using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace MilkShake.Demo
{
    public class CameraSwitcher : MonoBehaviour
    {
        [SerializeField]
        private readonly GameObject mainCamera;
        [SerializeField]
        private readonly GameObject multiCamera;

        public void UISetMainCamera(bool enabled)
        {
            mainCamera.SetActive(enabled);
        }

        public void UISetMultiCamera(bool enabled)
        {
            multiCamera.SetActive(enabled);
        }
    }
}
