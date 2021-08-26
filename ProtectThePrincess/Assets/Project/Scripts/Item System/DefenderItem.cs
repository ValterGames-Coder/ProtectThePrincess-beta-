using UnityEngine;

[CreateAssetMenu(fileName = "New Defender", menuName = "Defender", order = 0)]

public class DefenderItem : ScriptableObject
{
    // Поиск врага
    [Header("Defender")] 
    public Sprite defenderSprite;
    [Header("Zone")]
    public Vector3 zonePosition;
    [Range(-100, 100)] public float zoneRadius, min, max;
    //Атака 
    [Header("Attack")]
    public GameObject bullet;
    public Vector2 attackPosition;
    public float offset;
    public float startTimeAttack;
    [Header("Tower")] 
    public Sprite towerSprite;
    public float healthTower;
    public Vector2 defenderPosition;
    public bool isHaveDoor;
    public Sprite doorSprite;
    public Vector2 doorPosition;
}
