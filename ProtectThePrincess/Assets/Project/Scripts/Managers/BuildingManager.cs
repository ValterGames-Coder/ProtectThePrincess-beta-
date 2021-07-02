using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BuildingManager : MonoBehaviour
{
    [SerializeField] private List<Button> _rightButtons = new List<Button>();
    [SerializeField] private List<Button> _leftButtons = new List<Button>();
    public int _howMuch;

    void Start()
    {
        _howMuch = PlayerPrefs.GetInt("AllBuilding") + 1;
        for (int i = 0; i < _howMuch; i++)
        {
            if (PlayerPrefs.GetInt("BuyBuilding" + i) == 1)
            {
                _rightButtons[i].interactable = true;
                _leftButtons[i].interactable = true;
            }
        }
    }
}
