using UnityEngine;
using GoogleMobileAds.Api;

public class AdsSecondHealth : MonoBehaviour
{
    #if UNITY_ANDROID
        private const string _rewardedAdUnitId = "ca-app-pub-4721480223801357/4410482404";
    #endif
    private RewardedAd _rewardedAd;
    private SpawnerEnemies _spawner;
    private Health towerHealth;
    [SerializeField] private GameObject _panel;

    void Start()
    {
        _spawner = FindObjectOfType<SpawnerEnemies>();
        towerHealth = GameObject.Find("Tower").GetComponent<Health>();
    }
    
    /*private void OnEnable()
    {
        //_rewardedAd = new RewardedAd(_rewardedAdUnitId);
        AdRequest _adRequest = new AdRequest.Builder().Build();
        _rewardedAd.LoadAd(_adRequest);
        _rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;

    }*/

    /*
    private void OnDestroy()
    {
        _rewardedAd.OnUserEarnedReward -= HandleUserEarnedReward;
    }
    */
    
    public void ShowAd()
    {
        if (_rewardedAd.IsLoaded()) _rewardedAd.Show();
    }

    public void HandleUserEarnedReward(object sender, Reward args)
    {
        _spawner.lose = false;
        towerHealth.health = towerHealth.maxHealth / 2;
        _panel.SetActive(false);
    }
}