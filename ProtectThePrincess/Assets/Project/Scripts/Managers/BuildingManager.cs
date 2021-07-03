using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingManager : MonoBehaviour
{
    [SerializeField] private List<Button> _rightButtons = new List<Button>(); // Правые кнопки
    [SerializeField] private List<Button> _leftButtons = new List<Button>(); // Леве кнопки 
    public int _howMuch; // Всего купленых построек

    void Start()
    {
        _howMuch = PlayerPrefs.GetInt("AllBuilding") + 1; // Получаем купленные постройки
        for (int i = 0; i < _howMuch; i++) // Пока не закончились постройки
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + i) == 1) // Если постройка куплена
            {
                _rightButtons[i].interactable = true; // Активируем правую кнопку
                _leftButtons[i].interactable = true; // Активируем левую кнопку
            }
        }
    }
}
