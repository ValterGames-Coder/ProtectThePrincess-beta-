using UnityEngine;
using GoogleMobileAds.Api;

public class AdsInitializ : MonoBehaviour
{
    void Start()
    {
        MobileAds.Initialize(initStatus => { });
    }
}
