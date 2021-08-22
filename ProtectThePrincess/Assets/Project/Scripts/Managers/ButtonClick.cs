using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonClick : MonoBehaviour, IPointerClickHandler
{
    [SerializeField] private float _time;
    [SerializeField] private Vector2 _startScale, _endScale;

    void Start()
    {
        _startScale = transform.localScale;
    }

    private IEnumerator ClickAnimation()
    {
        transform.localScale = Vector2.MoveTowards(_startScale, _endScale, _time * Time.deltaTime);
        yield return new WaitForSeconds(0.2f);
        transform.localScale = Vector2.MoveTowards(_endScale, _startScale, _time * Time.deltaTime);
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        StartCoroutine(ClickAnimation());
    }
}
