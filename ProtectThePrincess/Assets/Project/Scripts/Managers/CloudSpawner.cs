using System.Collections.Generic;
using UnityEngine;

public class CloudSpawner : MonoBehaviour
{
    private float _startPosition, _speed;
    [SerializeField] private List<Sprite> _cloudSprites;
    private SpriteRenderer _spriteRenderer;
    [SerializeField] private float _maxSpeed, _minSpeed, _x = 12;
    
    private void Start()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _startPosition = transform.position.x;
        _speed = Random.Range(_maxSpeed, _minSpeed);
    }

    private void Update()
    {
        if (transform.position.x >= _x)
        {
            transform.position = new Vector2(_startPosition, Random.Range(4f, 2f));
            _spriteRenderer.sprite = _cloudSprites[Random.Range(0, _cloudSprites.Count)];
            _speed = Random.Range(_maxSpeed, _minSpeed);
        }
        transform.Translate(Vector2.right * _speed * Time.deltaTime);
    }

}