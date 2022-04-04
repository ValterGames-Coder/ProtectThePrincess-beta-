using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class CardDefenderItem : MonoBehaviour
{
    [SerializeField] private TMP_Text _textHealth, _textForce;
    [SerializeField] private Sprite _cardSprite;
    [SerializeField] private Image _cardImage;
    [SerializeField] private UpgradeButton _upgradeButton;
    void Start()
    {
        if(PlayerPrefs.HasKey("HealthTower") == false)
        {
            PlayerPrefs.SetInt("HealthTower" + _upgradeButton.index, _upgradeButton._towerHealth);
            _textHealth.text = PlayerPrefs.GetInt("HealthTower" + _upgradeButton.index).ToString();
        }
        else
        {
            _textHealth.text = PlayerPrefs.GetInt("HealthTower" + _upgradeButton.index).ToString();
        }

        if(PlayerPrefs.HasKey("AttackForce") == false)
        {
            PlayerPrefs.SetFloat("AttackForce" + _upgradeButton.index, _upgradeButton._upgradeList[0]);
            _textForce.text = PlayerPrefs.GetFloat("AttackForce" + _upgradeButton.index).ToString();
        }
        else
        {
            _textForce.text = PlayerPrefs.GetFloat("AttackForce" + _upgradeButton.index).ToString();
        }
        
        _cardImage.sprite = _cardSprite;
    }
}
