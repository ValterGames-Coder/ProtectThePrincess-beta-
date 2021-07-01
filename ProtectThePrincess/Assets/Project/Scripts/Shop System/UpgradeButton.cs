using UnityEngine;

public class UpgradeButton : MonoBehaviour
{
    [SerializeField] private DefenderItem _defender;
    [SerializeField] private int _upgrade, index;
    [SerializeField] private float[] _upgradeList;
    void Start()
    {
        _upgrade = PlayerPrefs.GetInt("Upgrade" + index);
    }

    public void Click()
    {
        if (_upgrade < _upgradeList.Length)
        {
            _upgrade++;
            PlayerPrefs.SetInt("Upgrade" + index, _upgrade);
            _defender.zoneRadius += _upgradeList[_upgrade];
            _defender.min += _upgradeList[_upgrade];
            _defender.max -= _upgradeList[_upgrade];
        }
    }
}
