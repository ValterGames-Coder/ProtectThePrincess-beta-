using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BuyButton : MonoBehaviour
{
    private enum ControlType{Defender, Building} // Тип товара
    [Header("Int переменные")]
    [SerializeField] private int index, price; // Номер, стоимость
    [Header("Текст")]
    [SerializeField] private TMP_Text textMeaning; // Текст состояние покупки
    private LocalizationText _meaningLocalization;
    [Header("Тип товара")]
    [SerializeField] private ControlType _productType; // Выбор типа товара

    void Start()
    {
        if(PlayerPrefs.HasKey("AllBuilding")) PlayerPrefs.SetInt("AllBuilding", 1); // Если есть билдинги,то сохраняем 1
        textMeaning = textMeaning.GetComponent<TMP_Text>(); // Получаем компонент
        _meaningLocalization = textMeaning.GetComponent<LocalizationText>();
        if (!PlayerPrefs.HasKey("BuyDefender"))
        {
            if (_productType == ControlType.Defender) // Если это защитник
            {
                /*if (index == 0) // Если это первый защитник 
                {
                    PlayerPrefs.SetInt("BuyDefender" + index, 1); // Сохраняем защитника как купленного
                    PlayerPrefs.SetInt("SelectedDefender", index); // Сохраняем как выбранный
                    PlayerPrefs.Save();  // Сохраняем
                }*/
            }
        }

        if (!PlayerPrefs.HasKey("BuyBuilding"))
        {
            if (_productType == ControlType.Building) // Если это построка
            {
                /*if (index == 0) // Если это первая построка 
                {
                    PlayerPrefs.SetInt("BuyBuilding" + index, 1); // Сохраняем постройку как купленную
                    _meaningLocalization.Localize("MeaningSelect");
                    textMeaning.color = Color.yellow;
                    PlayerPrefs.Save(); // Сохраняем
                }*/
            }
        }

    }

    void Update()
    {
        if (_productType == ControlType.Defender) // Если это защитник
        {
            if(PlayerPrefs.GetInt("BuyDefender" + index) == 1 || FindObjectOfType<ShopManager>().money >= price) // Если купленно или хватает денег
            {
                transform.GetChild(0).GetComponent<Button>().interactable = true; // Кнопка включена
            }
            else if(PlayerPrefs.GetInt("BuyDefender" + index) == 0 || FindObjectOfType<ShopManager>().money < price) // Если не купленно или не хватает денег
            {
                transform.GetChild(0).GetComponent<Button>().interactable = false; // Кнопка выключена
            }
            if (PlayerPrefs.GetInt("SelectedDefender") != index) // если не выбранное
            {
                _meaningLocalization.Localize("MeaningSelect");
                textMeaning.color = Color.yellow; // Текст становится жёлтым
            }
            if (PlayerPrefs.GetInt("SelectedDefender") == index) // Если выбранное
            {
                _meaningLocalization.Localize("MeaningSelected");
                textMeaning.color = Color.green; // Текст становится зелёным
            }
            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // Если не купленное
            {
                textMeaning.text = price.ToString();
                textMeaning.color = Color.red; // Текст становится сероым
            }
        }
        if (_productType == ControlType.Building) // Если это постройка
        {
            
            if(PlayerPrefs.GetInt("BuyBuilding" + index) == 1 || FindObjectOfType<ShopManager>().money >= price) // Если купленно или хватает денег
            {
                transform.GetChild(0).GetComponent<Button>().interactable = true; // Кнопка включена
            }
            else if(PlayerPrefs.GetInt("BuyBuilding" + index) == 0 || FindObjectOfType<ShopManager>().GetComponent<ShopManager>().money < price) // Если не купленно или не хватает денег
            {
                transform.GetChild(0).GetComponent<Button>().interactable = false; // Кнопка выключена
            }
            if (PlayerPrefs.GetInt("SelectedBuildings" + index) != 1) // если не выбранное
            {
                _meaningLocalization.Localize("MeaningSelect");
                textMeaning.color = Color.yellow; // Текст становится жёлтым
            }
            if (PlayerPrefs.GetInt("SelectedBuildings" + index) == 1) // Если выбранное
            {
                _meaningLocalization.Localize("MeaningSelected");
                textMeaning.color = Color.green; // Текст становится зелёным
            }
            if (PlayerPrefs.GetInt("BuyBuilding" + index) == 0) // Если не купленное
            {
                textMeaning.text = price.ToString();
                textMeaning.color = Color.red; // Текст "купить"
            }
        }
    }

    public void Click() // Метод нажатия
    {
        if (_productType == ControlType.Defender) // Если это защитник
        {
            if (PlayerPrefs.GetInt("BuyDefender" + index) == 0) // Если не купленно 
            {
                if (FindObjectOfType<ShopManager>().money >= price) // Если монет хватает
                {
                    FindObjectOfType<ShopManager>().money -=
                        price; // Вычитаем цену из общего количества монет
                    PlayerPrefs.SetInt("Money",
                        FindObjectOfType<ShopManager>().money); // Сохраняем монеты
                    PlayerPrefs.SetInt("BuyDefender" + index, 1); // Сохраняем что купленно
                    _meaningLocalization.Localize("MeaningSelect");
                }

                PlayerPrefs.Save(); // Сохраняем
            }

            else if (PlayerPrefs.GetInt("BuyDefender" + index) == 1) // Если купленно
            {
                PlayerPrefs.SetInt("SelectedDefender", index);
                _meaningLocalization.Localize("MeaningSelect"); // Выбераем его
                PlayerPrefs.Save(); // Сохраняем
            }
        }
        if (_productType == ControlType.Building) // Если это постройка
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + index) == 0) // Если не купленно 
            {
                if (FindObjectOfType<ShopManager>().money >= price) // Если монет хватает
                {
                    FindObjectOfType<ShopManager>().money -=
                        price; // Вычитаем цену из общего количества монет
                    PlayerPrefs.SetInt("Money",
                        FindObjectOfType<ShopManager>().money); // Сохраняем монеты
                    PlayerPrefs.SetInt("BuyBuilding" + index, 1);
                    print("Buy and Select");
                }
                PlayerPrefs.Save(); // Сохраняем
            }
            else if (PlayerPrefs.GetInt("BuyBuilding" + index) == 1) // Если купленно
            {
                if (PlayerPrefs.GetInt("SelectedBuildings" + index) == 0)
                {
                    if (PlayerPrefs.GetInt("SelectedBuildingsLenght") < 3)
                    {
                        PlayerPrefs.SetInt("SelectedBuildings" + index, 1);
                        PlayerPrefs.SetInt("SelectedBuildingsLenght", PlayerPrefs.GetInt("SelectedBuildingsLenght") + 1);
                        PlayerPrefs.Save();
                        _meaningLocalization.Localize("MeaningSelected");
                        textMeaning.color = Color.green;
                        print(PlayerPrefs.GetInt("SelectedBuildingsLenght"));
                    }
                }
                else if(PlayerPrefs.GetInt("SelectedBuildingsLenght") > 1)
                {
                    PlayerPrefs.SetInt("SelectedBuildings" + index, 0);
                    PlayerPrefs.SetInt("SelectedBuildingsLenght", PlayerPrefs.GetInt("SelectedBuildingsLenght") - 1);
                    PlayerPrefs.Save();
                    _meaningLocalization.Localize("MeaningSelect");
                    textMeaning.color = Color.yellow;
                    print(PlayerPrefs.GetInt("SelectedBuildingsLenght"));
                }
            }  
        }

    }
}
