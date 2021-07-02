using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class Money : MonoBehaviour
{
    [SerializeField] private Vector3 _uiPosition;
    private Vector2 vel = Vector2.zero;
    private bool _fly;
    private Rigidbody2D _rigidbody;
    [SerializeField] private GameObject _effect;

    void Start()
    {
        _rigidbody = GetComponent<Rigidbody2D>();
        _uiPosition = Camera.main.ScreenToWorldPoint(GameObject.Find("MoneyImage").GetComponent<Transform>().position);
        StartCoroutine(Fly());
    }

    private void OnMouseDown()
    {
        _rigidbody.bodyType = RigidbodyType2D.Kinematic;
        _fly = true;
    }

    private void Update()
    {
        _uiPosition = Camera.main.ScreenToWorldPoint(GameObject.Find("MoneyImage").GetComponent<Transform>().position);
        if(_fly) transform.position =
            Vector2.SmoothDamp(transform.position, _uiPosition, ref vel, Random.Range(25f, 40f) * Time.deltaTime);
        if (_uiPosition.x - transform.position.x <= 0.5f && _uiPosition.y - transform.position.y <= 0.5f)
        {
            Destroy(gameObject);
            Instantiate(_effect, _uiPosition, Quaternion.identity);
            PlayerPrefs.SetInt("Money", PlayerPrefs.GetInt("Money") + 1);
        }
    }

    IEnumerator Fly()
    {
        yield return  new WaitForSeconds(Random.Range(2.5f, 3.5f));
        _rigidbody.bodyType = RigidbodyType2D.Kinematic;
        _fly = true;
    }
}
