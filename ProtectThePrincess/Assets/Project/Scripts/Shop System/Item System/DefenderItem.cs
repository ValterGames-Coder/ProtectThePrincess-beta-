using UnityEngine;

[CreateAssetMenu(fileName = "New Defender", menuName = "Defender", order = 0)]

public class DefenderItem : ScriptableObject
{
    [Header("Zone")]
    [SerializeField] private Vector3 _zonePosition;
    [Range(0, 100), SerializeField] private float _zoneRadius;
    //Атака 
    [Header("Attack")]
    [SerializeField] private GameObject _bullet;
    [SerializeField] private Transform _attackPosition;
    [SerializeField] private float _offset;
}
