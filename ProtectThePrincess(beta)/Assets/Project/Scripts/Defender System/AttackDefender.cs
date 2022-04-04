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
            if(!FindObjectOfType<SpawnerEnemies>().win || !FindObjectOfType<SpawnerEnemies>().lose)
            {
                var position = _defender._attackPosition.position; // Позиция будет равна к позиции атаки 
                GameObject bullet = Instantiate(_defender._bullet, new Vector2(position.x, position.y), _defender._attackPosition.rotation); // Создаём 
            }
        }
        catch (Exception e)
        {
            print(e);
        }
    }
}
