using UnityEngine;
using GoogleMobileAds.Api;

public class AdsRewarded : MonoBehaviour
{
    private RewardedAd _rewardedAd;

#if UNITY_ANDROID
    private const string _rewardedAdUnitId = "ca-app-pub-3940256099942544/5224354917";
#endif

    private void Start()
    {
        LoadAds();
    }

    private void OnDestroy()
    {
        _rewardedAd.OnUserEarnedReward -= HandleUserEarnedReward;
    }

    private void LoadAds()
    {
        _rewardedAd = new RewardedAd(_rewardedAdUnitId);
        AdRequest _adRequest = new AdRequest.Builder().Build();
        _rewardedAd.LoadAd(_adRequest);
        _rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;

    }

    public void ShowAd()
    {
        if (_rewardedAd.IsLoaded()) _rewardedAd.Show();
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        int money = PlayerPrefs.GetInt("Money");
        PlayerPrefs.SetInt("Money", money + 10);
    }
}
