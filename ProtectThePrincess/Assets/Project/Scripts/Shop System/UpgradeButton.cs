using UnityEngine;
using UnityEngine.UI;

public class UpgradeButton : MonoBehaviour
{
    [Header("Defender")]
    [SerializeField] private DefenderItem _defender; // Защитник
    [SerializeField] private int index; // Номер защитника
    [Header("Upgrade")]
    public int _upgrade; // На сколько апгрейд
    [SerializeField] private float[] _upgradeList; // Апгрейд лист
    [SerializeField] private int[] _priceList; // Лист со стоимостью
    [SerializeField] private Image[] _upgradePoints;

    void Start()
    {
        _upgrade = PlayerPrefs.GetInt("Upgrade" + index); // Получаем инфу об апгрейде
    }

    private void Update()
    {
        if (_upgrade == _upgradeList.Length || PlayerPrefs.GetInt("BuyDefender" + index) == 0 || GameObject.Find("Shop").GetComponent<ShopManager>().money < _priceList[_upgrade]) // Если максимальныйц апгрецд или не куплен защитник или не хватает дене
        {
            GetComponent<Button>().interactable = false; // Кнопка выключена
        }
        else // Иначе
        {
            GetComponent<Button>().interactable = true; // Кнопка включена
        }

        for (int i = 0; i < _upgradePoints.Length; i++)
        {
            _upgradePoints[i].enabled = !DisplayUpgradePoint(_upgrade, i);
        }
    }

    public void Click() // Метод нажатия
    {
        if (_upgrade <= _upgradeList.Length) // Если апгрейд не больше обшего количества апгрейдов
        {
            if (GameObject.Find("Shop").GetComponent<ShopManager>().money >= _priceList[_upgrade]) // Если хватает денег
            { 
                // Увеличиваем апгрейд
                GameObject.Find("Shop").GetComponent<ShopManager>().money -= _priceList[_upgrade]; // Вычитаем деньги
                PlayerPrefs.SetInt("Money", GameObject.Find("Shop").GetComponent<ShopManager>().money); // Сохраняем деньги
                PlayerPrefs.SetInt("Upgrade" + index, _upgrade); // Сохраняем апгрейд
                _defender.zoneRadius += _upgradeList[_upgrade]; // Улучшаем защитника
                _defender.min += _upgradeList[_upgrade];
                _defender.max -= _upgradeList[_upgrade];
                _defender.startTimeAttack -= 0.2f;
                _defender.healthTower += 2;
                _upgrade++;
            }
        }
    }

    bool DisplayUpgradePoint(float upgrade, int pointNumber)
    {
        return pointNumber >= upgrade;
    }
}
