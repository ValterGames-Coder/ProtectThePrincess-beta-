using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class CardDefenderItem : MonoBehaviour
{
    [SerializeField] private DefenderItem _item;
    [SerializeField] private TMP_Text  _textHealth, _textColdown, _textRadius, _textForce, _textCard;
    [SerializeField] private string _cardName;
    [SerializeField] private Sprite _cardSprite;
    [SerializeField] private Image _cardImage;
    void Start()
    {
        _textCard.text = _cardName;
        _textHealth.text = _item.healthTower.ToString();
        _textColdown.text = _item.startTimeAttack.ToString("F1");
        _textRadius.text = _item.zoneRadius.ToString("F1");
        _textForce.text = _item.force.ToString();
        _cardImage.sprite = _cardSprite;
    }
}
