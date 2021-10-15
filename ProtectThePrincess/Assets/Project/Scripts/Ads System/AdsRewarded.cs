using UnityEngine;
using GoogleMobileAds.Api;
using TMPro;

public class AdsRewarded : MonoBehaviour
{
    private RewardedAd _rewardedAd;
    public GameObject _panel;
    public TMP_Text _moneyText;

#if UNITY_ANDROID
    private const string _rewardedAdUnitId = "ca-app-pub-4721480223801357/4410482404";
#endif

    private void OnEnable()
    {
        _rewardedAd = new RewardedAd(_rewardedAdUnitId);
        AdRequest _adRequest = new AdRequest.Builder().Build();
        _rewardedAd.LoadAd(_adRequest);
        _rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;

    }

    private void OnDestroy()
    {
        _rewardedAd.OnUserEarnedReward -= HandleUserEarnedReward;

    }

    public void ShowAd()
    {
        if (_rewardedAd.IsLoaded()) _rewardedAd.Show();
    }
    
    public void AddMoney()
    {
    	int money = Random.Range(5, 25);
    	_moneyText.text = money.ToString();
        PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") + money);
        _panel.SetActive(false);
    }
    
    public void HandleUserEarnedReward(object sender, Reward args)
    {
    	int money = Random.Range(5, 25);
    	_moneyText.text = money.ToString();
        PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") + money);
        FindObjectOfType<ShopManager>().money += money;
    }

}
