using System;
using UnityEngine;

public class AttackDefender : MonoBehaviour
{
    private Defender _defender;

    void Start()
    {
        _defender = GetComponentInParent<Defender>();
    }

    public void Attack()
    {
        try
        {
            var position = _defender._attackPosition.position; // Позиция будет равна к позиции атаки 
            Instantiate(_defender._bullet, new Vector2(position.x, position.y), _defender._attackPosition.rotation); // Создаём пулю
        }
        catch (Exception e)
        {
            print(e);
        }
    }
}
