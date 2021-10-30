using System.Collections.Generic;
using UnityEngine;

public class BackgroundManager : MonoBehaviour
{
    [SerializeField] private List<GameObject> _backgrounds;
    [SerializeField] private int _selectedBackground;
    
    void Start()
    {
        _selectedBackground = PlayerPrefs.GetInt("SelectedDefender");
        for (int i = 0; i < _backgrounds.Count; i++)
        {
            if(i == _selectedBackground) _backgrounds[i].SetActive(true);
            else _backgrounds[i].SetActive(false);
        }
    }
}
