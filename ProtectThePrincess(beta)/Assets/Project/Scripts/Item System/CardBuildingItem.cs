using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CardBuildingItem : MonoBehaviour
{
    [SerializeField] private Health _buildingHealth;
    [SerializeField] private TMP_Text  _textHealth, _textColdown, _textCard;
    [SerializeField] private float _cooldown;
    [SerializeField] private Sprite _cardSprite;
    [SerializeField] private Image _cardImage;
    void Start()
    {
        _textHealth.text = _buildingHealth.health.ToString();
        _textColdown.text = _cooldown.ToString();
        _cardImage.sprite = _cardSprite;
    }
}
