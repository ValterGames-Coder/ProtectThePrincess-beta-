using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonClick : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private float _clickScale, _enterScale, _time;
    private Transform _scale;

    private IEnumerator ClickAnimation()
    {
        transform.localScale = Vector2.MoveTowards(transform.localScale, new Vector2(1 + _clickScale, 1 + _clickScale), Time.deltaTime * _time);
        yield return new WaitForSeconds(0.1f);
        transform.localScale = Vector2.MoveTowards(transform.localScale, new Vector2((1 + _clickScale) - _clickScale, (1 + _clickScale) - _clickScale), Time.deltaTime * _time);
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        StartCoroutine(ClickAnimation());
    }
}
