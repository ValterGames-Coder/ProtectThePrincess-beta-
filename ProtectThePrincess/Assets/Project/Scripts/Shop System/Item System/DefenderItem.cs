using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "New Defender", menuName = "Defender", order = 0)]

public class DefenderItem : ScriptableObject
{
    // Поиск врага
    [Header("Zone")]
    public Vector3 zonePosition;
    [Range(-100, 100)] public float zoneRadius, min, max;
    //Атака 
    [Header("Attack")]
    public GameObject bullet;
    public Vector2 attackPosition;
    public float offset;
    public float startTimeAttack;
    public float healthTower;
}
