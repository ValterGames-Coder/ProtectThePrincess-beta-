using UnityEngine;
using GoogleMobileAds.Api;

public class AdsInterstitial : MonoBehaviour
{
    private InterstitialAd _interstitialAd;

#if UNITY_ANDROID
    private const string _interstitialAdUnitId = "ca-app-pub-3940256099942544/1033173712";
#endif

    private void Start()
    {
        LoadAds();
    }

    private void LoadAds()
    {
        _interstitialAd = new InterstitialAd(_interstitialAdUnitId);
        AdRequest _adRequest = new AdRequest.Builder().Build();
        _interstitialAd.LoadAd(_adRequest);
    }

    public void ShowAd()
    {
        if (_interstitialAd.IsLoaded()) _interstitialAd.Show();
    }
}
