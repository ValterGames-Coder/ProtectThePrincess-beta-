using UnityEngine;
using UnityEngine.UI;

public class UpgradeButton : MonoBehaviour
{
    [SerializeField] private DefenderItem _defender;
    [SerializeField] private int index;
    public int _upgrade;
    [SerializeField] private float[] _upgradeList;
    [SerializeField] private int[] _priceList;
    void Start()
    {
        _upgrade = PlayerPrefs.GetInt("Upgrade" + index);
    }

    private void Update()
    {
        if (_upgrade + 1 == _upgradeList.Length || PlayerPrefs.GetInt("BuyDefender" + index) == 0 || GameObject.Find("Shop").GetComponent<ShopManager>().money < _priceList[_upgrade])
        {
            GetComponent<Button>().interactable = false;
        }
        else 
        {
            GetComponent<Button>().interactable = true;
        }
    }

    public void Click()
    {
        if (_upgrade + 1 < _upgradeList.Length)
        {
            if (GameObject.Find("Shop").GetComponent<ShopManager>().money >= _priceList[_upgrade])
            {
                _upgrade++;
                GameObject.Find("Shop").GetComponent<ShopManager>().money -= _priceList[_upgrade];
                PlayerPrefs.SetInt("Money", GameObject.Find("Shop").GetComponent<ShopManager>().money);
                PlayerPrefs.SetInt("Upgrade" + index, _upgrade);
                _defender.zoneRadius += _upgradeList[_upgrade];
                _defender.min += _upgradeList[_upgrade];
                _defender.max -= _upgradeList[_upgrade];
            }
        }
    }
}
