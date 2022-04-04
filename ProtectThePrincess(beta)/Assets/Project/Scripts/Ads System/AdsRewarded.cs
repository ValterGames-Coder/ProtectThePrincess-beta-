using UnityEngine;
using GoogleMobileAds.Api;
using TMPro;

public class AdsRewarded : MonoBehaviour
{
    private RewardedAd _rewardedAd;
    [SerializeField] private Animation _addMoney;
    [SerializeField] private TMP_Text _addMoneyText;
    [SerializeField] private int _minMoney, _maxMoney;

#if UNITY_ANDROID
    private const string _rewardedAdUnitId = "ca-app-pub-4721480223801357/4410482404";
#endif

    /*private void OnEnable()
    {
        _rewardedAd = new RewardedAd(_rewardedAdUnitId);
        AdRequest _adRequest = new AdRequest.Builder().Build();
        _rewardedAd.LoadAd(_adRequest);
        _rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;

    }*/

    private void OnDestroy()
    {
        _rewardedAd.OnUserEarnedReward -= HandleUserEarnedReward;
    }

    public void ShowAd()
    {
        if (_rewardedAd.IsLoaded()) _rewardedAd.Show();
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        int money = Random.Range(_minMoney,_maxMoney);
        _addMoneyText.text = money.ToString();
        FindObjectOfType<ShopManager>().money += money;
        _addMoney.Play();
    }
}
