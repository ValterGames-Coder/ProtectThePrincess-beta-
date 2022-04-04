using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UpgradeButton : MonoBehaviour
{
    [Header("Defender")]
    [SerializeField] private DefenderItem _defender;
    public int index; // Номер защитника
    [Header("Upgrade")]
    public int _upgrade; // На сколько апгрейд
    public float[] _upgradeList; // Апгрейд лист
    [SerializeField] private int[] _priceList; // Лист со стоимостью
    [SerializeField] private Image[] _upgradePoints;
    [SerializeField] private Image _iconImage;
    [SerializeField] private Sprite _spriteImage;
    [SerializeField] private TMP_Text _priceText;
    [SerializeField] private float _attackForce;
    public int _towerHealth;
    [SerializeField] private GameObject _notFullUpgrade, _fullUpgrade, _button, _arrow;

    void Start()
    {
        _upgrade = PlayerPrefs.GetInt("Upgrade" + index); // Получаем инфу об апгрейде
        if (PlayerPrefs.HasKey("AttackForce") == false)
        {
            PlayerPrefs.SetFloat("AttackForce" + index, _upgradeList[0]);
            _attackForce = PlayerPrefs.GetFloat("AttackForce" + index);
        }
        else
        {
            _attackForce = PlayerPrefs.GetFloat("AttackForce" + index);
        }
        if (PlayerPrefs.HasKey("HealthTower") == false)
        {
            PlayerPrefs.SetInt("HealthTower" + index, _towerHealth);
            _towerHealth = PlayerPrefs.GetInt("HealthTower" + index);
        }
        else
        {
            _towerHealth = PlayerPrefs.GetInt("HealthTower" + index);
        }
        _iconImage.sprite = _spriteImage;
        if (_upgrade == 5)
        {
            _notFullUpgrade.SetActive(false);
            _fullUpgrade.SetActive(true);
            _button.SetActive(false);
        }
        else
        {
            _notFullUpgrade.SetActive(true);
            _fullUpgrade.SetActive(false);
            _priceText.text = _priceList[_upgrade].ToString();
        }
    }

    private void Update()
    {
        if (_upgrade == _upgradeList.Length || PlayerPrefs.GetInt("BuyDefender" + index) == 0 || FindObjectOfType<ShopManager>().money < _priceList[_upgrade]) // Если максимальныйц апгрецд или не куплен защитник или не хватает дене
        {
            transform.GetChild(0).GetComponent<Button>().interactable = false; // Кнопка выключена
        }
        else // Иначе
        {
            transform.GetChild(0).GetComponent<Button>().interactable = true; // Кнопка включена
        }

        for (int i = 0; i < _upgradePoints.Length; i++)
        {
            _upgradePoints[i].gameObject.SetActive(!DisplayUpgradePoint(_upgrade, i));
        }
    }

    public void Click() // Метод нажатия
    {
        if (_upgrade < _upgradeList.Length) // Если апгрейд не больше обшего количества апгрейдов
        {
            if (FindObjectOfType<ShopManager>().money >= _priceList[_upgrade]) // Если хватает денег
            { 
                // Увеличиваем апгрейд
                FindObjectOfType<ShopManager>().money -= _priceList[_upgrade]; // Вычитаем деньги
                PlayerPrefs.SetInt("Money", FindObjectOfType<ShopManager>().money); // Сохраняем деньги
                _attackForce = _upgradeList[_upgrade];
                _arrow.GetComponent<Bullet>().damage = _attackForce;
                PlayerPrefs.SetFloat("AttackForce" + index, _attackForce);
                _towerHealth += Random.Range(5, 15);
                PlayerPrefs.SetInt("HealthTower" + index, _towerHealth);
                _upgrade++;
                PlayerPrefs.SetInt("Upgrade" + index, _upgrade); // Сохраняем апгрейд
                _notFullUpgrade.SetActive(true);
                _fullUpgrade.SetActive(false);
                _priceText.text = _priceList[_upgrade].ToString();
                PlayerPrefs.Save();
            }
        }
        else
        {
            _notFullUpgrade.SetActive(false);
            _fullUpgrade.SetActive(true);
        }
    }

    bool DisplayUpgradePoint(float upgrade, int pointNumber)
    {
        return pointNumber >= upgrade;
    }
}
