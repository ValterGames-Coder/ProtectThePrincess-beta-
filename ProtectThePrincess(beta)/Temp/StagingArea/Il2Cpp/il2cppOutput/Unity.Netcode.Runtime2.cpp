#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.UInt64>
struct Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4;
// System.Action`3<System.Byte[],System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovedDelegate>
struct Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B;
// System.Comparison`1<Unity.Netcode.MessagingSystem/MessageWithHandler>
struct Comparison_1_tD1978629A5F1A613889FF0071A51C37C08A812CC;
// System.Collections.Generic.Dictionary`2<System.Guid,Unity.Netcode.SceneEventProgress>
struct Dictionary_2_t5D4A906B1034B3475D82335163B06C1EDCB2A27B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.SceneManagement.Scene>
struct Dictionary_2_tBFE138CD41D19CC65FA6BEF8181B803BA73B53AF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_tBEB1A25E940B28F0A9611027A80F4179846BAF14;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Netcode.NetworkObject>>
struct Dictionary_2_t1604618A1339B79A9E32C0A47848E6103F22F40B;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkPrefab>
struct Dictionary_2_tBA1C8088EE34DB2A96643C03E9E6BB79D4C3C4BD;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.SceneEventData>
struct Dictionary_2_t78556AAD60E71196D30162A4D275018D7ACA66AE;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32>
struct Dictionary_2_t75F6BD28CDB213A91111BFE6D1C72CBB4E9E2B81;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.String>
struct Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate>
struct Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.UInt32,Unity.Netcode.NetworkPrefab>,System.UInt32>
struct Func_2_t82E55D879B9F558D64F7FBC220231E8F15FD93D4;
// System.Func`2<System.Reflection.FieldInfo,System.String>
struct Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject>
struct HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_tAFCE72ADC2EDFFA5D34E7918994DD34A8583449F;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct IReadOnlyDictionary_2_t1A8431BF4FA7E1093A5988B619B87D5CB5926DDE;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64>
struct IReadOnlyList_1_t9DEBBC2D05A865FB273FE805E7511A34DDDC6800;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,Unity.Netcode.PendingClient>
struct KeyCollection_t346716EEE6E8680FF061ACA126E484C14442E1B8;
// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>>
struct List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour>
struct List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery>
struct List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkPrefab>
struct List_1_t2B843176E570825A86773F02D90AA32C2BD1D9D2;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase>
struct List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Netcode.NetworkSpawnManager/TriggerData>
struct UnsafeList_1_t9FC766CFB6BB126CE67A49A9DDFB72738A3A1247;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,Unity.Netcode.PendingClient>
struct ValueCollection_t397BBCCDF33A40ABFC419FBDA90953B789EACD35;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,Unity.Netcode.PendingClient>[]
struct EntryU5BU5D_t8B64774B3518BFB3286AF95225305D3EC31DCB3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_t9EE3584E7F7C7D465027F67AC9DB1C3A367050DB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1;
// Unity.Netcode.NetworkClient
struct NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50;
// Unity.Netcode.NetworkContext
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720;
// Unity.Netcode.NetworkManager
struct NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F;
// Unity.Netcode.NetworkObject
struct NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D;
// Unity.Netcode.NetworkPrefab
struct NetworkPrefab_tD4C168AA90CE8FC05C32F64DB08620870C9317AF;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935;
// Unity.Netcode.NetworkTransport
struct NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// Unity.Netcode.PendingClient
struct PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Unity.Netcode.SceneEvent
struct SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9;
// Unity.Netcode.SceneEventProgress
struct SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40;
// Unity.Netcode.SnapshotSystem
struct SnapshotSystem_t89525647503F2F8A8AFBFA6EB6B3633402519BC7;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Unity.Netcode.VisibilityChangeException
struct VisibilityChangeException_t72917B26CC39B31589221EF6CA0AAEEC5CD9E41B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Netcode.ConnectionRequestMessage/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t53190F0516273DE80D409B08879CEEF434DFF9F1;
// Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate
struct HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC;
// Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate
struct UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278;
// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408;
// Unity.Netcode.MessagingSystem/<>c
struct U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783;
// Unity.Netcode.MessagingSystem/MessageHandler
struct MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628;
// Unity.Netcode.NetworkBehaviour/<>c
struct U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A;
// Unity.Netcode.NetworkConfig/<>c
struct U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E;
// Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137
struct U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670;
// Unity.Netcode.NetworkManager/ConnectionApprovedDelegate
struct ConnectionApprovedDelegate_tFEAFB36F7DD2FDE1DECA092B9BC1F65AF9FAB5F5;
// Unity.Netcode.NetworkManager/NetworkManagerHooks
struct NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080;
// Unity.Netcode.NetworkManager/NetworkManagerMessageSender
struct NetworkManagerMessageSender_t248B0EFB77A8FD14920CE715EA642E695F754B30;
// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188;
// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471;
// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1;
// Unity.Netcode.NetworkSceneManager/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t2136FA7DEA6542FE2F9B5A849CB7E3758B6FE104;
// Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0
struct U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982;
// Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0
struct U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD;
// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler
struct OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61;
// Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler
struct OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157;
// Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler
struct OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7;
// Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler
struct OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9;
// Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler
struct OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3;
// Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler
struct OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897;
// Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler
struct OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD;
// Unity.Netcode.NetworkSceneManager/SceneEventDelegate
struct SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948;
// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler
struct VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// Unity.Netcode.SceneEventProgress/OnCompletedDelegate
struct OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054;
// Unity.Netcode.NetworkObject/SceneObject/HeaderData
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37;
// Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c
struct U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C;
// Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c
struct U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883;
// Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c
struct U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1;
// Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c
struct U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B;
// Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c
struct U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7;
// Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c
struct U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C;
// Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c
struct U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE;

IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t1A8431BF4FA7E1093A5988B619B87D5CB5926DDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEvent_t5DE602F56C4A9713EB6DAB2F40945A0F1E5F4B6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral2514C8C3D2C3A644AAEF8B2ACFA718E5BA204652;
IL2CPP_EXTERN_C String_t* _stringLiteral2AB810084CF0ED1E9C96AD387294061DA9D88055;
IL2CPP_EXTERN_C String_t* _stringLiteral6922F81A9A337C75D6D025B8AA42856F0AE97847;
IL2CPP_EXTERN_C String_t* _stringLiteralD99068CFC59109D2E8BA25A246001B969DCA6A54;
IL2CPP_EXTERN_C String_t* _stringLiteralE78B7F6B33AAFB082F1AB4C0EA89E2B914362A90;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9A7C21111FB8DEAB4D7C40DD8396EDAB77D42A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteBytesSafe_m269EDAF146F1360FA87F2DEA4ED724F625BA6F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9B6ADCA3F1F5643CB0F458EC0ADFE0B87864CB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneObject_Serialize_m59FE9759E5F0D773FB6DCCD0992CDC5B37465F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CApprovalTimeoutU3Ed__137_System_Collections_IEnumerator_Reset_m3A81234311208401F21C6513E29A5FBFA768C7A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m1AE88C5E10C9890F8E0BF25CAEADC5CDFF55616A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4614A419F1D1CB1AC2BE710B87D5B32E6FCEAAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4DB6D0AE7D5395C02B22667C34FFCDA84459F7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m52621F2F9BB1B5C387A243AC61B89D76A99B5790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m67D47C922090113A48369EC3429311728A2A5B33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mB63EE3C8001D37CA9C07E0DBE7EF3C57934D6CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mDD97014C541713297FF93AF5DA0C77AD4C991C3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ConnectionRequestMessage_tE6434579E90D8FFC34A54B5C9B69EEED04200510_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkEarlyUpdate_t05F7561CB9185149B3775E2F100FE4A6E4EB3665_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkFixedUpdate_t30F97356C6CDFC56890CCD51C6CE82CDC1A2364D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkInitialization_t1B95BA20098FA4CD634205CE5B17E32BC6D18C30_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPostLateUpdate_t2FD91E5664711885CBBE105898FA1EB8E0B23169_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPreLateUpdate_tFDCAFF541CE16E0AE9F9904925B6AFE4649EF432_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPreUpdate_tE77A3A595DF26FB2D0FCB8A7E2B648605F7A23CD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkUpdate_t280161180398BC2CDD06F0336F0EB2031AC06160_0_0_0_var;
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;;
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke;
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke;;
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89;;
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com;
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com;;
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke;
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F;;
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com;
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com;;
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke;
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke;;
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37;;
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com;
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com;;
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke;
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke;;
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720;;
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke;
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke;;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke;
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8B64774B3518BFB3286AF95225305D3EC31DCB3C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t346716EEE6E8680FF061ACA126E484C14442E1B8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t397BBCCDF33A40ABFC419FBDA90953B789EACD35 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___entries_1)); }
	inline EntryU5BU5D_t8B64774B3518BFB3286AF95225305D3EC31DCB3C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8B64774B3518BFB3286AF95225305D3EC31DCB3C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8B64774B3518BFB3286AF95225305D3EC31DCB3C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___keys_7)); }
	inline KeyCollection_t346716EEE6E8680FF061ACA126E484C14442E1B8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t346716EEE6E8680FF061ACA126E484C14442E1B8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t346716EEE6E8680FF061ACA126E484C14442E1B8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ___values_8)); }
	inline ValueCollection_t397BBCCDF33A40ABFC419FBDA90953B789EACD35 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t397BBCCDF33A40ABFC419FBDA90953B789EACD35 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t397BBCCDF33A40ABFC419FBDA90953B789EACD35 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____items_1)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__items_1() const { return ____items_1; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B_StaticFields, ____emptyArray_5)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkManager Unity.Netcode.CustomMessagingManager::m_NetworkManager
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___m_NetworkManager_0;
	// Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate Unity.Netcode.CustomMessagingManager::OnUnnamedMessage
	UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * ___OnUnnamedMessage_1;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate> Unity.Netcode.CustomMessagingManager::m_NamedMessageHandlers32
	Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 * ___m_NamedMessageHandlers32_2;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate> Unity.Netcode.CustomMessagingManager::m_NamedMessageHandlers64
	Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 * ___m_NamedMessageHandlers64_3;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.String> Unity.Netcode.CustomMessagingManager::m_MessageHandlerNameLookup32
	Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC * ___m_MessageHandlerNameLookup32_4;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.String> Unity.Netcode.CustomMessagingManager::m_MessageHandlerNameLookup64
	Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC * ___m_MessageHandlerNameLookup64_5;

public:
	inline static int32_t get_offset_of_m_NetworkManager_0() { return static_cast<int32_t>(offsetof(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954, ___m_NetworkManager_0)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_m_NetworkManager_0() const { return ___m_NetworkManager_0; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_m_NetworkManager_0() { return &___m_NetworkManager_0; }
	inline void set_m_NetworkManager_0(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___m_NetworkManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnnamedMessage_1() { return static_cast<int32_t>(offsetof(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954, ___OnUnnamedMessage_1)); }
	inline UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * get_OnUnnamedMessage_1() const { return ___OnUnnamedMessage_1; }
	inline UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 ** get_address_of_OnUnnamedMessage_1() { return &___OnUnnamedMessage_1; }
	inline void set_OnUnnamedMessage_1(UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * value)
	{
		___OnUnnamedMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnnamedMessage_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NamedMessageHandlers32_2() { return static_cast<int32_t>(offsetof(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954, ___m_NamedMessageHandlers32_2)); }
	inline Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 * get_m_NamedMessageHandlers32_2() const { return ___m_NamedMessageHandlers32_2; }
	inline Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 ** get_address_of_m_NamedMessageHandlers32_2() { return &___m_NamedMessageHandlers32_2; }
	inline void set_m_NamedMessageHandlers32_2(Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 * value)
	{
		___m_NamedMessageHandlers32_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NamedMessageHandlers32_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_NamedMessageHandlers64_3() { return static_cast<int32_t>(offsetof(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954, ___m_NamedMessageHandlers64_3)); }
	inline Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 * get_m_NamedMessageHandlers64_3() const { return ___m_NamedMessageHandlers64_3; }
	inline Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 ** get_address_of_m_NamedMessageHandlers64_3() { return &___m_NamedMessageHandlers64_3; }
	inline void set_m_NamedMessageHandlers64_3(Dictionary_2_t5BCF3787F2CDF2B905935947312CA3A83EA675E8 * value)
	{
		___m_NamedMessageHandlers64_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NamedMessageHandlers64_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlerNameLookup32_4() { return static_cast<int32_t>(offsetof(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954, ___m_MessageHandlerNameLookup32_4)); }
	inline Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC * get_m_MessageHandlerNameLookup32_4() const { return ___m_MessageHandlerNameLookup32_4; }
	inline Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC ** get_address_of_m_MessageHandlerNameLookup32_4() { return &___m_MessageHandlerNameLookup32_4; }
	inline void set_m_MessageHandlerNameLookup32_4(Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC * value)
	{
		___m_MessageHandlerNameLookup32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlerNameLookup32_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_MessageHandlerNameLookup64_5() { return static_cast<int32_t>(offsetof(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954, ___m_MessageHandlerNameLookup64_5)); }
	inline Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC * get_m_MessageHandlerNameLookup64_5() const { return ___m_MessageHandlerNameLookup64_5; }
	inline Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC ** get_address_of_m_MessageHandlerNameLookup64_5() { return &___m_MessageHandlerNameLookup64_5; }
	inline void set_m_MessageHandlerNameLookup64_5(Dictionary_2_t61E97B9B29E45DF3EE7BBE7DAA593B5A7986C3BC * value)
	{
		___m_MessageHandlerNameLookup64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MessageHandlerNameLookup64_5), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.Netcode.XXHash
struct XXHash_t72447D933EDDA8ED9AF24F6671DEBCB4620A9D70  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Unity.Netcode.ConnectionRequestMessage/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t53190F0516273DE80D409B08879CEEF434DFF9F1  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkManager Unity.Netcode.ConnectionRequestMessage/<>c__DisplayClass5_0::networkManager
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___networkManager_0;
	// System.UInt64 Unity.Netcode.ConnectionRequestMessage/<>c__DisplayClass5_0::senderId
	uint64_t ___senderId_1;

public:
	inline static int32_t get_offset_of_networkManager_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t53190F0516273DE80D409B08879CEEF434DFF9F1, ___networkManager_0)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_networkManager_0() const { return ___networkManager_0; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_networkManager_0() { return &___networkManager_0; }
	inline void set_networkManager_0(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___networkManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkManager_0), (void*)value);
	}

	inline static int32_t get_offset_of_senderId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t53190F0516273DE80D409B08879CEEF434DFF9F1, ___senderId_1)); }
	inline uint64_t get_senderId_1() const { return ___senderId_1; }
	inline uint64_t* get_address_of_senderId_1() { return &___senderId_1; }
	inline void set_senderId_1(uint64_t value)
	{
		___senderId_1 = value;
	}
};


// Unity.Netcode.MessagingSystem/<>c
struct U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_StaticFields
{
public:
	// Unity.Netcode.MessagingSystem/<>c Unity.Netcode.MessagingSystem/<>c::<>9
	U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * ___U3CU3E9_0;
	// System.Comparison`1<Unity.Netcode.MessagingSystem/MessageWithHandler> Unity.Netcode.MessagingSystem/<>c::<>9__23_0
	Comparison_1_tD1978629A5F1A613889FF0071A51C37C08A812CC * ___U3CU3E9__23_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Comparison_1_tD1978629A5F1A613889FF0071A51C37C08A812CC * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Comparison_1_tD1978629A5F1A613889FF0071A51C37C08A812CC ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Comparison_1_tD1978629A5F1A613889FF0071A51C37C08A812CC * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkBehaviour/<>c
struct U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_StaticFields
{
public:
	// Unity.Netcode.NetworkBehaviour/<>c Unity.Netcode.NetworkBehaviour/<>c::<>9
	U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.String> Unity.Netcode.NetworkBehaviour/<>c::<>9__50_0
	Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * ___U3CU3E9__50_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__50_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_StaticFields, ___U3CU3E9__50_0_1)); }
	inline Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * get_U3CU3E9__50_0_1() const { return ___U3CU3E9__50_0_1; }
	inline Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE ** get_address_of_U3CU3E9__50_0_1() { return &___U3CU3E9__50_0_1; }
	inline void set_U3CU3E9__50_0_1(Func_2_t3E9169486444D508EC295C4254DF9267CEE35CCE * value)
	{
		___U3CU3E9__50_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__50_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkConfig/<>c
struct U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_StaticFields
{
public:
	// Unity.Netcode.NetworkConfig/<>c Unity.Netcode.NetworkConfig/<>c::<>9
	U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.UInt32,Unity.Netcode.NetworkPrefab>,System.UInt32> Unity.Netcode.NetworkConfig/<>c::<>9__35_0
	Func_2_t82E55D879B9F558D64F7FBC220231E8F15FD93D4 * ___U3CU3E9__35_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_StaticFields, ___U3CU3E9__35_0_1)); }
	inline Func_2_t82E55D879B9F558D64F7FBC220231E8F15FD93D4 * get_U3CU3E9__35_0_1() const { return ___U3CU3E9__35_0_1; }
	inline Func_2_t82E55D879B9F558D64F7FBC220231E8F15FD93D4 ** get_address_of_U3CU3E9__35_0_1() { return &___U3CU3E9__35_0_1; }
	inline void set_U3CU3E9__35_0_1(Func_2_t82E55D879B9F558D64F7FBC220231E8F15FD93D4 * value)
	{
		___U3CU3E9__35_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkManager/NetworkManagerHooks
struct NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager/NetworkManagerHooks::m_NetworkManager
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___m_NetworkManager_0;

public:
	inline static int32_t get_offset_of_m_NetworkManager_0() { return static_cast<int32_t>(offsetof(NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080, ___m_NetworkManager_0)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_m_NetworkManager_0() const { return ___m_NetworkManager_0; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_m_NetworkManager_0() { return &___m_NetworkManager_0; }
	inline void set_m_NetworkManager_0(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___m_NetworkManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkManager_0), (void*)value);
	}
};


// Unity.Netcode.NetworkManager/NetworkManagerMessageSender
struct NetworkManagerMessageSender_t248B0EFB77A8FD14920CE715EA642E695F754B30  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager/NetworkManagerMessageSender::m_NetworkManager
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___m_NetworkManager_0;

public:
	inline static int32_t get_offset_of_m_NetworkManager_0() { return static_cast<int32_t>(offsetof(NetworkManagerMessageSender_t248B0EFB77A8FD14920CE715EA642E695F754B30, ___m_NetworkManager_0)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_m_NetworkManager_0() const { return ___m_NetworkManager_0; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_m_NetworkManager_0() { return &___m_NetworkManager_0; }
	inline void set_m_NetworkManager_0(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___m_NetworkManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkManager_0), (void*)value);
	}
};


// Unity.Netcode.NetworkSceneManager/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t2136FA7DEA6542FE2F9B5A849CB7E3758B6FE104  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkSceneManager/<>c__DisplayClass80_0::<>4__this
	NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * ___U3CU3E4__this_0;
	// System.UInt32 Unity.Netcode.NetworkSceneManager/<>c__DisplayClass80_0::sceneEventId
	uint32_t ___sceneEventId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2136FA7DEA6542FE2F9B5A849CB7E3758B6FE104, ___U3CU3E4__this_0)); }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneEventId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2136FA7DEA6542FE2F9B5A849CB7E3758B6FE104, ___sceneEventId_1)); }
	inline uint32_t get_sceneEventId_1() const { return ___sceneEventId_1; }
	inline uint32_t* get_address_of_sceneEventId_1() { return &___sceneEventId_1; }
	inline void set_sceneEventId_1(uint32_t value)
	{
		___sceneEventId_1 = value;
	}
};


// Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0
struct U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0::<>4__this
	NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * ___U3CU3E4__this_0;
	// System.UInt32 Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0::sceneEventId
	uint32_t ___sceneEventId_1;
	// System.String Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0::sceneName
	String_t* ___sceneName_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982, ___U3CU3E4__this_0)); }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneEventId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982, ___sceneEventId_1)); }
	inline uint32_t get_sceneEventId_1() const { return ___sceneEventId_1; }
	inline uint32_t* get_address_of_sceneEventId_1() { return &___sceneEventId_1; }
	inline void set_sceneEventId_1(uint32_t value)
	{
		___sceneEventId_1 = value;
	}

	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982, ___sceneName_2)); }
	inline String_t* get_sceneName_2() const { return ___sceneName_2; }
	inline String_t** get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(String_t* value)
	{
		___sceneName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_2), (void*)value);
	}
};


// Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0
struct U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0::<>4__this
	NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * ___U3CU3E4__this_0;
	// System.UInt32 Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0::sceneEventId
	uint32_t ___sceneEventId_1;
	// System.UInt32 Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0::sceneHash
	uint32_t ___sceneHash_2;
	// System.Int32 Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0::sceneHandle
	int32_t ___sceneHandle_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD, ___U3CU3E4__this_0)); }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_sceneEventId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD, ___sceneEventId_1)); }
	inline uint32_t get_sceneEventId_1() const { return ___sceneEventId_1; }
	inline uint32_t* get_address_of_sceneEventId_1() { return &___sceneEventId_1; }
	inline void set_sceneEventId_1(uint32_t value)
	{
		___sceneEventId_1 = value;
	}

	inline static int32_t get_offset_of_sceneHash_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD, ___sceneHash_2)); }
	inline uint32_t get_sceneHash_2() const { return ___sceneHash_2; }
	inline uint32_t* get_address_of_sceneHash_2() { return &___sceneHash_2; }
	inline void set_sceneHash_2(uint32_t value)
	{
		___sceneHash_2 = value;
	}

	inline static int32_t get_offset_of_sceneHandle_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD, ___sceneHandle_3)); }
	inline int32_t get_sceneHandle_3() const { return ___sceneHandle_3; }
	inline int32_t* get_address_of_sceneHandle_3() { return &___sceneHandle_3; }
	inline void set_sceneHandle_3(int32_t value)
	{
		___sceneHandle_3 = value;
	}
};


// Unity.Netcode.XXHash/Bits
struct Bits_t9C690413DB7D93E1DBA81345DB18148F5B298817  : public RuntimeObject
{
public:

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c
struct U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<>9
	U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c
struct U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<>9
	U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c
struct U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c::<>9
	U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c
struct U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<>9
	U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c
struct U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<>9
	U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c
struct U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c::<>9
	U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c
struct U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields
{
public:
	// Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c::<>9
	U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,Unity.Netcode.NetworkPrefab>
struct KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	NetworkPrefab_tD4C168AA90CE8FC05C32F64DB08620870C9317AF * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8, ___value_1)); }
	inline NetworkPrefab_tD4C168AA90CE8FC05C32F64DB08620870C9317AF * get_value_1() const { return ___value_1; }
	inline NetworkPrefab_tD4C168AA90CE8FC05C32F64DB08620870C9317AF ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(NetworkPrefab_tD4C168AA90CE8FC05C32F64DB08620870C9317AF * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct KeyValuePair_2_tCEEEA2545C9572EC331DBB69871921A5B01E60DA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCEEEA2545C9572EC331DBB69871921A5B01E60DA, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCEEEA2545C9572EC331DBB69871921A5B01E60DA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.UInt32>
struct Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 
{
public:
	// T System.Nullable`1::value
	uint32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9, ___value_0)); }
	inline uint32_t get_value_0() const { return ___value_0; }
	inline uint32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.UInt64>
struct Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C 
{
public:
	// T System.Nullable`1::value
	uint64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___value_0)); }
	inline uint64_t get_value_0() const { return ___value_0; }
	inline uint64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Netcode.BatchHeader
struct BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511 
{
public:
	// System.UInt16 Unity.Netcode.BatchHeader::BatchSize
	uint16_t ___BatchSize_0;

public:
	inline static int32_t get_offset_of_BatchSize_0() { return static_cast<int32_t>(offsetof(BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511, ___BatchSize_0)); }
	inline uint16_t get_BatchSize_0() const { return ___BatchSize_0; }
	inline uint16_t* get_address_of_BatchSize_0() { return &___BatchSize_0; }
	inline void set_BatchSize_0(uint16_t value)
	{
		___BatchSize_0 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.Netcode.ClientRpcReceiveParams
struct ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7__padding[1];
	};

public:
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Unity.Netcode.FastBufferReader
struct FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 
{
public:
	// Unity.Netcode.FastBufferReader/ReaderHandle* Unity.Netcode.FastBufferReader::Handle
	ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855, ___Handle_0)); }
	inline ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * get_Handle_0() const { return ___Handle_0; }
	inline ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 ** get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * value)
	{
		___Handle_0 = value;
	}
};


// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F 
{
public:
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F, ___Handle_0)); }
	inline WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * get_Handle_0() const { return ___Handle_0; }
	inline WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 ** get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * value)
	{
		___Handle_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke
{
	WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * ___Handle_0;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com
{
	WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * ___Handle_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Unity.Netcode.MessageHeader
struct MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880 
{
public:
	// System.Byte Unity.Netcode.MessageHeader::MessageType
	uint8_t ___MessageType_0;
	// System.UInt16 Unity.Netcode.MessageHeader::MessageSize
	uint16_t ___MessageSize_1;

public:
	inline static int32_t get_offset_of_MessageType_0() { return static_cast<int32_t>(offsetof(MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880, ___MessageType_0)); }
	inline uint8_t get_MessageType_0() const { return ___MessageType_0; }
	inline uint8_t* get_address_of_MessageType_0() { return &___MessageType_0; }
	inline void set_MessageType_0(uint8_t value)
	{
		___MessageType_0 = value;
	}

	inline static int32_t get_offset_of_MessageSize_1() { return static_cast<int32_t>(offsetof(MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880, ___MessageSize_1)); }
	inline uint16_t get_MessageSize_1() const { return ___MessageSize_1; }
	inline uint16_t* get_address_of_MessageSize_1() { return &___MessageSize_1; }
	inline void set_MessageSize_1(uint16_t value)
	{
		___MessageSize_1 = value;
	}
};


// Unity.Netcode.NetworkTime
struct NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A 
{
public:
	// System.Double Unity.Netcode.NetworkTime::m_TimeSec
	double ___m_TimeSec_0;
	// System.UInt32 Unity.Netcode.NetworkTime::m_TickRate
	uint32_t ___m_TickRate_1;
	// System.Double Unity.Netcode.NetworkTime::m_TickInterval
	double ___m_TickInterval_2;
	// System.Int32 Unity.Netcode.NetworkTime::m_CachedTick
	int32_t ___m_CachedTick_3;
	// System.Double Unity.Netcode.NetworkTime::m_CachedTickOffset
	double ___m_CachedTickOffset_4;

public:
	inline static int32_t get_offset_of_m_TimeSec_0() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_TimeSec_0)); }
	inline double get_m_TimeSec_0() const { return ___m_TimeSec_0; }
	inline double* get_address_of_m_TimeSec_0() { return &___m_TimeSec_0; }
	inline void set_m_TimeSec_0(double value)
	{
		___m_TimeSec_0 = value;
	}

	inline static int32_t get_offset_of_m_TickRate_1() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_TickRate_1)); }
	inline uint32_t get_m_TickRate_1() const { return ___m_TickRate_1; }
	inline uint32_t* get_address_of_m_TickRate_1() { return &___m_TickRate_1; }
	inline void set_m_TickRate_1(uint32_t value)
	{
		___m_TickRate_1 = value;
	}

	inline static int32_t get_offset_of_m_TickInterval_2() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_TickInterval_2)); }
	inline double get_m_TickInterval_2() const { return ___m_TickInterval_2; }
	inline double* get_address_of_m_TickInterval_2() { return &___m_TickInterval_2; }
	inline void set_m_TickInterval_2(double value)
	{
		___m_TickInterval_2 = value;
	}

	inline static int32_t get_offset_of_m_CachedTick_3() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_CachedTick_3)); }
	inline int32_t get_m_CachedTick_3() const { return ___m_CachedTick_3; }
	inline int32_t* get_address_of_m_CachedTick_3() { return &___m_CachedTick_3; }
	inline void set_m_CachedTick_3(int32_t value)
	{
		___m_CachedTick_3 = value;
	}

	inline static int32_t get_offset_of_m_CachedTickOffset_4() { return static_cast<int32_t>(offsetof(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A, ___m_CachedTickOffset_4)); }
	inline double get_m_CachedTickOffset_4() const { return ___m_CachedTickOffset_4; }
	inline double* get_address_of_m_CachedTickOffset_4() { return &___m_CachedTickOffset_4; }
	inline void set_m_CachedTickOffset_4(double value)
	{
		___m_CachedTickOffset_4 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// Unity.Netcode.ServerRpcReceiveParams
struct ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311 
{
public:
	// System.UInt64 Unity.Netcode.ServerRpcReceiveParams::SenderClientId
	uint64_t ___SenderClientId_0;

public:
	inline static int32_t get_offset_of_SenderClientId_0() { return static_cast<int32_t>(offsetof(ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311, ___SenderClientId_0)); }
	inline uint64_t get_SenderClientId_0() const { return ___SenderClientId_0; }
	inline uint64_t* get_address_of_SenderClientId_0() { return &___SenderClientId_0; }
	inline void set_SenderClientId_0(uint64_t value)
	{
		___SenderClientId_0 = value;
	}
};


// Unity.Netcode.ServerRpcSendParams
struct ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D__padding[1];
	};

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.Netcode.VariableKey
struct VariableKey_t327602C2CC644ABFD9EF7E13C08B3463C906DEB5 
{
public:
	// System.UInt64 Unity.Netcode.VariableKey::NetworkObjectId
	uint64_t ___NetworkObjectId_0;
	// System.UInt16 Unity.Netcode.VariableKey::BehaviourIndex
	uint16_t ___BehaviourIndex_1;
	// System.UInt16 Unity.Netcode.VariableKey::VariableIndex
	uint16_t ___VariableIndex_2;
	// System.Int32 Unity.Netcode.VariableKey::TickWritten
	int32_t ___TickWritten_3;

public:
	inline static int32_t get_offset_of_NetworkObjectId_0() { return static_cast<int32_t>(offsetof(VariableKey_t327602C2CC644ABFD9EF7E13C08B3463C906DEB5, ___NetworkObjectId_0)); }
	inline uint64_t get_NetworkObjectId_0() const { return ___NetworkObjectId_0; }
	inline uint64_t* get_address_of_NetworkObjectId_0() { return &___NetworkObjectId_0; }
	inline void set_NetworkObjectId_0(uint64_t value)
	{
		___NetworkObjectId_0 = value;
	}

	inline static int32_t get_offset_of_BehaviourIndex_1() { return static_cast<int32_t>(offsetof(VariableKey_t327602C2CC644ABFD9EF7E13C08B3463C906DEB5, ___BehaviourIndex_1)); }
	inline uint16_t get_BehaviourIndex_1() const { return ___BehaviourIndex_1; }
	inline uint16_t* get_address_of_BehaviourIndex_1() { return &___BehaviourIndex_1; }
	inline void set_BehaviourIndex_1(uint16_t value)
	{
		___BehaviourIndex_1 = value;
	}

	inline static int32_t get_offset_of_VariableIndex_2() { return static_cast<int32_t>(offsetof(VariableKey_t327602C2CC644ABFD9EF7E13C08B3463C906DEB5, ___VariableIndex_2)); }
	inline uint16_t get_VariableIndex_2() const { return ___VariableIndex_2; }
	inline uint16_t* get_address_of_VariableIndex_2() { return &___VariableIndex_2; }
	inline void set_VariableIndex_2(uint16_t value)
	{
		___VariableIndex_2 = value;
	}

	inline static int32_t get_offset_of_TickWritten_3() { return static_cast<int32_t>(offsetof(VariableKey_t327602C2CC644ABFD9EF7E13C08B3463C906DEB5, ___TickWritten_3)); }
	inline int32_t get_TickWritten_3() const { return ___TickWritten_3; }
	inline int32_t* get_address_of_TickWritten_3() { return &___TickWritten_3; }
	inline void set_TickWritten_3(int32_t value)
	{
		___TickWritten_3 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tD879767ABBE284C4D8D125EAA5569CF105FFC095 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tD879767ABBE284C4D8D125EAA5569CF105FFC095__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t1F3D353DCA6F73A95062F58E50630576FA3F5990 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t1F3D353DCA6F73A95062F58E50630576FA3F5990__padding[256];
	};

public:
};


// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A 
{
public:
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A, ___Index_0)); }
	inline uint16_t get_Index_0() const { return ___Index_0; }
	inline uint16_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(uint16_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Version_1() { return static_cast<int32_t>(offsetof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A, ___Version_1)); }
	inline uint16_t get_Version_1() const { return ___Version_1; }
	inline uint16_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(uint16_t value)
	{
		___Version_1 = value;
	}
};


// Unity.Netcode.ClientData/SentSpawn
struct SentSpawn_t19B6CB0EE2BFC078B590BBF5632252D7AE4B4BE7 
{
public:
	// System.UInt64 Unity.Netcode.ClientData/SentSpawn::SequenceNumber
	uint64_t ___SequenceNumber_0;
	// System.UInt64 Unity.Netcode.ClientData/SentSpawn::ObjectId
	uint64_t ___ObjectId_1;
	// System.Int32 Unity.Netcode.ClientData/SentSpawn::Tick
	int32_t ___Tick_2;

public:
	inline static int32_t get_offset_of_SequenceNumber_0() { return static_cast<int32_t>(offsetof(SentSpawn_t19B6CB0EE2BFC078B590BBF5632252D7AE4B4BE7, ___SequenceNumber_0)); }
	inline uint64_t get_SequenceNumber_0() const { return ___SequenceNumber_0; }
	inline uint64_t* get_address_of_SequenceNumber_0() { return &___SequenceNumber_0; }
	inline void set_SequenceNumber_0(uint64_t value)
	{
		___SequenceNumber_0 = value;
	}

	inline static int32_t get_offset_of_ObjectId_1() { return static_cast<int32_t>(offsetof(SentSpawn_t19B6CB0EE2BFC078B590BBF5632252D7AE4B4BE7, ___ObjectId_1)); }
	inline uint64_t get_ObjectId_1() const { return ___ObjectId_1; }
	inline uint64_t* get_address_of_ObjectId_1() { return &___ObjectId_1; }
	inline void set_ObjectId_1(uint64_t value)
	{
		___ObjectId_1 = value;
	}

	inline static int32_t get_offset_of_Tick_2() { return static_cast<int32_t>(offsetof(SentSpawn_t19B6CB0EE2BFC078B590BBF5632252D7AE4B4BE7, ___Tick_2)); }
	inline int32_t get_Tick_2() const { return ___Tick_2; }
	inline int32_t* get_address_of_Tick_2() { return &___Tick_2; }
	inline void set_Tick_2(int32_t value)
	{
		___Tick_2 = value;
	}
};


// Unity.Netcode.MessagingSystem/MessageWithHandler
struct MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58 
{
public:
	// System.Type Unity.Netcode.MessagingSystem/MessageWithHandler::MessageType
	Type_t * ___MessageType_0;
	// Unity.Netcode.MessagingSystem/MessageHandler Unity.Netcode.MessagingSystem/MessageWithHandler::Handler
	MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * ___Handler_1;

public:
	inline static int32_t get_offset_of_MessageType_0() { return static_cast<int32_t>(offsetof(MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58, ___MessageType_0)); }
	inline Type_t * get_MessageType_0() const { return ___MessageType_0; }
	inline Type_t ** get_address_of_MessageType_0() { return &___MessageType_0; }
	inline void set_MessageType_0(Type_t * value)
	{
		___MessageType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageType_0), (void*)value);
	}

	inline static int32_t get_offset_of_Handler_1() { return static_cast<int32_t>(offsetof(MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58, ___Handler_1)); }
	inline MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * get_Handler_1() const { return ___Handler_1; }
	inline MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 ** get_address_of_Handler_1() { return &___Handler_1; }
	inline void set_Handler_1(MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * value)
	{
		___Handler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Handler_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.MessagingSystem/MessageWithHandler
struct MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_pinvoke
{
	Type_t * ___MessageType_0;
	Il2CppMethodPointer ___Handler_1;
};
// Native definition for COM marshalling of Unity.Netcode.MessagingSystem/MessageWithHandler
struct MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_com
{
	Type_t * ___MessageType_0;
	Il2CppMethodPointer ___Handler_1;
};

// Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate
struct NetworkEarlyUpdate_t05F7561CB9185149B3775E2F100FE4A6E4EB3665 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkEarlyUpdate_t05F7561CB9185149B3775E2F100FE4A6E4EB3665__padding[1];
	};

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate
struct NetworkFixedUpdate_t30F97356C6CDFC56890CCD51C6CE82CDC1A2364D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkFixedUpdate_t30F97356C6CDFC56890CCD51C6CE82CDC1A2364D__padding[1];
	};

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkInitialization
struct NetworkInitialization_t1B95BA20098FA4CD634205CE5B17E32BC6D18C30 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkInitialization_t1B95BA20098FA4CD634205CE5B17E32BC6D18C30__padding[1];
	};

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate
struct NetworkPostLateUpdate_t2FD91E5664711885CBBE105898FA1EB8E0B23169 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPostLateUpdate_t2FD91E5664711885CBBE105898FA1EB8E0B23169__padding[1];
	};

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate
struct NetworkPreLateUpdate_tFDCAFF541CE16E0AE9F9904925B6AFE4649EF432 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPreLateUpdate_tFDCAFF541CE16E0AE9F9904925B6AFE4649EF432__padding[1];
	};

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate
struct NetworkPreUpdate_tE77A3A595DF26FB2D0FCB8A7E2B648605F7A23CD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPreUpdate_tE77A3A595DF26FB2D0FCB8A7E2B648605F7A23CD__padding[1];
	};

public:
};


// Unity.Netcode.NetworkUpdateLoop/NetworkUpdate
struct NetworkUpdate_t280161180398BC2CDD06F0336F0EB2031AC06160 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkUpdate_t280161180398BC2CDD06F0336F0EB2031AC06160__padding[1];
	};

public:
};


// Unity.Netcode.SnapshotDataMessage/AckData
struct AckData_t939748618F444565B68478F13453C770E9D29AAF 
{
public:
	// System.UInt16 Unity.Netcode.SnapshotDataMessage/AckData::LastReceivedSequence
	uint16_t ___LastReceivedSequence_0;
	// System.UInt16 Unity.Netcode.SnapshotDataMessage/AckData::ReceivedSequenceMask
	uint16_t ___ReceivedSequenceMask_1;

public:
	inline static int32_t get_offset_of_LastReceivedSequence_0() { return static_cast<int32_t>(offsetof(AckData_t939748618F444565B68478F13453C770E9D29AAF, ___LastReceivedSequence_0)); }
	inline uint16_t get_LastReceivedSequence_0() const { return ___LastReceivedSequence_0; }
	inline uint16_t* get_address_of_LastReceivedSequence_0() { return &___LastReceivedSequence_0; }
	inline void set_LastReceivedSequence_0(uint16_t value)
	{
		___LastReceivedSequence_0 = value;
	}

	inline static int32_t get_offset_of_ReceivedSequenceMask_1() { return static_cast<int32_t>(offsetof(AckData_t939748618F444565B68478F13453C770E9D29AAF, ___ReceivedSequenceMask_1)); }
	inline uint16_t get_ReceivedSequenceMask_1() const { return ___ReceivedSequenceMask_1; }
	inline uint16_t* get_address_of_ReceivedSequenceMask_1() { return &___ReceivedSequenceMask_1; }
	inline void set_ReceivedSequenceMask_1(uint16_t value)
	{
		___ReceivedSequenceMask_1 = value;
	}
};


// Unity.Netcode.SnapshotDataMessage/DespawnData
struct DespawnData_tF73FB60815D893E27128DC224A09A29E6336A991 
{
public:
	// System.UInt64 Unity.Netcode.SnapshotDataMessage/DespawnData::NetworkObjectId
	uint64_t ___NetworkObjectId_0;
	// System.Int32 Unity.Netcode.SnapshotDataMessage/DespawnData::TickWritten
	int32_t ___TickWritten_1;

public:
	inline static int32_t get_offset_of_NetworkObjectId_0() { return static_cast<int32_t>(offsetof(DespawnData_tF73FB60815D893E27128DC224A09A29E6336A991, ___NetworkObjectId_0)); }
	inline uint64_t get_NetworkObjectId_0() const { return ___NetworkObjectId_0; }
	inline uint64_t* get_address_of_NetworkObjectId_0() { return &___NetworkObjectId_0; }
	inline void set_NetworkObjectId_0(uint64_t value)
	{
		___NetworkObjectId_0 = value;
	}

	inline static int32_t get_offset_of_TickWritten_1() { return static_cast<int32_t>(offsetof(DespawnData_tF73FB60815D893E27128DC224A09A29E6336A991, ___TickWritten_1)); }
	inline int32_t get_TickWritten_1() const { return ___TickWritten_1; }
	inline int32_t* get_address_of_TickWritten_1() { return &___TickWritten_1; }
	inline void set_TickWritten_1(int32_t value)
	{
		___TickWritten_1 = value;
	}
};


// Unity.Netcode.SnapshotDataMessage/EntryData
struct EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E 
{
public:
	// System.UInt64 Unity.Netcode.SnapshotDataMessage/EntryData::NetworkObjectId
	uint64_t ___NetworkObjectId_0;
	// System.UInt16 Unity.Netcode.SnapshotDataMessage/EntryData::BehaviourIndex
	uint16_t ___BehaviourIndex_1;
	// System.UInt16 Unity.Netcode.SnapshotDataMessage/EntryData::VariableIndex
	uint16_t ___VariableIndex_2;
	// System.Int32 Unity.Netcode.SnapshotDataMessage/EntryData::TickWritten
	int32_t ___TickWritten_3;
	// System.UInt16 Unity.Netcode.SnapshotDataMessage/EntryData::Position
	uint16_t ___Position_4;
	// System.UInt16 Unity.Netcode.SnapshotDataMessage/EntryData::Length
	uint16_t ___Length_5;

public:
	inline static int32_t get_offset_of_NetworkObjectId_0() { return static_cast<int32_t>(offsetof(EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E, ___NetworkObjectId_0)); }
	inline uint64_t get_NetworkObjectId_0() const { return ___NetworkObjectId_0; }
	inline uint64_t* get_address_of_NetworkObjectId_0() { return &___NetworkObjectId_0; }
	inline void set_NetworkObjectId_0(uint64_t value)
	{
		___NetworkObjectId_0 = value;
	}

	inline static int32_t get_offset_of_BehaviourIndex_1() { return static_cast<int32_t>(offsetof(EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E, ___BehaviourIndex_1)); }
	inline uint16_t get_BehaviourIndex_1() const { return ___BehaviourIndex_1; }
	inline uint16_t* get_address_of_BehaviourIndex_1() { return &___BehaviourIndex_1; }
	inline void set_BehaviourIndex_1(uint16_t value)
	{
		___BehaviourIndex_1 = value;
	}

	inline static int32_t get_offset_of_VariableIndex_2() { return static_cast<int32_t>(offsetof(EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E, ___VariableIndex_2)); }
	inline uint16_t get_VariableIndex_2() const { return ___VariableIndex_2; }
	inline uint16_t* get_address_of_VariableIndex_2() { return &___VariableIndex_2; }
	inline void set_VariableIndex_2(uint16_t value)
	{
		___VariableIndex_2 = value;
	}

	inline static int32_t get_offset_of_TickWritten_3() { return static_cast<int32_t>(offsetof(EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E, ___TickWritten_3)); }
	inline int32_t get_TickWritten_3() const { return ___TickWritten_3; }
	inline int32_t* get_address_of_TickWritten_3() { return &___TickWritten_3; }
	inline void set_TickWritten_3(int32_t value)
	{
		___TickWritten_3 = value;
	}

	inline static int32_t get_offset_of_Position_4() { return static_cast<int32_t>(offsetof(EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E, ___Position_4)); }
	inline uint16_t get_Position_4() const { return ___Position_4; }
	inline uint16_t* get_address_of_Position_4() { return &___Position_4; }
	inline void set_Position_4(uint16_t value)
	{
		___Position_4 = value;
	}

	inline static int32_t get_offset_of_Length_5() { return static_cast<int32_t>(offsetof(EntryData_tC97F8770D7DF014A2C967204B070ED15CDA9520E, ___Length_5)); }
	inline uint16_t get_Length_5() const { return ___Length_5; }
	inline uint16_t* get_address_of_Length_5() { return &___Length_5; }
	inline void set_Length_5(uint16_t value)
	{
		___Length_5 = value;
	}
};


// Unity.Netcode.NetworkObject/SceneObject/HeaderData
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 
{
public:
	// System.UInt64 Unity.Netcode.NetworkObject/SceneObject/HeaderData::NetworkObjectId
	uint64_t ___NetworkObjectId_0;
	// System.UInt64 Unity.Netcode.NetworkObject/SceneObject/HeaderData::OwnerClientId
	uint64_t ___OwnerClientId_1;
	// System.UInt32 Unity.Netcode.NetworkObject/SceneObject/HeaderData::Hash
	uint32_t ___Hash_2;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject/HeaderData::IsPlayerObject
	bool ___IsPlayerObject_3;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject/HeaderData::HasParent
	bool ___HasParent_4;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject/HeaderData::IsSceneObject
	bool ___IsSceneObject_5;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject/HeaderData::HasTransform
	bool ___HasTransform_6;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject/HeaderData::IsReparented
	bool ___IsReparented_7;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject/HeaderData::HasNetworkVariables
	bool ___HasNetworkVariables_8;

public:
	inline static int32_t get_offset_of_NetworkObjectId_0() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___NetworkObjectId_0)); }
	inline uint64_t get_NetworkObjectId_0() const { return ___NetworkObjectId_0; }
	inline uint64_t* get_address_of_NetworkObjectId_0() { return &___NetworkObjectId_0; }
	inline void set_NetworkObjectId_0(uint64_t value)
	{
		___NetworkObjectId_0 = value;
	}

	inline static int32_t get_offset_of_OwnerClientId_1() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___OwnerClientId_1)); }
	inline uint64_t get_OwnerClientId_1() const { return ___OwnerClientId_1; }
	inline uint64_t* get_address_of_OwnerClientId_1() { return &___OwnerClientId_1; }
	inline void set_OwnerClientId_1(uint64_t value)
	{
		___OwnerClientId_1 = value;
	}

	inline static int32_t get_offset_of_Hash_2() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___Hash_2)); }
	inline uint32_t get_Hash_2() const { return ___Hash_2; }
	inline uint32_t* get_address_of_Hash_2() { return &___Hash_2; }
	inline void set_Hash_2(uint32_t value)
	{
		___Hash_2 = value;
	}

	inline static int32_t get_offset_of_IsPlayerObject_3() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___IsPlayerObject_3)); }
	inline bool get_IsPlayerObject_3() const { return ___IsPlayerObject_3; }
	inline bool* get_address_of_IsPlayerObject_3() { return &___IsPlayerObject_3; }
	inline void set_IsPlayerObject_3(bool value)
	{
		___IsPlayerObject_3 = value;
	}

	inline static int32_t get_offset_of_HasParent_4() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___HasParent_4)); }
	inline bool get_HasParent_4() const { return ___HasParent_4; }
	inline bool* get_address_of_HasParent_4() { return &___HasParent_4; }
	inline void set_HasParent_4(bool value)
	{
		___HasParent_4 = value;
	}

	inline static int32_t get_offset_of_IsSceneObject_5() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___IsSceneObject_5)); }
	inline bool get_IsSceneObject_5() const { return ___IsSceneObject_5; }
	inline bool* get_address_of_IsSceneObject_5() { return &___IsSceneObject_5; }
	inline void set_IsSceneObject_5(bool value)
	{
		___IsSceneObject_5 = value;
	}

	inline static int32_t get_offset_of_HasTransform_6() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___HasTransform_6)); }
	inline bool get_HasTransform_6() const { return ___HasTransform_6; }
	inline bool* get_address_of_HasTransform_6() { return &___HasTransform_6; }
	inline void set_HasTransform_6(bool value)
	{
		___HasTransform_6 = value;
	}

	inline static int32_t get_offset_of_IsReparented_7() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___IsReparented_7)); }
	inline bool get_IsReparented_7() const { return ___IsReparented_7; }
	inline bool* get_address_of_IsReparented_7() { return &___IsReparented_7; }
	inline void set_IsReparented_7(bool value)
	{
		___IsReparented_7 = value;
	}

	inline static int32_t get_offset_of_HasNetworkVariables_8() { return static_cast<int32_t>(offsetof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37, ___HasNetworkVariables_8)); }
	inline bool get_HasNetworkVariables_8() const { return ___HasNetworkVariables_8; }
	inline bool* get_address_of_HasNetworkVariables_8() { return &___HasNetworkVariables_8; }
	inline void set_HasNetworkVariables_8(bool value)
	{
		___HasNetworkVariables_8 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.NetworkObject/SceneObject/HeaderData
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId_0;
	uint64_t ___OwnerClientId_1;
	uint32_t ___Hash_2;
	int32_t ___IsPlayerObject_3;
	int32_t ___HasParent_4;
	int32_t ___IsSceneObject_5;
	int32_t ___HasTransform_6;
	int32_t ___IsReparented_7;
	int32_t ___HasNetworkVariables_8;
};
// Native definition for COM marshalling of Unity.Netcode.NetworkObject/SceneObject/HeaderData
struct HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com
{
	uint64_t ___NetworkObjectId_0;
	uint64_t ___OwnerClientId_1;
	uint32_t ___Hash_2;
	int32_t ___IsPlayerObject_3;
	int32_t ___HasParent_4;
	int32_t ___IsSceneObject_5;
	int32_t ___HasTransform_6;
	int32_t ___IsReparented_7;
	int32_t ___HasNetworkVariables_8;
};

// Unity.Collections.NativeList`1<Unity.Netcode.NetworkSpawnManager/TriggerData>
struct NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t9FC766CFB6BB126CE67A49A9DDFB72738A3A1247 * ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___m_DeprecatedAllocator_1;

public:
	inline static int32_t get_offset_of_m_ListData_0() { return static_cast<int32_t>(offsetof(NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1, ___m_ListData_0)); }
	inline UnsafeList_1_t9FC766CFB6BB126CE67A49A9DDFB72738A3A1247 * get_m_ListData_0() const { return ___m_ListData_0; }
	inline UnsafeList_1_t9FC766CFB6BB126CE67A49A9DDFB72738A3A1247 ** get_address_of_m_ListData_0() { return &___m_ListData_0; }
	inline void set_m_ListData_0(UnsafeList_1_t9FC766CFB6BB126CE67A49A9DDFB72738A3A1247 * value)
	{
		___m_ListData_0 = value;
	}

	inline static int32_t get_offset_of_m_DeprecatedAllocator_1() { return static_cast<int32_t>(offsetof(NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1, ___m_DeprecatedAllocator_1)); }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  get_m_DeprecatedAllocator_1() const { return ___m_DeprecatedAllocator_1; }
	inline AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A * get_address_of_m_DeprecatedAllocator_1() { return &___m_DeprecatedAllocator_1; }
	inline void set_m_DeprecatedAllocator_1(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  value)
	{
		___m_DeprecatedAllocator_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Quaternion>
struct Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 
{
public:
	// T System.Nullable`1::value
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___value_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_value_0() const { return ___value_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Netcode.HashSize
struct HashSize_tB7501632870A2F6C03E15915DFD058AC0F046412 
{
public:
	// System.Byte Unity.Netcode.HashSize::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HashSize_tB7501632870A2F6C03E15915DFD058AC0F046412, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.LogLevel
struct LogLevel_tA90E03A9075E7B18C4365DC4822F2E79125F6172 
{
public:
	// System.Int32 Unity.Netcode.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tA90E03A9075E7B18C4365DC4822F2E79125F6172, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkContext
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 
{
public:
	// System.Object Unity.Netcode.NetworkContext::SystemOwner
	RuntimeObject * ___SystemOwner_0;
	// System.UInt64 Unity.Netcode.NetworkContext::SenderId
	uint64_t ___SenderId_1;
	// System.Single Unity.Netcode.NetworkContext::Timestamp
	float ___Timestamp_2;
	// Unity.Netcode.MessageHeader Unity.Netcode.NetworkContext::Header
	MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  ___Header_3;

public:
	inline static int32_t get_offset_of_SystemOwner_0() { return static_cast<int32_t>(offsetof(NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720, ___SystemOwner_0)); }
	inline RuntimeObject * get_SystemOwner_0() const { return ___SystemOwner_0; }
	inline RuntimeObject ** get_address_of_SystemOwner_0() { return &___SystemOwner_0; }
	inline void set_SystemOwner_0(RuntimeObject * value)
	{
		___SystemOwner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SystemOwner_0), (void*)value);
	}

	inline static int32_t get_offset_of_SenderId_1() { return static_cast<int32_t>(offsetof(NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720, ___SenderId_1)); }
	inline uint64_t get_SenderId_1() const { return ___SenderId_1; }
	inline uint64_t* get_address_of_SenderId_1() { return &___SenderId_1; }
	inline void set_SenderId_1(uint64_t value)
	{
		___SenderId_1 = value;
	}

	inline static int32_t get_offset_of_Timestamp_2() { return static_cast<int32_t>(offsetof(NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720, ___Timestamp_2)); }
	inline float get_Timestamp_2() const { return ___Timestamp_2; }
	inline float* get_address_of_Timestamp_2() { return &___Timestamp_2; }
	inline void set_Timestamp_2(float value)
	{
		___Timestamp_2 = value;
	}

	inline static int32_t get_offset_of_Header_3() { return static_cast<int32_t>(offsetof(NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720, ___Header_3)); }
	inline MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  get_Header_3() const { return ___Header_3; }
	inline MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880 * get_address_of_Header_3() { return &___Header_3; }
	inline void set_Header_3(MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  value)
	{
		___Header_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.NetworkContext
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke
{
	Il2CppIUnknown* ___SystemOwner_0;
	uint64_t ___SenderId_1;
	float ___Timestamp_2;
	MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  ___Header_3;
};
// Native definition for COM marshalling of Unity.Netcode.NetworkContext
struct NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_com
{
	Il2CppIUnknown* ___SystemOwner_0;
	uint64_t ___SenderId_1;
	float ___Timestamp_2;
	MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  ___Header_3;
};

// Unity.Netcode.NetworkDelivery
struct NetworkDelivery_t603EACB1D1BD0BC8C5446965D62C937DE07EB306 
{
public:
	// System.Int32 Unity.Netcode.NetworkDelivery::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkDelivery_t603EACB1D1BD0BC8C5446965D62C937DE07EB306, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkEvent
struct NetworkEvent_t5DE602F56C4A9713EB6DAB2F40945A0F1E5F4B6A 
{
public:
	// System.Int32 Unity.Netcode.NetworkEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkEvent_t5DE602F56C4A9713EB6DAB2F40945A0F1E5F4B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkUpdateStage
struct NetworkUpdateStage_tE5D7A2CC629B20946FAEF2DD8C3E9E9C48B30CA4 
{
public:
	// System.Byte Unity.Netcode.NetworkUpdateStage::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkUpdateStage_tE5D7A2CC629B20946FAEF2DD8C3E9E9C48B30CA4, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C 
{
public:
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subSystemList_1), (void*)value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateDelegate_2)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Netcode.SceneEventProgressStatus
struct SceneEventProgressStatus_t9CFA53AD06B19D875B5F12842CF777A72E8E3429 
{
public:
	// System.Int32 Unity.Netcode.SceneEventProgressStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneEventProgressStatus_t9CFA53AD06B19D875B5F12842CF777A72E8E3429, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.SceneEventType
struct SceneEventType_tF0986D171116299513C9A5FD2F1FA2D9363901F9 
{
public:
	// System.Byte Unity.Netcode.SceneEventType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneEventType_tF0986D171116299513C9A5FD2F1FA2D9363901F9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.ServerRpcParams
struct ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09 
{
public:
	// Unity.Netcode.ServerRpcSendParams Unity.Netcode.ServerRpcParams::Send
	ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D  ___Send_0;
	// Unity.Netcode.ServerRpcReceiveParams Unity.Netcode.ServerRpcParams::Receive
	ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  ___Receive_1;

public:
	inline static int32_t get_offset_of_Send_0() { return static_cast<int32_t>(offsetof(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09, ___Send_0)); }
	inline ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D  get_Send_0() const { return ___Send_0; }
	inline ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D * get_address_of_Send_0() { return &___Send_0; }
	inline void set_Send_0(ServerRpcSendParams_t2CFDE9A36BE3E897B1986C3FC446A578D0629E8D  value)
	{
		___Send_0 = value;
	}

	inline static int32_t get_offset_of_Receive_1() { return static_cast<int32_t>(offsetof(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09, ___Receive_1)); }
	inline ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  get_Receive_1() const { return ___Receive_1; }
	inline ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311 * get_address_of_Receive_1() { return &___Receive_1; }
	inline void set_Receive_1(ServerRpcReceiveParams_t39142A767A323F55E4DC78614098A25EBA42D311  value)
	{
		___Receive_1 = value;
	}
};


// Unity.Netcode.UnnamedMessage
struct UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96 
{
public:
	// Unity.Netcode.FastBufferWriter Unity.Netcode.UnnamedMessage::Data
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96, ___Data_0)); }
	inline FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  get_Data_0() const { return ___Data_0; }
	inline FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  value)
	{
		___Data_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.UnnamedMessage
struct UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_pinvoke
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke ___Data_0;
};
// Native definition for COM marshalling of Unity.Netcode.UnnamedMessage
struct UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_com
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com ___Data_0;
};

// Unity.Netcode.MessagingSystem/ReceiveQueueItem
struct ReceiveQueueItem_t5CD0612C8E45432E9ACA2038FC3340AD8CDCBA14 
{
public:
	// Unity.Netcode.FastBufferReader Unity.Netcode.MessagingSystem/ReceiveQueueItem::Reader
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___Reader_0;
	// Unity.Netcode.MessageHeader Unity.Netcode.MessagingSystem/ReceiveQueueItem::Header
	MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  ___Header_1;
	// System.UInt64 Unity.Netcode.MessagingSystem/ReceiveQueueItem::SenderId
	uint64_t ___SenderId_2;
	// System.Single Unity.Netcode.MessagingSystem/ReceiveQueueItem::Timestamp
	float ___Timestamp_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ReceiveQueueItem_t5CD0612C8E45432E9ACA2038FC3340AD8CDCBA14, ___Reader_0)); }
	inline FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  get_Reader_0() const { return ___Reader_0; }
	inline FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  value)
	{
		___Reader_0 = value;
	}

	inline static int32_t get_offset_of_Header_1() { return static_cast<int32_t>(offsetof(ReceiveQueueItem_t5CD0612C8E45432E9ACA2038FC3340AD8CDCBA14, ___Header_1)); }
	inline MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  get_Header_1() const { return ___Header_1; }
	inline MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880 * get_address_of_Header_1() { return &___Header_1; }
	inline void set_Header_1(MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  value)
	{
		___Header_1 = value;
	}

	inline static int32_t get_offset_of_SenderId_2() { return static_cast<int32_t>(offsetof(ReceiveQueueItem_t5CD0612C8E45432E9ACA2038FC3340AD8CDCBA14, ___SenderId_2)); }
	inline uint64_t get_SenderId_2() const { return ___SenderId_2; }
	inline uint64_t* get_address_of_SenderId_2() { return &___SenderId_2; }
	inline void set_SenderId_2(uint64_t value)
	{
		___SenderId_2 = value;
	}

	inline static int32_t get_offset_of_Timestamp_3() { return static_cast<int32_t>(offsetof(ReceiveQueueItem_t5CD0612C8E45432E9ACA2038FC3340AD8CDCBA14, ___Timestamp_3)); }
	inline float get_Timestamp_3() const { return ___Timestamp_3; }
	inline float* get_address_of_Timestamp_3() { return &___Timestamp_3; }
	inline void set_Timestamp_3(float value)
	{
		___Timestamp_3 = value;
	}
};


// Unity.Netcode.NetworkBehaviour/__RpcExecStage
struct __RpcExecStage_tFE8D167C4ED836C92DEB53CEE6FF3F5226FC9C43 
{
public:
	// System.Int32 Unity.Netcode.NetworkBehaviour/__RpcExecStage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(__RpcExecStage_tFE8D167C4ED836C92DEB53CEE6FF3F5226FC9C43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkLog/LogType
struct LogType_t6EACB3490730D1B7B1F25548E8C73EE39577D38E 
{
public:
	// System.Byte Unity.Netcode.NetworkLog/LogType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6EACB3490730D1B7B1F25548E8C73EE39577D38E, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137
struct U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670  : public RuntimeObject
{
public:
	// System.Int32 Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::<>4__this
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___U3CU3E4__this_2;
	// System.UInt64 Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::clientId
	uint64_t ___clientId_3;
	// Unity.Netcode.NetworkTime Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::<timeStarted>5__2
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  ___U3CtimeStartedU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670, ___U3CU3E4__this_2)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_clientId_3() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670, ___clientId_3)); }
	inline uint64_t get_clientId_3() const { return ___clientId_3; }
	inline uint64_t* get_address_of_clientId_3() { return &___clientId_3; }
	inline void set_clientId_3(uint64_t value)
	{
		___clientId_3 = value;
	}

	inline static int32_t get_offset_of_U3CtimeStartedU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670, ___U3CtimeStartedU3E5__2_4)); }
	inline NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  get_U3CtimeStartedU3E5__2_4() const { return ___U3CtimeStartedU3E5__2_4; }
	inline NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * get_address_of_U3CtimeStartedU3E5__2_4() { return &___U3CtimeStartedU3E5__2_4; }
	inline void set_U3CtimeStartedU3E5__2_4(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  value)
	{
		___U3CtimeStartedU3E5__2_4 = value;
	}
};


// Unity.Netcode.NetworkSpawnManager/TriggerData
struct TriggerData_tCBF85FFB8F62429F924F05F176D8249C7C6DB404 
{
public:
	// Unity.Netcode.FastBufferReader Unity.Netcode.NetworkSpawnManager/TriggerData::Reader
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___Reader_0;
	// Unity.Netcode.MessageHeader Unity.Netcode.NetworkSpawnManager/TriggerData::Header
	MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  ___Header_1;
	// System.UInt64 Unity.Netcode.NetworkSpawnManager/TriggerData::SenderId
	uint64_t ___SenderId_2;
	// System.Single Unity.Netcode.NetworkSpawnManager/TriggerData::Timestamp
	float ___Timestamp_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(TriggerData_tCBF85FFB8F62429F924F05F176D8249C7C6DB404, ___Reader_0)); }
	inline FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  get_Reader_0() const { return ___Reader_0; }
	inline FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  value)
	{
		___Reader_0 = value;
	}

	inline static int32_t get_offset_of_Header_1() { return static_cast<int32_t>(offsetof(TriggerData_tCBF85FFB8F62429F924F05F176D8249C7C6DB404, ___Header_1)); }
	inline MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  get_Header_1() const { return ___Header_1; }
	inline MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880 * get_address_of_Header_1() { return &___Header_1; }
	inline void set_Header_1(MessageHeader_tF5EDD10E3779A337E58F46102483BD4A6EC52880  value)
	{
		___Header_1 = value;
	}

	inline static int32_t get_offset_of_SenderId_2() { return static_cast<int32_t>(offsetof(TriggerData_tCBF85FFB8F62429F924F05F176D8249C7C6DB404, ___SenderId_2)); }
	inline uint64_t get_SenderId_2() const { return ___SenderId_2; }
	inline uint64_t* get_address_of_SenderId_2() { return &___SenderId_2; }
	inline void set_SenderId_2(uint64_t value)
	{
		___SenderId_2 = value;
	}

	inline static int32_t get_offset_of_Timestamp_3() { return static_cast<int32_t>(offsetof(TriggerData_tCBF85FFB8F62429F924F05F176D8249C7C6DB404, ___Timestamp_3)); }
	inline float get_Timestamp_3() const { return ___Timestamp_3; }
	inline float* get_address_of_Timestamp_3() { return &___Timestamp_3; }
	inline void set_Timestamp_3(float value)
	{
		___Timestamp_3 = value;
	}
};


// Unity.Netcode.NetworkUpdateLoop/LoopSystemPosition
struct LoopSystemPosition_t98D4D1D17D85F24212A0EDA3333EF9BB350ADB1E 
{
public:
	// System.Int32 Unity.Netcode.NetworkUpdateLoop/LoopSystemPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopSystemPosition_t98D4D1D17D85F24212A0EDA3333EF9BB350ADB1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.PendingClient/State
struct State_tF2C581C7E66585682AA3E469F934BB5F93952D1C 
{
public:
	// System.Int32 Unity.Netcode.PendingClient/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tF2C581C7E66585682AA3E469F934BB5F93952D1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.RpcMessage/RpcType
struct RpcType_t0C6C07619538855CEAE0DFB500D5CA5D82C81241 
{
public:
	// System.Byte Unity.Netcode.RpcMessage/RpcType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RpcType_t0C6C07619538855CEAE0DFB500D5CA5D82C81241, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Netcode.SnapshotDataMessage/SpawnData
struct SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE 
{
public:
	// System.UInt64 Unity.Netcode.SnapshotDataMessage/SpawnData::NetworkObjectId
	uint64_t ___NetworkObjectId_0;
	// System.UInt32 Unity.Netcode.SnapshotDataMessage/SpawnData::Hash
	uint32_t ___Hash_1;
	// System.Boolean Unity.Netcode.SnapshotDataMessage/SpawnData::IsSceneObject
	bool ___IsSceneObject_2;
	// System.Boolean Unity.Netcode.SnapshotDataMessage/SpawnData::IsPlayerObject
	bool ___IsPlayerObject_3;
	// System.UInt64 Unity.Netcode.SnapshotDataMessage/SpawnData::OwnerClientId
	uint64_t ___OwnerClientId_4;
	// System.UInt64 Unity.Netcode.SnapshotDataMessage/SpawnData::ParentNetworkId
	uint64_t ___ParentNetworkId_5;
	// UnityEngine.Vector3 Unity.Netcode.SnapshotDataMessage/SpawnData::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_6;
	// UnityEngine.Quaternion Unity.Netcode.SnapshotDataMessage/SpawnData::Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rotation_7;
	// UnityEngine.Vector3 Unity.Netcode.SnapshotDataMessage/SpawnData::Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Scale_8;
	// System.Int32 Unity.Netcode.SnapshotDataMessage/SpawnData::TickWritten
	int32_t ___TickWritten_9;

public:
	inline static int32_t get_offset_of_NetworkObjectId_0() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___NetworkObjectId_0)); }
	inline uint64_t get_NetworkObjectId_0() const { return ___NetworkObjectId_0; }
	inline uint64_t* get_address_of_NetworkObjectId_0() { return &___NetworkObjectId_0; }
	inline void set_NetworkObjectId_0(uint64_t value)
	{
		___NetworkObjectId_0 = value;
	}

	inline static int32_t get_offset_of_Hash_1() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___Hash_1)); }
	inline uint32_t get_Hash_1() const { return ___Hash_1; }
	inline uint32_t* get_address_of_Hash_1() { return &___Hash_1; }
	inline void set_Hash_1(uint32_t value)
	{
		___Hash_1 = value;
	}

	inline static int32_t get_offset_of_IsSceneObject_2() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___IsSceneObject_2)); }
	inline bool get_IsSceneObject_2() const { return ___IsSceneObject_2; }
	inline bool* get_address_of_IsSceneObject_2() { return &___IsSceneObject_2; }
	inline void set_IsSceneObject_2(bool value)
	{
		___IsSceneObject_2 = value;
	}

	inline static int32_t get_offset_of_IsPlayerObject_3() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___IsPlayerObject_3)); }
	inline bool get_IsPlayerObject_3() const { return ___IsPlayerObject_3; }
	inline bool* get_address_of_IsPlayerObject_3() { return &___IsPlayerObject_3; }
	inline void set_IsPlayerObject_3(bool value)
	{
		___IsPlayerObject_3 = value;
	}

	inline static int32_t get_offset_of_OwnerClientId_4() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___OwnerClientId_4)); }
	inline uint64_t get_OwnerClientId_4() const { return ___OwnerClientId_4; }
	inline uint64_t* get_address_of_OwnerClientId_4() { return &___OwnerClientId_4; }
	inline void set_OwnerClientId_4(uint64_t value)
	{
		___OwnerClientId_4 = value;
	}

	inline static int32_t get_offset_of_ParentNetworkId_5() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___ParentNetworkId_5)); }
	inline uint64_t get_ParentNetworkId_5() const { return ___ParentNetworkId_5; }
	inline uint64_t* get_address_of_ParentNetworkId_5() { return &___ParentNetworkId_5; }
	inline void set_ParentNetworkId_5(uint64_t value)
	{
		___ParentNetworkId_5 = value;
	}

	inline static int32_t get_offset_of_Position_6() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___Position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_6() const { return ___Position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_6() { return &___Position_6; }
	inline void set_Position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_6 = value;
	}

	inline static int32_t get_offset_of_Rotation_7() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___Rotation_7)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Rotation_7() const { return ___Rotation_7; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Rotation_7() { return &___Rotation_7; }
	inline void set_Rotation_7(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Rotation_7 = value;
	}

	inline static int32_t get_offset_of_Scale_8() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___Scale_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Scale_8() const { return ___Scale_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Scale_8() { return &___Scale_8; }
	inline void set_Scale_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Scale_8 = value;
	}

	inline static int32_t get_offset_of_TickWritten_9() { return static_cast<int32_t>(offsetof(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE, ___TickWritten_9)); }
	inline int32_t get_TickWritten_9() const { return ___TickWritten_9; }
	inline int32_t* get_address_of_TickWritten_9() { return &___TickWritten_9; }
	inline void set_TickWritten_9(int32_t value)
	{
		___TickWritten_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.SnapshotDataMessage/SpawnData
struct SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_pinvoke
{
	uint64_t ___NetworkObjectId_0;
	uint32_t ___Hash_1;
	int32_t ___IsSceneObject_2;
	int32_t ___IsPlayerObject_3;
	uint64_t ___OwnerClientId_4;
	uint64_t ___ParentNetworkId_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_6;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rotation_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Scale_8;
	int32_t ___TickWritten_9;
};
// Native definition for COM marshalling of Unity.Netcode.SnapshotDataMessage/SpawnData
struct SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_com
{
	uint64_t ___NetworkObjectId_0;
	uint32_t ___Hash_1;
	int32_t ___IsSceneObject_2;
	int32_t ___IsPlayerObject_3;
	uint64_t ___OwnerClientId_4;
	uint64_t ___ParentNetworkId_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_6;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rotation_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Scale_8;
	int32_t ___TickWritten_9;
};

// Unity.Netcode.NetworkObject/SceneObject/TransformData
struct TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C 
{
public:
	// UnityEngine.Vector3 Unity.Netcode.NetworkObject/SceneObject/TransformData::Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Position_0;
	// UnityEngine.Quaternion Unity.Netcode.NetworkObject/SceneObject/TransformData::Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___Rotation_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C, ___Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Position_0() const { return ___Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C, ___Rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___Rotation_1 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.Netcode.NetworkConfig
struct NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50  : public RuntimeObject
{
public:
	// System.UInt16 Unity.Netcode.NetworkConfig::ProtocolVersion
	uint16_t ___ProtocolVersion_0;
	// Unity.Netcode.NetworkTransport Unity.Netcode.NetworkConfig::NetworkTransport
	NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC * ___NetworkTransport_1;
	// UnityEngine.GameObject Unity.Netcode.NetworkConfig::PlayerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerPrefab_2;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkPrefab> Unity.Netcode.NetworkConfig::NetworkPrefabs
	List_1_t2B843176E570825A86773F02D90AA32C2BD1D9D2 * ___NetworkPrefabs_3;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkPrefab> Unity.Netcode.NetworkConfig::NetworkPrefabOverrideLinks
	Dictionary_2_tBA1C8088EE34DB2A96643C03E9E6BB79D4C3C4BD * ___NetworkPrefabOverrideLinks_4;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.UInt32> Unity.Netcode.NetworkConfig::OverrideToNetworkPrefab
	Dictionary_2_t75F6BD28CDB213A91111BFE6D1C72CBB4E9E2B81 * ___OverrideToNetworkPrefab_5;
	// System.UInt32 Unity.Netcode.NetworkConfig::TickRate
	uint32_t ___TickRate_6;
	// System.Int32 Unity.Netcode.NetworkConfig::ClientConnectionBufferTimeout
	int32_t ___ClientConnectionBufferTimeout_7;
	// System.Boolean Unity.Netcode.NetworkConfig::ConnectionApproval
	bool ___ConnectionApproval_8;
	// System.Byte[] Unity.Netcode.NetworkConfig::ConnectionData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___ConnectionData_9;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableTimeResync
	bool ___EnableTimeResync_10;
	// System.Int32 Unity.Netcode.NetworkConfig::TimeResyncInterval
	int32_t ___TimeResyncInterval_11;
	// System.Boolean Unity.Netcode.NetworkConfig::EnsureNetworkVariableLengthSafety
	bool ___EnsureNetworkVariableLengthSafety_12;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableSceneManagement
	bool ___EnableSceneManagement_13;
	// System.Boolean Unity.Netcode.NetworkConfig::ForceSamePrefabs
	bool ___ForceSamePrefabs_14;
	// System.Boolean Unity.Netcode.NetworkConfig::RecycleNetworkIds
	bool ___RecycleNetworkIds_15;
	// System.Single Unity.Netcode.NetworkConfig::NetworkIdRecycleDelay
	float ___NetworkIdRecycleDelay_16;
	// Unity.Netcode.HashSize Unity.Netcode.NetworkConfig::RpcHashSize
	uint8_t ___RpcHashSize_17;
	// System.Int32 Unity.Netcode.NetworkConfig::LoadSceneTimeOut
	int32_t ___LoadSceneTimeOut_18;
	// System.Single Unity.Netcode.NetworkConfig::MessageBufferTimeout
	float ___MessageBufferTimeout_19;
	// System.Boolean Unity.Netcode.NetworkConfig::EnableNetworkLogs
	bool ___EnableNetworkLogs_20;
	// System.Boolean Unity.Netcode.NetworkConfig::<UseSnapshotDelta>k__BackingField
	bool ___U3CUseSnapshotDeltaU3Ek__BackingField_21;
	// System.Boolean Unity.Netcode.NetworkConfig::<UseSnapshotSpawn>k__BackingField
	bool ___U3CUseSnapshotSpawnU3Ek__BackingField_22;
	// System.Int32 Unity.Netcode.NetworkConfig::<SnapshotMaxSpawnUsage>k__BackingField
	int32_t ___U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkConfig::m_ConfigHash
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___m_ConfigHash_26;

public:
	inline static int32_t get_offset_of_ProtocolVersion_0() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___ProtocolVersion_0)); }
	inline uint16_t get_ProtocolVersion_0() const { return ___ProtocolVersion_0; }
	inline uint16_t* get_address_of_ProtocolVersion_0() { return &___ProtocolVersion_0; }
	inline void set_ProtocolVersion_0(uint16_t value)
	{
		___ProtocolVersion_0 = value;
	}

	inline static int32_t get_offset_of_NetworkTransport_1() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___NetworkTransport_1)); }
	inline NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC * get_NetworkTransport_1() const { return ___NetworkTransport_1; }
	inline NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC ** get_address_of_NetworkTransport_1() { return &___NetworkTransport_1; }
	inline void set_NetworkTransport_1(NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC * value)
	{
		___NetworkTransport_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkTransport_1), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerPrefab_2() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___PlayerPrefab_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerPrefab_2() const { return ___PlayerPrefab_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerPrefab_2() { return &___PlayerPrefab_2; }
	inline void set_PlayerPrefab_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerPrefab_2), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkPrefabs_3() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___NetworkPrefabs_3)); }
	inline List_1_t2B843176E570825A86773F02D90AA32C2BD1D9D2 * get_NetworkPrefabs_3() const { return ___NetworkPrefabs_3; }
	inline List_1_t2B843176E570825A86773F02D90AA32C2BD1D9D2 ** get_address_of_NetworkPrefabs_3() { return &___NetworkPrefabs_3; }
	inline void set_NetworkPrefabs_3(List_1_t2B843176E570825A86773F02D90AA32C2BD1D9D2 * value)
	{
		___NetworkPrefabs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkPrefabs_3), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkPrefabOverrideLinks_4() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___NetworkPrefabOverrideLinks_4)); }
	inline Dictionary_2_tBA1C8088EE34DB2A96643C03E9E6BB79D4C3C4BD * get_NetworkPrefabOverrideLinks_4() const { return ___NetworkPrefabOverrideLinks_4; }
	inline Dictionary_2_tBA1C8088EE34DB2A96643C03E9E6BB79D4C3C4BD ** get_address_of_NetworkPrefabOverrideLinks_4() { return &___NetworkPrefabOverrideLinks_4; }
	inline void set_NetworkPrefabOverrideLinks_4(Dictionary_2_tBA1C8088EE34DB2A96643C03E9E6BB79D4C3C4BD * value)
	{
		___NetworkPrefabOverrideLinks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkPrefabOverrideLinks_4), (void*)value);
	}

	inline static int32_t get_offset_of_OverrideToNetworkPrefab_5() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___OverrideToNetworkPrefab_5)); }
	inline Dictionary_2_t75F6BD28CDB213A91111BFE6D1C72CBB4E9E2B81 * get_OverrideToNetworkPrefab_5() const { return ___OverrideToNetworkPrefab_5; }
	inline Dictionary_2_t75F6BD28CDB213A91111BFE6D1C72CBB4E9E2B81 ** get_address_of_OverrideToNetworkPrefab_5() { return &___OverrideToNetworkPrefab_5; }
	inline void set_OverrideToNetworkPrefab_5(Dictionary_2_t75F6BD28CDB213A91111BFE6D1C72CBB4E9E2B81 * value)
	{
		___OverrideToNetworkPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverrideToNetworkPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_TickRate_6() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___TickRate_6)); }
	inline uint32_t get_TickRate_6() const { return ___TickRate_6; }
	inline uint32_t* get_address_of_TickRate_6() { return &___TickRate_6; }
	inline void set_TickRate_6(uint32_t value)
	{
		___TickRate_6 = value;
	}

	inline static int32_t get_offset_of_ClientConnectionBufferTimeout_7() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___ClientConnectionBufferTimeout_7)); }
	inline int32_t get_ClientConnectionBufferTimeout_7() const { return ___ClientConnectionBufferTimeout_7; }
	inline int32_t* get_address_of_ClientConnectionBufferTimeout_7() { return &___ClientConnectionBufferTimeout_7; }
	inline void set_ClientConnectionBufferTimeout_7(int32_t value)
	{
		___ClientConnectionBufferTimeout_7 = value;
	}

	inline static int32_t get_offset_of_ConnectionApproval_8() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___ConnectionApproval_8)); }
	inline bool get_ConnectionApproval_8() const { return ___ConnectionApproval_8; }
	inline bool* get_address_of_ConnectionApproval_8() { return &___ConnectionApproval_8; }
	inline void set_ConnectionApproval_8(bool value)
	{
		___ConnectionApproval_8 = value;
	}

	inline static int32_t get_offset_of_ConnectionData_9() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___ConnectionData_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_ConnectionData_9() const { return ___ConnectionData_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_ConnectionData_9() { return &___ConnectionData_9; }
	inline void set_ConnectionData_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___ConnectionData_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionData_9), (void*)value);
	}

	inline static int32_t get_offset_of_EnableTimeResync_10() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___EnableTimeResync_10)); }
	inline bool get_EnableTimeResync_10() const { return ___EnableTimeResync_10; }
	inline bool* get_address_of_EnableTimeResync_10() { return &___EnableTimeResync_10; }
	inline void set_EnableTimeResync_10(bool value)
	{
		___EnableTimeResync_10 = value;
	}

	inline static int32_t get_offset_of_TimeResyncInterval_11() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___TimeResyncInterval_11)); }
	inline int32_t get_TimeResyncInterval_11() const { return ___TimeResyncInterval_11; }
	inline int32_t* get_address_of_TimeResyncInterval_11() { return &___TimeResyncInterval_11; }
	inline void set_TimeResyncInterval_11(int32_t value)
	{
		___TimeResyncInterval_11 = value;
	}

	inline static int32_t get_offset_of_EnsureNetworkVariableLengthSafety_12() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___EnsureNetworkVariableLengthSafety_12)); }
	inline bool get_EnsureNetworkVariableLengthSafety_12() const { return ___EnsureNetworkVariableLengthSafety_12; }
	inline bool* get_address_of_EnsureNetworkVariableLengthSafety_12() { return &___EnsureNetworkVariableLengthSafety_12; }
	inline void set_EnsureNetworkVariableLengthSafety_12(bool value)
	{
		___EnsureNetworkVariableLengthSafety_12 = value;
	}

	inline static int32_t get_offset_of_EnableSceneManagement_13() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___EnableSceneManagement_13)); }
	inline bool get_EnableSceneManagement_13() const { return ___EnableSceneManagement_13; }
	inline bool* get_address_of_EnableSceneManagement_13() { return &___EnableSceneManagement_13; }
	inline void set_EnableSceneManagement_13(bool value)
	{
		___EnableSceneManagement_13 = value;
	}

	inline static int32_t get_offset_of_ForceSamePrefabs_14() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___ForceSamePrefabs_14)); }
	inline bool get_ForceSamePrefabs_14() const { return ___ForceSamePrefabs_14; }
	inline bool* get_address_of_ForceSamePrefabs_14() { return &___ForceSamePrefabs_14; }
	inline void set_ForceSamePrefabs_14(bool value)
	{
		___ForceSamePrefabs_14 = value;
	}

	inline static int32_t get_offset_of_RecycleNetworkIds_15() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___RecycleNetworkIds_15)); }
	inline bool get_RecycleNetworkIds_15() const { return ___RecycleNetworkIds_15; }
	inline bool* get_address_of_RecycleNetworkIds_15() { return &___RecycleNetworkIds_15; }
	inline void set_RecycleNetworkIds_15(bool value)
	{
		___RecycleNetworkIds_15 = value;
	}

	inline static int32_t get_offset_of_NetworkIdRecycleDelay_16() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___NetworkIdRecycleDelay_16)); }
	inline float get_NetworkIdRecycleDelay_16() const { return ___NetworkIdRecycleDelay_16; }
	inline float* get_address_of_NetworkIdRecycleDelay_16() { return &___NetworkIdRecycleDelay_16; }
	inline void set_NetworkIdRecycleDelay_16(float value)
	{
		___NetworkIdRecycleDelay_16 = value;
	}

	inline static int32_t get_offset_of_RpcHashSize_17() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___RpcHashSize_17)); }
	inline uint8_t get_RpcHashSize_17() const { return ___RpcHashSize_17; }
	inline uint8_t* get_address_of_RpcHashSize_17() { return &___RpcHashSize_17; }
	inline void set_RpcHashSize_17(uint8_t value)
	{
		___RpcHashSize_17 = value;
	}

	inline static int32_t get_offset_of_LoadSceneTimeOut_18() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___LoadSceneTimeOut_18)); }
	inline int32_t get_LoadSceneTimeOut_18() const { return ___LoadSceneTimeOut_18; }
	inline int32_t* get_address_of_LoadSceneTimeOut_18() { return &___LoadSceneTimeOut_18; }
	inline void set_LoadSceneTimeOut_18(int32_t value)
	{
		___LoadSceneTimeOut_18 = value;
	}

	inline static int32_t get_offset_of_MessageBufferTimeout_19() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___MessageBufferTimeout_19)); }
	inline float get_MessageBufferTimeout_19() const { return ___MessageBufferTimeout_19; }
	inline float* get_address_of_MessageBufferTimeout_19() { return &___MessageBufferTimeout_19; }
	inline void set_MessageBufferTimeout_19(float value)
	{
		___MessageBufferTimeout_19 = value;
	}

	inline static int32_t get_offset_of_EnableNetworkLogs_20() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___EnableNetworkLogs_20)); }
	inline bool get_EnableNetworkLogs_20() const { return ___EnableNetworkLogs_20; }
	inline bool* get_address_of_EnableNetworkLogs_20() { return &___EnableNetworkLogs_20; }
	inline void set_EnableNetworkLogs_20(bool value)
	{
		___EnableNetworkLogs_20 = value;
	}

	inline static int32_t get_offset_of_U3CUseSnapshotDeltaU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___U3CUseSnapshotDeltaU3Ek__BackingField_21)); }
	inline bool get_U3CUseSnapshotDeltaU3Ek__BackingField_21() const { return ___U3CUseSnapshotDeltaU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CUseSnapshotDeltaU3Ek__BackingField_21() { return &___U3CUseSnapshotDeltaU3Ek__BackingField_21; }
	inline void set_U3CUseSnapshotDeltaU3Ek__BackingField_21(bool value)
	{
		___U3CUseSnapshotDeltaU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CUseSnapshotSpawnU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___U3CUseSnapshotSpawnU3Ek__BackingField_22)); }
	inline bool get_U3CUseSnapshotSpawnU3Ek__BackingField_22() const { return ___U3CUseSnapshotSpawnU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CUseSnapshotSpawnU3Ek__BackingField_22() { return &___U3CUseSnapshotSpawnU3Ek__BackingField_22; }
	inline void set_U3CUseSnapshotSpawnU3Ek__BackingField_22(bool value)
	{
		___U3CUseSnapshotSpawnU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23)); }
	inline int32_t get_U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23() const { return ___U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23() { return &___U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23; }
	inline void set_U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23(int32_t value)
	{
		___U3CSnapshotMaxSpawnUsageU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_m_ConfigHash_26() { return static_cast<int32_t>(offsetof(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50, ___m_ConfigHash_26)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_m_ConfigHash_26() const { return ___m_ConfigHash_26; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_m_ConfigHash_26() { return &___m_ConfigHash_26; }
	inline void set_m_ConfigHash_26(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___m_ConfigHash_26 = value;
	}
};


// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A  : public RuntimeObject
{
public:
	// Unity.Netcode.NetworkSceneManager/SceneEventDelegate Unity.Netcode.NetworkSceneManager::OnSceneEvent
	SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * ___OnSceneEvent_4;
	// Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler Unity.Netcode.NetworkSceneManager::OnLoad
	OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * ___OnLoad_5;
	// Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler Unity.Netcode.NetworkSceneManager::OnUnload
	OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * ___OnUnload_6;
	// Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler Unity.Netcode.NetworkSceneManager::OnSynchronize
	OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * ___OnSynchronize_7;
	// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler Unity.Netcode.NetworkSceneManager::OnLoadEventCompleted
	OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * ___OnLoadEventCompleted_8;
	// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler Unity.Netcode.NetworkSceneManager::OnUnloadEventCompleted
	OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * ___OnUnloadEventCompleted_9;
	// Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler Unity.Netcode.NetworkSceneManager::OnLoadComplete
	OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * ___OnLoadComplete_10;
	// Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler Unity.Netcode.NetworkSceneManager::OnUnloadComplete
	OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * ___OnUnloadComplete_11;
	// Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler Unity.Netcode.NetworkSceneManager::OnSynchronizeComplete
	OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * ___OnSynchronizeComplete_12;
	// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler Unity.Netcode.NetworkSceneManager::VerifySceneBeforeLoading
	VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * ___VerifySceneBeforeLoading_13;
	// System.Collections.Generic.Dictionary`2<System.Guid,Unity.Netcode.SceneEventProgress> Unity.Netcode.NetworkSceneManager::SceneEventProgressTracking
	Dictionary_2_t5D4A906B1034B3475D82335163B06C1EDCB2A27B * ___SceneEventProgressTracking_14;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Netcode.NetworkObject>> Unity.Netcode.NetworkSceneManager::ScenePlacedObjects
	Dictionary_2_t1604618A1339B79A9E32C0A47848E6103F22F40B * ___ScenePlacedObjects_15;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkSceneManager::SceneBeingSynchronized
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___SceneBeingSynchronized_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.SceneManagement.Scene> Unity.Netcode.NetworkSceneManager::ScenesLoaded
	Dictionary_2_tBFE138CD41D19CC65FA6BEF8181B803BA73B53AF * ___ScenesLoaded_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Unity.Netcode.NetworkSceneManager::ServerSceneHandleToClientSceneHandle
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___ServerSceneHandleToClientSceneHandle_18;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> Unity.Netcode.NetworkSceneManager::HashToBuildIndex
	Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___HashToBuildIndex_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32> Unity.Netcode.NetworkSceneManager::BuildIndexToHash
	Dictionary_2_tBEB1A25E940B28F0A9611027A80F4179846BAF14 * ___BuildIndexToHash_20;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.SceneEventData> Unity.Netcode.NetworkSceneManager::SceneEventDataStore
	Dictionary_2_t78556AAD60E71196D30162A4D275018D7ACA66AE * ___SceneEventDataStore_22;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkSceneManager::<m_NetworkManager>k__BackingField
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___U3Cm_NetworkManagerU3Ek__BackingField_23;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkSceneManager::DontDestroyOnLoadScene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___DontDestroyOnLoadScene_24;
	// UnityEngine.SceneManagement.LoadSceneMode Unity.Netcode.NetworkSceneManager::<ClientSynchronizationMode>k__BackingField
	int32_t ___U3CClientSynchronizationModeU3Ek__BackingField_25;
	// System.Boolean Unity.Netcode.NetworkSceneManager::m_DisableValidationWarningMessages
	bool ___m_DisableValidationWarningMessages_26;

public:
	inline static int32_t get_offset_of_OnSceneEvent_4() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnSceneEvent_4)); }
	inline SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * get_OnSceneEvent_4() const { return ___OnSceneEvent_4; }
	inline SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 ** get_address_of_OnSceneEvent_4() { return &___OnSceneEvent_4; }
	inline void set_OnSceneEvent_4(SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * value)
	{
		___OnSceneEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoad_5() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnLoad_5)); }
	inline OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * get_OnLoad_5() const { return ___OnLoad_5; }
	inline OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 ** get_address_of_OnLoad_5() { return &___OnLoad_5; }
	inline void set_OnLoad_5(OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * value)
	{
		___OnLoad_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoad_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnload_6() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnUnload_6)); }
	inline OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * get_OnUnload_6() const { return ___OnUnload_6; }
	inline OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD ** get_address_of_OnUnload_6() { return &___OnUnload_6; }
	inline void set_OnUnload_6(OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * value)
	{
		___OnUnload_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnload_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnSynchronize_7() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnSynchronize_7)); }
	inline OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * get_OnSynchronize_7() const { return ___OnSynchronize_7; }
	inline OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 ** get_address_of_OnSynchronize_7() { return &___OnSynchronize_7; }
	inline void set_OnSynchronize_7(OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * value)
	{
		___OnSynchronize_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSynchronize_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoadEventCompleted_8() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnLoadEventCompleted_8)); }
	inline OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * get_OnLoadEventCompleted_8() const { return ___OnLoadEventCompleted_8; }
	inline OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 ** get_address_of_OnLoadEventCompleted_8() { return &___OnLoadEventCompleted_8; }
	inline void set_OnLoadEventCompleted_8(OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * value)
	{
		___OnLoadEventCompleted_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadEventCompleted_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnloadEventCompleted_9() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnUnloadEventCompleted_9)); }
	inline OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * get_OnUnloadEventCompleted_9() const { return ___OnUnloadEventCompleted_9; }
	inline OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 ** get_address_of_OnUnloadEventCompleted_9() { return &___OnUnloadEventCompleted_9; }
	inline void set_OnUnloadEventCompleted_9(OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * value)
	{
		___OnUnloadEventCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnloadEventCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnLoadComplete_10() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnLoadComplete_10)); }
	inline OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * get_OnLoadComplete_10() const { return ___OnLoadComplete_10; }
	inline OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 ** get_address_of_OnLoadComplete_10() { return &___OnLoadComplete_10; }
	inline void set_OnLoadComplete_10(OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * value)
	{
		___OnLoadComplete_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoadComplete_10), (void*)value);
	}

	inline static int32_t get_offset_of_OnUnloadComplete_11() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnUnloadComplete_11)); }
	inline OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * get_OnUnloadComplete_11() const { return ___OnUnloadComplete_11; }
	inline OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 ** get_address_of_OnUnloadComplete_11() { return &___OnUnloadComplete_11; }
	inline void set_OnUnloadComplete_11(OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * value)
	{
		___OnUnloadComplete_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUnloadComplete_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnSynchronizeComplete_12() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___OnSynchronizeComplete_12)); }
	inline OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * get_OnSynchronizeComplete_12() const { return ___OnSynchronizeComplete_12; }
	inline OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 ** get_address_of_OnSynchronizeComplete_12() { return &___OnSynchronizeComplete_12; }
	inline void set_OnSynchronizeComplete_12(OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * value)
	{
		___OnSynchronizeComplete_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSynchronizeComplete_12), (void*)value);
	}

	inline static int32_t get_offset_of_VerifySceneBeforeLoading_13() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___VerifySceneBeforeLoading_13)); }
	inline VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * get_VerifySceneBeforeLoading_13() const { return ___VerifySceneBeforeLoading_13; }
	inline VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 ** get_address_of_VerifySceneBeforeLoading_13() { return &___VerifySceneBeforeLoading_13; }
	inline void set_VerifySceneBeforeLoading_13(VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * value)
	{
		___VerifySceneBeforeLoading_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerifySceneBeforeLoading_13), (void*)value);
	}

	inline static int32_t get_offset_of_SceneEventProgressTracking_14() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___SceneEventProgressTracking_14)); }
	inline Dictionary_2_t5D4A906B1034B3475D82335163B06C1EDCB2A27B * get_SceneEventProgressTracking_14() const { return ___SceneEventProgressTracking_14; }
	inline Dictionary_2_t5D4A906B1034B3475D82335163B06C1EDCB2A27B ** get_address_of_SceneEventProgressTracking_14() { return &___SceneEventProgressTracking_14; }
	inline void set_SceneEventProgressTracking_14(Dictionary_2_t5D4A906B1034B3475D82335163B06C1EDCB2A27B * value)
	{
		___SceneEventProgressTracking_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneEventProgressTracking_14), (void*)value);
	}

	inline static int32_t get_offset_of_ScenePlacedObjects_15() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___ScenePlacedObjects_15)); }
	inline Dictionary_2_t1604618A1339B79A9E32C0A47848E6103F22F40B * get_ScenePlacedObjects_15() const { return ___ScenePlacedObjects_15; }
	inline Dictionary_2_t1604618A1339B79A9E32C0A47848E6103F22F40B ** get_address_of_ScenePlacedObjects_15() { return &___ScenePlacedObjects_15; }
	inline void set_ScenePlacedObjects_15(Dictionary_2_t1604618A1339B79A9E32C0A47848E6103F22F40B * value)
	{
		___ScenePlacedObjects_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScenePlacedObjects_15), (void*)value);
	}

	inline static int32_t get_offset_of_SceneBeingSynchronized_16() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___SceneBeingSynchronized_16)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_SceneBeingSynchronized_16() const { return ___SceneBeingSynchronized_16; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_SceneBeingSynchronized_16() { return &___SceneBeingSynchronized_16; }
	inline void set_SceneBeingSynchronized_16(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___SceneBeingSynchronized_16 = value;
	}

	inline static int32_t get_offset_of_ScenesLoaded_17() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___ScenesLoaded_17)); }
	inline Dictionary_2_tBFE138CD41D19CC65FA6BEF8181B803BA73B53AF * get_ScenesLoaded_17() const { return ___ScenesLoaded_17; }
	inline Dictionary_2_tBFE138CD41D19CC65FA6BEF8181B803BA73B53AF ** get_address_of_ScenesLoaded_17() { return &___ScenesLoaded_17; }
	inline void set_ScenesLoaded_17(Dictionary_2_tBFE138CD41D19CC65FA6BEF8181B803BA73B53AF * value)
	{
		___ScenesLoaded_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScenesLoaded_17), (void*)value);
	}

	inline static int32_t get_offset_of_ServerSceneHandleToClientSceneHandle_18() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___ServerSceneHandleToClientSceneHandle_18)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_ServerSceneHandleToClientSceneHandle_18() const { return ___ServerSceneHandleToClientSceneHandle_18; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_ServerSceneHandleToClientSceneHandle_18() { return &___ServerSceneHandleToClientSceneHandle_18; }
	inline void set_ServerSceneHandleToClientSceneHandle_18(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___ServerSceneHandleToClientSceneHandle_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ServerSceneHandleToClientSceneHandle_18), (void*)value);
	}

	inline static int32_t get_offset_of_HashToBuildIndex_19() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___HashToBuildIndex_19)); }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * get_HashToBuildIndex_19() const { return ___HashToBuildIndex_19; }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 ** get_address_of_HashToBuildIndex_19() { return &___HashToBuildIndex_19; }
	inline void set_HashToBuildIndex_19(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * value)
	{
		___HashToBuildIndex_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashToBuildIndex_19), (void*)value);
	}

	inline static int32_t get_offset_of_BuildIndexToHash_20() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___BuildIndexToHash_20)); }
	inline Dictionary_2_tBEB1A25E940B28F0A9611027A80F4179846BAF14 * get_BuildIndexToHash_20() const { return ___BuildIndexToHash_20; }
	inline Dictionary_2_tBEB1A25E940B28F0A9611027A80F4179846BAF14 ** get_address_of_BuildIndexToHash_20() { return &___BuildIndexToHash_20; }
	inline void set_BuildIndexToHash_20(Dictionary_2_tBEB1A25E940B28F0A9611027A80F4179846BAF14 * value)
	{
		___BuildIndexToHash_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildIndexToHash_20), (void*)value);
	}

	inline static int32_t get_offset_of_SceneEventDataStore_22() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___SceneEventDataStore_22)); }
	inline Dictionary_2_t78556AAD60E71196D30162A4D275018D7ACA66AE * get_SceneEventDataStore_22() const { return ___SceneEventDataStore_22; }
	inline Dictionary_2_t78556AAD60E71196D30162A4D275018D7ACA66AE ** get_address_of_SceneEventDataStore_22() { return &___SceneEventDataStore_22; }
	inline void set_SceneEventDataStore_22(Dictionary_2_t78556AAD60E71196D30162A4D275018D7ACA66AE * value)
	{
		___SceneEventDataStore_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneEventDataStore_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cm_NetworkManagerU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___U3Cm_NetworkManagerU3Ek__BackingField_23)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_U3Cm_NetworkManagerU3Ek__BackingField_23() const { return ___U3Cm_NetworkManagerU3Ek__BackingField_23; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_U3Cm_NetworkManagerU3Ek__BackingField_23() { return &___U3Cm_NetworkManagerU3Ek__BackingField_23; }
	inline void set_U3Cm_NetworkManagerU3Ek__BackingField_23(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___U3Cm_NetworkManagerU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_NetworkManagerU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_DontDestroyOnLoadScene_24() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___DontDestroyOnLoadScene_24)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_DontDestroyOnLoadScene_24() const { return ___DontDestroyOnLoadScene_24; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_DontDestroyOnLoadScene_24() { return &___DontDestroyOnLoadScene_24; }
	inline void set_DontDestroyOnLoadScene_24(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___DontDestroyOnLoadScene_24 = value;
	}

	inline static int32_t get_offset_of_U3CClientSynchronizationModeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___U3CClientSynchronizationModeU3Ek__BackingField_25)); }
	inline int32_t get_U3CClientSynchronizationModeU3Ek__BackingField_25() const { return ___U3CClientSynchronizationModeU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CClientSynchronizationModeU3Ek__BackingField_25() { return &___U3CClientSynchronizationModeU3Ek__BackingField_25; }
	inline void set_U3CClientSynchronizationModeU3Ek__BackingField_25(int32_t value)
	{
		___U3CClientSynchronizationModeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_m_DisableValidationWarningMessages_26() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A, ___m_DisableValidationWarningMessages_26)); }
	inline bool get_m_DisableValidationWarningMessages_26() const { return ___m_DisableValidationWarningMessages_26; }
	inline bool* get_address_of_m_DisableValidationWarningMessages_26() { return &___m_DisableValidationWarningMessages_26; }
	inline void set_m_DisableValidationWarningMessages_26(bool value)
	{
		___m_DisableValidationWarningMessages_26 = value;
	}
};

struct NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A_StaticFields
{
public:
	// System.Boolean Unity.Netcode.NetworkSceneManager::DisableReSynchronization
	bool ___DisableReSynchronization_2;
	// System.Boolean Unity.Netcode.NetworkSceneManager::s_IsSceneEventActive
	bool ___s_IsSceneEventActive_3;
	// System.Boolean Unity.Netcode.NetworkSceneManager::IsSpawnedObjectsPendingInDontDestroyOnLoad
	bool ___IsSpawnedObjectsPendingInDontDestroyOnLoad_21;

public:
	inline static int32_t get_offset_of_DisableReSynchronization_2() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A_StaticFields, ___DisableReSynchronization_2)); }
	inline bool get_DisableReSynchronization_2() const { return ___DisableReSynchronization_2; }
	inline bool* get_address_of_DisableReSynchronization_2() { return &___DisableReSynchronization_2; }
	inline void set_DisableReSynchronization_2(bool value)
	{
		___DisableReSynchronization_2 = value;
	}

	inline static int32_t get_offset_of_s_IsSceneEventActive_3() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A_StaticFields, ___s_IsSceneEventActive_3)); }
	inline bool get_s_IsSceneEventActive_3() const { return ___s_IsSceneEventActive_3; }
	inline bool* get_address_of_s_IsSceneEventActive_3() { return &___s_IsSceneEventActive_3; }
	inline void set_s_IsSceneEventActive_3(bool value)
	{
		___s_IsSceneEventActive_3 = value;
	}

	inline static int32_t get_offset_of_IsSpawnedObjectsPendingInDontDestroyOnLoad_21() { return static_cast<int32_t>(offsetof(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A_StaticFields, ___IsSpawnedObjectsPendingInDontDestroyOnLoad_21)); }
	inline bool get_IsSpawnedObjectsPendingInDontDestroyOnLoad_21() const { return ___IsSpawnedObjectsPendingInDontDestroyOnLoad_21; }
	inline bool* get_address_of_IsSpawnedObjectsPendingInDontDestroyOnLoad_21() { return &___IsSpawnedObjectsPendingInDontDestroyOnLoad_21; }
	inline void set_IsSpawnedObjectsPendingInDontDestroyOnLoad_21(bool value)
	{
		___IsSpawnedObjectsPendingInDontDestroyOnLoad_21 = value;
	}
};


// Unity.Netcode.PendingClient
struct PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B  : public RuntimeObject
{
public:
	// System.UInt64 Unity.Netcode.PendingClient::<ClientId>k__BackingField
	uint64_t ___U3CClientIdU3Ek__BackingField_0;
	// Unity.Netcode.PendingClient/State Unity.Netcode.PendingClient::<ConnectionState>k__BackingField
	int32_t ___U3CConnectionStateU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B, ___U3CClientIdU3Ek__BackingField_0)); }
	inline uint64_t get_U3CClientIdU3Ek__BackingField_0() const { return ___U3CClientIdU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CClientIdU3Ek__BackingField_0() { return &___U3CClientIdU3Ek__BackingField_0; }
	inline void set_U3CClientIdU3Ek__BackingField_0(uint64_t value)
	{
		___U3CClientIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CConnectionStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B, ___U3CConnectionStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CConnectionStateU3Ek__BackingField_1() const { return ___U3CConnectionStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CConnectionStateU3Ek__BackingField_1() { return &___U3CConnectionStateU3Ek__BackingField_1; }
	inline void set_U3CConnectionStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CConnectionStateU3Ek__BackingField_1 = value;
	}
};


// Unity.Netcode.SceneEvent
struct SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9  : public RuntimeObject
{
public:
	// UnityEngine.AsyncOperation Unity.Netcode.SceneEvent::AsyncOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___AsyncOperation_0;
	// Unity.Netcode.SceneEventType Unity.Netcode.SceneEvent::SceneEventType
	uint8_t ___SceneEventType_1;
	// UnityEngine.SceneManagement.LoadSceneMode Unity.Netcode.SceneEvent::LoadSceneMode
	int32_t ___LoadSceneMode_2;
	// System.String Unity.Netcode.SceneEvent::SceneName
	String_t* ___SceneName_3;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.SceneEvent::Scene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___Scene_4;
	// System.UInt64 Unity.Netcode.SceneEvent::ClientId
	uint64_t ___ClientId_5;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.SceneEvent::ClientsThatCompleted
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___ClientsThatCompleted_6;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.SceneEvent::ClientsThatTimedOut
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___ClientsThatTimedOut_7;

public:
	inline static int32_t get_offset_of_AsyncOperation_0() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___AsyncOperation_0)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_AsyncOperation_0() const { return ___AsyncOperation_0; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_AsyncOperation_0() { return &___AsyncOperation_0; }
	inline void set_AsyncOperation_0(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___AsyncOperation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AsyncOperation_0), (void*)value);
	}

	inline static int32_t get_offset_of_SceneEventType_1() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___SceneEventType_1)); }
	inline uint8_t get_SceneEventType_1() const { return ___SceneEventType_1; }
	inline uint8_t* get_address_of_SceneEventType_1() { return &___SceneEventType_1; }
	inline void set_SceneEventType_1(uint8_t value)
	{
		___SceneEventType_1 = value;
	}

	inline static int32_t get_offset_of_LoadSceneMode_2() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___LoadSceneMode_2)); }
	inline int32_t get_LoadSceneMode_2() const { return ___LoadSceneMode_2; }
	inline int32_t* get_address_of_LoadSceneMode_2() { return &___LoadSceneMode_2; }
	inline void set_LoadSceneMode_2(int32_t value)
	{
		___LoadSceneMode_2 = value;
	}

	inline static int32_t get_offset_of_SceneName_3() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___SceneName_3)); }
	inline String_t* get_SceneName_3() const { return ___SceneName_3; }
	inline String_t** get_address_of_SceneName_3() { return &___SceneName_3; }
	inline void set_SceneName_3(String_t* value)
	{
		___SceneName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneName_3), (void*)value);
	}

	inline static int32_t get_offset_of_Scene_4() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___Scene_4)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_Scene_4() const { return ___Scene_4; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_Scene_4() { return &___Scene_4; }
	inline void set_Scene_4(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___Scene_4 = value;
	}

	inline static int32_t get_offset_of_ClientId_5() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___ClientId_5)); }
	inline uint64_t get_ClientId_5() const { return ___ClientId_5; }
	inline uint64_t* get_address_of_ClientId_5() { return &___ClientId_5; }
	inline void set_ClientId_5(uint64_t value)
	{
		___ClientId_5 = value;
	}

	inline static int32_t get_offset_of_ClientsThatCompleted_6() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___ClientsThatCompleted_6)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_ClientsThatCompleted_6() const { return ___ClientsThatCompleted_6; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_ClientsThatCompleted_6() { return &___ClientsThatCompleted_6; }
	inline void set_ClientsThatCompleted_6(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___ClientsThatCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientsThatCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ClientsThatTimedOut_7() { return static_cast<int32_t>(offsetof(SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9, ___ClientsThatTimedOut_7)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_ClientsThatTimedOut_7() const { return ___ClientsThatTimedOut_7; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_ClientsThatTimedOut_7() { return &___ClientsThatTimedOut_7; }
	inline void set_ClientsThatTimedOut_7(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___ClientsThatTimedOut_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClientsThatTimedOut_7), (void*)value);
	}
};


// Unity.Netcode.SceneEventProgress
struct SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.SceneEventProgress::<DoneClients>k__BackingField
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___U3CDoneClientsU3Ek__BackingField_0;
	// Unity.Netcode.NetworkTime Unity.Netcode.SceneEventProgress::<TimeAtInitiation>k__BackingField
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  ___U3CTimeAtInitiationU3Ek__BackingField_1;
	// Unity.Netcode.SceneEventProgress/OnCompletedDelegate Unity.Netcode.SceneEventProgress::OnComplete
	OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * ___OnComplete_2;
	// System.Boolean Unity.Netcode.SceneEventProgress::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;
	// System.Boolean Unity.Netcode.SceneEventProgress::<TimedOut>k__BackingField
	bool ___U3CTimedOutU3Ek__BackingField_4;
	// System.Boolean Unity.Netcode.SceneEventProgress::<AreAllClientsDoneLoading>k__BackingField
	bool ___U3CAreAllClientsDoneLoadingU3Ek__BackingField_5;
	// System.UInt32 Unity.Netcode.SceneEventProgress::<SceneHash>k__BackingField
	uint32_t ___U3CSceneHashU3Ek__BackingField_6;
	// System.Guid Unity.Netcode.SceneEventProgress::<Guid>k__BackingField
	Guid_t  ___U3CGuidU3Ek__BackingField_7;
	// UnityEngine.Coroutine Unity.Netcode.SceneEventProgress::m_TimeOutCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_TimeOutCoroutine_8;
	// UnityEngine.AsyncOperation Unity.Netcode.SceneEventProgress::m_SceneLoadOperation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___m_SceneLoadOperation_9;
	// Unity.Netcode.NetworkManager Unity.Netcode.SceneEventProgress::<m_NetworkManager>k__BackingField
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___U3Cm_NetworkManagerU3Ek__BackingField_10;
	// Unity.Netcode.SceneEventProgressStatus Unity.Netcode.SceneEventProgress::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_11;
	// Unity.Netcode.SceneEventType Unity.Netcode.SceneEventProgress::<SceneEventType>k__BackingField
	uint8_t ___U3CSceneEventTypeU3Ek__BackingField_12;
	// UnityEngine.SceneManagement.LoadSceneMode Unity.Netcode.SceneEventProgress::LoadSceneMode
	int32_t ___LoadSceneMode_13;

public:
	inline static int32_t get_offset_of_U3CDoneClientsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CDoneClientsU3Ek__BackingField_0)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_U3CDoneClientsU3Ek__BackingField_0() const { return ___U3CDoneClientsU3Ek__BackingField_0; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_U3CDoneClientsU3Ek__BackingField_0() { return &___U3CDoneClientsU3Ek__BackingField_0; }
	inline void set_U3CDoneClientsU3Ek__BackingField_0(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___U3CDoneClientsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDoneClientsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTimeAtInitiationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CTimeAtInitiationU3Ek__BackingField_1)); }
	inline NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  get_U3CTimeAtInitiationU3Ek__BackingField_1() const { return ___U3CTimeAtInitiationU3Ek__BackingField_1; }
	inline NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * get_address_of_U3CTimeAtInitiationU3Ek__BackingField_1() { return &___U3CTimeAtInitiationU3Ek__BackingField_1; }
	inline void set_U3CTimeAtInitiationU3Ek__BackingField_1(NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  value)
	{
		___U3CTimeAtInitiationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_OnComplete_2() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___OnComplete_2)); }
	inline OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * get_OnComplete_2() const { return ___OnComplete_2; }
	inline OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 ** get_address_of_OnComplete_2() { return &___OnComplete_2; }
	inline void set_OnComplete_2(OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * value)
	{
		___OnComplete_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnComplete_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CIsCompletedU3Ek__BackingField_3)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_3() const { return ___U3CIsCompletedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_3() { return &___U3CIsCompletedU3Ek__BackingField_3; }
	inline void set_U3CIsCompletedU3Ek__BackingField_3(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTimedOutU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CTimedOutU3Ek__BackingField_4)); }
	inline bool get_U3CTimedOutU3Ek__BackingField_4() const { return ___U3CTimedOutU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CTimedOutU3Ek__BackingField_4() { return &___U3CTimedOutU3Ek__BackingField_4; }
	inline void set_U3CTimedOutU3Ek__BackingField_4(bool value)
	{
		___U3CTimedOutU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CAreAllClientsDoneLoadingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CAreAllClientsDoneLoadingU3Ek__BackingField_5)); }
	inline bool get_U3CAreAllClientsDoneLoadingU3Ek__BackingField_5() const { return ___U3CAreAllClientsDoneLoadingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CAreAllClientsDoneLoadingU3Ek__BackingField_5() { return &___U3CAreAllClientsDoneLoadingU3Ek__BackingField_5; }
	inline void set_U3CAreAllClientsDoneLoadingU3Ek__BackingField_5(bool value)
	{
		___U3CAreAllClientsDoneLoadingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSceneHashU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CSceneHashU3Ek__BackingField_6)); }
	inline uint32_t get_U3CSceneHashU3Ek__BackingField_6() const { return ___U3CSceneHashU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CSceneHashU3Ek__BackingField_6() { return &___U3CSceneHashU3Ek__BackingField_6; }
	inline void set_U3CSceneHashU3Ek__BackingField_6(uint32_t value)
	{
		___U3CSceneHashU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CGuidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CGuidU3Ek__BackingField_7)); }
	inline Guid_t  get_U3CGuidU3Ek__BackingField_7() const { return ___U3CGuidU3Ek__BackingField_7; }
	inline Guid_t * get_address_of_U3CGuidU3Ek__BackingField_7() { return &___U3CGuidU3Ek__BackingField_7; }
	inline void set_U3CGuidU3Ek__BackingField_7(Guid_t  value)
	{
		___U3CGuidU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_m_TimeOutCoroutine_8() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___m_TimeOutCoroutine_8)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_TimeOutCoroutine_8() const { return ___m_TimeOutCoroutine_8; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_TimeOutCoroutine_8() { return &___m_TimeOutCoroutine_8; }
	inline void set_m_TimeOutCoroutine_8(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_TimeOutCoroutine_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TimeOutCoroutine_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SceneLoadOperation_9() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___m_SceneLoadOperation_9)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_m_SceneLoadOperation_9() const { return ___m_SceneLoadOperation_9; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_m_SceneLoadOperation_9() { return &___m_SceneLoadOperation_9; }
	inline void set_m_SceneLoadOperation_9(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___m_SceneLoadOperation_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SceneLoadOperation_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cm_NetworkManagerU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3Cm_NetworkManagerU3Ek__BackingField_10)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_U3Cm_NetworkManagerU3Ek__BackingField_10() const { return ___U3Cm_NetworkManagerU3Ek__BackingField_10; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_U3Cm_NetworkManagerU3Ek__BackingField_10() { return &___U3Cm_NetworkManagerU3Ek__BackingField_10; }
	inline void set_U3Cm_NetworkManagerU3Ek__BackingField_10(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___U3Cm_NetworkManagerU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cm_NetworkManagerU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CStatusU3Ek__BackingField_11)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_11() const { return ___U3CStatusU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_11() { return &___U3CStatusU3Ek__BackingField_11; }
	inline void set_U3CStatusU3Ek__BackingField_11(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSceneEventTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___U3CSceneEventTypeU3Ek__BackingField_12)); }
	inline uint8_t get_U3CSceneEventTypeU3Ek__BackingField_12() const { return ___U3CSceneEventTypeU3Ek__BackingField_12; }
	inline uint8_t* get_address_of_U3CSceneEventTypeU3Ek__BackingField_12() { return &___U3CSceneEventTypeU3Ek__BackingField_12; }
	inline void set_U3CSceneEventTypeU3Ek__BackingField_12(uint8_t value)
	{
		___U3CSceneEventTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_LoadSceneMode_13() { return static_cast<int32_t>(offsetof(SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40, ___LoadSceneMode_13)); }
	inline int32_t get_LoadSceneMode_13() const { return ___LoadSceneMode_13; }
	inline int32_t* get_address_of_LoadSceneMode_13() { return &___LoadSceneMode_13; }
	inline void set_LoadSceneMode_13(int32_t value)
	{
		___LoadSceneMode_13 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Netcode.VisibilityChangeException
struct VisibilityChangeException_t72917B26CC39B31589221EF6CA0AAEEC5CD9E41B  : public Exception_t
{
public:

public:
};


// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 
{
public:
	// System.Byte* Unity.Netcode.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;

public:
	inline static int32_t get_offset_of_BufferPointer_0() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___BufferPointer_0)); }
	inline uint8_t* get_BufferPointer_0() const { return ___BufferPointer_0; }
	inline uint8_t** get_address_of_BufferPointer_0() { return &___BufferPointer_0; }
	inline void set_BufferPointer_0(uint8_t* value)
	{
		___BufferPointer_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___Length_2)); }
	inline int32_t get_Length_2() const { return ___Length_2; }
	inline int32_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int32_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_Allocator_3() { return static_cast<int32_t>(offsetof(ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202, ___Allocator_3)); }
	inline int32_t get_Allocator_3() const { return ___Allocator_3; }
	inline int32_t* get_address_of_Allocator_3() { return &___Allocator_3; }
	inline void set_Allocator_3(int32_t value)
	{
		___Allocator_3 = value;
	}
};


// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 
{
public:
	// System.Byte* Unity.Netcode.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;

public:
	inline static int32_t get_offset_of_BufferPointer_0() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___BufferPointer_0)); }
	inline uint8_t* get_BufferPointer_0() const { return ___BufferPointer_0; }
	inline uint8_t** get_address_of_BufferPointer_0() { return &___BufferPointer_0; }
	inline void set_BufferPointer_0(uint8_t* value)
	{
		___BufferPointer_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Position_1)); }
	inline int32_t get_Position_1() const { return ___Position_1; }
	inline int32_t* get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(int32_t value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Length_2)); }
	inline int32_t get_Length_2() const { return ___Length_2; }
	inline int32_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int32_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_Capacity_3() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Capacity_3)); }
	inline int32_t get_Capacity_3() const { return ___Capacity_3; }
	inline int32_t* get_address_of_Capacity_3() { return &___Capacity_3; }
	inline void set_Capacity_3(int32_t value)
	{
		___Capacity_3 = value;
	}

	inline static int32_t get_offset_of_MaxCapacity_4() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___MaxCapacity_4)); }
	inline int32_t get_MaxCapacity_4() const { return ___MaxCapacity_4; }
	inline int32_t* get_address_of_MaxCapacity_4() { return &___MaxCapacity_4; }
	inline void set_MaxCapacity_4(int32_t value)
	{
		___MaxCapacity_4 = value;
	}

	inline static int32_t get_offset_of_Allocator_5() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___Allocator_5)); }
	inline int32_t get_Allocator_5() const { return ___Allocator_5; }
	inline int32_t* get_address_of_Allocator_5() { return &___Allocator_5; }
	inline void set_Allocator_5(int32_t value)
	{
		___Allocator_5 = value;
	}

	inline static int32_t get_offset_of_BufferGrew_6() { return static_cast<int32_t>(offsetof(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408, ___BufferGrew_6)); }
	inline bool get_BufferGrew_6() const { return ___BufferGrew_6; }
	inline bool* get_address_of_BufferGrew_6() { return &___BufferGrew_6; }
	inline void set_BufferGrew_6(bool value)
	{
		___BufferGrew_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};

// Unity.Netcode.MessagingSystem/SendQueueItem
struct SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3 
{
public:
	// Unity.Netcode.BatchHeader Unity.Netcode.MessagingSystem/SendQueueItem::BatchHeader
	BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  ___BatchHeader_0;
	// Unity.Netcode.FastBufferWriter Unity.Netcode.MessagingSystem/SendQueueItem::Writer
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___Writer_1;
	// Unity.Netcode.NetworkDelivery Unity.Netcode.MessagingSystem/SendQueueItem::NetworkDelivery
	int32_t ___NetworkDelivery_2;

public:
	inline static int32_t get_offset_of_BatchHeader_0() { return static_cast<int32_t>(offsetof(SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3, ___BatchHeader_0)); }
	inline BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  get_BatchHeader_0() const { return ___BatchHeader_0; }
	inline BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511 * get_address_of_BatchHeader_0() { return &___BatchHeader_0; }
	inline void set_BatchHeader_0(BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  value)
	{
		___BatchHeader_0 = value;
	}

	inline static int32_t get_offset_of_Writer_1() { return static_cast<int32_t>(offsetof(SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3, ___Writer_1)); }
	inline FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  get_Writer_1() const { return ___Writer_1; }
	inline FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * get_address_of_Writer_1() { return &___Writer_1; }
	inline void set_Writer_1(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  value)
	{
		___Writer_1 = value;
	}

	inline static int32_t get_offset_of_NetworkDelivery_2() { return static_cast<int32_t>(offsetof(SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3, ___NetworkDelivery_2)); }
	inline int32_t get_NetworkDelivery_2() const { return ___NetworkDelivery_2; }
	inline int32_t* get_address_of_NetworkDelivery_2() { return &___NetworkDelivery_2; }
	inline void set_NetworkDelivery_2(int32_t value)
	{
		___NetworkDelivery_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.MessagingSystem/SendQueueItem
struct SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_pinvoke
{
	BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  ___BatchHeader_0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke ___Writer_1;
	int32_t ___NetworkDelivery_2;
};
// Native definition for COM marshalling of Unity.Netcode.MessagingSystem/SendQueueItem
struct SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_com
{
	BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  ___BatchHeader_0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com ___Writer_1;
	int32_t ___NetworkDelivery_2;
};

// Unity.Netcode.NetworkObject/SceneObject
struct SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 
{
public:
	// Unity.Netcode.NetworkObject/SceneObject/HeaderData Unity.Netcode.NetworkObject/SceneObject::Header
	HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37  ___Header_0;
	// System.UInt64 Unity.Netcode.NetworkObject/SceneObject::ParentObjectId
	uint64_t ___ParentObjectId_1;
	// Unity.Netcode.NetworkObject/SceneObject/TransformData Unity.Netcode.NetworkObject/SceneObject::Transform
	TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C  ___Transform_2;
	// System.Boolean Unity.Netcode.NetworkObject/SceneObject::IsLatestParentSet
	bool ___IsLatestParentSet_3;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject/SceneObject::LatestParent
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___LatestParent_4;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkObject/SceneObject::OwnerObject
	NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * ___OwnerObject_5;
	// System.UInt64 Unity.Netcode.NetworkObject/SceneObject::TargetClientId
	uint64_t ___TargetClientId_6;

public:
	inline static int32_t get_offset_of_Header_0() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___Header_0)); }
	inline HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37  get_Header_0() const { return ___Header_0; }
	inline HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * get_address_of_Header_0() { return &___Header_0; }
	inline void set_Header_0(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37  value)
	{
		___Header_0 = value;
	}

	inline static int32_t get_offset_of_ParentObjectId_1() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___ParentObjectId_1)); }
	inline uint64_t get_ParentObjectId_1() const { return ___ParentObjectId_1; }
	inline uint64_t* get_address_of_ParentObjectId_1() { return &___ParentObjectId_1; }
	inline void set_ParentObjectId_1(uint64_t value)
	{
		___ParentObjectId_1 = value;
	}

	inline static int32_t get_offset_of_Transform_2() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___Transform_2)); }
	inline TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C  get_Transform_2() const { return ___Transform_2; }
	inline TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * get_address_of_Transform_2() { return &___Transform_2; }
	inline void set_Transform_2(TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C  value)
	{
		___Transform_2 = value;
	}

	inline static int32_t get_offset_of_IsLatestParentSet_3() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___IsLatestParentSet_3)); }
	inline bool get_IsLatestParentSet_3() const { return ___IsLatestParentSet_3; }
	inline bool* get_address_of_IsLatestParentSet_3() { return &___IsLatestParentSet_3; }
	inline void set_IsLatestParentSet_3(bool value)
	{
		___IsLatestParentSet_3 = value;
	}

	inline static int32_t get_offset_of_LatestParent_4() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___LatestParent_4)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_LatestParent_4() const { return ___LatestParent_4; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_LatestParent_4() { return &___LatestParent_4; }
	inline void set_LatestParent_4(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___LatestParent_4 = value;
	}

	inline static int32_t get_offset_of_OwnerObject_5() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___OwnerObject_5)); }
	inline NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * get_OwnerObject_5() const { return ___OwnerObject_5; }
	inline NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D ** get_address_of_OwnerObject_5() { return &___OwnerObject_5; }
	inline void set_OwnerObject_5(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * value)
	{
		___OwnerObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnerObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_TargetClientId_6() { return static_cast<int32_t>(offsetof(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2, ___TargetClientId_6)); }
	inline uint64_t get_TargetClientId_6() const { return ___TargetClientId_6; }
	inline uint64_t* get_address_of_TargetClientId_6() { return &___TargetClientId_6; }
	inline void set_TargetClientId_6(uint64_t value)
	{
		___TargetClientId_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.NetworkObject/SceneObject
struct SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_pinvoke
{
	HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke ___Header_0;
	uint64_t ___ParentObjectId_1;
	TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C  ___Transform_2;
	int32_t ___IsLatestParentSet_3;
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___LatestParent_4;
	NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * ___OwnerObject_5;
	uint64_t ___TargetClientId_6;
};
// Native definition for COM marshalling of Unity.Netcode.NetworkObject/SceneObject
struct SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_com
{
	HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com ___Header_0;
	uint64_t ___ParentObjectId_1;
	TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C  ___Transform_2;
	int32_t ___IsLatestParentSet_3;
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___LatestParent_4;
	NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * ___OwnerObject_5;
	uint64_t ___TargetClientId_6;
};

// Unity.Netcode.NetworkSpawnManager/TriggerInfo
struct TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274 
{
public:
	// System.Single Unity.Netcode.NetworkSpawnManager/TriggerInfo::Expiry
	float ___Expiry_0;
	// Unity.Collections.NativeList`1<Unity.Netcode.NetworkSpawnManager/TriggerData> Unity.Netcode.NetworkSpawnManager/TriggerInfo::TriggerData
	NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1  ___TriggerData_1;

public:
	inline static int32_t get_offset_of_Expiry_0() { return static_cast<int32_t>(offsetof(TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274, ___Expiry_0)); }
	inline float get_Expiry_0() const { return ___Expiry_0; }
	inline float* get_address_of_Expiry_0() { return &___Expiry_0; }
	inline void set_Expiry_0(float value)
	{
		___Expiry_0 = value;
	}

	inline static int32_t get_offset_of_TriggerData_1() { return static_cast<int32_t>(offsetof(TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274, ___TriggerData_1)); }
	inline NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1  get_TriggerData_1() const { return ___TriggerData_1; }
	inline NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1 * get_address_of_TriggerData_1() { return &___TriggerData_1; }
	inline void set_TriggerData_1(NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1  value)
	{
		___TriggerData_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.NetworkSpawnManager/TriggerInfo
struct TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_pinvoke
{
	float ___Expiry_0;
	NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1  ___TriggerData_1;
};
// Native definition for COM marshalling of Unity.Netcode.NetworkSpawnManager/TriggerInfo
struct TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_com
{
	float ___Expiry_0;
	NativeList_1_tF4A194222B380EC84F1881FB2732C30EB7DA4DF1  ___TriggerData_1;
};

// Unity.Netcode.RpcMessage/HeaderData
struct HeaderData_t98E6F7761CC46DD5E731C8A2DEDA6B9A2D3BF719 
{
public:
	// Unity.Netcode.RpcMessage/RpcType Unity.Netcode.RpcMessage/HeaderData::Type
	uint8_t ___Type_0;
	// System.UInt64 Unity.Netcode.RpcMessage/HeaderData::NetworkObjectId
	uint64_t ___NetworkObjectId_1;
	// System.UInt16 Unity.Netcode.RpcMessage/HeaderData::NetworkBehaviourId
	uint16_t ___NetworkBehaviourId_2;
	// System.UInt32 Unity.Netcode.RpcMessage/HeaderData::NetworkMethodId
	uint32_t ___NetworkMethodId_3;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(HeaderData_t98E6F7761CC46DD5E731C8A2DEDA6B9A2D3BF719, ___Type_0)); }
	inline uint8_t get_Type_0() const { return ___Type_0; }
	inline uint8_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(uint8_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_NetworkObjectId_1() { return static_cast<int32_t>(offsetof(HeaderData_t98E6F7761CC46DD5E731C8A2DEDA6B9A2D3BF719, ___NetworkObjectId_1)); }
	inline uint64_t get_NetworkObjectId_1() const { return ___NetworkObjectId_1; }
	inline uint64_t* get_address_of_NetworkObjectId_1() { return &___NetworkObjectId_1; }
	inline void set_NetworkObjectId_1(uint64_t value)
	{
		___NetworkObjectId_1 = value;
	}

	inline static int32_t get_offset_of_NetworkBehaviourId_2() { return static_cast<int32_t>(offsetof(HeaderData_t98E6F7761CC46DD5E731C8A2DEDA6B9A2D3BF719, ___NetworkBehaviourId_2)); }
	inline uint16_t get_NetworkBehaviourId_2() const { return ___NetworkBehaviourId_2; }
	inline uint16_t* get_address_of_NetworkBehaviourId_2() { return &___NetworkBehaviourId_2; }
	inline void set_NetworkBehaviourId_2(uint16_t value)
	{
		___NetworkBehaviourId_2 = value;
	}

	inline static int32_t get_offset_of_NetworkMethodId_3() { return static_cast<int32_t>(offsetof(HeaderData_t98E6F7761CC46DD5E731C8A2DEDA6B9A2D3BF719, ___NetworkMethodId_3)); }
	inline uint32_t get_NetworkMethodId_3() const { return ___NetworkMethodId_3; }
	inline uint32_t* get_address_of_NetworkMethodId_3() { return &___NetworkMethodId_3; }
	inline void set_NetworkMethodId_3(uint32_t value)
	{
		___NetworkMethodId_3 = value;
	}
};


// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>>
struct Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6 
{
public:
	// T System.Nullable`1::value
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6, ___value_0)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_value_0() const { return ___value_0; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate
struct HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate
struct UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.MessagingSystem/MessageHandler
struct MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkManager/ConnectionApprovedDelegate
struct ConnectionApprovedDelegate_tFEAFB36F7DD2FDE1DECA092B9BC1F65AF9FAB5F5  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler
struct OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler
struct OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler
struct OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler
struct OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler
struct OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler
struct OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler
struct OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/SceneEventDelegate
struct SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler
struct VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.SceneEventProgress/OnCompletedDelegate
struct OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4 
{
public:
	// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.ClientRpcSendParams::TargetClientIds
	RuntimeObject* ___TargetClientIds_0;
	// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>> Unity.Netcode.ClientRpcSendParams::TargetClientIdsNativeArray
	Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  ___TargetClientIdsNativeArray_1;

public:
	inline static int32_t get_offset_of_TargetClientIds_0() { return static_cast<int32_t>(offsetof(ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4, ___TargetClientIds_0)); }
	inline RuntimeObject* get_TargetClientIds_0() const { return ___TargetClientIds_0; }
	inline RuntimeObject** get_address_of_TargetClientIds_0() { return &___TargetClientIds_0; }
	inline void set_TargetClientIds_0(RuntimeObject* value)
	{
		___TargetClientIds_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetClientIds_0), (void*)value);
	}

	inline static int32_t get_offset_of_TargetClientIdsNativeArray_1() { return static_cast<int32_t>(offsetof(ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4, ___TargetClientIdsNativeArray_1)); }
	inline Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  get_TargetClientIdsNativeArray_1() const { return ___TargetClientIdsNativeArray_1; }
	inline Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6 * get_address_of_TargetClientIdsNativeArray_1() { return &___TargetClientIdsNativeArray_1; }
	inline void set_TargetClientIdsNativeArray_1(Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  value)
	{
		___TargetClientIdsNativeArray_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_pinvoke
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  ___TargetClientIdsNativeArray_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_com
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_t265E8632561529AD7DA4F074A8AC7B6D53E182C6  ___TargetClientIdsNativeArray_1;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89 
{
public:
	// Unity.Netcode.ClientRpcSendParams Unity.Netcode.ClientRpcParams::Send
	ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4  ___Send_0;
	// Unity.Netcode.ClientRpcReceiveParams Unity.Netcode.ClientRpcParams::Receive
	ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  ___Receive_1;

public:
	inline static int32_t get_offset_of_Send_0() { return static_cast<int32_t>(offsetof(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89, ___Send_0)); }
	inline ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4  get_Send_0() const { return ___Send_0; }
	inline ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4 * get_address_of_Send_0() { return &___Send_0; }
	inline void set_Send_0(ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4  value)
	{
		___Send_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Send_0))->___TargetClientIds_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_Receive_1() { return static_cast<int32_t>(offsetof(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89, ___Receive_1)); }
	inline ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  get_Receive_1() const { return ___Receive_1; }
	inline ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7 * get_address_of_Receive_1() { return &___Receive_1; }
	inline void set_Receive_1(ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  value)
	{
		___Receive_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke
{
	ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  ___Receive_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com
{
	ClientRpcSendParams_t9EACCCC75A070D92E81058B129945C25695063A4_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t88C818F9844ACF8D65412E616B04CAC0F2D38AF7  ___Receive_1;
};

// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.Netcode.NetworkBehaviour/__RpcExecStage Unity.Netcode.NetworkBehaviour::__rpc_exec_stage
	int32_t _____rpc_exec_stage_4;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::m_NetworkObject
	NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * ___m_NetworkObject_5;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::NetworkBehaviourIdCache
	uint16_t ___NetworkBehaviourIdCache_6;
	// System.Boolean Unity.Netcode.NetworkBehaviour::m_VarInit
	bool ___m_VarInit_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>> Unity.Netcode.NetworkBehaviour::m_DeliveryMappedNetworkVariableIndices
	List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 * ___m_DeliveryMappedNetworkVariableIndices_8;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery> Unity.Netcode.NetworkBehaviour::m_DeliveryTypesForNetworkVariableGroups
	List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C * ___m_DeliveryTypesForNetworkVariableGroups_9;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase> Unity.Netcode.NetworkBehaviour::NetworkVariableFields
	List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 * ___NetworkVariableFields_10;
	// System.Collections.Generic.List`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToReset
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___NetworkVariableIndexesToReset_12;
	// System.Collections.Generic.HashSet`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToResetSet
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___NetworkVariableIndexesToResetSet_13;

public:
	inline static int32_t get_offset_of___rpc_exec_stage_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, _____rpc_exec_stage_4)); }
	inline int32_t get___rpc_exec_stage_4() const { return _____rpc_exec_stage_4; }
	inline int32_t* get_address_of___rpc_exec_stage_4() { return &_____rpc_exec_stage_4; }
	inline void set___rpc_exec_stage_4(int32_t value)
	{
		_____rpc_exec_stage_4 = value;
	}

	inline static int32_t get_offset_of_m_NetworkObject_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_NetworkObject_5)); }
	inline NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * get_m_NetworkObject_5() const { return ___m_NetworkObject_5; }
	inline NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D ** get_address_of_m_NetworkObject_5() { return &___m_NetworkObject_5; }
	inline void set_m_NetworkObject_5(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * value)
	{
		___m_NetworkObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkBehaviourIdCache_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkBehaviourIdCache_6)); }
	inline uint16_t get_NetworkBehaviourIdCache_6() const { return ___NetworkBehaviourIdCache_6; }
	inline uint16_t* get_address_of_NetworkBehaviourIdCache_6() { return &___NetworkBehaviourIdCache_6; }
	inline void set_NetworkBehaviourIdCache_6(uint16_t value)
	{
		___NetworkBehaviourIdCache_6 = value;
	}

	inline static int32_t get_offset_of_m_VarInit_7() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_VarInit_7)); }
	inline bool get_m_VarInit_7() const { return ___m_VarInit_7; }
	inline bool* get_address_of_m_VarInit_7() { return &___m_VarInit_7; }
	inline void set_m_VarInit_7(bool value)
	{
		___m_VarInit_7 = value;
	}

	inline static int32_t get_offset_of_m_DeliveryMappedNetworkVariableIndices_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_DeliveryMappedNetworkVariableIndices_8)); }
	inline List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 * get_m_DeliveryMappedNetworkVariableIndices_8() const { return ___m_DeliveryMappedNetworkVariableIndices_8; }
	inline List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 ** get_address_of_m_DeliveryMappedNetworkVariableIndices_8() { return &___m_DeliveryMappedNetworkVariableIndices_8; }
	inline void set_m_DeliveryMappedNetworkVariableIndices_8(List_1_t8205C1389580D13E5A55F9C421F96433EB76ADB2 * value)
	{
		___m_DeliveryMappedNetworkVariableIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeliveryMappedNetworkVariableIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeliveryTypesForNetworkVariableGroups_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___m_DeliveryTypesForNetworkVariableGroups_9)); }
	inline List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C * get_m_DeliveryTypesForNetworkVariableGroups_9() const { return ___m_DeliveryTypesForNetworkVariableGroups_9; }
	inline List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C ** get_address_of_m_DeliveryTypesForNetworkVariableGroups_9() { return &___m_DeliveryTypesForNetworkVariableGroups_9; }
	inline void set_m_DeliveryTypesForNetworkVariableGroups_9(List_1_tF24FD2D947553C58AA2E52029C9E045554B7A58C * value)
	{
		___m_DeliveryTypesForNetworkVariableGroups_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeliveryTypesForNetworkVariableGroups_9), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkVariableFields_10() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkVariableFields_10)); }
	inline List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 * get_NetworkVariableFields_10() const { return ___NetworkVariableFields_10; }
	inline List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 ** get_address_of_NetworkVariableFields_10() { return &___NetworkVariableFields_10; }
	inline void set_NetworkVariableFields_10(List_1_t1C792E504007D296F77A09AC4937DE67AA5502E9 * value)
	{
		___NetworkVariableFields_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkVariableFields_10), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkVariableIndexesToReset_12() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkVariableIndexesToReset_12)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_NetworkVariableIndexesToReset_12() const { return ___NetworkVariableIndexesToReset_12; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_NetworkVariableIndexesToReset_12() { return &___NetworkVariableIndexesToReset_12; }
	inline void set_NetworkVariableIndexesToReset_12(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___NetworkVariableIndexesToReset_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkVariableIndexesToReset_12), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkVariableIndexesToResetSet_13() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9, ___NetworkVariableIndexesToResetSet_13)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_NetworkVariableIndexesToResetSet_13() const { return ___NetworkVariableIndexesToResetSet_13; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_NetworkVariableIndexesToResetSet_13() { return &___NetworkVariableIndexesToResetSet_13; }
	inline void set_NetworkVariableIndexesToResetSet_13(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___NetworkVariableIndexesToResetSet_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkVariableIndexesToResetSet_13), (void*)value);
	}
};

struct NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> Unity.Netcode.NetworkBehaviour::s_FieldTypes
	Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F * ___s_FieldTypes_11;

public:
	inline static int32_t get_offset_of_s_FieldTypes_11() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9_StaticFields, ___s_FieldTypes_11)); }
	inline Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F * get_s_FieldTypes_11() const { return ___s_FieldTypes_11; }
	inline Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F ** get_address_of_s_FieldTypes_11() { return &___s_FieldTypes_11; }
	inline void set_s_FieldTypes_11(Dictionary_2_tAA7236E5E7FDACCFFA8E45E99C4595907F39351F * value)
	{
		___s_FieldTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_FieldTypes_11), (void*)value);
	}
};


// Unity.Netcode.NetworkManager
struct NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.Netcode.SnapshotSystem Unity.Netcode.NetworkManager::<SnapshotSystem>k__BackingField
	SnapshotSystem_t89525647503F2F8A8AFBFA6EB6B3633402519BC7 * ___U3CSnapshotSystemU3Ek__BackingField_7;
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 * ___U3CBehaviourUpdaterU3Ek__BackingField_8;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 * ___U3CMessagingSystemU3Ek__BackingField_9;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 * ___m_PrefabHandler_10;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 * ___U3CNetworkTimeSystemU3Ek__BackingField_11;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B * ___U3CNetworkTickSystemU3Ek__BackingField_12;
	// System.Boolean Unity.Netcode.NetworkManager::DontDestroy
	bool ___DontDestroy_13;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_14;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_15;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F * ___U3CSpawnManagerU3Ek__BackingField_17;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * ___U3CCustomMessagingManagerU3Ek__BackingField_18;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * ___U3CSceneManagerU3Ek__BackingField_19;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_20;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 * ___m_ConnectedClients_21;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 * ___m_ConnectedClientsList_22;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_ConnectedClientIds_23;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 * ___U3CLocalClientU3Ek__BackingField_24;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * ___PendingClients_25;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_26;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_27;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_28;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_29;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientConnectedCallback_30;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * ___OnClientDisconnectCallback_31;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnServerStarted_32;
	// System.Action`3<System.Byte[],System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovedDelegate> Unity.Netcode.NetworkManager::ConnectionApprovalCallback
	Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B * ___ConnectionApprovalCallback_33;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * ___NetworkConfig_34;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_35;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CSnapshotSystemU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CSnapshotSystemU3Ek__BackingField_7)); }
	inline SnapshotSystem_t89525647503F2F8A8AFBFA6EB6B3633402519BC7 * get_U3CSnapshotSystemU3Ek__BackingField_7() const { return ___U3CSnapshotSystemU3Ek__BackingField_7; }
	inline SnapshotSystem_t89525647503F2F8A8AFBFA6EB6B3633402519BC7 ** get_address_of_U3CSnapshotSystemU3Ek__BackingField_7() { return &___U3CSnapshotSystemU3Ek__BackingField_7; }
	inline void set_U3CSnapshotSystemU3Ek__BackingField_7(SnapshotSystem_t89525647503F2F8A8AFBFA6EB6B3633402519BC7 * value)
	{
		___U3CSnapshotSystemU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotSystemU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBehaviourUpdaterU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CBehaviourUpdaterU3Ek__BackingField_8)); }
	inline NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 * get_U3CBehaviourUpdaterU3Ek__BackingField_8() const { return ___U3CBehaviourUpdaterU3Ek__BackingField_8; }
	inline NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 ** get_address_of_U3CBehaviourUpdaterU3Ek__BackingField_8() { return &___U3CBehaviourUpdaterU3Ek__BackingField_8; }
	inline void set_U3CBehaviourUpdaterU3Ek__BackingField_8(NetworkBehaviourUpdater_tE6BFA146387A77AC91F570D161953FD41D57F0A1 * value)
	{
		___U3CBehaviourUpdaterU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBehaviourUpdaterU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessagingSystemU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CMessagingSystemU3Ek__BackingField_9)); }
	inline MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 * get_U3CMessagingSystemU3Ek__BackingField_9() const { return ___U3CMessagingSystemU3Ek__BackingField_9; }
	inline MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 ** get_address_of_U3CMessagingSystemU3Ek__BackingField_9() { return &___U3CMessagingSystemU3Ek__BackingField_9; }
	inline void set_U3CMessagingSystemU3Ek__BackingField_9(MessagingSystem_t3DCDB694A8AFF10952F8D9966B41F32F3EF3C0A1 * value)
	{
		___U3CMessagingSystemU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessagingSystemU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrefabHandler_10() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_PrefabHandler_10)); }
	inline NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 * get_m_PrefabHandler_10() const { return ___m_PrefabHandler_10; }
	inline NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 ** get_address_of_m_PrefabHandler_10() { return &___m_PrefabHandler_10; }
	inline void set_m_PrefabHandler_10(NetworkPrefabHandler_t721B7196B5B32A727EBA937EAAB14F2594B54439 * value)
	{
		___m_PrefabHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrefabHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkTimeSystemU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CNetworkTimeSystemU3Ek__BackingField_11)); }
	inline NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 * get_U3CNetworkTimeSystemU3Ek__BackingField_11() const { return ___U3CNetworkTimeSystemU3Ek__BackingField_11; }
	inline NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 ** get_address_of_U3CNetworkTimeSystemU3Ek__BackingField_11() { return &___U3CNetworkTimeSystemU3Ek__BackingField_11; }
	inline void set_U3CNetworkTimeSystemU3Ek__BackingField_11(NetworkTimeSystem_tD682F2A323F3650428A54B0073ED3E946BAC3935 * value)
	{
		___U3CNetworkTimeSystemU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkTimeSystemU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkTickSystemU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CNetworkTickSystemU3Ek__BackingField_12)); }
	inline NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B * get_U3CNetworkTickSystemU3Ek__BackingField_12() const { return ___U3CNetworkTickSystemU3Ek__BackingField_12; }
	inline NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B ** get_address_of_U3CNetworkTickSystemU3Ek__BackingField_12() { return &___U3CNetworkTickSystemU3Ek__BackingField_12; }
	inline void set_U3CNetworkTickSystemU3Ek__BackingField_12(NetworkTickSystem_tCE2C0E7CA36C1B80C2F7CE285BB004C774E0FB7B * value)
	{
		___U3CNetworkTickSystemU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkTickSystemU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_DontDestroy_13() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___DontDestroy_13)); }
	inline bool get_DontDestroy_13() const { return ___DontDestroy_13; }
	inline bool* get_address_of_DontDestroy_13() { return &___DontDestroy_13; }
	inline void set_DontDestroy_13(bool value)
	{
		___DontDestroy_13 = value;
	}

	inline static int32_t get_offset_of_RunInBackground_14() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___RunInBackground_14)); }
	inline bool get_RunInBackground_14() const { return ___RunInBackground_14; }
	inline bool* get_address_of_RunInBackground_14() { return &___RunInBackground_14; }
	inline void set_RunInBackground_14(bool value)
	{
		___RunInBackground_14 = value;
	}

	inline static int32_t get_offset_of_LogLevel_15() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___LogLevel_15)); }
	inline int32_t get_LogLevel_15() const { return ___LogLevel_15; }
	inline int32_t* get_address_of_LogLevel_15() { return &___LogLevel_15; }
	inline void set_LogLevel_15(int32_t value)
	{
		___LogLevel_15 = value;
	}

	inline static int32_t get_offset_of_U3CSpawnManagerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CSpawnManagerU3Ek__BackingField_17)); }
	inline NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F * get_U3CSpawnManagerU3Ek__BackingField_17() const { return ___U3CSpawnManagerU3Ek__BackingField_17; }
	inline NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F ** get_address_of_U3CSpawnManagerU3Ek__BackingField_17() { return &___U3CSpawnManagerU3Ek__BackingField_17; }
	inline void set_U3CSpawnManagerU3Ek__BackingField_17(NetworkSpawnManager_t844EABA05599D69C9E2BE3BCE459DFA307243A1F * value)
	{
		___U3CSpawnManagerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpawnManagerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomMessagingManagerU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CCustomMessagingManagerU3Ek__BackingField_18)); }
	inline CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * get_U3CCustomMessagingManagerU3Ek__BackingField_18() const { return ___U3CCustomMessagingManagerU3Ek__BackingField_18; }
	inline CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 ** get_address_of_U3CCustomMessagingManagerU3Ek__BackingField_18() { return &___U3CCustomMessagingManagerU3Ek__BackingField_18; }
	inline void set_U3CCustomMessagingManagerU3Ek__BackingField_18(CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * value)
	{
		___U3CCustomMessagingManagerU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomMessagingManagerU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneManagerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CSceneManagerU3Ek__BackingField_19)); }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * get_U3CSceneManagerU3Ek__BackingField_19() const { return ___U3CSceneManagerU3Ek__BackingField_19; }
	inline NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A ** get_address_of_U3CSceneManagerU3Ek__BackingField_19() { return &___U3CSceneManagerU3Ek__BackingField_19; }
	inline void set_U3CSceneManagerU3Ek__BackingField_19(NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * value)
	{
		___U3CSceneManagerU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSceneManagerU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalClientId_20() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_LocalClientId_20)); }
	inline uint64_t get_m_LocalClientId_20() const { return ___m_LocalClientId_20; }
	inline uint64_t* get_address_of_m_LocalClientId_20() { return &___m_LocalClientId_20; }
	inline void set_m_LocalClientId_20(uint64_t value)
	{
		___m_LocalClientId_20 = value;
	}

	inline static int32_t get_offset_of_m_ConnectedClients_21() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ConnectedClients_21)); }
	inline Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 * get_m_ConnectedClients_21() const { return ___m_ConnectedClients_21; }
	inline Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 ** get_address_of_m_ConnectedClients_21() { return &___m_ConnectedClients_21; }
	inline void set_m_ConnectedClients_21(Dictionary_2_t5291C526BB93AAEB0EEA2D212FC0D6AA252B7210 * value)
	{
		___m_ConnectedClients_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectedClients_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectedClientsList_22() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ConnectedClientsList_22)); }
	inline List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 * get_m_ConnectedClientsList_22() const { return ___m_ConnectedClientsList_22; }
	inline List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 ** get_address_of_m_ConnectedClientsList_22() { return &___m_ConnectedClientsList_22; }
	inline void set_m_ConnectedClientsList_22(List_1_t7748C56C81D5DBB07BEA5D3D7939788DE24A8E20 * value)
	{
		___m_ConnectedClientsList_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectedClientsList_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectedClientIds_23() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___m_ConnectedClientIds_23)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_ConnectedClientIds_23() const { return ___m_ConnectedClientIds_23; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_ConnectedClientIds_23() { return &___m_ConnectedClientIds_23; }
	inline void set_m_ConnectedClientIds_23(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_ConnectedClientIds_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectedClientIds_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalClientU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CLocalClientU3Ek__BackingField_24)); }
	inline NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 * get_U3CLocalClientU3Ek__BackingField_24() const { return ___U3CLocalClientU3Ek__BackingField_24; }
	inline NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 ** get_address_of_U3CLocalClientU3Ek__BackingField_24() { return &___U3CLocalClientU3Ek__BackingField_24; }
	inline void set_U3CLocalClientU3Ek__BackingField_24(NetworkClient_t3C9A1E69B83C34D1647E380E4419107061DB2325 * value)
	{
		___U3CLocalClientU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalClientU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_PendingClients_25() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___PendingClients_25)); }
	inline Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * get_PendingClients_25() const { return ___PendingClients_25; }
	inline Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 ** get_address_of_PendingClients_25() { return &___PendingClients_25; }
	inline void set_PendingClients_25(Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * value)
	{
		___PendingClients_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PendingClients_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsServerU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsServerU3Ek__BackingField_26)); }
	inline bool get_U3CIsServerU3Ek__BackingField_26() const { return ___U3CIsServerU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CIsServerU3Ek__BackingField_26() { return &___U3CIsServerU3Ek__BackingField_26; }
	inline void set_U3CIsServerU3Ek__BackingField_26(bool value)
	{
		___U3CIsServerU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CIsClientU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsClientU3Ek__BackingField_27)); }
	inline bool get_U3CIsClientU3Ek__BackingField_27() const { return ___U3CIsClientU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CIsClientU3Ek__BackingField_27() { return &___U3CIsClientU3Ek__BackingField_27; }
	inline void set_U3CIsClientU3Ek__BackingField_27(bool value)
	{
		___U3CIsClientU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsListeningU3Ek__BackingField_28)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_28() const { return ___U3CIsListeningU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_28() { return &___U3CIsListeningU3Ek__BackingField_28; }
	inline void set_U3CIsListeningU3Ek__BackingField_28(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CIsConnectedClientU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CIsConnectedClientU3Ek__BackingField_29)); }
	inline bool get_U3CIsConnectedClientU3Ek__BackingField_29() const { return ___U3CIsConnectedClientU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CIsConnectedClientU3Ek__BackingField_29() { return &___U3CIsConnectedClientU3Ek__BackingField_29; }
	inline void set_U3CIsConnectedClientU3Ek__BackingField_29(bool value)
	{
		___U3CIsConnectedClientU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_OnClientConnectedCallback_30() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___OnClientConnectedCallback_30)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientConnectedCallback_30() const { return ___OnClientConnectedCallback_30; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientConnectedCallback_30() { return &___OnClientConnectedCallback_30; }
	inline void set_OnClientConnectedCallback_30(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientConnectedCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientConnectedCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnClientDisconnectCallback_31() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___OnClientDisconnectCallback_31)); }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * get_OnClientDisconnectCallback_31() const { return ___OnClientDisconnectCallback_31; }
	inline Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 ** get_address_of_OnClientDisconnectCallback_31() { return &___OnClientDisconnectCallback_31; }
	inline void set_OnClientDisconnectCallback_31(Action_1_tE896725C2B24E3E3DE2217D872D95605D282DCD4 * value)
	{
		___OnClientDisconnectCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClientDisconnectCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_OnServerStarted_32() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___OnServerStarted_32)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnServerStarted_32() const { return ___OnServerStarted_32; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnServerStarted_32() { return &___OnServerStarted_32; }
	inline void set_OnServerStarted_32(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnServerStarted_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnServerStarted_32), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionApprovalCallback_33() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___ConnectionApprovalCallback_33)); }
	inline Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B * get_ConnectionApprovalCallback_33() const { return ___ConnectionApprovalCallback_33; }
	inline Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B ** get_address_of_ConnectionApprovalCallback_33() { return &___ConnectionApprovalCallback_33; }
	inline void set_ConnectionApprovalCallback_33(Action_3_t45C2D0CC4517C0A855682B416A4FCFFA47B9916B * value)
	{
		___ConnectionApprovalCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionApprovalCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_NetworkConfig_34() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___NetworkConfig_34)); }
	inline NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * get_NetworkConfig_34() const { return ___NetworkConfig_34; }
	inline NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 ** get_address_of_NetworkConfig_34() { return &___NetworkConfig_34; }
	inline void set_NetworkConfig_34(NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * value)
	{
		___NetworkConfig_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkConfig_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectedHostnameU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CConnectedHostnameU3Ek__BackingField_35)); }
	inline String_t* get_U3CConnectedHostnameU3Ek__BackingField_35() const { return ___U3CConnectedHostnameU3Ek__BackingField_35; }
	inline String_t** get_address_of_U3CConnectedHostnameU3Ek__BackingField_35() { return &___U3CConnectedHostnameU3Ek__BackingField_35; }
	inline void set_U3CConnectedHostnameU3Ek__BackingField_35(String_t* value)
	{
		___U3CConnectedHostnameU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectedHostnameU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNetworkMetricsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F, ___U3CNetworkMetricsU3Ek__BackingField_36)); }
	inline RuntimeObject* get_U3CNetworkMetricsU3Ek__BackingField_36() const { return ___U3CNetworkMetricsU3Ek__BackingField_36; }
	inline RuntimeObject** get_address_of_U3CNetworkMetricsU3Ek__BackingField_36() { return &___U3CNetworkMetricsU3Ek__BackingField_36; }
	inline void set_U3CNetworkMetricsU3Ek__BackingField_36(RuntimeObject* value)
	{
		___U3CNetworkMetricsU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNetworkMetricsU3Ek__BackingField_36), (void*)value);
	}
};

struct NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___U3CSingletonU3Ek__BackingField_16;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSingletonReady_37;

public:
	inline static int32_t get_offset_of___rpc_func_table_4() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields, _____rpc_func_table_4)); }
	inline Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * get___rpc_func_table_4() const { return _____rpc_func_table_4; }
	inline Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 ** get_address_of___rpc_func_table_4() { return &_____rpc_func_table_4; }
	inline void set___rpc_func_table_4(Dictionary_2_tC1C3BE9D62CADA08ABCB308FFFED025BA20294B1 * value)
	{
		_____rpc_func_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____rpc_func_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSingletonU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields, ___U3CSingletonU3Ek__BackingField_16)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_U3CSingletonU3Ek__BackingField_16() const { return ___U3CSingletonU3Ek__BackingField_16; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_U3CSingletonU3Ek__BackingField_16() { return &___U3CSingletonU3Ek__BackingField_16; }
	inline void set_U3CSingletonU3Ek__BackingField_16(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___U3CSingletonU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSingletonU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnSingletonReady_37() { return static_cast<int32_t>(offsetof(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_StaticFields, ___OnSingletonReady_37)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSingletonReady_37() const { return ___OnSingletonReady_37; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSingletonReady_37() { return &___OnSingletonReady_37; }
	inline void set_OnSingletonReady_37(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSingletonReady_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSingletonReady_37), (void*)value);
	}
};


// Unity.Netcode.NetworkObject
struct NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt32 Unity.Netcode.NetworkObject::GlobalObjectIdHash
	uint32_t ___GlobalObjectIdHash_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkObject::NetworkManagerOwner
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___NetworkManagerOwner_5;
	// System.UInt64 Unity.Netcode.NetworkObject::m_NetworkObjectId
	uint64_t ___m_NetworkObjectId_6;
	// System.UInt64 Unity.Netcode.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_7;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::OwnerClientIdInternal
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___OwnerClientIdInternal_8;
	// System.Boolean Unity.Netcode.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_9;
	// System.Boolean Unity.Netcode.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_10;
	// System.Boolean Unity.Netcode.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_11;
	// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsSceneObjectU3Ek__BackingField_12;
	// System.Boolean Unity.Netcode.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_13;
	// Unity.Netcode.NetworkObject/VisibilityDelegate Unity.Netcode.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * ___CheckObjectVisibility_14;
	// Unity.Netcode.NetworkObject/SpawnDelegate Unity.Netcode.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * ___IncludeTransformWhenSpawning_15;
	// System.Boolean Unity.Netcode.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_16;
	// System.Boolean Unity.Netcode.NetworkObject::AutoObjectParentSync
	bool ___AutoObjectParentSync_17;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::Observers
	HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * ___Observers_18;
	// System.String Unity.Netcode.NetworkObject::m_CachedNameForMetrics
	String_t* ___m_CachedNameForMetrics_19;
	// System.Boolean Unity.Netcode.NetworkObject::m_IsReparented
	bool ___m_IsReparented_20;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::m_LatestParent
	Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  ___m_LatestParent_21;
	// UnityEngine.Transform Unity.Netcode.NetworkObject::m_CachedParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CachedParent_22;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour> Unity.Netcode.NetworkObject::m_ChildNetworkBehaviours
	List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 * ___m_ChildNetworkBehaviours_24;

public:
	inline static int32_t get_offset_of_GlobalObjectIdHash_4() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___GlobalObjectIdHash_4)); }
	inline uint32_t get_GlobalObjectIdHash_4() const { return ___GlobalObjectIdHash_4; }
	inline uint32_t* get_address_of_GlobalObjectIdHash_4() { return &___GlobalObjectIdHash_4; }
	inline void set_GlobalObjectIdHash_4(uint32_t value)
	{
		___GlobalObjectIdHash_4 = value;
	}

	inline static int32_t get_offset_of_NetworkManagerOwner_5() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___NetworkManagerOwner_5)); }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * get_NetworkManagerOwner_5() const { return ___NetworkManagerOwner_5; }
	inline NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F ** get_address_of_NetworkManagerOwner_5() { return &___NetworkManagerOwner_5; }
	inline void set_NetworkManagerOwner_5(NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * value)
	{
		___NetworkManagerOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetworkManagerOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_NetworkObjectId_6() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_NetworkObjectId_6)); }
	inline uint64_t get_m_NetworkObjectId_6() const { return ___m_NetworkObjectId_6; }
	inline uint64_t* get_address_of_m_NetworkObjectId_6() { return &___m_NetworkObjectId_6; }
	inline void set_m_NetworkObjectId_6(uint64_t value)
	{
		___m_NetworkObjectId_6 = value;
	}

	inline static int32_t get_offset_of_U3CNetworkObjectIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CNetworkObjectIdU3Ek__BackingField_7)); }
	inline uint64_t get_U3CNetworkObjectIdU3Ek__BackingField_7() const { return ___U3CNetworkObjectIdU3Ek__BackingField_7; }
	inline uint64_t* get_address_of_U3CNetworkObjectIdU3Ek__BackingField_7() { return &___U3CNetworkObjectIdU3Ek__BackingField_7; }
	inline void set_U3CNetworkObjectIdU3Ek__BackingField_7(uint64_t value)
	{
		___U3CNetworkObjectIdU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_OwnerClientIdInternal_8() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___OwnerClientIdInternal_8)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_OwnerClientIdInternal_8() const { return ___OwnerClientIdInternal_8; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_OwnerClientIdInternal_8() { return &___OwnerClientIdInternal_8; }
	inline void set_OwnerClientIdInternal_8(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___OwnerClientIdInternal_8 = value;
	}

	inline static int32_t get_offset_of_AlwaysReplicateAsRoot_9() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___AlwaysReplicateAsRoot_9)); }
	inline bool get_AlwaysReplicateAsRoot_9() const { return ___AlwaysReplicateAsRoot_9; }
	inline bool* get_address_of_AlwaysReplicateAsRoot_9() { return &___AlwaysReplicateAsRoot_9; }
	inline void set_AlwaysReplicateAsRoot_9(bool value)
	{
		___AlwaysReplicateAsRoot_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayerObjectU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CIsPlayerObjectU3Ek__BackingField_10)); }
	inline bool get_U3CIsPlayerObjectU3Ek__BackingField_10() const { return ___U3CIsPlayerObjectU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsPlayerObjectU3Ek__BackingField_10() { return &___U3CIsPlayerObjectU3Ek__BackingField_10; }
	inline void set_U3CIsPlayerObjectU3Ek__BackingField_10(bool value)
	{
		___U3CIsPlayerObjectU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CIsSpawnedU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CIsSpawnedU3Ek__BackingField_11)); }
	inline bool get_U3CIsSpawnedU3Ek__BackingField_11() const { return ___U3CIsSpawnedU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CIsSpawnedU3Ek__BackingField_11() { return &___U3CIsSpawnedU3Ek__BackingField_11; }
	inline void set_U3CIsSpawnedU3Ek__BackingField_11(bool value)
	{
		___U3CIsSpawnedU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsSceneObjectU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CIsSceneObjectU3Ek__BackingField_12)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsSceneObjectU3Ek__BackingField_12() const { return ___U3CIsSceneObjectU3Ek__BackingField_12; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsSceneObjectU3Ek__BackingField_12() { return &___U3CIsSceneObjectU3Ek__BackingField_12; }
	inline void set_U3CIsSceneObjectU3Ek__BackingField_12(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsSceneObjectU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CDestroyWithSceneU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___U3CDestroyWithSceneU3Ek__BackingField_13)); }
	inline bool get_U3CDestroyWithSceneU3Ek__BackingField_13() const { return ___U3CDestroyWithSceneU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CDestroyWithSceneU3Ek__BackingField_13() { return &___U3CDestroyWithSceneU3Ek__BackingField_13; }
	inline void set_U3CDestroyWithSceneU3Ek__BackingField_13(bool value)
	{
		___U3CDestroyWithSceneU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_CheckObjectVisibility_14() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___CheckObjectVisibility_14)); }
	inline VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * get_CheckObjectVisibility_14() const { return ___CheckObjectVisibility_14; }
	inline VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 ** get_address_of_CheckObjectVisibility_14() { return &___CheckObjectVisibility_14; }
	inline void set_CheckObjectVisibility_14(VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * value)
	{
		___CheckObjectVisibility_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckObjectVisibility_14), (void*)value);
	}

	inline static int32_t get_offset_of_IncludeTransformWhenSpawning_15() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___IncludeTransformWhenSpawning_15)); }
	inline SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * get_IncludeTransformWhenSpawning_15() const { return ___IncludeTransformWhenSpawning_15; }
	inline SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 ** get_address_of_IncludeTransformWhenSpawning_15() { return &___IncludeTransformWhenSpawning_15; }
	inline void set_IncludeTransformWhenSpawning_15(SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * value)
	{
		___IncludeTransformWhenSpawning_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludeTransformWhenSpawning_15), (void*)value);
	}

	inline static int32_t get_offset_of_DontDestroyWithOwner_16() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___DontDestroyWithOwner_16)); }
	inline bool get_DontDestroyWithOwner_16() const { return ___DontDestroyWithOwner_16; }
	inline bool* get_address_of_DontDestroyWithOwner_16() { return &___DontDestroyWithOwner_16; }
	inline void set_DontDestroyWithOwner_16(bool value)
	{
		___DontDestroyWithOwner_16 = value;
	}

	inline static int32_t get_offset_of_AutoObjectParentSync_17() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___AutoObjectParentSync_17)); }
	inline bool get_AutoObjectParentSync_17() const { return ___AutoObjectParentSync_17; }
	inline bool* get_address_of_AutoObjectParentSync_17() { return &___AutoObjectParentSync_17; }
	inline void set_AutoObjectParentSync_17(bool value)
	{
		___AutoObjectParentSync_17 = value;
	}

	inline static int32_t get_offset_of_Observers_18() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___Observers_18)); }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * get_Observers_18() const { return ___Observers_18; }
	inline HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E ** get_address_of_Observers_18() { return &___Observers_18; }
	inline void set_Observers_18(HashSet_1_tF5CDC14BAD50E77597F56D3E1EA35EC08E4EDE8E * value)
	{
		___Observers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Observers_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedNameForMetrics_19() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_CachedNameForMetrics_19)); }
	inline String_t* get_m_CachedNameForMetrics_19() const { return ___m_CachedNameForMetrics_19; }
	inline String_t** get_address_of_m_CachedNameForMetrics_19() { return &___m_CachedNameForMetrics_19; }
	inline void set_m_CachedNameForMetrics_19(String_t* value)
	{
		___m_CachedNameForMetrics_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedNameForMetrics_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsReparented_20() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_IsReparented_20)); }
	inline bool get_m_IsReparented_20() const { return ___m_IsReparented_20; }
	inline bool* get_address_of_m_IsReparented_20() { return &___m_IsReparented_20; }
	inline void set_m_IsReparented_20(bool value)
	{
		___m_IsReparented_20 = value;
	}

	inline static int32_t get_offset_of_m_LatestParent_21() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_LatestParent_21)); }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  get_m_LatestParent_21() const { return ___m_LatestParent_21; }
	inline Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * get_address_of_m_LatestParent_21() { return &___m_LatestParent_21; }
	inline void set_m_LatestParent_21(Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  value)
	{
		___m_LatestParent_21 = value;
	}

	inline static int32_t get_offset_of_m_CachedParent_22() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_CachedParent_22)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CachedParent_22() const { return ___m_CachedParent_22; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CachedParent_22() { return &___m_CachedParent_22; }
	inline void set_m_CachedParent_22(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CachedParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildNetworkBehaviours_24() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D, ___m_ChildNetworkBehaviours_24)); }
	inline List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 * get_m_ChildNetworkBehaviours_24() const { return ___m_ChildNetworkBehaviours_24; }
	inline List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 ** get_address_of_m_ChildNetworkBehaviours_24() { return &___m_ChildNetworkBehaviours_24; }
	inline void set_m_ChildNetworkBehaviours_24(List_1_tB0E82EA32FC03390E8D70B32E0FEA1A9C2B25676 * value)
	{
		___m_ChildNetworkBehaviours_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildNetworkBehaviours_24), (void*)value);
	}
};

struct NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkObject::OrphanChildren
	HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A * ___OrphanChildren_23;

public:
	inline static int32_t get_offset_of_OrphanChildren_23() { return static_cast<int32_t>(offsetof(NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D_StaticFields, ___OrphanChildren_23)); }
	inline HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A * get_OrphanChildren_23() const { return ___OrphanChildren_23; }
	inline HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A ** get_address_of_OrphanChildren_23() { return &___OrphanChildren_23; }
	inline void set_OrphanChildren_23(HashSet_1_t1F875C9493D2CCB3D036C8FA943098BE7913634A * value)
	{
		___OrphanChildren_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OrphanChildren_23), (void*)value);
	}
};


// Unity.Netcode.NetworkTransport
struct NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * ___OnTransportEvent_4;

public:
	inline static int32_t get_offset_of_OnTransportEvent_4() { return static_cast<int32_t>(offsetof(NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC, ___OnTransportEvent_4)); }
	inline TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * get_OnTransportEvent_4() const { return ___OnTransportEvent_4; }
	inline TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 ** get_address_of_OnTransportEvent_4() { return &___OnTransportEvent_4; }
	inline void set_OnTransportEvent_4(TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * value)
	{
		___OnTransportEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTransportEvent_4), (void*)value);
	}
};


// Unity.Netcode.__RpcParams
struct __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 
{
public:
	// Unity.Netcode.ServerRpcParams Unity.Netcode.__RpcParams::Server
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___Server_0;
	// Unity.Netcode.ClientRpcParams Unity.Netcode.__RpcParams::Client
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  ___Client_1;

public:
	inline static int32_t get_offset_of_Server_0() { return static_cast<int32_t>(offsetof(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0, ___Server_0)); }
	inline ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  get_Server_0() const { return ___Server_0; }
	inline ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09 * get_address_of_Server_0() { return &___Server_0; }
	inline void set_Server_0(ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  value)
	{
		___Server_0 = value;
	}

	inline static int32_t get_offset_of_Client_1() { return static_cast<int32_t>(offsetof(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0, ___Client_1)); }
	inline ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  get_Client_1() const { return ___Client_1; }
	inline ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89 * get_address_of_Client_1() { return &___Client_1; }
	inline void set_Client_1(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89  value)
	{
		___Client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Client_1))->___Send_0))->___TargetClientIds_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_pinvoke
{
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___Server_0;
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke ___Client_1;
};
// Native definition for COM marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_com
{
	ServerRpcParams_t0C277C3AD1858E5B02F89BD65C5B633692CABA09  ___Server_0;
	ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com ___Client_1;
};

// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke(const FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F& unmarshaled, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke_back(const FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke& marshaled, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F& unmarshaled);
IL2CPP_EXTERN_C void FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke_cleanup(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com(const FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F& unmarshaled, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com_back(const FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com& marshaled, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F& unmarshaled);
IL2CPP_EXTERN_C void FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com_cleanup(FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshal_pinvoke(const ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89& unmarshaled, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshal_pinvoke_back(const ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke& marshaled, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89& unmarshaled);
IL2CPP_EXTERN_C void ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshal_pinvoke_cleanup(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshal_com(const ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89& unmarshaled, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshal_com_back(const ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com& marshaled, ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89& unmarshaled);
IL2CPP_EXTERN_C void ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshal_com_cleanup(ClientRpcParams_tDD8B155E19DF43FD6E37A03767B4C1695377FD89_marshaled_com& marshaled);
IL2CPP_EXTERN_C void NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshal_pinvoke(const NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720& unmarshaled, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshal_pinvoke_back(const NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke& marshaled, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720& unmarshaled);
IL2CPP_EXTERN_C void NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshal_pinvoke_cleanup(NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_pinvoke(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_pinvoke_back(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke& marshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled);
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_pinvoke_cleanup(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_com(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_com_back(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com& marshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled);
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_com_cleanup(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(const AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86& unmarshaled, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_back(const AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke& marshaled, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke& marshaled);

// !0 System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mF8F0216E14C54E39812122729D57485323ECD580_gshared_inline (KeyValuePair_2_tCEEEA2545C9572EC331DBB69871921A5B01E60DA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mB73741D6C00A2B328922E49704E1797FE3600487_gshared (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * __this, uint64_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3C0F9C9642F06313BECCFAA0B3102FA470132BF7_gshared (Dictionary_2_t0D2BB9F0E2FC837777BFA6F573B64ED6362F83C8 * __this, uint64_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.UInt64>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_gshared_inline (uint64_t* ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<Unity.Netcode.NetworkObject/SceneObject/TransformData>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_gshared_inline (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.Boolean>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_gshared_inline (bool* ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134_gshared (const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<Unity.Netcode.NetworkObject/SceneObject/HeaderData>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.UInt64>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, uint64_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<Unity.Netcode.NetworkObject/SceneObject/TransformData>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.Boolean>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, bool* ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.UInt64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_gshared (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValue<Unity.Netcode.NetworkObject/SceneObject/HeaderData>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.UInt64>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint64_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValue<Unity.Netcode.NetworkObject/SceneObject/TransformData>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.Boolean>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, bool* ___value0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.UInt64>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint64_t* ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.UInt64>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D_gshared (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, uint64_t ___value0, const RuntimeMethod* method);

// System.Byte* Unity.Netcode.FastBufferWriter::GetUnsafePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_mB52C0B5BC71402181A491535A8BCA28F3646665F_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Int32 Unity.Netcode.FastBufferWriter::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteBytesSafe(System.Byte*,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_m269EDAF146F1360FA87F2DEA4ED724F625BA6F10_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method);
// System.Void Unity.Netcode.UnnamedMessage::Serialize(Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Serialize_m0DA08E0EDA81764EE93AFF92FE82B9AF45078970 (UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96 * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method);
// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::get_CustomMessagingManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * NetworkManager_get_CustomMessagingManager_m092A7833DCBFAB04AD01C1A9F1F69AC6A18AEB00_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.CustomMessagingManager::InvokeUnnamedMessage(System.UInt64,Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomMessagingManager_InvokeUnnamedMessage_m2145A6B37527EBE15E1731219697B19F8752C76E (CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * __this, uint64_t ___clientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m61F98F56162060BC1B98A61182F0E5EB8E48B8E6 (String_t* ___text0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m0B5549EF264DB35773CD5DD9C6DEE1F75FA94572 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.Byte*,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_mCBA52D344A82FB8DF6BD126FD34160A04C6988FA (uint8_t* ___buffer0, int32_t ___bufferLength1, uint32_t ___seed2, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::processStripe32(System.Byte*&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_processStripe32_mB5BD24BF2AE3ECFF024377945E6423A90A784CB8_inline (uint8_t** ___pInput0, uint32_t* ___acc11, uint32_t* ___acc22, uint32_t* ___acc33, uint32_t* ___acc44, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::processRemaining32(System.Byte*,System.UInt32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_processRemaining32_m082D54719298240890DEF50DE882039B2E3118DA_inline (uint8_t* ___pInput0, uint32_t ___acc1, int32_t ___remainingLen2, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::avalanche32(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_avalanche32_m32B2EBF4117763D2099C97E4FF908155FF5361CD_inline (uint32_t ___acc0, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.XXHash::Hash64(System.Byte*,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_m4B38F3DE77DD52017CB8CFD7684890596B4B7E43 (uint8_t* ___buffer0, int32_t ___bufferLength1, uint64_t ___seed2, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.XXHash::processStripe64(System.Byte*&,System.UInt64&,System.UInt64&,System.UInt64&,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_processStripe64_m75C9351A0ACF4C5A2FE9B2078892EEA47B24F41E_inline (uint8_t** ___pInput0, uint64_t* ___acc11, uint64_t* ___acc22, uint64_t* ___acc33, uint64_t* ___acc44, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.XXHash::processRemaining64(System.Byte*,System.UInt64,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_processRemaining64_mDB780AE9FD5DD632D0DC309C8C77FA7F9877B945_inline (uint8_t* ___pInput0, uint64_t ___acc1, int32_t ___remainingLen2, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.XXHash::avalanche64(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_avalanche64_m8A1A1B6C3BC532A910E9B6FDAB6AECB5703F91E3_inline (uint64_t ___acc0, const RuntimeMethod* method);
// System.Void Unity.Netcode.XXHash::processLane64(System.UInt64&,System.Byte*&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline (uint64_t* ___accn0, uint8_t** ___pInput1, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.XXHash/Bits::RotateLeft(System.UInt64,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline (uint64_t ___value0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void Unity.Netcode.XXHash::mergeAccumulator64(System.UInt64&,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline (uint64_t* ___acc0, uint64_t ___accn1, const RuntimeMethod* method);
// System.UInt64 Unity.Netcode.XXHash::round64(System.UInt64,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline (uint64_t ___accn0, uint64_t ___lane1, const RuntimeMethod* method);
// System.Void Unity.Netcode.XXHash::processLane32(System.Byte*&,System.UInt32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline (uint8_t** ___pInput0, uint32_t* ___accn1, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash/Bits::RotateLeft(System.UInt32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline (uint32_t ___value0, int32_t ___bits1, const RuntimeMethod* method);
// System.UInt32 Unity.Netcode.XXHash::round32(System.UInt32,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_round32_m021DA1026431AF261903FE45CEC4DBB390E22E6E_inline (uint32_t ___accn0, uint32_t ___lane1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkManager::HandleApproval(System.UInt64,System.Boolean,System.Nullable`1<System.UInt32>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_HandleApproval_m27A8DD1F735E383B8137B6366AAC77AE269C6128 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, uint64_t ___ownerClientId0, bool ___createPlayerObject1, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___playerPrefabHash2, bool ___approved3, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position4, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation5, const RuntimeMethod* method);
// System.Void Unity.Netcode.MessagingSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A2B6C378DBC65F0EADF5BF4DE2B6F35D4177122 (U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * __this, const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E (String_t* ___strA0, String_t* ___strB1, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::.ctor(System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mBC8F8F94C7FC952EFE4FA40E933B639F624B0FDE (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___size0, int32_t ___allocator1, int32_t ___maxSize2, const RuntimeMethod* method);
// System.Void Unity.Netcode.MessagingSystem/SendQueueItem::.ctor(Unity.Netcode.NetworkDelivery,System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueueItem__ctor_mF508233B6D1099DFC6C2A6B9907B40019069B00D (SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3 * __this, int32_t ___delivery0, int32_t ___writerSize1, int32_t ___writerAllocator2, int32_t ___maxWriterSize3, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m576D7B6D9695DAF9B838FDD22CEE03533FFD7521 (U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m781B66BB3B268C52F807CAA7E28687191E0DB323 (U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.UInt32,Unity.Netcode.NetworkPrefab>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m9B6ADCA3F1F5643CB0F458EC0ADFE0B87864CB22_inline (KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mF8F0216E14C54E39812122729D57485323ECD580_gshared_inline)(__this, method);
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkManager::get_LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Subtraction(Unity.Netcode.NetworkTime,Unity.Netcode.NetworkTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  NetworkTime_op_Subtraction_m254DCCEF9F87AAD5BC245138D251FCD242D2C5A0 (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  ___a0, NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  ___b1, const RuntimeMethod* method);
// System.Double Unity.Netcode.NetworkTime::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB (Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * __this, uint64_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 *, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mB73741D6C00A2B328922E49704E1797FE3600487_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::get_ConnectedClients()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_ConnectedClients_mDA6FFC9FFBB457A4ABE63B9F23644245FBDD2CD5 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method);
// Unity.Netcode.LogLevel Unity.Netcode.NetworkLog::get_CurrentLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkLog_get_CurrentLogLevel_m2CFCA90F070D6AB0DD1407255BFFD4188349B862 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkLog::LogInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogInfo_m2038B19CDF5719A86AC1B5BCBE9FF10F17333CBF (String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkManager::DisconnectClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_DisconnectClient_m7467CEF3B69A5261DEC293A089F0FA6F4D9972D1 (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, uint64_t ___clientId0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9A7C21111FB8DEAB4D7C40DD8396EDAB77D42A92 (Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * __this, uint64_t ___key0, PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 *, uint64_t, PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3C0F9C9642F06313BECCFAA0B3102FA470132BF7_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Netcode.PendingClient/State Unity.Netcode.PendingClient::get_ConnectionState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PendingClient_get_ConnectionState_m0CD1231B5AD18C236A239CB878617430DFA52A66_inline (PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkLog::LogWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogWarning_m7E5C45DCDE429345CCAC7C8EB7AAF02780160C40 (String_t* ___message0, const RuntimeMethod* method);
// System.Byte[] Unity.Netcode.FastBufferWriter::ToArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FastBufferWriter_ToArray_m20A12CE89DE19E17D9F4D3281D535E9187283999_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method);
// System.Void System.ArraySegment`1<System.Byte>::.ctor(!0[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.UInt64>(T&)
inline int32_t FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_inline (uint64_t* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint64_t*, const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_gshared_inline)(___value0, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<Unity.Netcode.NetworkObject/SceneObject/TransformData>(T&)
inline int32_t FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_inline (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *, const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_gshared_inline)(___value0, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.Boolean>(T&)
inline int32_t FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_inline (bool* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (bool*, const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_gshared_inline)(___value0, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.UInt64>()
inline int32_t FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134_gshared)(method);
}
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWrite(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_mC38DB25F29B37C869E3A451D8AADACF3E581BAB2_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___bytes0, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<Unity.Netcode.NetworkObject/SceneObject/HeaderData>(T&)
inline void FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *, const RuntimeMethod*))FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.UInt64>(T&)
inline void FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, uint64_t*, const RuntimeMethod*))FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<Unity.Netcode.NetworkObject/SceneObject/TransformData>(T&)
inline void FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *, const RuntimeMethod*))FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.Boolean>(T&)
inline void FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, bool* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *, bool*, const RuntimeMethod*))FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_gshared_inline)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.UInt64>::get_Value()
inline uint64_t Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *, const RuntimeMethod*))Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_gshared)(__this, method);
}
// System.Void Unity.Netcode.NetworkObject::WriteNetworkVariableData(Unity.Netcode.FastBufferWriter,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkObject_WriteNetworkVariableData_m09FB47BF751F7767D5A67A34B2788C5D2D55FF5F (NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, uint64_t ___clientId1, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkObject/SceneObject::Serialize(Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneObject_Serialize_m59FE9759E5F0D773FB6DCCD0992CDC5B37465F52 (SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginRead(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_m718713B1DDC33A4A9BBF4250251C7B454E2C2029_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, int32_t ___bytes0, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferReader::ReadValue<Unity.Netcode.NetworkObject/SceneObject/HeaderData>(T&)
inline void FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *, const RuntimeMethod*))FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.UInt64>(T&)
inline void FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, uint64_t*, const RuntimeMethod*))FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValue<Unity.Netcode.NetworkObject/SceneObject/TransformData>(T&)
inline void FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *, const RuntimeMethod*))FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.Boolean>(T&)
inline void FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, bool* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, bool*, const RuntimeMethod*))FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.UInt64>(T&)
inline void FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *, uint64_t*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Nullable`1<System.UInt64>::.ctor(!0)
inline void Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *, uint64_t, const RuntimeMethod*))Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.NetworkObject/SceneObject::Deserialize(Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05 (SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkSceneManager::OnSceneUnloaded(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManager_OnSceneUnloaded_m042A3C83C14E12CF87215054B29989EBF890533F (NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * __this, uint32_t ___sceneEventId0, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkSceneManager::OnSceneLoaded(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManager_OnSceneLoaded_mA873850C9E18414304C9C749A06982DF8A855AAB (NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * __this, uint32_t ___sceneEventId0, String_t* ___sceneName1, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkSceneManager::ClientLoadedSynchronization(System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSceneManager_ClientLoadedSynchronization_m7B87BCF02D9F469B6C0DC5C8AA495DC1DAB176FF (NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * __this, uint32_t ___sceneEventId0, uint32_t ___sceneHash1, int32_t ___sceneHandle2, const RuntimeMethod* method);
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0744D9316E61F82C7086BB9B9CF74D4943AD9726 (U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop::RunNetworkUpdateStage(Unity.Netcode.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB (uint8_t ___updateStage0, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2907291347FE9708D098C6BAC3B1279333ED6245 (U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDC2D19BEC134B4455567B0825713CA229EFE6BD (U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16DBCAFB7ED0424E5A4377056A37C4A2C027AA9A (U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC57B7D1E89BE54416530862DE126D8C339101075 (U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0542A5D6ED031E0A80F52AF3A9256959EC1177B (U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * __this, const RuntimeMethod* method);
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m135160224392406747046254E24AFDE68C280166 (U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * __this, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___bytes0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void Unity.Netcode.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mBBFF2DB791E8BBC5A732DC63351724CBE84AA9AC (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method);
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, int32_t ___bytes0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Netcode.UnnamedMessage
IL2CPP_EXTERN_C void UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshal_pinvoke(const UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96& unmarshaled, UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_pinvoke& marshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke(unmarshaled.get_Data_0(), marshaled.___Data_0);
}
IL2CPP_EXTERN_C void UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshal_pinvoke_back(const UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_pinvoke& marshaled, UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96& unmarshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  unmarshaled_Data_temp_0;
	memset((&unmarshaled_Data_temp_0), 0, sizeof(unmarshaled_Data_temp_0));
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke_back(marshaled.___Data_0, unmarshaled_Data_temp_0);
	unmarshaled.set_Data_0(unmarshaled_Data_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.UnnamedMessage
IL2CPP_EXTERN_C void UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshal_pinvoke_cleanup(UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_pinvoke& marshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke_cleanup(marshaled.___Data_0);
}


// Conversion methods for marshalling of: Unity.Netcode.UnnamedMessage
IL2CPP_EXTERN_C void UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshal_com(const UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96& unmarshaled, UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_com& marshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com(unmarshaled.get_Data_0(), marshaled.___Data_0);
}
IL2CPP_EXTERN_C void UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshal_com_back(const UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_com& marshaled, UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96& unmarshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  unmarshaled_Data_temp_0;
	memset((&unmarshaled_Data_temp_0), 0, sizeof(unmarshaled_Data_temp_0));
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com_back(marshaled.___Data_0, unmarshaled_Data_temp_0);
	unmarshaled.set_Data_0(unmarshaled_Data_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.UnnamedMessage
IL2CPP_EXTERN_C void UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshal_com_cleanup(UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96_marshaled_com& marshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com_cleanup(marshaled.___Data_0);
}
// System.Void Unity.Netcode.UnnamedMessage::Serialize(Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Serialize_m0DA08E0EDA81764EE93AFF92FE82B9AF45078970 (UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96 * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method)
{
	{
		// writer.WriteBytesSafe(Data.GetUnsafePtr(), Data.Length);
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * L_0 = __this->get_address_of_Data_0();
		uint8_t* L_1;
		L_1 = FastBufferWriter_GetUnsafePtr_mB52C0B5BC71402181A491535A8BCA28F3646665F_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)L_0, /*hidden argument*/NULL);
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * L_2 = __this->get_address_of_Data_0();
		int32_t L_3;
		L_3 = FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)L_2, /*hidden argument*/NULL);
		FastBufferWriter_WriteBytesSafe_m269EDAF146F1360FA87F2DEA4ED724F625BA6F10_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (uint8_t*)(uint8_t*)L_1, L_3, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UnnamedMessage_Serialize_m0DA08E0EDA81764EE93AFF92FE82B9AF45078970_AdjustorThunk (RuntimeObject * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96 * _thisAdjusted = reinterpret_cast<UnnamedMessage_tACAEE47299A26D75B5CDA70749BC2F19DD04AF96 *>(__this + _offset);
	UnnamedMessage_Serialize_m0DA08E0EDA81764EE93AFF92FE82B9AF45078970(_thisAdjusted, ___writer0, method);
}
// System.Void Unity.Netcode.UnnamedMessage::Receive(Unity.Netcode.FastBufferReader,Unity.Netcode.NetworkContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessage_Receive_m62EB6A713F70DCCBDC367E44D4C56F988DF39D52 (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((NetworkManager)context.SystemOwner).CustomMessagingManager.InvokeUnnamedMessage(context.SenderId, reader);
		NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * L_0 = ___context1;
		RuntimeObject * L_1 = L_0->get_SystemOwner_0();
		NullCheck(((NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F *)CastclassClass((RuntimeObject*)L_1, NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var)));
		CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * L_2;
		L_2 = NetworkManager_get_CustomMessagingManager_m092A7833DCBFAB04AD01C1A9F1F69AC6A18AEB00_inline(((NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F *)CastclassClass((RuntimeObject*)L_1, NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * L_3 = ___context1;
		uint64_t L_4 = L_3->get_SenderId_1();
		FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  L_5 = ___reader0;
		NullCheck(L_2);
		CustomMessagingManager_InvokeUnnamedMessage_m2145A6B37527EBE15E1731219697B19F8752C76E(L_2, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.VisibilityChangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityChangeException__ctor_mFBA95946E33A97276598474C6D647216AE3DD2CA (VisibilityChangeException_t72917B26CC39B31589221EF6CA0AAEEC5CD9E41B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VisibilityChangeException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// public VisibilityChangeException(string message) : base(message) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m34CC8CAF536BA751C127CB86A38FE5E3A1833869 (String_t* ___text0, const RuntimeMethod* method)
{
	{
		// public static uint Hash32(string text) => Hash32(text, Encoding.UTF8);
		String_t* L_0 = ___text0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
		L_1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		uint32_t L_2;
		L_2 = XXHash_Hash32_m61F98F56162060BC1B98A61182F0E5EB8E48B8E6(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m61F98F56162060BC1B98A61182F0E5EB8E48B8E6 (String_t* ___text0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method)
{
	{
		// public static uint Hash32(string text, Encoding encoding) => Hash32(encoding.GetBytes(text));
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0 = ___encoding1;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		uint32_t L_3;
		L_3 = XXHash_Hash32_m0B5549EF264DB35773CD5DD9C6DEE1F75FA94572(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_m0B5549EF264DB35773CD5DD9C6DEE1F75FA94572 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// fixed (byte* ptr = buffer)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// return Hash32(ptr, buffer.Length);
		uint8_t* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___buffer0;
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = XXHash_Hash32_mCBA52D344A82FB8DF6BD126FD34160A04C6988FA((uint8_t*)(uint8_t*)L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), 0, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.UInt32 Unity.Netcode.XXHash::Hash32(System.Byte*,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_Hash32_mCBA52D344A82FB8DF6BD126FD34160A04C6988FA (uint8_t* ___buffer0, int32_t ___bufferLength1, uint32_t ___seed2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		// int len = bufferLength;
		int32_t L_0 = ___bufferLength1;
		V_0 = L_0;
		// int remainingLen = len;
		int32_t L_1 = V_0;
		V_1 = L_1;
		// byte* pInput = buffer;
		uint8_t* L_2 = ___buffer0;
		V_3 = (uint8_t*)L_2;
		// if (len >= stripeLength)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)16))))
		{
			goto IL_004b;
		}
	}
	{
		// uint acc1 = seed + k_Prime32v1 + k_Prime32v2;
		uint32_t L_4 = ___seed2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)-1640531535))), (int32_t)((int32_t)-2048144777)));
		// uint acc2 = seed + k_Prime32v2;
		uint32_t L_5 = ___seed2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)-2048144777)));
		// uint acc3 = seed;
		uint32_t L_6 = ___seed2;
		V_6 = L_6;
		// uint acc4 = seed - k_Prime32v1;
		uint32_t L_7 = ___seed2;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)-1640531535)));
	}

IL_002f:
	{
		// acc = processStripe32(ref pInput, ref acc1, ref acc2, ref acc3, ref acc4);
		uint32_t L_8;
		L_8 = XXHash_processStripe32_mB5BD24BF2AE3ECFF024377945E6423A90A784CB8_inline((uint8_t**)(&V_3), (uint32_t*)(&V_4), (uint32_t*)(&V_5), (uint32_t*)(&V_6), (uint32_t*)(&V_7), /*hidden argument*/NULL);
		V_2 = L_8;
		// remainingLen -= stripeLength;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)16)));
		// } while (remainingLen >= stripeLength);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)16))))
		{
			goto IL_002f;
		}
	}
	{
		// }
		goto IL_0053;
	}

IL_004b:
	{
		// acc = seed + k_Prime32v5;
		uint32_t L_11 = ___seed2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)374761393)));
	}

IL_0053:
	{
		// acc += (uint)len;
		uint32_t L_12 = V_2;
		int32_t L_13 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		// acc = processRemaining32(pInput, acc, remainingLen);
		uint8_t* L_14 = V_3;
		uint32_t L_15 = V_2;
		int32_t L_16 = V_1;
		uint32_t L_17;
		L_17 = XXHash_processRemaining32_m082D54719298240890DEF50DE882039B2E3118DA_inline((uint8_t*)(uint8_t*)L_14, L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// return avalanche32(acc);
		uint32_t L_18 = V_2;
		uint32_t L_19;
		L_19 = XXHash_avalanche32_m32B2EBF4117763D2099C97E4FF908155FF5361CD_inline(L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.UInt64 Unity.Netcode.XXHash::Hash64(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_m1A22B4E0D4FDE9D5B318B8CD9A47552824AE73BD (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// fixed (byte* ptr = buffer)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// return Hash64(ptr, buffer.Length);
		uint8_t* L_4 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___buffer0;
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = XXHash_Hash64_m4B38F3DE77DD52017CB8CFD7684890596B4B7E43((uint8_t*)(uint8_t*)L_4, ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.UInt64 Unity.Netcode.XXHash::Hash64(System.Byte*,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_Hash64_m4B38F3DE77DD52017CB8CFD7684890596B4B7E43 (uint8_t* ___buffer0, int32_t ___bufferLength1, uint64_t ___seed2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		// int len = bufferLength;
		int32_t L_0 = ___bufferLength1;
		V_0 = L_0;
		// int remainingLen = len;
		int32_t L_1 = V_0;
		V_1 = L_1;
		// byte* pInput = buffer;
		uint8_t* L_2 = ___buffer0;
		V_3 = (uint8_t*)L_2;
		// if (len >= stripeLength)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_005b;
		}
	}
	{
		// ulong acc1 = seed + k_Prime64v1 + k_Prime64v2;
		uint64_t L_4 = ___seed2;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_4, (int64_t)((int64_t)-7046029288634856825LL))), (int64_t)((int64_t)-4417276706812531889LL)));
		// ulong acc2 = seed + k_Prime64v2;
		uint64_t L_5 = ___seed2;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)((int64_t)-4417276706812531889LL)));
		// ulong acc3 = seed;
		uint64_t L_6 = ___seed2;
		V_6 = L_6;
		// ulong acc4 = seed - k_Prime64v1;
		uint64_t L_7 = ___seed2;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_7, (int64_t)((int64_t)-7046029288634856825LL)));
	}

IL_003f:
	{
		// acc = processStripe64(ref pInput, ref acc1, ref acc2, ref acc3, ref acc4);
		uint64_t L_8;
		L_8 = XXHash_processStripe64_m75C9351A0ACF4C5A2FE9B2078892EEA47B24F41E_inline((uint8_t**)(&V_3), (uint64_t*)(&V_4), (uint64_t*)(&V_5), (uint64_t*)(&V_6), (uint64_t*)(&V_7), /*hidden argument*/NULL);
		V_2 = L_8;
		// remainingLen -= stripeLength;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)32)));
		// } while (remainingLen >= stripeLength);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)32))))
		{
			goto IL_003f;
		}
	}
	{
		// }
		goto IL_0067;
	}

IL_005b:
	{
		// acc = seed + k_Prime64v5;
		uint64_t L_11 = ___seed2;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_11, (int64_t)((int64_t)2870177450012600261LL)));
	}

IL_0067:
	{
		// acc += (ulong)len;
		uint64_t L_12 = V_2;
		int32_t L_13 = V_0;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)((int64_t)((int64_t)L_13))));
		// acc = processRemaining64(pInput, acc, remainingLen);
		uint8_t* L_14 = V_3;
		uint64_t L_15 = V_2;
		int32_t L_16 = V_1;
		uint64_t L_17;
		L_17 = XXHash_processRemaining64_mDB780AE9FD5DD632D0DC309C8C77FA7F9877B945_inline((uint8_t*)(uint8_t*)L_14, L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// return avalanche64(acc);
		uint64_t L_18 = V_2;
		uint64_t L_19;
		L_19 = XXHash_avalanche64_m8A1A1B6C3BC532A910E9B6FDAB6AECB5703F91E3_inline(L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.UInt64 Unity.Netcode.XXHash::processStripe64(System.Byte*&,System.UInt64&,System.UInt64&,System.UInt64&,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_processStripe64_m75C9351A0ACF4C5A2FE9B2078892EEA47B24F41E (uint8_t** ___pInput0, uint64_t* ___acc11, uint64_t* ___acc22, uint64_t* ___acc33, uint64_t* ___acc44, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// processLane64(ref acc1, ref pInput);
		uint64_t* L_0 = ___acc11;
		uint8_t** L_1 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_0, (uint8_t**)L_1, /*hidden argument*/NULL);
		// processLane64(ref acc2, ref pInput);
		uint64_t* L_2 = ___acc22;
		uint8_t** L_3 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_2, (uint8_t**)L_3, /*hidden argument*/NULL);
		// processLane64(ref acc3, ref pInput);
		uint64_t* L_4 = ___acc33;
		uint8_t** L_5 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_4, (uint8_t**)L_5, /*hidden argument*/NULL);
		// processLane64(ref acc4, ref pInput);
		uint64_t* L_6 = ___acc44;
		uint8_t** L_7 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_6, (uint8_t**)L_7, /*hidden argument*/NULL);
		// ulong acc = Bits.RotateLeft(acc1, 1)
		//             + Bits.RotateLeft(acc2, 7)
		//             + Bits.RotateLeft(acc3, 12)
		//             + Bits.RotateLeft(acc4, 18);
		uint64_t* L_8 = ___acc11;
		int64_t L_9 = *((int64_t*)L_8);
		uint64_t L_10;
		L_10 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_9, 1, /*hidden argument*/NULL);
		uint64_t* L_11 = ___acc22;
		int64_t L_12 = *((int64_t*)L_11);
		uint64_t L_13;
		L_13 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_12, 7, /*hidden argument*/NULL);
		uint64_t* L_14 = ___acc33;
		int64_t L_15 = *((int64_t*)L_14);
		uint64_t L_16;
		L_16 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_15, ((int32_t)12), /*hidden argument*/NULL);
		uint64_t* L_17 = ___acc44;
		int64_t L_18 = *((int64_t*)L_17);
		uint64_t L_19;
		L_19 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_18, ((int32_t)18), /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)L_13)), (int64_t)L_16)), (int64_t)L_19));
		// mergeAccumulator64(ref acc, acc1);
		uint64_t* L_20 = ___acc11;
		int64_t L_21 = *((int64_t*)L_20);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_21, /*hidden argument*/NULL);
		// mergeAccumulator64(ref acc, acc2);
		uint64_t* L_22 = ___acc22;
		int64_t L_23 = *((int64_t*)L_22);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_23, /*hidden argument*/NULL);
		// mergeAccumulator64(ref acc, acc3);
		uint64_t* L_24 = ___acc33;
		int64_t L_25 = *((int64_t*)L_24);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_25, /*hidden argument*/NULL);
		// mergeAccumulator64(ref acc, acc4);
		uint64_t* L_26 = ___acc44;
		int64_t L_27 = *((int64_t*)L_26);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_27, /*hidden argument*/NULL);
		// return acc;
		uint64_t L_28 = V_0;
		return L_28;
	}
}
// System.Void Unity.Netcode.XXHash::processLane64(System.UInt64&,System.Byte*&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0 (uint64_t* ___accn0, uint8_t** ___pInput1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// ulong lane = *(ulong*)pInput;
		uint8_t** L_0 = ___pInput1;
		int64_t L_1 = *((int64_t*)(*((intptr_t*)L_0)));
		V_0 = L_1;
		// accn = round64(accn, lane);
		uint64_t* L_2 = ___accn0;
		uint64_t* L_3 = ___accn0;
		int64_t L_4 = *((int64_t*)L_3);
		uint64_t L_5 = V_0;
		uint64_t L_6;
		L_6 = XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline(L_4, L_5, /*hidden argument*/NULL);
		*((int64_t*)L_2) = (int64_t)L_6;
		// pInput += 8;
		uint8_t** L_7 = ___pInput1;
		uint8_t** L_8 = ___pInput1;
		*((intptr_t*)L_7) = (intptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)(*((intptr_t*)L_8)), (int32_t)8));
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.XXHash::processRemaining64(System.Byte*,System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_processRemaining64_mDB780AE9FD5DD632D0DC309C8C77FA7F9877B945 (uint8_t* ___pInput0, uint64_t ___acc1, int32_t ___remainingLen2, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		goto IL_003c;
	}

IL_0002:
	{
		// lane = *(ulong*)pInput;
		uint8_t* L_0 = ___pInput0;
		int64_t L_1 = *((int64_t*)L_0);
		V_0 = L_1;
		// acc ^= round64(0, lane);
		uint64_t L_2 = ___acc1;
		uint64_t L_3 = V_0;
		uint64_t L_4;
		L_4 = XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline(((int64_t)((int64_t)0)), L_3, /*hidden argument*/NULL);
		___acc1 = ((int64_t)((int64_t)L_2^(int64_t)L_4));
		// acc = Bits.RotateLeft(acc, 27) * k_Prime64v1;
		uint64_t L_5 = ___acc1;
		uint64_t L_6;
		L_6 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_5, ((int32_t)27), /*hidden argument*/NULL);
		___acc1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)((int64_t)-7046029288634856825LL)));
		// acc += k_Prime64v4;
		uint64_t L_7 = ___acc1;
		___acc1 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)((int64_t)-8796714831421723037LL)));
		// for (ulong lane; remainingLen >= 8; remainingLen -= 8, pInput += 8)
		int32_t L_8 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8));
		// for (ulong lane; remainingLen >= 8; remainingLen -= 8, pInput += 8)
		uint8_t* L_9 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)8));
	}

IL_003c:
	{
		// for (ulong lane; remainingLen >= 8; remainingLen -= 8, pInput += 8)
		int32_t L_10 = ___remainingLen2;
		if ((((int32_t)L_10) >= ((int32_t)8)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0080;
	}

IL_0042:
	{
		// lane32 = *(uint*)pInput;
		uint8_t* L_11 = ___pInput0;
		int32_t L_12 = *((uint32_t*)L_11);
		V_1 = L_12;
		// acc ^= lane32 * k_Prime64v1;
		uint64_t L_13 = ___acc1;
		uint32_t L_14 = V_1;
		___acc1 = ((int64_t)((int64_t)L_13^(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_14)), (int64_t)((int64_t)-7046029288634856825LL)))));
		// acc = Bits.RotateLeft(acc, 23) * k_Prime64v2;
		uint64_t L_15 = ___acc1;
		uint64_t L_16;
		L_16 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_15, ((int32_t)23), /*hidden argument*/NULL);
		___acc1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)((int64_t)-4417276706812531889LL)));
		// acc += k_Prime64v3;
		uint64_t L_17 = ___acc1;
		___acc1 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, (int64_t)((int64_t)1609587929392839161LL)));
		// for (uint lane32; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_18 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)4));
		// for (uint lane32; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		uint8_t* L_19 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)4));
	}

IL_0080:
	{
		// for (uint lane32; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_20 = ___remainingLen2;
		if ((((int32_t)L_20) >= ((int32_t)4)))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_00b7;
	}

IL_0086:
	{
		// lane8 = *pInput;
		uint8_t* L_21 = ___pInput0;
		int32_t L_22 = *((uint8_t*)L_21);
		V_2 = (uint8_t)L_22;
		// acc ^= lane8 * k_Prime64v5;
		uint64_t L_23 = ___acc1;
		uint8_t L_24 = V_2;
		___acc1 = ((int64_t)((int64_t)L_23^(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_24)), (int64_t)((int64_t)2870177450012600261LL)))));
		// acc = Bits.RotateLeft(acc, 11) * k_Prime64v1;
		uint64_t L_25 = ___acc1;
		uint64_t L_26;
		L_26 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_25, ((int32_t)11), /*hidden argument*/NULL);
		___acc1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_26, (int64_t)((int64_t)-7046029288634856825LL)));
		// for (byte lane8; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_27 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		// for (byte lane8; remainingLen >= 1; remainingLen--, pInput++)
		uint8_t* L_28 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_28, (int32_t)1));
	}

IL_00b7:
	{
		// for (byte lane8; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_29 = ___remainingLen2;
		if ((((int32_t)L_29) >= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		// return acc;
		uint64_t L_30 = ___acc1;
		return L_30;
	}
}
// System.UInt64 Unity.Netcode.XXHash::avalanche64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_avalanche64_m8A1A1B6C3BC532A910E9B6FDAB6AECB5703F91E3 (uint64_t ___acc0, const RuntimeMethod* method)
{
	{
		// acc ^= acc >> 33;
		uint64_t L_0 = ___acc0;
		uint64_t L_1 = ___acc0;
		___acc0 = ((int64_t)((int64_t)L_0^(int64_t)((int64_t)((uint64_t)L_1>>((int32_t)33)))));
		// acc *= k_Prime64v2;
		uint64_t L_2 = ___acc0;
		___acc0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)-4417276706812531889LL)));
		// acc ^= acc >> 29;
		uint64_t L_3 = ___acc0;
		uint64_t L_4 = ___acc0;
		___acc0 = ((int64_t)((int64_t)L_3^(int64_t)((int64_t)((uint64_t)L_4>>((int32_t)29)))));
		// acc *= k_Prime64v3;
		uint64_t L_5 = ___acc0;
		___acc0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_5, (int64_t)((int64_t)1609587929392839161LL)));
		// acc ^= acc >> 32;
		uint64_t L_6 = ___acc0;
		uint64_t L_7 = ___acc0;
		___acc0 = ((int64_t)((int64_t)L_6^(int64_t)((int64_t)((uint64_t)L_7>>((int32_t)32)))));
		// return acc;
		uint64_t L_8 = ___acc0;
		return L_8;
	}
}
// System.UInt64 Unity.Netcode.XXHash::round64(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05 (uint64_t ___accn0, uint64_t ___lane1, const RuntimeMethod* method)
{
	{
		// accn += lane * k_Prime64v2;
		uint64_t L_0 = ___accn0;
		uint64_t L_1 = ___lane1;
		___accn0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_1, (int64_t)((int64_t)-4417276706812531889LL)))));
		// return Bits.RotateLeft(accn, 31) * k_Prime64v1;
		uint64_t L_2 = ___accn0;
		uint64_t L_3;
		L_3 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_2, ((int32_t)31), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)-7046029288634856825LL)));
	}
}
// System.Void Unity.Netcode.XXHash::mergeAccumulator64(System.UInt64&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769 (uint64_t* ___acc0, uint64_t ___accn1, const RuntimeMethod* method)
{
	{
		// acc ^= round64(0, accn);
		uint64_t* L_0 = ___acc0;
		uint64_t* L_1 = ___acc0;
		int64_t L_2 = *((int64_t*)L_1);
		uint64_t L_3 = ___accn1;
		uint64_t L_4;
		L_4 = XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline(((int64_t)((int64_t)0)), L_3, /*hidden argument*/NULL);
		*((int64_t*)L_0) = (int64_t)((int64_t)((int64_t)L_2^(int64_t)L_4));
		// acc *= k_Prime64v1;
		uint64_t* L_5 = ___acc0;
		uint64_t* L_6 = ___acc0;
		int64_t L_7 = *((int64_t*)L_6);
		*((int64_t*)L_5) = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)((int64_t)-7046029288634856825LL)));
		// acc += k_Prime64v4;
		uint64_t* L_8 = ___acc0;
		uint64_t* L_9 = ___acc0;
		int64_t L_10 = *((int64_t*)L_9);
		*((int64_t*)L_8) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)-8796714831421723037LL)));
		// }
		return;
	}
}
// System.UInt32 Unity.Netcode.XXHash::processStripe32(System.Byte*&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_processStripe32_mB5BD24BF2AE3ECFF024377945E6423A90A784CB8 (uint8_t** ___pInput0, uint32_t* ___acc11, uint32_t* ___acc22, uint32_t* ___acc33, uint32_t* ___acc44, const RuntimeMethod* method)
{
	{
		// processLane32(ref pInput, ref acc1);
		uint8_t** L_0 = ___pInput0;
		uint32_t* L_1 = ___acc11;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_0, (uint32_t*)L_1, /*hidden argument*/NULL);
		// processLane32(ref pInput, ref acc2);
		uint8_t** L_2 = ___pInput0;
		uint32_t* L_3 = ___acc22;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_2, (uint32_t*)L_3, /*hidden argument*/NULL);
		// processLane32(ref pInput, ref acc3);
		uint8_t** L_4 = ___pInput0;
		uint32_t* L_5 = ___acc33;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_4, (uint32_t*)L_5, /*hidden argument*/NULL);
		// processLane32(ref pInput, ref acc4);
		uint8_t** L_6 = ___pInput0;
		uint32_t* L_7 = ___acc44;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_6, (uint32_t*)L_7, /*hidden argument*/NULL);
		// return Bits.RotateLeft(acc1, 1)
		//        + Bits.RotateLeft(acc2, 7)
		//        + Bits.RotateLeft(acc3, 12)
		//        + Bits.RotateLeft(acc4, 18);
		uint32_t* L_8 = ___acc11;
		int32_t L_9 = *((uint32_t*)L_8);
		uint32_t L_10;
		L_10 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_9, 1, /*hidden argument*/NULL);
		uint32_t* L_11 = ___acc22;
		int32_t L_12 = *((uint32_t*)L_11);
		uint32_t L_13;
		L_13 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_12, 7, /*hidden argument*/NULL);
		uint32_t* L_14 = ___acc33;
		int32_t L_15 = *((uint32_t*)L_14);
		uint32_t L_16;
		L_16 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_15, ((int32_t)12), /*hidden argument*/NULL);
		uint32_t* L_17 = ___acc44;
		int32_t L_18 = *((uint32_t*)L_17);
		uint32_t L_19;
		L_19 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_18, ((int32_t)18), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13)), (int32_t)L_16)), (int32_t)L_19));
	}
}
// System.Void Unity.Netcode.XXHash::processLane32(System.Byte*&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F (uint8_t** ___pInput0, uint32_t* ___accn1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// uint lane = *(uint*)pInput;
		uint8_t** L_0 = ___pInput0;
		int32_t L_1 = *((uint32_t*)(*((intptr_t*)L_0)));
		V_0 = L_1;
		// accn = round32(accn, lane);
		uint32_t* L_2 = ___accn1;
		uint32_t* L_3 = ___accn1;
		int32_t L_4 = *((uint32_t*)L_3);
		uint32_t L_5 = V_0;
		uint32_t L_6;
		L_6 = XXHash_round32_m021DA1026431AF261903FE45CEC4DBB390E22E6E_inline(L_4, L_5, /*hidden argument*/NULL);
		*((int32_t*)L_2) = (int32_t)L_6;
		// pInput += 4;
		uint8_t** L_7 = ___pInput0;
		uint8_t** L_8 = ___pInput0;
		*((intptr_t*)L_7) = (intptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)(*((intptr_t*)L_8)), (int32_t)4));
		// }
		return;
	}
}
// System.UInt32 Unity.Netcode.XXHash::processRemaining32(System.Byte*,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_processRemaining32_m082D54719298240890DEF50DE882039B2E3118DA (uint8_t* ___pInput0, uint32_t ___acc1, int32_t ___remainingLen2, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		goto IL_002a;
	}

IL_0002:
	{
		// lane = *(uint*)pInput;
		uint8_t* L_0 = ___pInput0;
		int32_t L_1 = *((uint32_t*)L_0);
		V_0 = L_1;
		// acc += lane * k_Prime32v3;
		uint32_t L_2 = ___acc1;
		uint32_t L_3 = V_0;
		___acc1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)-1028477379)))));
		// acc = Bits.RotateLeft(acc, 17) * k_Prime32v4;
		uint32_t L_4 = ___acc1;
		uint32_t L_5;
		L_5 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_4, ((int32_t)17), /*hidden argument*/NULL);
		___acc1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)668265263)));
		// for (uint lane; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_6 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)4));
		// for (uint lane; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		uint8_t* L_7 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)4));
	}

IL_002a:
	{
		// for (uint lane; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_8 = ___remainingLen2;
		if ((((int32_t)L_8) >= ((int32_t)4)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0058;
	}

IL_0030:
	{
		// lane = *pInput;
		uint8_t* L_9 = ___pInput0;
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = (uint8_t)L_10;
		// acc += lane * k_Prime32v5;
		uint32_t L_11 = ___acc1;
		uint8_t L_12 = V_1;
		___acc1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)374761393)))));
		// acc = Bits.RotateLeft(acc, 11) * k_Prime32v1;
		uint32_t L_13 = ___acc1;
		uint32_t L_14;
		L_14 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_13, ((int32_t)11), /*hidden argument*/NULL);
		___acc1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)-1640531535)));
		// for (byte lane; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_15 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		// for (byte lane; remainingLen >= 1; remainingLen--, pInput++)
		uint8_t* L_16 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		// for (byte lane; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_17 = ___remainingLen2;
		if ((((int32_t)L_17) >= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		// return acc;
		uint32_t L_18 = ___acc1;
		return L_18;
	}
}
// System.UInt32 Unity.Netcode.XXHash::round32(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_round32_m021DA1026431AF261903FE45CEC4DBB390E22E6E (uint32_t ___accn0, uint32_t ___lane1, const RuntimeMethod* method)
{
	{
		// accn += lane * k_Prime32v2;
		uint32_t L_0 = ___accn0;
		uint32_t L_1 = ___lane1;
		___accn0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)-2048144777)))));
		// accn = Bits.RotateLeft(accn, 13);
		uint32_t L_2 = ___accn0;
		uint32_t L_3;
		L_3 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_2, ((int32_t)13), /*hidden argument*/NULL);
		___accn0 = L_3;
		// accn *= k_Prime32v1;
		uint32_t L_4 = ___accn0;
		___accn0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1640531535)));
		// return accn;
		uint32_t L_5 = ___accn0;
		return L_5;
	}
}
// System.UInt32 Unity.Netcode.XXHash::avalanche32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XXHash_avalanche32_m32B2EBF4117763D2099C97E4FF908155FF5361CD (uint32_t ___acc0, const RuntimeMethod* method)
{
	{
		// acc ^= acc >> 15;
		uint32_t L_0 = ___acc0;
		uint32_t L_1 = ___acc0;
		___acc0 = ((int32_t)((int32_t)L_0^(int32_t)((int32_t)((uint32_t)L_1>>((int32_t)15)))));
		// acc *= k_Prime32v2;
		uint32_t L_2 = ___acc0;
		___acc0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)-2048144777)));
		// acc ^= acc >> 13;
		uint32_t L_3 = ___acc0;
		uint32_t L_4 = ___acc0;
		___acc0 = ((int32_t)((int32_t)L_3^(int32_t)((int32_t)((uint32_t)L_4>>((int32_t)13)))));
		// acc *= k_Prime32v3;
		uint32_t L_5 = ___acc0;
		___acc0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)-1028477379)));
		// acc ^= acc >> 16;
		uint32_t L_6 = ___acc0;
		uint32_t L_7 = ___acc0;
		___acc0 = ((int32_t)((int32_t)L_6^(int32_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		// return acc;
		uint32_t L_8 = ___acc0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Netcode.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshal_pinvoke(const __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0& unmarshaled, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Client_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Client' of type '__RpcParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Client_1Exception, NULL);
}
IL2CPP_EXTERN_C void __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshal_pinvoke_back(const __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_pinvoke& marshaled, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0& unmarshaled)
{
	Exception_t* ___Client_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Client' of type '__RpcParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Client_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshal_pinvoke_cleanup(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Netcode.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshal_com(const __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0& unmarshaled, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_com& marshaled)
{
	Exception_t* ___Client_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Client' of type '__RpcParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Client_1Exception, NULL);
}
IL2CPP_EXTERN_C void __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshal_com_back(const __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_com& marshaled, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0& unmarshaled)
{
	Exception_t* ___Client_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Client' of type '__RpcParams'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Client_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.__RpcParams
IL2CPP_EXTERN_C void __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshal_com_cleanup(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.ConnectionRequestMessage/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m1AEAB0D5AA3124580CC49C04C7E29A2B3F0E1871 (U3CU3Ec__DisplayClass5_0_t53190F0516273DE80D409B08879CEEF434DFF9F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.ConnectionRequestMessage/<>c__DisplayClass5_0::<Handle>b__0(System.Boolean,System.Nullable`1<System.UInt32>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CHandleU3Eb__0_m412FB5FFF35928FE22CB0FFD32ACDA9F3D542811 (U3CU3Ec__DisplayClass5_0_t53190F0516273DE80D409B08879CEEF434DFF9F1 * __this, bool ___createPlayerObject0, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___playerPrefabHash1, bool ___approved2, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position3, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// var localCreatePlayerObject = createPlayerObject;
		bool L_0 = ___createPlayerObject0;
		V_0 = L_0;
		// networkManager.HandleApproval(senderId, localCreatePlayerObject, playerPrefabHash, approved,
		//     position, rotation);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1 = __this->get_networkManager_0();
		uint64_t L_2 = __this->get_senderId_1();
		bool L_3 = V_0;
		Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  L_4 = ___playerPrefabHash1;
		bool L_5 = ___approved2;
		Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  L_6 = ___position3;
		Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  L_7 = ___rotation4;
		NullCheck(L_1);
		NetworkManager_HandleApproval_m27A8DD1F735E383B8137B6366AAC77AE269C6128(L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC (HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC * __this, uint64_t ___senderClientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___messagePayload1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___senderClientId0, ___messagePayload1);

}
// System.Void Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleNamedMessageDelegate__ctor_mB866467B8D2A7FB42BD6BDA21F8FE636DFC5EAB9 (HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate::Invoke(System.UInt64,Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleNamedMessageDelegate_Invoke_mE7C293517F435C3B0A3428284F4796C021609E41 (HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC * __this, uint64_t ___senderClientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___messagePayload1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___senderClientId0, ___messagePayload1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___senderClientId0, ___messagePayload1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(targetMethod, targetThis, ___senderClientId0, ___messagePayload1);
					else
						GenericVirtActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(targetMethod, targetThis, ___senderClientId0, ___messagePayload1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___senderClientId0, ___messagePayload1);
					else
						VirtActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___senderClientId0, ___messagePayload1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___senderClientId0, ___messagePayload1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate::BeginInvoke(System.UInt64,Unity.Netcode.FastBufferReader,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleNamedMessageDelegate_BeginInvoke_mCC61FBB9E869BDB53275D2B075D7B5C9F823B770 (HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC * __this, uint64_t ___senderClientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___messagePayload1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___senderClientId0);
	__d_args[1] = Box(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var, &___messagePayload1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Netcode.CustomMessagingManager/HandleNamedMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleNamedMessageDelegate_EndInvoke_mF8FFC4E412722966F7117C279471F2C75FBB5BE0 (HandleNamedMessageDelegate_t8986DACDB18019979EE039D62718D5C5ABA760AC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 (UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * __this, uint64_t ___clientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___clientId0, ___reader1);

}
// System.Void Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageDelegate__ctor_mAE5439300D3027BD78C6A412DF27413278A82BED (UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate::Invoke(System.UInt64,Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageDelegate_Invoke_mF809DD074CCB4F80B8DFF76EBABFAEF8C03A304E (UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * __this, uint64_t ___clientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___reader1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___reader1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(targetMethod, targetThis, ___clientId0, ___reader1);
					else
						GenericVirtActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(targetMethod, targetThis, ___clientId0, ___reader1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___reader1);
					else
						VirtActionInvoker2< uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___reader1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___reader1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate::BeginInvoke(System.UInt64,Unity.Netcode.FastBufferReader,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnnamedMessageDelegate_BeginInvoke_mD1C0D4E007101D035391C25B78CD74AE4B931408 (UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * __this, uint64_t ___clientId0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = Box(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var, &___reader1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Netcode.CustomMessagingManager/UnnamedMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnnamedMessageDelegate_EndInvoke_m4199F2D8BA57FF676E991267D5CC50708FCE2D2B (UnnamedMessageDelegate_t6247169AE102D4C0DD5618C95430E83E83E5E278 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshal_pinvoke(const WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408& unmarshaled, WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_pinvoke& marshaled)
{
	marshaled.___BufferPointer_0 = unmarshaled.get_BufferPointer_0();
	marshaled.___Position_1 = unmarshaled.get_Position_1();
	marshaled.___Length_2 = unmarshaled.get_Length_2();
	marshaled.___Capacity_3 = unmarshaled.get_Capacity_3();
	marshaled.___MaxCapacity_4 = unmarshaled.get_MaxCapacity_4();
	marshaled.___Allocator_5 = unmarshaled.get_Allocator_5();
	marshaled.___BufferGrew_6 = static_cast<int32_t>(unmarshaled.get_BufferGrew_6());
}
IL2CPP_EXTERN_C void WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshal_pinvoke_back(const WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_pinvoke& marshaled, WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408& unmarshaled)
{
	unmarshaled.set_BufferPointer_0(marshaled.___BufferPointer_0);
	int32_t unmarshaled_Position_temp_1 = 0;
	unmarshaled_Position_temp_1 = marshaled.___Position_1;
	unmarshaled.set_Position_1(unmarshaled_Position_temp_1);
	int32_t unmarshaled_Length_temp_2 = 0;
	unmarshaled_Length_temp_2 = marshaled.___Length_2;
	unmarshaled.set_Length_2(unmarshaled_Length_temp_2);
	int32_t unmarshaled_Capacity_temp_3 = 0;
	unmarshaled_Capacity_temp_3 = marshaled.___Capacity_3;
	unmarshaled.set_Capacity_3(unmarshaled_Capacity_temp_3);
	int32_t unmarshaled_MaxCapacity_temp_4 = 0;
	unmarshaled_MaxCapacity_temp_4 = marshaled.___MaxCapacity_4;
	unmarshaled.set_MaxCapacity_4(unmarshaled_MaxCapacity_temp_4);
	int32_t unmarshaled_Allocator_temp_5 = 0;
	unmarshaled_Allocator_temp_5 = marshaled.___Allocator_5;
	unmarshaled.set_Allocator_5(unmarshaled_Allocator_temp_5);
	bool unmarshaled_BufferGrew_temp_6 = false;
	unmarshaled_BufferGrew_temp_6 = static_cast<bool>(marshaled.___BufferGrew_6);
	unmarshaled.set_BufferGrew_6(unmarshaled_BufferGrew_temp_6);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshal_pinvoke_cleanup(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshal_com(const WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408& unmarshaled, WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_com& marshaled)
{
	marshaled.___BufferPointer_0 = unmarshaled.get_BufferPointer_0();
	marshaled.___Position_1 = unmarshaled.get_Position_1();
	marshaled.___Length_2 = unmarshaled.get_Length_2();
	marshaled.___Capacity_3 = unmarshaled.get_Capacity_3();
	marshaled.___MaxCapacity_4 = unmarshaled.get_MaxCapacity_4();
	marshaled.___Allocator_5 = unmarshaled.get_Allocator_5();
	marshaled.___BufferGrew_6 = static_cast<int32_t>(unmarshaled.get_BufferGrew_6());
}
IL2CPP_EXTERN_C void WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshal_com_back(const WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_com& marshaled, WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408& unmarshaled)
{
	unmarshaled.set_BufferPointer_0(marshaled.___BufferPointer_0);
	int32_t unmarshaled_Position_temp_1 = 0;
	unmarshaled_Position_temp_1 = marshaled.___Position_1;
	unmarshaled.set_Position_1(unmarshaled_Position_temp_1);
	int32_t unmarshaled_Length_temp_2 = 0;
	unmarshaled_Length_temp_2 = marshaled.___Length_2;
	unmarshaled.set_Length_2(unmarshaled_Length_temp_2);
	int32_t unmarshaled_Capacity_temp_3 = 0;
	unmarshaled_Capacity_temp_3 = marshaled.___Capacity_3;
	unmarshaled.set_Capacity_3(unmarshaled_Capacity_temp_3);
	int32_t unmarshaled_MaxCapacity_temp_4 = 0;
	unmarshaled_MaxCapacity_temp_4 = marshaled.___MaxCapacity_4;
	unmarshaled.set_MaxCapacity_4(unmarshaled_MaxCapacity_temp_4);
	int32_t unmarshaled_Allocator_temp_5 = 0;
	unmarshaled_Allocator_temp_5 = marshaled.___Allocator_5;
	unmarshaled.set_Allocator_5(unmarshaled_Allocator_temp_5);
	bool unmarshaled_BufferGrew_temp_6 = false;
	unmarshaled_BufferGrew_temp_6 = static_cast<bool>(marshaled.___BufferGrew_6);
	unmarshaled.set_BufferGrew_6(unmarshaled_BufferGrew_temp_6);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.FastBufferWriter/WriterHandle
IL2CPP_EXTERN_C void WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshal_com_cleanup(WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.MessagingSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE4AB7ECBD65066227A6D0D018C4191C3452F83B8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * L_0 = (U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 *)il2cpp_codegen_object_new(U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9A2B6C378DBC65F0EADF5BF4DE2B6F35D4177122(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.MessagingSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9A2B6C378DBC65F0EADF5BF4DE2B6F35D4177122 (U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Netcode.MessagingSystem/<>c::<.ctor>b__23_0(Unity.Netcode.MessagingSystem/MessageWithHandler,Unity.Netcode.MessagingSystem/MessageWithHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__23_0_mAF9929490987C1BA6E67BABC01605B7328116733 (U3CU3Ec_t5E77241FCF8F5E2D03F7817EE27ACD9234179783 * __this, MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58  ___a0, MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58  ___b1, const RuntimeMethod* method)
{
	{
		// allowedTypes.Sort((a, b) => string.CompareOrdinal(a.MessageType.FullName, b.MessageType.FullName));
		MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58  L_0 = ___a0;
		Type_t * L_1 = L_0.get_MessageType_0();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58  L_3 = ___b1;
		Type_t * L_4 = L_3.get_MessageType_0();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_4);
		int32_t L_6;
		L_6 = String_CompareOrdinal_m1C7F94040504F35C89EBC8826D77FEA81B9C2C0E(L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 (MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * ___context1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___context1' to native representation
	NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke* ____context1_marshaled = NULL;
	NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshaled_pinvoke ____context1_marshaled_dereferenced = {};
	NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_marshal_pinvoke(*___context1, ____context1_marshaled_dereferenced);
	____context1_marshaled = &____context1_marshaled_dereferenced;

	// Native function invocation
	il2cppPInvokeFunc(___reader0, ____context1_marshaled);

}
// System.Void Unity.Netcode.MessagingSystem/MessageHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m2318863436D67210833BFCDCB31177C29291925D (MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.MessagingSystem/MessageHandler::Invoke(Unity.Netcode.FastBufferReader,Unity.Netcode.NetworkContext& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_Invoke_mFB06913C1BFAA79211AC7F006DF8700A77750D8F (MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * ___context1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___reader0, ___context1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___reader0, ___context1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * >::Invoke(targetMethod, targetThis, ___reader0, ___context1);
					else
						GenericVirtActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * >::Invoke(targetMethod, targetThis, ___reader0, ___context1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___reader0, ___context1);
					else
						VirtActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___reader0, ___context1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___reader0) - 1), ___context1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___reader0, ___context1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.MessagingSystem/MessageHandler::BeginInvoke(Unity.Netcode.FastBufferReader,Unity.Netcode.NetworkContext& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_BeginInvoke_mCF8C7A2991ED37C2954652D34D1B68B8118FD2AE (MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * ___context1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var, &___reader0);
	__d_args[1] = Box(NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720_il2cpp_TypeInfo_var, &*___context1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Netcode.MessagingSystem/MessageHandler::EndInvoke(Unity.Netcode.NetworkContext& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_EndInvoke_mD9D5C3D1793C40A76595602F6CFEAA676247D137 (MessageHandler_tE491512A6E9D3F62AB074D2D43228400BE0B1628 * __this, NetworkContext_tF569853E787392B2D1D504AAA9D88C7895FD3720 * ___context0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.MessagingSystem/MessageWithHandler
IL2CPP_EXTERN_C void MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshal_pinvoke(const MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58& unmarshaled, MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_pinvoke& marshaled)
{
	Exception_t* ___MessageType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MessageType' of type 'MessageWithHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MessageType_0Exception, NULL);
}
IL2CPP_EXTERN_C void MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshal_pinvoke_back(const MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_pinvoke& marshaled, MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58& unmarshaled)
{
	Exception_t* ___MessageType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MessageType' of type 'MessageWithHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MessageType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.MessagingSystem/MessageWithHandler
IL2CPP_EXTERN_C void MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshal_pinvoke_cleanup(MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.MessagingSystem/MessageWithHandler
IL2CPP_EXTERN_C void MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshal_com(const MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58& unmarshaled, MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_com& marshaled)
{
	Exception_t* ___MessageType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MessageType' of type 'MessageWithHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MessageType_0Exception, NULL);
}
IL2CPP_EXTERN_C void MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshal_com_back(const MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_com& marshaled, MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58& unmarshaled)
{
	Exception_t* ___MessageType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MessageType' of type 'MessageWithHandler': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MessageType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.MessagingSystem/MessageWithHandler
IL2CPP_EXTERN_C void MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshal_com_cleanup(MessageWithHandler_t3172BDCF88225A5604E9EDEEFD6904E1CA814F58_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Netcode.MessagingSystem/SendQueueItem
IL2CPP_EXTERN_C void SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshal_pinvoke(const SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3& unmarshaled, SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_pinvoke& marshaled)
{
	marshaled.___BatchHeader_0 = unmarshaled.get_BatchHeader_0();
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke(unmarshaled.get_Writer_1(), marshaled.___Writer_1);
	marshaled.___NetworkDelivery_2 = unmarshaled.get_NetworkDelivery_2();
}
IL2CPP_EXTERN_C void SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshal_pinvoke_back(const SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_pinvoke& marshaled, SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3& unmarshaled)
{
	BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  unmarshaled_BatchHeader_temp_0;
	memset((&unmarshaled_BatchHeader_temp_0), 0, sizeof(unmarshaled_BatchHeader_temp_0));
	unmarshaled_BatchHeader_temp_0 = marshaled.___BatchHeader_0;
	unmarshaled.set_BatchHeader_0(unmarshaled_BatchHeader_temp_0);
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  unmarshaled_Writer_temp_1;
	memset((&unmarshaled_Writer_temp_1), 0, sizeof(unmarshaled_Writer_temp_1));
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke_back(marshaled.___Writer_1, unmarshaled_Writer_temp_1);
	unmarshaled.set_Writer_1(unmarshaled_Writer_temp_1);
	int32_t unmarshaled_NetworkDelivery_temp_2 = 0;
	unmarshaled_NetworkDelivery_temp_2 = marshaled.___NetworkDelivery_2;
	unmarshaled.set_NetworkDelivery_2(unmarshaled_NetworkDelivery_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.MessagingSystem/SendQueueItem
IL2CPP_EXTERN_C void SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshal_pinvoke_cleanup(SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_pinvoke& marshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_pinvoke_cleanup(marshaled.___Writer_1);
}


// Conversion methods for marshalling of: Unity.Netcode.MessagingSystem/SendQueueItem
IL2CPP_EXTERN_C void SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshal_com(const SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3& unmarshaled, SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_com& marshaled)
{
	marshaled.___BatchHeader_0 = unmarshaled.get_BatchHeader_0();
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com(unmarshaled.get_Writer_1(), marshaled.___Writer_1);
	marshaled.___NetworkDelivery_2 = unmarshaled.get_NetworkDelivery_2();
}
IL2CPP_EXTERN_C void SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshal_com_back(const SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_com& marshaled, SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3& unmarshaled)
{
	BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511  unmarshaled_BatchHeader_temp_0;
	memset((&unmarshaled_BatchHeader_temp_0), 0, sizeof(unmarshaled_BatchHeader_temp_0));
	unmarshaled_BatchHeader_temp_0 = marshaled.___BatchHeader_0;
	unmarshaled.set_BatchHeader_0(unmarshaled_BatchHeader_temp_0);
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  unmarshaled_Writer_temp_1;
	memset((&unmarshaled_Writer_temp_1), 0, sizeof(unmarshaled_Writer_temp_1));
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com_back(marshaled.___Writer_1, unmarshaled_Writer_temp_1);
	unmarshaled.set_Writer_1(unmarshaled_Writer_temp_1);
	int32_t unmarshaled_NetworkDelivery_temp_2 = 0;
	unmarshaled_NetworkDelivery_temp_2 = marshaled.___NetworkDelivery_2;
	unmarshaled.set_NetworkDelivery_2(unmarshaled_NetworkDelivery_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.MessagingSystem/SendQueueItem
IL2CPP_EXTERN_C void SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshal_com_cleanup(SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3_marshaled_com& marshaled)
{
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F_marshal_com_cleanup(marshaled.___Writer_1);
}
// System.Void Unity.Netcode.MessagingSystem/SendQueueItem::.ctor(Unity.Netcode.NetworkDelivery,System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendQueueItem__ctor_mF508233B6D1099DFC6C2A6B9907B40019069B00D (SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3 * __this, int32_t ___delivery0, int32_t ___writerSize1, int32_t ___writerAllocator2, int32_t ___maxWriterSize3, const RuntimeMethod* method)
{
	{
		// Writer = new FastBufferWriter(writerSize, writerAllocator, maxWriterSize);
		int32_t L_0 = ___writerSize1;
		int32_t L_1 = ___writerAllocator2;
		int32_t L_2 = ___maxWriterSize3;
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_3;
		memset((&L_3), 0, sizeof(L_3));
		FastBufferWriter__ctor_mBC8F8F94C7FC952EFE4FA40E933B639F624B0FDE((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_Writer_1(L_3);
		// NetworkDelivery = delivery;
		int32_t L_4 = ___delivery0;
		__this->set_NetworkDelivery_2(L_4);
		// BatchHeader = default;
		BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511 * L_5 = __this->get_address_of_BatchHeader_0();
		il2cpp_codegen_initobj(L_5, sizeof(BatchHeader_t9DF1A736AA61B32AB623163046944DD88FE93511 ));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SendQueueItem__ctor_mF508233B6D1099DFC6C2A6B9907B40019069B00D_AdjustorThunk (RuntimeObject * __this, int32_t ___delivery0, int32_t ___writerSize1, int32_t ___writerAllocator2, int32_t ___maxWriterSize3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3 * _thisAdjusted = reinterpret_cast<SendQueueItem_tA1AD46681CCDDB2FF3884C3B0DD0C5BCA30994A3 *>(__this + _offset);
	SendQueueItem__ctor_mF508233B6D1099DFC6C2A6B9907B40019069B00D(_thisAdjusted, ___delivery0, ___writerSize1, ___writerAllocator2, ___maxWriterSize3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkBehaviour/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA7831F7AF155AB58C70D9F9DFCDA70048C66BDA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * L_0 = (U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A *)il2cpp_codegen_object_new(U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m576D7B6D9695DAF9B838FDD22CEE03533FFD7521(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m576D7B6D9695DAF9B838FDD22CEE03533FFD7521 (U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Netcode.NetworkBehaviour/<>c::<GetFieldInfoForTypeRecursive>b__50_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldInfoForTypeRecursiveU3Eb__50_0_m3398227CF630F1AA871771A6BFACE45A8D6EDE6B (U3CU3Ec_t43FD75E900F48CA51EC1DF0AB5F506F2C655473A * __this, FieldInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		// return list.OrderBy(x => x.Name, StringComparer.Ordinal).ToArray();
		FieldInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkConfig/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC7CA56F0E51E8D9F4BF8D32F6F01B2E76F616608 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * L_0 = (U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E *)il2cpp_codegen_object_new(U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m781B66BB3B268C52F807CAA7E28687191E0DB323(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m781B66BB3B268C52F807CAA7E28687191E0DB323 (U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 Unity.Netcode.NetworkConfig/<>c::<GetConfig>b__35_0(System.Collections.Generic.KeyValuePair`2<System.UInt32,Unity.Netcode.NetworkPrefab>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CU3Ec_U3CGetConfigU3Eb__35_0_mBEB9AB4CC4D518E2942893350B7558CE5DEF83EC (U3CU3Ec_tFDB787122872FD270BD859F74988E269A4FEE88E * __this, KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9B6ADCA3F1F5643CB0F458EC0ADFE0B87864CB22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var sortedDictionary = NetworkPrefabOverrideLinks.OrderBy(x => x.Key);
		uint32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m9B6ADCA3F1F5643CB0F458EC0ADFE0B87864CB22_inline((KeyValuePair_2_tC5CB8D0A49F33F69F3384A3674030234C3FC9AF8 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_m9B6ADCA3F1F5643CB0F458EC0ADFE0B87864CB22_RuntimeMethod_var);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApprovalTimeoutU3Ed__137__ctor_mC59A1C350816022D9AF191385061443DAF42D7AB (U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApprovalTimeoutU3Ed__137_System_IDisposable_Dispose_mFA76B9C0FA8834851A9816104715B855BA09650A (U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CApprovalTimeoutU3Ed__137_MoveNext_mC3645EECBD2F740C97650F19867F782A13E430E0 (U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t1A8431BF4FA7E1093A5988B619B87D5CB5926DDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2514C8C3D2C3A644AAEF8B2ACFA718E5BA204652);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * V_1 = NULL;
	NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// NetworkTime timeStarted = LocalTime;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_4 = V_1;
		NullCheck(L_4);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_5;
		L_5 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_4, /*hidden argument*/NULL);
		__this->set_U3CtimeStartedU3E5__2_4(L_5);
		goto IL_0043;
	}

IL_002c:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0043:
	{
		// while ((LocalTime - timeStarted).Time < NetworkConfig.ClientConnectionBufferTimeout && PendingClients.ContainsKey(clientId))
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_6 = V_1;
		NullCheck(L_6);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_7;
		L_7 = NetworkManager_get_LocalTime_mD2837DE69384E17E87ECABCD0A30B7619DA75998(L_6, /*hidden argument*/NULL);
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_8 = __this->get_U3CtimeStartedU3E5__2_4();
		NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A  L_9;
		L_9 = NetworkTime_op_Subtraction_m254DCCEF9F87AAD5BC245138D251FCD242D2C5A0(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		double L_10;
		L_10 = NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline((NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A *)(&V_2), /*hidden argument*/NULL);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_11 = V_1;
		NullCheck(L_11);
		NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * L_12 = L_11->get_NetworkConfig_34();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ClientConnectionBufferTimeout_7();
		if ((!(((double)L_10) < ((double)((double)((double)L_13))))))
		{
			goto IL_007d;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_14 = V_1;
		NullCheck(L_14);
		Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * L_15 = L_14->get_PendingClients_25();
		uint64_t L_16 = __this->get_clientId_3();
		NullCheck(L_15);
		bool L_17;
		L_17 = Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB(L_15, L_16, /*hidden argument*/Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_002c;
		}
	}

IL_007d:
	{
		// if (PendingClients.ContainsKey(clientId) && !ConnectedClients.ContainsKey(clientId))
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_18 = V_1;
		NullCheck(L_18);
		Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * L_19 = L_18->get_PendingClients_25();
		uint64_t L_20 = __this->get_clientId_3();
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB(L_19, L_20, /*hidden argument*/Dictionary_2_ContainsKey_m8A7D01EBC6A3041D5BADFE1012DC9927CEADB1DB_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_00d1;
		}
	}
	{
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_22 = V_1;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = NetworkManager_get_ConnectedClients_mDA6FFC9FFBB457A4ABE63B9F23644245FBDD2CD5(L_22, /*hidden argument*/NULL);
		uint64_t L_24 = __this->get_clientId_3();
		NullCheck(L_23);
		bool L_25;
		L_25 = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt64,Unity.Netcode.NetworkClient>::ContainsKey(!0) */, IReadOnlyDictionary_2_t1A8431BF4FA7E1093A5988B619B87D5CB5926DDE_il2cpp_TypeInfo_var, L_23, L_24);
		if (L_25)
		{
			goto IL_00d1;
		}
	}
	{
		// if (NetworkLog.CurrentLogLevel <= LogLevel.Developer)
		int32_t L_26;
		L_26 = NetworkLog_get_CurrentLogLevel_m2CFCA90F070D6AB0DD1407255BFFD4188349B862(/*hidden argument*/NULL);
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		// NetworkLog.LogInfo($"Client {clientId} Handshake Timed Out");
		uint64_t L_27 = __this->get_clientId_3();
		uint64_t L_28 = L_27;
		RuntimeObject * L_29 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2514C8C3D2C3A644AAEF8B2ACFA718E5BA204652, L_29, /*hidden argument*/NULL);
		NetworkLog_LogInfo_m2038B19CDF5719A86AC1B5BCBE9FF10F17333CBF(L_30, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// DisconnectClient(clientId);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_31 = V_1;
		uint64_t L_32 = __this->get_clientId_3();
		NullCheck(L_31);
		NetworkManager_DisconnectClient_m7467CEF3B69A5261DEC293A089F0FA6F4D9972D1(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d1:
	{
		// }
		return (bool)0;
	}
}
// System.Object Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CApprovalTimeoutU3Ed__137_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD70B022BF209E281E3A9131977E3017201567946 (U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CApprovalTimeoutU3Ed__137_System_Collections_IEnumerator_Reset_m3A81234311208401F21C6513E29A5FBFA768C7A7 (U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CApprovalTimeoutU3Ed__137_System_Collections_IEnumerator_Reset_m3A81234311208401F21C6513E29A5FBFA768C7A7_RuntimeMethod_var)));
	}
}
// System.Object Unity.Netcode.NetworkManager/<ApprovalTimeout>d__137::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CApprovalTimeoutU3Ed__137_System_Collections_IEnumerator_get_Current_m970AB928E11E9A3A5A038F6FBA8D9EE3659226D5 (U3CApprovalTimeoutU3Ed__137_t06F131C35C8442FAD7EA9A6CD9E5D295655B7670 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkManager/ConnectionApprovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedDelegate__ctor_mE2F3956922BA20045A7B4DB5A1962E420C3571A9 (ConnectionApprovedDelegate_tFEAFB36F7DD2FDE1DECA092B9BC1F65AF9FAB5F5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkManager/ConnectionApprovedDelegate::Invoke(System.Boolean,System.Nullable`1<System.UInt32>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedDelegate_Invoke_m2834B9938EB56628EDC209222736AB7790334B23 (ConnectionApprovedDelegate_tFEAFB36F7DD2FDE1DECA092B9BC1F65AF9FAB5F5 * __this, bool ___createPlayerObject0, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___playerPrefabHash1, bool ___approved2, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position3, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(targetMethod, targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
					else
						GenericVirtActionInvoker5< bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(targetMethod, targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
					else
						VirtActionInvoker5< bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9 , bool, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 , Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___createPlayerObject0, ___playerPrefabHash1, ___approved2, ___position3, ___rotation4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkManager/ConnectionApprovedDelegate::BeginInvoke(System.Boolean,System.Nullable`1<System.UInt32>,System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionApprovedDelegate_BeginInvoke_mD89DC1DA63EE528F0BE535C87355C7CC9A76B887 (ConnectionApprovedDelegate_tFEAFB36F7DD2FDE1DECA092B9BC1F65AF9FAB5F5 * __this, bool ___createPlayerObject0, Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9  ___playerPrefabHash1, bool ___approved2, Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___position3, Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___rotation4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___createPlayerObject0);
	__d_args[1] = Box(Nullable_1_tF836BDAF0600F260DE9037E2ABABEFBD4E091FF9_il2cpp_TypeInfo_var, &___playerPrefabHash1);
	__d_args[2] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___approved2);
	__d_args[3] = Box(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258_il2cpp_TypeInfo_var, &___position3);
	__d_args[4] = Box(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1_il2cpp_TypeInfo_var, &___rotation4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Unity.Netcode.NetworkManager/ConnectionApprovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionApprovedDelegate_EndInvoke_m380B7A40728C339D3AE5FA01600380381C106629 (ConnectionApprovedDelegate_tFEAFB36F7DD2FDE1DECA092B9BC1F65AF9FAB5F5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::.ctor(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks__ctor_m710E17E12C60BB3DA53617DA3CAC78651197E22B (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___manager0, const RuntimeMethod* method)
{
	{
		// internal NetworkManagerHooks(NetworkManager manager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_NetworkManager = manager;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0 = ___manager0;
		__this->set_m_NetworkManager_0(L_0);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnBeforeSendMessage(System.UInt64,System.Type,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnBeforeSendMessage_mA229ECA77D4997F060616390C7762BFC474CF429 (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___clientId0, Type_t * ___messageType1, int32_t ___delivery2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnAfterSendMessage(System.UInt64,System.Type,Unity.Netcode.NetworkDelivery,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnAfterSendMessage_mA7AC33FAF25318CD83CE4313882B3D0C550C8E19 (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___clientId0, Type_t * ___messageType1, int32_t ___delivery2, int32_t ___messageSizeBytes3, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnBeforeReceiveMessage(System.UInt64,System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnBeforeReceiveMessage_m5DBE0FC9D05C7A07D333C7E41571422B33A45347 (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___senderId0, Type_t * ___messageType1, int32_t ___messageSizeBytes2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnAfterReceiveMessage(System.UInt64,System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnAfterReceiveMessage_mCED896E0B8B9CB9648963C60F3A858724C1735DC (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___senderId0, Type_t * ___messageType1, int32_t ___messageSizeBytes2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnBeforeSendBatch(System.UInt64,System.Int32,System.Int32,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnBeforeSendBatch_mE9B152A79D505D990C3FA7E0DF1BA3778C2630C0 (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___clientId0, int32_t ___messageCount1, int32_t ___batchSizeInBytes2, int32_t ___delivery3, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnAfterSendBatch(System.UInt64,System.Int32,System.Int32,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnAfterSendBatch_m999C760E0A9EB0211ACDF744DF2C84747B5FD32B (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___clientId0, int32_t ___messageCount1, int32_t ___batchSizeInBytes2, int32_t ___delivery3, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnBeforeReceiveBatch(System.UInt64,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnBeforeReceiveBatch_m452744CC853E7B0F86FA2F701439C6547A14B7DD (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___senderId0, int32_t ___messageCount1, int32_t ___batchSizeInBytes2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnAfterReceiveBatch(System.UInt64,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnAfterReceiveBatch_m215849E2EC716E9FB3159DFF8F4C98228787BE96 (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___senderId0, int32_t ___messageCount1, int32_t ___batchSizeInBytes2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.NetworkManager/NetworkManagerHooks::OnVerifyCanSend(System.UInt64,System.Type,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManagerHooks_OnVerifyCanSend_m332DB45A9AF5771AC7C447E88006D3654FAC2B03 (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___destinationId0, Type_t * ___messageType1, int32_t ___delivery2, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Netcode.NetworkManager/NetworkManagerHooks::OnVerifyCanReceive(System.UInt64,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManagerHooks_OnVerifyCanReceive_m6348708094E68BD046CE37C3419EE99C7473FA1D (NetworkManagerHooks_t8117DCF7E52BAAB16918FF9673B45612AB06C080 * __this, uint64_t ___senderId0, Type_t * ___messageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionRequestMessage_tE6434579E90D8FFC34A54B5C9B69EEED04200510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9A7C21111FB8DEAB4D7C40DD8396EDAB77D42A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6922F81A9A337C75D6D025B8AA42856F0AE97847);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE78B7F6B33AAFB082F1AB4C0EA89E2B914362A90);
		s_Il2CppMethodInitialized = true;
	}
	PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B * V_0 = NULL;
	{
		// if (m_NetworkManager.PendingClients.TryGetValue(senderId, out PendingClient client) &&
		//        (client.ConnectionState == PendingClient.State.PendingApproval ||
		//         (client.ConnectionState == PendingClient.State.PendingConnection &&
		//          messageType != typeof(ConnectionRequestMessage))))
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0 = __this->get_m_NetworkManager_0();
		NullCheck(L_0);
		Dictionary_2_t5EA523D4002B09157410203A5CC48504A1022543 * L_1 = L_0->get_PendingClients_25();
		uint64_t L_2 = ___senderId0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m9A7C21111FB8DEAB4D7C40DD8396EDAB77D42A92(L_1, L_2, (PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9A7C21111FB8DEAB4D7C40DD8396EDAB77D42A92_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_005d;
		}
	}
	{
		PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = PendingClient_get_ConnectionState_m0CD1231B5AD18C236A239CB878617430DFA52A66_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = PendingClient_get_ConnectionState_m0CD1231B5AD18C236A239CB878617430DFA52A66_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		Type_t * L_8 = ___messageType1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (ConnectionRequestMessage_tE6434579E90D8FFC34A54B5C9B69EEED04200510_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005d;
		}
	}

IL_0038:
	{
		// if (NetworkLog.CurrentLogLevel <= LogLevel.Normal)
		int32_t L_12;
		L_12 = NetworkLog_get_CurrentLogLevel_m2CFCA90F070D6AB0DD1407255BFFD4188349B862(/*hidden argument*/NULL);
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		// NetworkLog.LogWarning($"Message received from {nameof(senderId)}={senderId.ToString()} before it has been accepted");
		String_t* L_13;
		L_13 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&___senderId0), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6922F81A9A337C75D6D025B8AA42856F0AE97847, L_13, _stringLiteralE78B7F6B33AAFB082F1AB4C0EA89E2B914362A90, /*hidden argument*/NULL);
		NetworkLog_LogWarning_m7E5C45DCDE429345CCAC7C8EB7AAF02780160C40(L_14, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// return false;
		return (bool)0;
	}

IL_005d:
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkManager/NetworkManagerMessageSender::.ctor(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerMessageSender__ctor_m3B829A1A53EB87671FF8BEF5AC586956EF85A10F (NetworkManagerMessageSender_t248B0EFB77A8FD14920CE715EA642E695F754B30 * __this, NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * ___manager0, const RuntimeMethod* method)
{
	{
		// public NetworkManagerMessageSender(NetworkManager manager)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_NetworkManager = manager;
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_0 = ___manager0;
		__this->set_m_NetworkManager_0(L_0);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerMessageSender::Send(System.UInt64,Unity.Netcode.NetworkDelivery,Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerMessageSender_Send_mC6E5F18E94653F2657CC4D9EA68D487F74D128C7 (NetworkManagerMessageSender_t248B0EFB77A8FD14920CE715EA642E695F754B30 * __this, uint64_t ___clientId0, int32_t ___delivery1, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___batchData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var length = batchData.Length;
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___batchData2), /*hidden argument*/NULL);
		V_0 = L_0;
		// var bytes = batchData.ToArray();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = FastBufferWriter_ToArray_m20A12CE89DE19E17D9F4D3281D535E9187283999_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___batchData2), /*hidden argument*/NULL);
		V_1 = L_1;
		// var sendBuffer = new ArraySegment<byte>(bytes, 0, length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_1;
		int32_t L_3 = V_0;
		ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_2), L_2, 0, L_3, /*hidden argument*/ArraySegment_1__ctor_mAA780E22BB5AE07078510EDCE524DD1EA1E98E0D_RuntimeMethod_var);
		// m_NetworkManager.NetworkConfig.NetworkTransport.Send(clientId, sendBuffer, delivery);
		NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * L_4 = __this->get_m_NetworkManager_0();
		NullCheck(L_4);
		NetworkConfig_tB201D3E0EDE895F4881F7D73FC7BBB0791002A50 * L_5 = L_4->get_NetworkConfig_34();
		NullCheck(L_5);
		NetworkTransport_t266C127A76D837CDB1DEB97617279D54A598CAFC * L_6 = L_5->get_NetworkTransport_1();
		uint64_t L_7 = ___clientId0;
		ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  L_8 = V_2;
		int32_t L_9 = ___delivery1;
		NullCheck(L_6);
		VirtActionInvoker3< uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , int32_t >::Invoke(6 /* System.Void Unity.Netcode.NetworkTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery) */, L_6, L_7, L_8, L_9);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler__ctor_m03B70FB2D763FACEB7FCA76AD8446403F7394121 (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::Invoke(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler_Invoke_m5FFF8BF7F4A17C6297BAF5D141C38BF23FEF128F (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * __this, NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___behaviour0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  ___parameters2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___behaviour0, ___reader1, ___parameters2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___behaviour0, ___reader1, ___parameters2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(targetMethod, ___behaviour0, ___reader1, ___parameters2);
					else
						GenericVirtActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(targetMethod, ___behaviour0, ___reader1, ___parameters2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___behaviour0, ___reader1, ___parameters2);
					else
						VirtActionInvoker2< FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___behaviour0, ___reader1, ___parameters2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___behaviour0, ___reader1, ___parameters2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(targetMethod, targetThis, ___behaviour0, ___reader1, ___parameters2);
					else
						GenericVirtActionInvoker3< NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(targetMethod, targetThis, ___behaviour0, ___reader1, ___parameters2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___behaviour0, ___reader1, ___parameters2);
					else
						VirtActionInvoker3< NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___behaviour0, ___reader1, ___parameters2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___behaviour0, ___reader1, ___parameters2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 *, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 , __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___behaviour0, ___reader1, ___parameters2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkManager/RpcReceiveHandler::BeginInvoke(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RpcReceiveHandler_BeginInvoke_mA0957D2AAC3B19B765CFBB308447923A76AD199E (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * __this, NetworkBehaviour_tD868121709F09D691BC26E95079320EFF02C25E9 * ___behaviour0, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader1, __RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0  ___parameters2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___behaviour0;
	__d_args[1] = Box(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855_il2cpp_TypeInfo_var, &___reader1);
	__d_args[2] = Box(__RpcParams_tDB418E0017F442FB58F149B765474A3CB2F1E4D0_il2cpp_TypeInfo_var, &___parameters2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler_EndInvoke_mE8AAE0B27C5A24AFF4A4292B65856283453E0AE3 (RpcReceiveHandler_t557F242682F5F4E028435AD635F12B902F6A7188 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Netcode.NetworkObject/SceneObject
IL2CPP_EXTERN_C void SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshal_pinvoke(const SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2& unmarshaled, SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___LatestParent_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LatestParent' of type 'SceneObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LatestParent_4Exception, NULL);
}
IL2CPP_EXTERN_C void SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshal_pinvoke_back(const SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_pinvoke& marshaled, SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2& unmarshaled)
{
	Exception_t* ___LatestParent_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LatestParent' of type 'SceneObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LatestParent_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.NetworkObject/SceneObject
IL2CPP_EXTERN_C void SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshal_pinvoke_cleanup(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Netcode.NetworkObject/SceneObject
IL2CPP_EXTERN_C void SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshal_com(const SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2& unmarshaled, SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_com& marshaled)
{
	Exception_t* ___LatestParent_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LatestParent' of type 'SceneObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LatestParent_4Exception, NULL);
}
IL2CPP_EXTERN_C void SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshal_com_back(const SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_com& marshaled, SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2& unmarshaled)
{
	Exception_t* ___LatestParent_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'LatestParent' of type 'SceneObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___LatestParent_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.NetworkObject/SceneObject
IL2CPP_EXTERN_C void SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshal_com_cleanup(SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2_marshaled_com& marshaled)
{
}
// System.Void Unity.Netcode.NetworkObject/SceneObject::Serialize(Unity.Netcode.FastBufferWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneObject_Serialize_m59FE9759E5F0D773FB6DCCD0992CDC5B37465F52 (SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint32_t G_B2_0 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B2_1 = NULL;
	uint32_t G_B1_0 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B7_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B12_2 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B9_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * G_B11_3 = NULL;
	{
		// if (!writer.TryBeginWrite(
		//     sizeof(HeaderData) +
		//     (Header.HasParent ? FastBufferWriter.GetWriteSize(ParentObjectId) : 0) +
		//     (Header.HasTransform ? FastBufferWriter.GetWriteSize(Transform) : 0) +
		//     (Header.IsReparented
		//         ? FastBufferWriter.GetWriteSize(IsLatestParentSet) +
		//           (IsLatestParentSet ? FastBufferWriter.GetWriteSize<ulong>() : 0)
		//         : 0)))
		uint32_t L_0 = sizeof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 );
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_1 = __this->get_address_of_Header_0();
		bool L_2 = L_1->get_HasParent_4();
		G_B1_0 = L_0;
		G_B1_1 = (&___writer0);
		if (L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = (&___writer0);
			goto IL_0018;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0023;
	}

IL_0018:
	{
		uint64_t* L_3 = __this->get_address_of_ParentObjectId_1();
		int32_t L_4;
		L_4 = FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_inline((uint64_t*)L_3, /*hidden argument*/FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0023:
	{
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_5 = __this->get_address_of_Header_0();
		bool L_6 = L_5->get_HasTransform_6();
		G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		G_B4_1 = G_B3_2;
		if (L_6)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
			G_B5_1 = G_B3_2;
			goto IL_0034;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_003f;
	}

IL_0034:
	{
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_7 = __this->get_address_of_Transform_2();
		int32_t L_8;
		L_8 = FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_inline((TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)L_7, /*hidden argument*/FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_RuntimeMethod_var);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_003f:
	{
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_9 = __this->get_address_of_Header_0();
		bool L_10 = L_9->get_IsReparented_7();
		G_B7_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
		G_B7_1 = G_B6_2;
		if (L_10)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
			G_B8_1 = G_B6_2;
			goto IL_0050;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B7_0;
		G_B12_2 = G_B7_1;
		goto IL_006c;
	}

IL_0050:
	{
		bool* L_11 = __this->get_address_of_IsLatestParentSet_3();
		int32_t L_12;
		L_12 = FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_inline((bool*)L_11, /*hidden argument*/FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_RuntimeMethod_var);
		bool L_13 = __this->get_IsLatestParentSet_3();
		G_B9_0 = L_12;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_13)
		{
			G_B10_0 = L_12;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_0066;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_006b;
	}

IL_0066:
	{
		int32_t L_14;
		L_14 = FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134(/*hidden argument*/FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m3215172FFCA6E94DF5E7F5C0E26916E98AC7B134_RuntimeMethod_var);
		G_B11_0 = L_14;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_006b:
	{
		G_B12_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B11_1, (int32_t)G_B11_0));
		G_B12_1 = G_B11_2;
		G_B12_2 = G_B11_3;
	}

IL_006c:
	{
		bool L_15;
		L_15 = FastBufferWriter_TryBeginWrite_mC38DB25F29B37C869E3A451D8AADACF3E581BAB2_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)G_B12_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B12_1, (int32_t)G_B12_0)), /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007f;
		}
	}
	{
		// throw new OverflowException("Could not serialize SceneObject: Out of buffer space.");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_16 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD99068CFC59109D2E8BA25A246001B969DCA6A54)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneObject_Serialize_m59FE9759E5F0D773FB6DCCD0992CDC5B37465F52_RuntimeMethod_var)));
	}

IL_007f:
	{
		// writer.WriteValue(Header);
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_17 = __this->get_address_of_Header_0();
		FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)L_17, /*hidden argument*/FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_RuntimeMethod_var);
		// if (Header.HasParent)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_18 = __this->get_address_of_Header_0();
		bool L_19 = L_18->get_HasParent_4();
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		// writer.WriteValue(ParentObjectId);
		uint64_t* L_20 = __this->get_address_of_ParentObjectId_1();
		FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (uint64_t*)L_20, /*hidden argument*/FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_RuntimeMethod_var);
	}

IL_00a6:
	{
		// if (Header.HasTransform)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_21 = __this->get_address_of_Header_0();
		bool L_22 = L_21->get_HasTransform_6();
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// writer.WriteValue(Transform);
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_23 = __this->get_address_of_Transform_2();
		FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)L_23, /*hidden argument*/FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_RuntimeMethod_var);
	}

IL_00c0:
	{
		// if (Header.IsReparented)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_24 = __this->get_address_of_Header_0();
		bool L_25 = L_24->get_IsReparented_7();
		if (!L_25)
		{
			goto IL_00f7;
		}
	}
	{
		// writer.WriteValue(IsLatestParentSet);
		bool* L_26 = __this->get_address_of_IsLatestParentSet_3();
		FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (bool*)L_26, /*hidden argument*/FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_RuntimeMethod_var);
		// if (IsLatestParentSet)
		bool L_27 = __this->get_IsLatestParentSet_3();
		if (!L_27)
		{
			goto IL_00f7;
		}
	}
	{
		// writer.WriteValue((ulong)LatestParent);
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C * L_28 = __this->get_address_of_LatestParent_4();
		uint64_t L_29;
		L_29 = Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB((Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C *)L_28, /*hidden argument*/Nullable_1_get_Value_m90FA9FBA39DBC4811AB9700983A957D5F2845EAB_RuntimeMethod_var);
		V_0 = L_29;
		FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)(&___writer0), (uint64_t*)(&V_0), /*hidden argument*/FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_RuntimeMethod_var);
	}

IL_00f7:
	{
		// if (Header.HasNetworkVariables)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_30 = __this->get_address_of_Header_0();
		bool L_31 = L_30->get_HasNetworkVariables_8();
		if (!L_31)
		{
			goto IL_0116;
		}
	}
	{
		// OwnerObject.WriteNetworkVariableData(writer, TargetClientId);
		NetworkObject_tEC0CA34AA83DC1E21CEBAFE6C9F6289A7D9F1F6D * L_32 = __this->get_OwnerObject_5();
		FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  L_33 = ___writer0;
		uint64_t L_34 = __this->get_TargetClientId_6();
		NullCheck(L_32);
		NetworkObject_WriteNetworkVariableData_m09FB47BF751F7767D5A67A34B2788C5D2D55FF5F(L_32, L_33, L_34, /*hidden argument*/NULL);
	}

IL_0116:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SceneObject_Serialize_m59FE9759E5F0D773FB6DCCD0992CDC5B37465F52_AdjustorThunk (RuntimeObject * __this, FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F  ___writer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 * _thisAdjusted = reinterpret_cast<SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 *>(__this + _offset);
	SceneObject_Serialize_m59FE9759E5F0D773FB6DCCD0992CDC5B37465F52(_thisAdjusted, ___writer0, method);
}
// System.Void Unity.Netcode.NetworkObject/SceneObject::Deserialize(Unity.Netcode.FastBufferReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05 (SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B4_0 = NULL;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B7_1 = NULL;
	int32_t G_B6_0 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B6_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * G_B11_2 = NULL;
	{
		// if (!reader.TryBeginRead(sizeof(HeaderData)))
		uint32_t L_0 = sizeof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 );
		bool L_1;
		L_1 = FastBufferReader_TryBeginRead_m718713B1DDC33A4A9BBF4250251C7B454E2C2029_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new OverflowException("Could not deserialize SceneObject: Out of buffer space.");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AB810084CF0ED1E9C96AD387294061DA9D88055)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05_RuntimeMethod_var)));
	}

IL_001a:
	{
		// reader.ReadValue(out Header);
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_3 = __this->get_address_of_Header_0();
		FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)L_3, /*hidden argument*/FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_RuntimeMethod_var);
		// if (!reader.TryBeginRead(
		//     (Header.HasParent ? FastBufferWriter.GetWriteSize(ParentObjectId) : 0) +
		//     (Header.HasTransform ? FastBufferWriter.GetWriteSize(Transform) : 0) +
		//     (Header.IsReparented ? FastBufferWriter.GetWriteSize(IsLatestParentSet) : 0)))
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_4 = __this->get_address_of_Header_0();
		bool L_5 = L_4->get_HasParent_4();
		G_B3_0 = (&___reader0);
		if (L_5)
		{
			G_B4_0 = (&___reader0);
			goto IL_0039;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0044;
	}

IL_0039:
	{
		uint64_t* L_6 = __this->get_address_of_ParentObjectId_1();
		int32_t L_7;
		L_7 = FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_inline((uint64_t*)L_6, /*hidden argument*/FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_RuntimeMethod_var);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0044:
	{
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_8 = __this->get_address_of_Header_0();
		bool L_9 = L_8->get_HasTransform_6();
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (L_9)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0054;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_005f;
	}

IL_0054:
	{
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_10 = __this->get_address_of_Transform_2();
		int32_t L_11;
		L_11 = FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_inline((TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)L_10, /*hidden argument*/FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_RuntimeMethod_var);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_005f:
	{
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_12 = __this->get_address_of_Header_0();
		bool L_13 = L_12->get_IsReparented_7();
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B8_1, (int32_t)G_B8_0));
		G_B9_1 = G_B8_2;
		if (L_13)
		{
			G_B10_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B8_1, (int32_t)G_B8_0));
			G_B10_1 = G_B8_2;
			goto IL_0070;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_007b;
	}

IL_0070:
	{
		bool* L_14 = __this->get_address_of_IsLatestParentSet_3();
		int32_t L_15;
		L_15 = FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_inline((bool*)L_14, /*hidden argument*/FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_RuntimeMethod_var);
		G_B11_0 = L_15;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_007b:
	{
		bool L_16;
		L_16 = FastBufferReader_TryBeginRead_m718713B1DDC33A4A9BBF4250251C7B454E2C2029_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)G_B11_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B11_1, (int32_t)G_B11_0)), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_008e;
		}
	}
	{
		// throw new OverflowException("Could not deserialize SceneObject: Out of buffer space.");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_17 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AB810084CF0ED1E9C96AD387294061DA9D88055)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05_RuntimeMethod_var)));
	}

IL_008e:
	{
		// if (Header.HasParent)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_18 = __this->get_address_of_Header_0();
		bool L_19 = L_18->get_HasParent_4();
		if (!L_19)
		{
			goto IL_00a8;
		}
	}
	{
		// reader.ReadValue(out ParentObjectId);
		uint64_t* L_20 = __this->get_address_of_ParentObjectId_1();
		FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (uint64_t*)L_20, /*hidden argument*/FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_RuntimeMethod_var);
	}

IL_00a8:
	{
		// if (Header.HasTransform)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_21 = __this->get_address_of_Header_0();
		bool L_22 = L_21->get_HasTransform_6();
		if (!L_22)
		{
			goto IL_00c2;
		}
	}
	{
		// reader.ReadValue(out Transform);
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_23 = __this->get_address_of_Transform_2();
		FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)L_23, /*hidden argument*/FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_RuntimeMethod_var);
	}

IL_00c2:
	{
		// if (Header.IsReparented)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_24 = __this->get_address_of_Header_0();
		bool L_25 = L_24->get_IsReparented_7();
		if (!L_25)
		{
			goto IL_00f9;
		}
	}
	{
		// reader.ReadValue(out IsLatestParentSet);
		bool* L_26 = __this->get_address_of_IsLatestParentSet_3();
		FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (bool*)L_26, /*hidden argument*/FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_RuntimeMethod_var);
		// if (IsLatestParentSet)
		bool L_27 = __this->get_IsLatestParentSet_3();
		if (!L_27)
		{
			goto IL_00f9;
		}
	}
	{
		// reader.ReadValueSafe(out ulong latestParent);
		FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(&___reader0), (uint64_t*)(&V_0), /*hidden argument*/FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_RuntimeMethod_var);
		// LatestParent = latestParent;
		uint64_t L_28 = V_0;
		Nullable_1_t6D01EC45AFF535504EEB5FD3A877B3C71573F69C  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D((&L_29), L_28, /*hidden argument*/Nullable_1__ctor_mD8A1120D15C55A920006A55BF25539E1627CAB1D_RuntimeMethod_var);
		__this->set_LatestParent_4(L_29);
	}

IL_00f9:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05_AdjustorThunk (RuntimeObject * __this, FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855  ___reader0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 * _thisAdjusted = reinterpret_cast<SceneObject_t3EA8FFA9A7BB80461C76A476576F3B93BEC5E6D2 *>(__this + _offset);
	SceneObject_Deserialize_mF40EFE842ACE04EB934D901A0ED89B48419BDF05(_thisAdjusted, ___reader0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 (SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___clientId0);

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Netcode.NetworkObject/SpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_mA1EEA555A2F05884BD1A10EC107D895D107380EB (SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Netcode.NetworkObject/SpawnDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnDelegate_Invoke_m08E5BDC7DA3CE4768A82E1C258553438A79D731A (SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						result = GenericVirtFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						result = VirtFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Netcode.NetworkObject/SpawnDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_m24D71E5FE0505E3EEDF747B457CCCDDBEB67EEA8 (SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean Unity.Netcode.NetworkObject/SpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnDelegate_EndInvoke_mCB4EE668A6965C0F0F111579397F35FC2BE3C37B (SpawnDelegate_t88AAF8867947FBCC974A74785058BF9527154471 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 (VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___clientId0);

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Netcode.NetworkObject/VisibilityDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisibilityDelegate__ctor_m8CC9E0B24EEF71090376F41700A95EA32E6C71FF (VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Netcode.NetworkObject/VisibilityDelegate::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibilityDelegate_Invoke_m94BFEE97FA79B76B7595A645FDBC56A34A80898E (VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						result = GenericVirtFuncInvoker1< bool, uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						result = VirtFuncInvoker1< bool, uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Netcode.NetworkObject/VisibilityDelegate::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisibilityDelegate_BeginInvoke_m5DB4379DA6D41D12B55691B0DA1D67CA2E226B3E (VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean Unity.Netcode.NetworkObject/VisibilityDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisibilityDelegate_EndInvoke_m669180A512F999171B27FC5D5E120BD6021384AD (VisibilityDelegate_t2551F353EEBE65855F13D1A5A107C8F625D5F6D1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkSceneManager/<>c__DisplayClass80_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0__ctor_m9B77105DE0538C5CB83282CA26FEDE8C1FDA6BDF (U3CU3Ec__DisplayClass80_0_t2136FA7DEA6542FE2F9B5A849CB7E3758B6FE104 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkSceneManager/<>c__DisplayClass80_0::<OnClientUnloadScene>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0_U3COnClientUnloadSceneU3Eb__0_mC9980BFAD11F4667416F6B26C6BD3DD58CD364F5 (U3CU3Ec__DisplayClass80_0_t2136FA7DEA6542FE2F9B5A849CB7E3758B6FE104 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOp20, const RuntimeMethod* method)
{
	{
		// sceneUnload.completed += asyncOp2 => OnSceneUnloaded(sceneEventId);
		NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * L_0 = __this->get_U3CU3E4__this_0();
		uint32_t L_1 = __this->get_sceneEventId_1();
		NullCheck(L_0);
		NetworkSceneManager_OnSceneUnloaded_m042A3C83C14E12CF87215054B29989EBF890533F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0__ctor_m3D55F63488051B46E935DF33BC02429BA1DA20A2 (U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkSceneManager/<>c__DisplayClass84_0::<OnClientSceneLoadingEvent>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass84_0_U3COnClientSceneLoadingEventU3Eb__0_mEEA883ABD70CE7EB610657060D5DFDA02FBC6A5B (U3CU3Ec__DisplayClass84_0_t633983ACFD52F34698CA1AA9320F802D9672E982 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOp20, const RuntimeMethod* method)
{
	{
		// sceneLoad.completed += asyncOp2 => OnSceneLoaded(sceneEventId, sceneName);
		NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * L_0 = __this->get_U3CU3E4__this_0();
		uint32_t L_1 = __this->get_sceneEventId_1();
		String_t* L_2 = __this->get_sceneName_2();
		NullCheck(L_0);
		NetworkSceneManager_OnSceneLoaded_mA873850C9E18414304C9C749A06982DF8A855AAB(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0__ctor_m7422A6B53DFE6D1ECF205B05D0B6340881F795B1 (U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkSceneManager/<>c__DisplayClass89_0::<OnClientBeginSync>b__0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0_U3COnClientBeginSyncU3Eb__0_m4ECA2C0CCE69DE32E4AFB065D2360B6EA036EFB7 (U3CU3Ec__DisplayClass89_0_tC6B90D6A2FACA6DBDB1155F206752CBA00B3F1BD * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOp20, const RuntimeMethod* method)
{
	{
		// sceneLoad.completed += asyncOp2 => ClientLoadedSynchronization(sceneEventId, sceneHash, sceneHandle);
		NetworkSceneManager_tEC3D5513F3A8565928EF9477E828E3949B78149A * L_0 = __this->get_U3CU3E4__this_0();
		uint32_t L_1 = __this->get_sceneEventId_1();
		uint32_t L_2 = __this->get_sceneHash_2();
		int32_t L_3 = __this->get_sceneHandle_3();
		NullCheck(L_0);
		NetworkSceneManager_ClientLoadedSynchronization_m7B87BCF02D9F469B6C0DC5C8AA495DC1DAB176FF(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEventCompletedDelegateHandler__ctor_m803B55574FCC7BE99BF40222C728BBC6F07DE672 (OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler::Invoke(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Collections.Generic.List`1<System.UInt64>,System.Collections.Generic.List`1<System.UInt64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEventCompletedDelegateHandler_Invoke_m9BB069B34B59BF4177112A84C6E841ADE523E1D8 (OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * __this, String_t* ___sceneName0, int32_t ___loadSceneMode1, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___clientsCompleted2, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___clientsTimedOut3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(targetMethod, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
					else
						GenericVirtActionInvoker3< int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(targetMethod, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
					else
						VirtActionInvoker3< int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(targetMethod, targetThis, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
					else
						GenericVirtActionInvoker4< String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(targetMethod, targetThis, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
					else
						VirtActionInvoker4< String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneName0, ___loadSceneMode1, ___clientsCompleted2, ___clientsTimedOut3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler::BeginInvoke(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Collections.Generic.List`1<System.UInt64>,System.Collections.Generic.List`1<System.UInt64>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnEventCompletedDelegateHandler_BeginInvoke_mA78E511FF8FC735B1F190DA22061891E8D814AE7 (OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * __this, String_t* ___sceneName0, int32_t ___loadSceneMode1, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___clientsCompleted2, List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___clientsTimedOut3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___sceneName0;
	__d_args[1] = Box(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var, &___loadSceneMode1);
	__d_args[2] = ___clientsCompleted2;
	__d_args[3] = ___clientsTimedOut3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnEventCompletedDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEventCompletedDelegateHandler_EndInvoke_mBB18A86DCAC251153FB4CEA70F60D9EC92D92F48 (OnEventCompletedDelegateHandler_t31C4DB3142D9B55479C839CBF7D6D17D063A9D61 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 (OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * __this, uint64_t ___clientId0, String_t* ___sceneName1, int32_t ___loadSceneMode2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___sceneName1' to native representation
	char* ____sceneName1_marshaled = NULL;
	____sceneName1_marshaled = il2cpp_codegen_marshal_string(___sceneName1);

	// Native function invocation
	il2cppPInvokeFunc(___clientId0, ____sceneName1_marshaled, ___loadSceneMode2);

	// Marshaling cleanup of parameter '___sceneName1' native representation
	il2cpp_codegen_marshal_free(____sceneName1_marshaled);
	____sceneName1_marshaled = NULL;

}
// System.Void Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadCompleteDelegateHandler__ctor_m6F3C65C7EB254B6238B270BE5C5B2B25E4C074CD (OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler::Invoke(System.UInt64,System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadCompleteDelegateHandler_Invoke_m9789B622290862E6754BC10184BD55C36557D213 (OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * __this, uint64_t ___clientId0, String_t* ___sceneName1, int32_t ___loadSceneMode2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___sceneName1, ___loadSceneMode2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint64_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2);
					else
						GenericVirtActionInvoker3< uint64_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint64_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2);
					else
						VirtActionInvoker3< uint64_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler::BeginInvoke(System.UInt64,System.String,UnityEngine.SceneManagement.LoadSceneMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnLoadCompleteDelegateHandler_BeginInvoke_m1ECAC2F49EDA2F7DA61D3F9F58E54AD8B76696E5 (OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * __this, uint64_t ___clientId0, String_t* ___sceneName1, int32_t ___loadSceneMode2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = ___sceneName1;
	__d_args[2] = Box(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var, &___loadSceneMode2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnLoadCompleteDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadCompleteDelegateHandler_EndInvoke_m228A3E8159009F88D84F76519494598D08EB974A (OnLoadCompleteDelegateHandler_tB24334DCF2AF0C03C263D4755FEB602622336157 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 (OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * __this, uint64_t ___clientId0, String_t* ___sceneName1, int32_t ___loadSceneMode2, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation3, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t, char*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___sceneName1' to native representation
	char* ____sceneName1_marshaled = NULL;
	____sceneName1_marshaled = il2cpp_codegen_marshal_string(___sceneName1);

	// Marshaling of parameter '___asyncOperation3' to native representation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke ____asyncOperation3_marshaled = AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke();
	if (___asyncOperation3 != NULL)
	{
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(*___asyncOperation3, ____asyncOperation3_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___clientId0, ____sceneName1_marshaled, ___loadSceneMode2, ___asyncOperation3 != NULL ? (&____asyncOperation3_marshaled) : NULL);

	// Marshaling cleanup of parameter '___sceneName1' native representation
	il2cpp_codegen_marshal_free(____sceneName1_marshaled);
	____sceneName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___asyncOperation3' native representation
	if ((&____asyncOperation3_marshaled) != NULL)
	{
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(____asyncOperation3_marshaled);
	}

}
// System.Void Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadDelegateHandler__ctor_mA2FFF93053DB13F669DE16CFE9B70ACC72826E6C (OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler::Invoke(System.UInt64,System.String,UnityEngine.SceneManagement.LoadSceneMode,UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadDelegateHandler_Invoke_m09924921B1DBA4A12C207A2553C26937E045846F (OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * __this, uint64_t ___clientId0, String_t* ___sceneName1, int32_t ___loadSceneMode2, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3);
					else
						GenericVirtActionInvoker4< uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3);
					else
						VirtActionInvoker4< uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, int32_t, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, ___loadSceneMode2, ___asyncOperation3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler::BeginInvoke(System.UInt64,System.String,UnityEngine.SceneManagement.LoadSceneMode,UnityEngine.AsyncOperation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnLoadDelegateHandler_BeginInvoke_m21F7B66729623CE0E72D79F94E0F48A2BD3228AC (OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * __this, uint64_t ___clientId0, String_t* ___sceneName1, int32_t ___loadSceneMode2, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = ___sceneName1;
	__d_args[2] = Box(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var, &___loadSceneMode2);
	__d_args[3] = ___asyncOperation3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnLoadDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnLoadDelegateHandler_EndInvoke_mFD02BE20799796D79F05926D3BAB835B9B29D10B (OnLoadDelegateHandler_t6B5027E4B1C998ADE21A0667B2BCA379D8A632F7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 (OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___clientId0);

}
// System.Void Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynchronizeCompleteDelegateHandler__ctor_m803682522EACA630628A2D30879EA654BF29F06E (OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynchronizeCompleteDelegateHandler_Invoke_m3854D163F42BB8148536338FBB577B1876566D86 (OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						GenericVirtActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						VirtActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSynchronizeCompleteDelegateHandler_BeginInvoke_m752692848FF75E55D89136D9BE78250D4E620407 (OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnSynchronizeCompleteDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynchronizeCompleteDelegateHandler_EndInvoke_mF1C347ADDC909AAC08176BAC8F596D0F6DCEFC0E (OnSynchronizeCompleteDelegateHandler_t22A43AD95CF25B26310320010230D7F21B5C69E9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 (OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___clientId0);

}
// System.Void Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynchronizeDelegateHandler__ctor_m166EA9AC05A148C32FBBB82F314115F377839021 (OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynchronizeDelegateHandler_Invoke_mBA71861C1FDF22DBD53DFFCFD7F42574B86E358E (OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * __this, uint64_t ___clientId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
					else
						GenericVirtActionInvoker1< uint64_t >::Invoke(targetMethod, targetThis, ___clientId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0);
					else
						VirtActionInvoker1< uint64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSynchronizeDelegateHandler_BeginInvoke_mADC404BCD26298BB83C322042BD9E1E8BF082CAB (OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * __this, uint64_t ___clientId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnSynchronizeDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSynchronizeDelegateHandler_EndInvoke_m7C94AD62C2DDD8F62F8F086CE6E6050ED86D5899 (OnSynchronizeDelegateHandler_t43F640133136C8FE68A7692D3BDD9C5EC7907AE3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 (OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * __this, uint64_t ___clientId0, String_t* ___sceneName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___sceneName1' to native representation
	char* ____sceneName1_marshaled = NULL;
	____sceneName1_marshaled = il2cpp_codegen_marshal_string(___sceneName1);

	// Native function invocation
	il2cppPInvokeFunc(___clientId0, ____sceneName1_marshaled);

	// Marshaling cleanup of parameter '___sceneName1' native representation
	il2cpp_codegen_marshal_free(____sceneName1_marshaled);
	____sceneName1_marshaled = NULL;

}
// System.Void Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUnloadCompleteDelegateHandler__ctor_m104741CE032333953A150082D4AC00D9701592D5 (OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler::Invoke(System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUnloadCompleteDelegateHandler_Invoke_mC4E79E8465CEC26F61A50AD1B1BE93AF375A91EE (OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * __this, uint64_t ___clientId0, String_t* ___sceneName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___sceneName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< uint64_t, String_t* >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1);
					else
						GenericVirtActionInvoker2< uint64_t, String_t* >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< uint64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___sceneName1);
					else
						VirtActionInvoker2< uint64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___sceneName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler::BeginInvoke(System.UInt64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnUnloadCompleteDelegateHandler_BeginInvoke_m4DA45F28D68711E218B177A69DFC9F06DB10B0E8 (OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * __this, uint64_t ___clientId0, String_t* ___sceneName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = ___sceneName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnUnloadCompleteDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUnloadCompleteDelegateHandler_EndInvoke_mE980FA3FFD252DE4647B16B996490BDA8C92B426 (OnUnloadCompleteDelegateHandler_tD3BBB2790E624F6FFCB1B0CCEB4BBB249EA3C897 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD (OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * __this, uint64_t ___clientId0, String_t* ___sceneName1, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation2, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(uint64_t, char*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___sceneName1' to native representation
	char* ____sceneName1_marshaled = NULL;
	____sceneName1_marshaled = il2cpp_codegen_marshal_string(___sceneName1);

	// Marshaling of parameter '___asyncOperation2' to native representation
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke ____asyncOperation2_marshaled = AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke();
	if (___asyncOperation2 != NULL)
	{
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke(*___asyncOperation2, ____asyncOperation2_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___clientId0, ____sceneName1_marshaled, ___asyncOperation2 != NULL ? (&____asyncOperation2_marshaled) : NULL);

	// Marshaling cleanup of parameter '___sceneName1' native representation
	il2cpp_codegen_marshal_free(____sceneName1_marshaled);
	____sceneName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___asyncOperation2' native representation
	if ((&____asyncOperation2_marshaled) != NULL)
	{
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshal_pinvoke_cleanup(____asyncOperation2_marshaled);
	}

}
// System.Void Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUnloadDelegateHandler__ctor_m76898E17A48C232E8D403259D3DB836B7038E918 (OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler::Invoke(System.UInt64,System.String,UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUnloadDelegateHandler_Invoke_m3395A92E9E4C264BAE8908DD7F2802F0474B4698 (OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * __this, uint64_t ___clientId0, String_t* ___sceneName1, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___clientId0, ___sceneName1, ___asyncOperation2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, ___asyncOperation2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1, ___asyncOperation2);
					else
						GenericVirtActionInvoker3< uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(targetMethod, targetThis, ___clientId0, ___sceneName1, ___asyncOperation2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___clientId0, ___sceneName1, ___asyncOperation2);
					else
						VirtActionInvoker3< uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___clientId0, ___sceneName1, ___asyncOperation2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, uint64_t, String_t*, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___clientId0, ___sceneName1, ___asyncOperation2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler::BeginInvoke(System.UInt64,System.String,UnityEngine.AsyncOperation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnUnloadDelegateHandler_BeginInvoke_m8F63B5EC6581489A02CB42AFA936E6179F6521BC (OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * __this, uint64_t ___clientId0, String_t* ___sceneName1, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___asyncOperation2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId0);
	__d_args[1] = ___sceneName1;
	__d_args[2] = ___asyncOperation2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Unity.Netcode.NetworkSceneManager/OnUnloadDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUnloadDelegateHandler_EndInvoke_m4CAFDF9C710FFA862B33B16A13F880A22AEBAE66 (OnUnloadDelegateHandler_t20814B2C3E87C5E4AC0E9BD56C8C0695B9EE1ECD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkSceneManager/SceneEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventDelegate__ctor_mC89D427405937388659989685B713DE51660F4AF (SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkSceneManager/SceneEventDelegate::Invoke(Unity.Netcode.SceneEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventDelegate_Invoke_m0087511E5C9EE4E5C7D78CEE7AF026BEE122FF01 (SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * __this, SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 * ___sceneEvent0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sceneEvent0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneEvent0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___sceneEvent0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___sceneEvent0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sceneEvent0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sceneEvent0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sceneEvent0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 * >::Invoke(targetMethod, targetThis, ___sceneEvent0);
					else
						GenericVirtActionInvoker1< SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 * >::Invoke(targetMethod, targetThis, ___sceneEvent0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sceneEvent0);
					else
						VirtActionInvoker1< SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sceneEvent0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sceneEvent0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneEvent0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/SceneEventDelegate::BeginInvoke(Unity.Netcode.SceneEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneEventDelegate_BeginInvoke_mB1DC781819C08F2624C3EDB6C639FB48500CEA61 (SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * __this, SceneEvent_tF86BFC680D99B7FAB06464BA67BA4DF9E4A2F6C9 * ___sceneEvent0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sceneEvent0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.Netcode.NetworkSceneManager/SceneEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneEventDelegate_EndInvoke_m859E020984B8326C6CB6B5372C1DF2F1F4B92721 (SceneEventDelegate_t85BDC37A300400AF53B0E603C6DB3EE96E56B948 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 (VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * __this, int32_t ___sceneIndex0, String_t* ___sceneName1, int32_t ___loadSceneMode2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___sceneName1' to native representation
	char* ____sceneName1_marshaled = NULL;
	____sceneName1_marshaled = il2cpp_codegen_marshal_string(___sceneName1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___sceneIndex0, ____sceneName1_marshaled, ___loadSceneMode2);

	// Marshaling cleanup of parameter '___sceneName1' native representation
	il2cpp_codegen_marshal_free(____sceneName1_marshaled);
	____sceneName1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerifySceneBeforeLoadingDelegateHandler__ctor_mD9AED152BE1A350AD26C4E61B5B479C48DF93A06 (VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler::Invoke(System.Int32,System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerifySceneBeforeLoadingDelegateHandler_Invoke_mC329BFF2DF712F7E600913D791D528F8B2507AA3 (VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * __this, int32_t ___sceneIndex0, String_t* ___sceneName1, int32_t ___loadSceneMode2, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef bool (*FunctionPointerType) (int32_t, String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sceneIndex0, ___sceneName1, ___loadSceneMode2, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneIndex0, ___sceneName1, ___loadSceneMode2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< bool, int32_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___sceneIndex0, ___sceneName1, ___loadSceneMode2);
					else
						result = GenericVirtFuncInvoker3< bool, int32_t, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___sceneIndex0, ___sceneName1, ___loadSceneMode2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< bool, int32_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sceneIndex0, ___sceneName1, ___loadSceneMode2);
					else
						result = VirtFuncInvoker3< bool, int32_t, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sceneIndex0, ___sceneName1, ___loadSceneMode2);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t, String_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneIndex0, ___sceneName1, ___loadSceneMode2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler::BeginInvoke(System.Int32,System.String,UnityEngine.SceneManagement.LoadSceneMode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerifySceneBeforeLoadingDelegateHandler_BeginInvoke_mCB3996E6E7D40118C5B198C9167DAB2E9E8D0216 (VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * __this, int32_t ___sceneIndex0, String_t* ___sceneName1, int32_t ___loadSceneMode2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___sceneIndex0);
	__d_args[1] = ___sceneName1;
	__d_args[2] = Box(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC_il2cpp_TypeInfo_var, &___loadSceneMode2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Boolean Unity.Netcode.NetworkSceneManager/VerifySceneBeforeLoadingDelegateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerifySceneBeforeLoadingDelegateHandler_EndInvoke_mD9136892CE7B95AE14E61FAB30AA5D61DF09D90C (VerifySceneBeforeLoadingDelegateHandler_tF172825B66079B292F6E759C25222C80AB775FE4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.NetworkSpawnManager/TriggerInfo
IL2CPP_EXTERN_C void TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshal_pinvoke(const TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274& unmarshaled, TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_pinvoke& marshaled)
{
	Exception_t* ___TriggerData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TriggerData' of type 'TriggerInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TriggerData_1Exception, NULL);
}
IL2CPP_EXTERN_C void TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshal_pinvoke_back(const TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_pinvoke& marshaled, TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274& unmarshaled)
{
	Exception_t* ___TriggerData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TriggerData' of type 'TriggerInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TriggerData_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.NetworkSpawnManager/TriggerInfo
IL2CPP_EXTERN_C void TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshal_pinvoke_cleanup(TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.NetworkSpawnManager/TriggerInfo
IL2CPP_EXTERN_C void TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshal_com(const TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274& unmarshaled, TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_com& marshaled)
{
	Exception_t* ___TriggerData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TriggerData' of type 'TriggerInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TriggerData_1Exception, NULL);
}
IL2CPP_EXTERN_C void TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshal_com_back(const TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_com& marshaled, TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274& unmarshaled)
{
	Exception_t* ___TriggerData_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'TriggerData' of type 'TriggerInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___TriggerData_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.NetworkSpawnManager/TriggerInfo
IL2CPP_EXTERN_C void TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshal_com_cleanup(TriggerInfo_t66B9BA96670CF2458B2D757EF80EDD544FEC5274_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate__ctor_m67D86CC76C1DEBAEE6FCCAAA463B00FC1092FD12 (TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::Invoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m2D3725692A843F6DA44E2D9F00075DA80FD859E6 (TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload2, float ___receiveTime3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___eventType0, ___clientId1, ___payload2, ___receiveTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___eventType0, ___clientId1, ___payload2, ___receiveTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(targetMethod, targetThis, ___eventType0, ___clientId1, ___payload2, ___receiveTime3);
					else
						GenericVirtActionInvoker4< int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(targetMethod, targetThis, ___eventType0, ___clientId1, ___payload2, ___receiveTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___eventType0, ___clientId1, ___payload2, ___receiveTime3);
					else
						VirtActionInvoker4< int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___eventType0, ___clientId1, ___payload2, ___receiveTime3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___eventType0) - 1), ___clientId1, ___payload2, ___receiveTime3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, uint64_t, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE , float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___eventType0, ___clientId1, ___payload2, ___receiveTime3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Netcode.NetworkTransport/TransportEventDelegate::BeginInvoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransportEventDelegate_BeginInvoke_m12B0DF7435F8E625ECD2C04DACAAD5D070632C18 (TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * __this, int32_t ___eventType0, uint64_t ___clientId1, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  ___payload2, float ___receiveTime3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEvent_t5DE602F56C4A9713EB6DAB2F40945A0F1E5F4B6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(NetworkEvent_t5DE602F56C4A9713EB6DAB2F40945A0F1E5F4B6A_il2cpp_TypeInfo_var, &___eventType0);
	__d_args[1] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &___clientId1);
	__d_args[2] = Box(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE_il2cpp_TypeInfo_var, &___payload2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___receiveTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_EndInvoke_m929910A66ED212B6C21ED0F8B18A60BCF99B920D (TransportEventDelegate_t7A8DEFB080A5BDD6EB3B85F219E8A12C5A7644F4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkEarlyUpdate_CreateLoopSystem_mCD27C896CFC86A8B34D733A1DD8639C2D0374058 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEarlyUpdate_t05F7561CB9185149B3775E2F100FE4A6E4EB3665_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4DB6D0AE7D5395C02B22667C34FFCDA84459F7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkEarlyUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.EarlyUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkEarlyUpdate_t05F7561CB9185149B3775E2F100FE4A6E4EB3665_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var);
		U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * L_4 = ((U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4DB6D0AE7D5395C02B22667C34FFCDA84459F7F0_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkFixedUpdate_CreateLoopSystem_mDA0F88B373CD860A0F46D692E2913B322BE8F637 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkFixedUpdate_t30F97356C6CDFC56890CCD51C6CE82CDC1A2364D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m52621F2F9BB1B5C387A243AC61B89D76A99B5790_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkFixedUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.FixedUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkFixedUpdate_t30F97356C6CDFC56890CCD51C6CE82CDC1A2364D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var);
		U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * L_4 = ((U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m52621F2F9BB1B5C387A243AC61B89D76A99B5790_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkInitialization::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkInitialization_CreateLoopSystem_m06E0B505936C06A4C623C01C18F4362E31422ACF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInitialization_t1B95BA20098FA4CD634205CE5B17E32BC6D18C30_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m67D47C922090113A48369EC3429311728A2A5B33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkInitialization),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Initialization)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkInitialization_t1B95BA20098FA4CD634205CE5B17E32BC6D18C30_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var);
		U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * L_4 = ((U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m67D47C922090113A48369EC3429311728A2A5B33_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPostLateUpdate_CreateLoopSystem_m1D3ED551A8E23B29483B9197B3CFE8CC2BD47E3A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPostLateUpdate_t2FD91E5664711885CBBE105898FA1EB8E0B23169_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4614A419F1D1CB1AC2BE710B87D5B32E6FCEAAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPostLateUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PostLateUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPostLateUpdate_t2FD91E5664711885CBBE105898FA1EB8E0B23169_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var);
		U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * L_4 = ((U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4614A419F1D1CB1AC2BE710B87D5B32E6FCEAAB2_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreLateUpdate_CreateLoopSystem_m685DDC73A4086C86F88EB009E8B208BB7D4B5739 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreLateUpdate_tFDCAFF541CE16E0AE9F9904925B6AFE4649EF432_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mDD97014C541713297FF93AF5DA0C77AD4C991C3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPreLateUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreLateUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPreLateUpdate_tFDCAFF541CE16E0AE9F9904925B6AFE4649EF432_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var);
		U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * L_4 = ((U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mDD97014C541713297FF93AF5DA0C77AD4C991C3F_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreUpdate_CreateLoopSystem_m39F74CD35EB2537324135F6BA6334CAFE8A1E3C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreUpdate_tE77A3A595DF26FB2D0FCB8A7E2B648605F7A23CD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m1AE88C5E10C9890F8E0BF25CAEADC5CDFF55616A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPreUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPreUpdate_tE77A3A595DF26FB2D0FCB8A7E2B648605F7A23CD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var);
		U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * L_4 = ((U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m1AE88C5E10C9890F8E0BF25CAEADC5CDFF55616A_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem Unity.Netcode.NetworkUpdateLoop/NetworkUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkUpdate_CreateLoopSystem_m9D7F392E5224B2A29053B79526C923DCEE0C342A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdate_t280161180398BC2CDD06F0336F0EB2031AC06160_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mB63EE3C8001D37CA9C07E0DBE7EF3C57934D6CE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Update)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkUpdate_t280161180398BC2CDD06F0336F0EB2031AC06160_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var);
		U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * L_4 = ((U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mB63EE3C8001D37CA9C07E0DBE7EF3C57934D6CE1_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.SceneEventProgress/OnCompletedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCompletedDelegate__ctor_mF53C30BBEA13E4FD920803EDB0C44B37531EE0F1 (OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Netcode.SceneEventProgress/OnCompletedDelegate::Invoke(Unity.Netcode.SceneEventProgress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnCompletedDelegate_Invoke_mD01A2A168AF646D048604D94DB6E5408750A89ED (OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * __this, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 * ___sceneEventProgress0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sceneEventProgress0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneEventProgress0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___sceneEventProgress0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___sceneEventProgress0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sceneEventProgress0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sceneEventProgress0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___sceneEventProgress0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 * >::Invoke(targetMethod, targetThis, ___sceneEventProgress0);
					else
						result = GenericVirtFuncInvoker1< bool, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 * >::Invoke(targetMethod, targetThis, ___sceneEventProgress0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sceneEventProgress0);
					else
						result = VirtFuncInvoker1< bool, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sceneEventProgress0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___sceneEventProgress0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___sceneEventProgress0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Netcode.SceneEventProgress/OnCompletedDelegate::BeginInvoke(Unity.Netcode.SceneEventProgress,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCompletedDelegate_BeginInvoke_m1E624E81F9F2A6698DD3E5BABAEBFA95D3C9A63D (OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * __this, SceneEventProgress_t13651EB602CAC08CA250A95625CD1450ECF4EA40 * ___sceneEventProgress0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sceneEventProgress0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean Unity.Netcode.SceneEventProgress/OnCompletedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnCompletedDelegate_EndInvoke_m13FE884ADBBA74ECC4AF5A8FA140679D0ECBA2F0 (OnCompletedDelegate_tC52F011FF869DA0499EC1D019D014DDDB55FD054 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.SnapshotDataMessage/SpawnData
IL2CPP_EXTERN_C void SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshal_pinvoke(const SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE& unmarshaled, SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_pinvoke& marshaled)
{
	marshaled.___NetworkObjectId_0 = unmarshaled.get_NetworkObjectId_0();
	marshaled.___Hash_1 = unmarshaled.get_Hash_1();
	marshaled.___IsSceneObject_2 = static_cast<int32_t>(unmarshaled.get_IsSceneObject_2());
	marshaled.___IsPlayerObject_3 = static_cast<int32_t>(unmarshaled.get_IsPlayerObject_3());
	marshaled.___OwnerClientId_4 = unmarshaled.get_OwnerClientId_4();
	marshaled.___ParentNetworkId_5 = unmarshaled.get_ParentNetworkId_5();
	marshaled.___Position_6 = unmarshaled.get_Position_6();
	marshaled.___Rotation_7 = unmarshaled.get_Rotation_7();
	marshaled.___Scale_8 = unmarshaled.get_Scale_8();
	marshaled.___TickWritten_9 = unmarshaled.get_TickWritten_9();
}
IL2CPP_EXTERN_C void SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshal_pinvoke_back(const SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_pinvoke& marshaled, SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE& unmarshaled)
{
	uint64_t unmarshaled_NetworkObjectId_temp_0 = 0;
	unmarshaled_NetworkObjectId_temp_0 = marshaled.___NetworkObjectId_0;
	unmarshaled.set_NetworkObjectId_0(unmarshaled_NetworkObjectId_temp_0);
	uint32_t unmarshaled_Hash_temp_1 = 0;
	unmarshaled_Hash_temp_1 = marshaled.___Hash_1;
	unmarshaled.set_Hash_1(unmarshaled_Hash_temp_1);
	bool unmarshaled_IsSceneObject_temp_2 = false;
	unmarshaled_IsSceneObject_temp_2 = static_cast<bool>(marshaled.___IsSceneObject_2);
	unmarshaled.set_IsSceneObject_2(unmarshaled_IsSceneObject_temp_2);
	bool unmarshaled_IsPlayerObject_temp_3 = false;
	unmarshaled_IsPlayerObject_temp_3 = static_cast<bool>(marshaled.___IsPlayerObject_3);
	unmarshaled.set_IsPlayerObject_3(unmarshaled_IsPlayerObject_temp_3);
	uint64_t unmarshaled_OwnerClientId_temp_4 = 0;
	unmarshaled_OwnerClientId_temp_4 = marshaled.___OwnerClientId_4;
	unmarshaled.set_OwnerClientId_4(unmarshaled_OwnerClientId_temp_4);
	uint64_t unmarshaled_ParentNetworkId_temp_5 = 0;
	unmarshaled_ParentNetworkId_temp_5 = marshaled.___ParentNetworkId_5;
	unmarshaled.set_ParentNetworkId_5(unmarshaled_ParentNetworkId_temp_5);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_Position_temp_6;
	memset((&unmarshaled_Position_temp_6), 0, sizeof(unmarshaled_Position_temp_6));
	unmarshaled_Position_temp_6 = marshaled.___Position_6;
	unmarshaled.set_Position_6(unmarshaled_Position_temp_6);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_Rotation_temp_7;
	memset((&unmarshaled_Rotation_temp_7), 0, sizeof(unmarshaled_Rotation_temp_7));
	unmarshaled_Rotation_temp_7 = marshaled.___Rotation_7;
	unmarshaled.set_Rotation_7(unmarshaled_Rotation_temp_7);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_Scale_temp_8;
	memset((&unmarshaled_Scale_temp_8), 0, sizeof(unmarshaled_Scale_temp_8));
	unmarshaled_Scale_temp_8 = marshaled.___Scale_8;
	unmarshaled.set_Scale_8(unmarshaled_Scale_temp_8);
	int32_t unmarshaled_TickWritten_temp_9 = 0;
	unmarshaled_TickWritten_temp_9 = marshaled.___TickWritten_9;
	unmarshaled.set_TickWritten_9(unmarshaled_TickWritten_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.SnapshotDataMessage/SpawnData
IL2CPP_EXTERN_C void SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshal_pinvoke_cleanup(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.SnapshotDataMessage/SpawnData
IL2CPP_EXTERN_C void SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshal_com(const SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE& unmarshaled, SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_com& marshaled)
{
	marshaled.___NetworkObjectId_0 = unmarshaled.get_NetworkObjectId_0();
	marshaled.___Hash_1 = unmarshaled.get_Hash_1();
	marshaled.___IsSceneObject_2 = static_cast<int32_t>(unmarshaled.get_IsSceneObject_2());
	marshaled.___IsPlayerObject_3 = static_cast<int32_t>(unmarshaled.get_IsPlayerObject_3());
	marshaled.___OwnerClientId_4 = unmarshaled.get_OwnerClientId_4();
	marshaled.___ParentNetworkId_5 = unmarshaled.get_ParentNetworkId_5();
	marshaled.___Position_6 = unmarshaled.get_Position_6();
	marshaled.___Rotation_7 = unmarshaled.get_Rotation_7();
	marshaled.___Scale_8 = unmarshaled.get_Scale_8();
	marshaled.___TickWritten_9 = unmarshaled.get_TickWritten_9();
}
IL2CPP_EXTERN_C void SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshal_com_back(const SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_com& marshaled, SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE& unmarshaled)
{
	uint64_t unmarshaled_NetworkObjectId_temp_0 = 0;
	unmarshaled_NetworkObjectId_temp_0 = marshaled.___NetworkObjectId_0;
	unmarshaled.set_NetworkObjectId_0(unmarshaled_NetworkObjectId_temp_0);
	uint32_t unmarshaled_Hash_temp_1 = 0;
	unmarshaled_Hash_temp_1 = marshaled.___Hash_1;
	unmarshaled.set_Hash_1(unmarshaled_Hash_temp_1);
	bool unmarshaled_IsSceneObject_temp_2 = false;
	unmarshaled_IsSceneObject_temp_2 = static_cast<bool>(marshaled.___IsSceneObject_2);
	unmarshaled.set_IsSceneObject_2(unmarshaled_IsSceneObject_temp_2);
	bool unmarshaled_IsPlayerObject_temp_3 = false;
	unmarshaled_IsPlayerObject_temp_3 = static_cast<bool>(marshaled.___IsPlayerObject_3);
	unmarshaled.set_IsPlayerObject_3(unmarshaled_IsPlayerObject_temp_3);
	uint64_t unmarshaled_OwnerClientId_temp_4 = 0;
	unmarshaled_OwnerClientId_temp_4 = marshaled.___OwnerClientId_4;
	unmarshaled.set_OwnerClientId_4(unmarshaled_OwnerClientId_temp_4);
	uint64_t unmarshaled_ParentNetworkId_temp_5 = 0;
	unmarshaled_ParentNetworkId_temp_5 = marshaled.___ParentNetworkId_5;
	unmarshaled.set_ParentNetworkId_5(unmarshaled_ParentNetworkId_temp_5);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_Position_temp_6;
	memset((&unmarshaled_Position_temp_6), 0, sizeof(unmarshaled_Position_temp_6));
	unmarshaled_Position_temp_6 = marshaled.___Position_6;
	unmarshaled.set_Position_6(unmarshaled_Position_temp_6);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  unmarshaled_Rotation_temp_7;
	memset((&unmarshaled_Rotation_temp_7), 0, sizeof(unmarshaled_Rotation_temp_7));
	unmarshaled_Rotation_temp_7 = marshaled.___Rotation_7;
	unmarshaled.set_Rotation_7(unmarshaled_Rotation_temp_7);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  unmarshaled_Scale_temp_8;
	memset((&unmarshaled_Scale_temp_8), 0, sizeof(unmarshaled_Scale_temp_8));
	unmarshaled_Scale_temp_8 = marshaled.___Scale_8;
	unmarshaled.set_Scale_8(unmarshaled_Scale_temp_8);
	int32_t unmarshaled_TickWritten_temp_9 = 0;
	unmarshaled_TickWritten_temp_9 = marshaled.___TickWritten_9;
	unmarshaled.set_TickWritten_9(unmarshaled_TickWritten_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.SnapshotDataMessage/SpawnData
IL2CPP_EXTERN_C void SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshal_com_cleanup(SpawnData_tA85556E5D21AAA96329FC21CCCF96AFD803A60BE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 Unity.Netcode.XXHash/Bits::RotateLeft(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025 (uint64_t ___value0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		// return (value << bits) | (value >> (64 - bits));
		uint64_t L_0 = ___value0;
		int32_t L_1 = ___bits1;
		uint64_t L_2 = ___value0;
		int32_t L_3 = ___bits1;
		return ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)63)))))|(int64_t)((int64_t)((uint64_t)L_2>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)64), (int32_t)L_3))&(int32_t)((int32_t)63)))))));
	}
}
// System.UInt32 Unity.Netcode.XXHash/Bits::RotateLeft(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8 (uint32_t ___value0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		// return (value << bits) | (value >> (32 - bits));
		uint32_t L_0 = ___value0;
		int32_t L_1 = ___bits1;
		uint32_t L_2 = ___value0;
		int32_t L_3 = ___bits1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))))|(int32_t)((int32_t)((uint32_t)L_2>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_3))&(int32_t)((int32_t)31)))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.NetworkObject/SceneObject/HeaderData
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_pinvoke(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke& marshaled)
{
	marshaled.___NetworkObjectId_0 = unmarshaled.get_NetworkObjectId_0();
	marshaled.___OwnerClientId_1 = unmarshaled.get_OwnerClientId_1();
	marshaled.___Hash_2 = unmarshaled.get_Hash_2();
	marshaled.___IsPlayerObject_3 = static_cast<int32_t>(unmarshaled.get_IsPlayerObject_3());
	marshaled.___HasParent_4 = static_cast<int32_t>(unmarshaled.get_HasParent_4());
	marshaled.___IsSceneObject_5 = static_cast<int32_t>(unmarshaled.get_IsSceneObject_5());
	marshaled.___HasTransform_6 = static_cast<int32_t>(unmarshaled.get_HasTransform_6());
	marshaled.___IsReparented_7 = static_cast<int32_t>(unmarshaled.get_IsReparented_7());
	marshaled.___HasNetworkVariables_8 = static_cast<int32_t>(unmarshaled.get_HasNetworkVariables_8());
}
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_pinvoke_back(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke& marshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled)
{
	uint64_t unmarshaled_NetworkObjectId_temp_0 = 0;
	unmarshaled_NetworkObjectId_temp_0 = marshaled.___NetworkObjectId_0;
	unmarshaled.set_NetworkObjectId_0(unmarshaled_NetworkObjectId_temp_0);
	uint64_t unmarshaled_OwnerClientId_temp_1 = 0;
	unmarshaled_OwnerClientId_temp_1 = marshaled.___OwnerClientId_1;
	unmarshaled.set_OwnerClientId_1(unmarshaled_OwnerClientId_temp_1);
	uint32_t unmarshaled_Hash_temp_2 = 0;
	unmarshaled_Hash_temp_2 = marshaled.___Hash_2;
	unmarshaled.set_Hash_2(unmarshaled_Hash_temp_2);
	bool unmarshaled_IsPlayerObject_temp_3 = false;
	unmarshaled_IsPlayerObject_temp_3 = static_cast<bool>(marshaled.___IsPlayerObject_3);
	unmarshaled.set_IsPlayerObject_3(unmarshaled_IsPlayerObject_temp_3);
	bool unmarshaled_HasParent_temp_4 = false;
	unmarshaled_HasParent_temp_4 = static_cast<bool>(marshaled.___HasParent_4);
	unmarshaled.set_HasParent_4(unmarshaled_HasParent_temp_4);
	bool unmarshaled_IsSceneObject_temp_5 = false;
	unmarshaled_IsSceneObject_temp_5 = static_cast<bool>(marshaled.___IsSceneObject_5);
	unmarshaled.set_IsSceneObject_5(unmarshaled_IsSceneObject_temp_5);
	bool unmarshaled_HasTransform_temp_6 = false;
	unmarshaled_HasTransform_temp_6 = static_cast<bool>(marshaled.___HasTransform_6);
	unmarshaled.set_HasTransform_6(unmarshaled_HasTransform_temp_6);
	bool unmarshaled_IsReparented_temp_7 = false;
	unmarshaled_IsReparented_temp_7 = static_cast<bool>(marshaled.___IsReparented_7);
	unmarshaled.set_IsReparented_7(unmarshaled_IsReparented_temp_7);
	bool unmarshaled_HasNetworkVariables_temp_8 = false;
	unmarshaled_HasNetworkVariables_temp_8 = static_cast<bool>(marshaled.___HasNetworkVariables_8);
	unmarshaled.set_HasNetworkVariables_8(unmarshaled_HasNetworkVariables_temp_8);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.NetworkObject/SceneObject/HeaderData
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_pinvoke_cleanup(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.NetworkObject/SceneObject/HeaderData
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_com(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com& marshaled)
{
	marshaled.___NetworkObjectId_0 = unmarshaled.get_NetworkObjectId_0();
	marshaled.___OwnerClientId_1 = unmarshaled.get_OwnerClientId_1();
	marshaled.___Hash_2 = unmarshaled.get_Hash_2();
	marshaled.___IsPlayerObject_3 = static_cast<int32_t>(unmarshaled.get_IsPlayerObject_3());
	marshaled.___HasParent_4 = static_cast<int32_t>(unmarshaled.get_HasParent_4());
	marshaled.___IsSceneObject_5 = static_cast<int32_t>(unmarshaled.get_IsSceneObject_5());
	marshaled.___HasTransform_6 = static_cast<int32_t>(unmarshaled.get_HasTransform_6());
	marshaled.___IsReparented_7 = static_cast<int32_t>(unmarshaled.get_IsReparented_7());
	marshaled.___HasNetworkVariables_8 = static_cast<int32_t>(unmarshaled.get_HasNetworkVariables_8());
}
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_com_back(const HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com& marshaled, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37& unmarshaled)
{
	uint64_t unmarshaled_NetworkObjectId_temp_0 = 0;
	unmarshaled_NetworkObjectId_temp_0 = marshaled.___NetworkObjectId_0;
	unmarshaled.set_NetworkObjectId_0(unmarshaled_NetworkObjectId_temp_0);
	uint64_t unmarshaled_OwnerClientId_temp_1 = 0;
	unmarshaled_OwnerClientId_temp_1 = marshaled.___OwnerClientId_1;
	unmarshaled.set_OwnerClientId_1(unmarshaled_OwnerClientId_temp_1);
	uint32_t unmarshaled_Hash_temp_2 = 0;
	unmarshaled_Hash_temp_2 = marshaled.___Hash_2;
	unmarshaled.set_Hash_2(unmarshaled_Hash_temp_2);
	bool unmarshaled_IsPlayerObject_temp_3 = false;
	unmarshaled_IsPlayerObject_temp_3 = static_cast<bool>(marshaled.___IsPlayerObject_3);
	unmarshaled.set_IsPlayerObject_3(unmarshaled_IsPlayerObject_temp_3);
	bool unmarshaled_HasParent_temp_4 = false;
	unmarshaled_HasParent_temp_4 = static_cast<bool>(marshaled.___HasParent_4);
	unmarshaled.set_HasParent_4(unmarshaled_HasParent_temp_4);
	bool unmarshaled_IsSceneObject_temp_5 = false;
	unmarshaled_IsSceneObject_temp_5 = static_cast<bool>(marshaled.___IsSceneObject_5);
	unmarshaled.set_IsSceneObject_5(unmarshaled_IsSceneObject_temp_5);
	bool unmarshaled_HasTransform_temp_6 = false;
	unmarshaled_HasTransform_temp_6 = static_cast<bool>(marshaled.___HasTransform_6);
	unmarshaled.set_HasTransform_6(unmarshaled_HasTransform_temp_6);
	bool unmarshaled_IsReparented_temp_7 = false;
	unmarshaled_IsReparented_temp_7 = static_cast<bool>(marshaled.___IsReparented_7);
	unmarshaled.set_IsReparented_7(unmarshaled_IsReparented_temp_7);
	bool unmarshaled_HasNetworkVariables_temp_8 = false;
	unmarshaled_HasNetworkVariables_temp_8 = static_cast<bool>(marshaled.___HasNetworkVariables_8);
	unmarshaled.set_HasNetworkVariables_8(unmarshaled_HasNetworkVariables_temp_8);
}
// Conversion method for clean up from marshalling of: Unity.Netcode.NetworkObject/SceneObject/HeaderData
IL2CPP_EXTERN_C void HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshal_com_cleanup(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2F06014CE8EAD8F0EDF443446B0EC5FE3D72C1CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * L_0 = (U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C *)il2cpp_codegen_object_new(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0744D9316E61F82C7086BB9B9CF74D4943AD9726(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0744D9316E61F82C7086BB9B9CF74D4943AD9726 (U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4DB6D0AE7D5395C02B22667C34FFCDA84459F7F0 (U3CU3Ec_t7C48A58CD23361179F359F0AA43B7C4DCF33675C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.EarlyUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9A4A6380AA7D2BFA8961DD9BBE7B03FA1ED62049 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * L_0 = (U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 *)il2cpp_codegen_object_new(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2907291347FE9708D098C6BAC3B1279333ED6245(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2907291347FE9708D098C6BAC3B1279333ED6245 (U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m52621F2F9BB1B5C387A243AC61B89D76A99B5790 (U3CU3Ec_tD0D7AEA2E1FB15C4A99D6C38C124D9F19BD7C883 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.FixedUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB1419485B1A93464B841F42F56FA381F07959F52 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * L_0 = (U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 *)il2cpp_codegen_object_new(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEDC2D19BEC134B4455567B0825713CA229EFE6BD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDC2D19BEC134B4455567B0825713CA229EFE6BD (U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkInitialization/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m67D47C922090113A48369EC3429311728A2A5B33 (U3CU3Ec_t4F27CDDFAC61BE7234F291D3CD141FF9C26AECF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Initialization)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7A942551F3B366D5CD3B672EED41D2D1D6CAEFE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * L_0 = (U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B *)il2cpp_codegen_object_new(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m16DBCAFB7ED0424E5A4377056A37C4A2C027AA9A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16DBCAFB7ED0424E5A4377056A37C4A2C027AA9A (U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m4614A419F1D1CB1AC2BE710B87D5B32E6FCEAAB2 (U3CU3Ec_tE1C9F3A846F55BD23BEC1E86E887BFB070CFE33B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PostLateUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9C6FD630BA5ED902E228A679E960ABA5EB713B73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * L_0 = (U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 *)il2cpp_codegen_object_new(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC57B7D1E89BE54416530862DE126D8C339101075(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC57B7D1E89BE54416530862DE126D8C339101075 (U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mDD97014C541713297FF93AF5DA0C77AD4C991C3F (U3CU3Ec_t7AFD739029693CAF11E99ADC7BEAF43D356833C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreLateUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m864BDE24ACAF90FB4679BECF493F9F8B82C63116 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * L_0 = (U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C *)il2cpp_codegen_object_new(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD0542A5D6ED031E0A80F52AF3A9256959EC1177B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0542A5D6ED031E0A80F52AF3A9256959EC1177B (U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkPreUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m1AE88C5E10C9890F8E0BF25CAEADC5CDFF55616A (U3CU3Ec_t3F90BBA236E4F85D38AD962C7E4A018259224D8C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m21D2D5AB8306650EE2DD62E442D13D3790859061 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * L_0 = (U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE *)il2cpp_codegen_object_new(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m135160224392406747046254E24AFDE68C280166(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m135160224392406747046254E24AFDE68C280166 (U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Netcode.NetworkUpdateLoop/NetworkUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mB63EE3C8001D37CA9C07E0DBE7EF3C57934D6CE1 (U3CU3Ec_tDEB5600B0496524D056488120D3A8BE391440CFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Update)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t051D320FA32536F2D8CB5F78660C375A920278A5_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_m52792B6CBA463A8C9CD91EA211076052F3D739DB(5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FastBufferWriter_GetUnsafePtr_mB52C0B5BC71402181A491535A8BCA28F3646665F_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method)
{
	{
		// return Handle->BufferPointer;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		uint8_t* L_1 = L_0->get_BufferPointer_0();
		return (uint8_t*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method)
{
	{
		// get => Handle->Position > Handle->Length ? Handle->Position : Handle->Length;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_2 = __this->get_Handle_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Length_2();
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_4 = __this->get_Handle_0();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Length_2();
		return L_5;
	}

IL_0024:
	{
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_6 = __this->get_Handle_0();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_Position_1();
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteBytesSafe_m269EDAF146F1360FA87F2DEA4ED724F625BA6F10_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, uint8_t* ___value0, int32_t ___size1, int32_t ___offset2, const RuntimeMethod* method)
{
	{
		// if (!TryBeginWriteInternal(size))
		int32_t L_0 = ___size1;
		bool L_1;
		L_1 = FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteBytesSafe_m269EDAF146F1360FA87F2DEA4ED724F625BA6F10_RuntimeMethod_var)));
	}

IL_0014:
	{
		// UnsafeUtility.MemCpy((Handle->BufferPointer + Handle->Position), value + offset, size);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = L_3->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = __this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Position_1();
		uint8_t* L_7 = ___value0;
		int32_t L_8 = ___offset2;
		int32_t L_9 = ___size1;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)), ((int64_t)((int64_t)L_9)), /*hidden argument*/NULL);
		// Handle->Position += size;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_10 = __this->get_Handle_0();
		NullCheck(L_10);
		int32_t* L_11 = L_10->get_address_of_Position_1();
		int32_t* L_12 = L_11;
		int32_t L_13 = *((int32_t*)L_12);
		int32_t L_14 = ___size1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * NetworkManager_get_CustomMessagingManager_m092A7833DCBFAB04AD01C1A9F1F69AC6A18AEB00_inline (NetworkManager_tAB1ED83E6E61C955C6A92B6BD2EE9C802375084F * __this, const RuntimeMethod* method)
{
	{
		// public CustomMessagingManager CustomMessagingManager { get; private set; }
		CustomMessagingManager_t4D8AA36E070E87F34E081BF335C8EEFD0D9FF954 * L_0 = __this->get_U3CCustomMessagingManagerU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_processStripe32_mB5BD24BF2AE3ECFF024377945E6423A90A784CB8_inline (uint8_t** ___pInput0, uint32_t* ___acc11, uint32_t* ___acc22, uint32_t* ___acc33, uint32_t* ___acc44, const RuntimeMethod* method)
{
	{
		// processLane32(ref pInput, ref acc1);
		uint8_t** L_0 = ___pInput0;
		uint32_t* L_1 = ___acc11;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_0, (uint32_t*)L_1, /*hidden argument*/NULL);
		// processLane32(ref pInput, ref acc2);
		uint8_t** L_2 = ___pInput0;
		uint32_t* L_3 = ___acc22;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_2, (uint32_t*)L_3, /*hidden argument*/NULL);
		// processLane32(ref pInput, ref acc3);
		uint8_t** L_4 = ___pInput0;
		uint32_t* L_5 = ___acc33;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_4, (uint32_t*)L_5, /*hidden argument*/NULL);
		// processLane32(ref pInput, ref acc4);
		uint8_t** L_6 = ___pInput0;
		uint32_t* L_7 = ___acc44;
		XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline((uint8_t**)L_6, (uint32_t*)L_7, /*hidden argument*/NULL);
		// return Bits.RotateLeft(acc1, 1)
		//        + Bits.RotateLeft(acc2, 7)
		//        + Bits.RotateLeft(acc3, 12)
		//        + Bits.RotateLeft(acc4, 18);
		uint32_t* L_8 = ___acc11;
		int32_t L_9 = *((uint32_t*)L_8);
		uint32_t L_10;
		L_10 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_9, 1, /*hidden argument*/NULL);
		uint32_t* L_11 = ___acc22;
		int32_t L_12 = *((uint32_t*)L_11);
		uint32_t L_13;
		L_13 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_12, 7, /*hidden argument*/NULL);
		uint32_t* L_14 = ___acc33;
		int32_t L_15 = *((uint32_t*)L_14);
		uint32_t L_16;
		L_16 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_15, ((int32_t)12), /*hidden argument*/NULL);
		uint32_t* L_17 = ___acc44;
		int32_t L_18 = *((uint32_t*)L_17);
		uint32_t L_19;
		L_19 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_18, ((int32_t)18), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13)), (int32_t)L_16)), (int32_t)L_19));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_processRemaining32_m082D54719298240890DEF50DE882039B2E3118DA_inline (uint8_t* ___pInput0, uint32_t ___acc1, int32_t ___remainingLen2, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		goto IL_002a;
	}

IL_0002:
	{
		// lane = *(uint*)pInput;
		uint8_t* L_0 = ___pInput0;
		int32_t L_1 = *((uint32_t*)L_0);
		V_0 = L_1;
		// acc += lane * k_Prime32v3;
		uint32_t L_2 = ___acc1;
		uint32_t L_3 = V_0;
		___acc1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)-1028477379)))));
		// acc = Bits.RotateLeft(acc, 17) * k_Prime32v4;
		uint32_t L_4 = ___acc1;
		uint32_t L_5;
		L_5 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_4, ((int32_t)17), /*hidden argument*/NULL);
		___acc1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)668265263)));
		// for (uint lane; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_6 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)4));
		// for (uint lane; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		uint8_t* L_7 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)4));
	}

IL_002a:
	{
		// for (uint lane; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_8 = ___remainingLen2;
		if ((((int32_t)L_8) >= ((int32_t)4)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0058;
	}

IL_0030:
	{
		// lane = *pInput;
		uint8_t* L_9 = ___pInput0;
		int32_t L_10 = *((uint8_t*)L_9);
		V_1 = (uint8_t)L_10;
		// acc += lane * k_Prime32v5;
		uint32_t L_11 = ___acc1;
		uint8_t L_12 = V_1;
		___acc1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)374761393)))));
		// acc = Bits.RotateLeft(acc, 11) * k_Prime32v1;
		uint32_t L_13 = ___acc1;
		uint32_t L_14;
		L_14 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_13, ((int32_t)11), /*hidden argument*/NULL);
		___acc1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)-1640531535)));
		// for (byte lane; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_15 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
		// for (byte lane; remainingLen >= 1; remainingLen--, pInput++)
		uint8_t* L_16 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		// for (byte lane; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_17 = ___remainingLen2;
		if ((((int32_t)L_17) >= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		// return acc;
		uint32_t L_18 = ___acc1;
		return L_18;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_avalanche32_m32B2EBF4117763D2099C97E4FF908155FF5361CD_inline (uint32_t ___acc0, const RuntimeMethod* method)
{
	{
		// acc ^= acc >> 15;
		uint32_t L_0 = ___acc0;
		uint32_t L_1 = ___acc0;
		___acc0 = ((int32_t)((int32_t)L_0^(int32_t)((int32_t)((uint32_t)L_1>>((int32_t)15)))));
		// acc *= k_Prime32v2;
		uint32_t L_2 = ___acc0;
		___acc0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)-2048144777)));
		// acc ^= acc >> 13;
		uint32_t L_3 = ___acc0;
		uint32_t L_4 = ___acc0;
		___acc0 = ((int32_t)((int32_t)L_3^(int32_t)((int32_t)((uint32_t)L_4>>((int32_t)13)))));
		// acc *= k_Prime32v3;
		uint32_t L_5 = ___acc0;
		___acc0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)-1028477379)));
		// acc ^= acc >> 16;
		uint32_t L_6 = ___acc0;
		uint32_t L_7 = ___acc0;
		___acc0 = ((int32_t)((int32_t)L_6^(int32_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		// return acc;
		uint32_t L_8 = ___acc0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_processStripe64_m75C9351A0ACF4C5A2FE9B2078892EEA47B24F41E_inline (uint8_t** ___pInput0, uint64_t* ___acc11, uint64_t* ___acc22, uint64_t* ___acc33, uint64_t* ___acc44, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// processLane64(ref acc1, ref pInput);
		uint64_t* L_0 = ___acc11;
		uint8_t** L_1 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_0, (uint8_t**)L_1, /*hidden argument*/NULL);
		// processLane64(ref acc2, ref pInput);
		uint64_t* L_2 = ___acc22;
		uint8_t** L_3 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_2, (uint8_t**)L_3, /*hidden argument*/NULL);
		// processLane64(ref acc3, ref pInput);
		uint64_t* L_4 = ___acc33;
		uint8_t** L_5 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_4, (uint8_t**)L_5, /*hidden argument*/NULL);
		// processLane64(ref acc4, ref pInput);
		uint64_t* L_6 = ___acc44;
		uint8_t** L_7 = ___pInput0;
		XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline((uint64_t*)L_6, (uint8_t**)L_7, /*hidden argument*/NULL);
		// ulong acc = Bits.RotateLeft(acc1, 1)
		//             + Bits.RotateLeft(acc2, 7)
		//             + Bits.RotateLeft(acc3, 12)
		//             + Bits.RotateLeft(acc4, 18);
		uint64_t* L_8 = ___acc11;
		int64_t L_9 = *((int64_t*)L_8);
		uint64_t L_10;
		L_10 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_9, 1, /*hidden argument*/NULL);
		uint64_t* L_11 = ___acc22;
		int64_t L_12 = *((int64_t*)L_11);
		uint64_t L_13;
		L_13 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_12, 7, /*hidden argument*/NULL);
		uint64_t* L_14 = ___acc33;
		int64_t L_15 = *((int64_t*)L_14);
		uint64_t L_16;
		L_16 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_15, ((int32_t)12), /*hidden argument*/NULL);
		uint64_t* L_17 = ___acc44;
		int64_t L_18 = *((int64_t*)L_17);
		uint64_t L_19;
		L_19 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_18, ((int32_t)18), /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)L_13)), (int64_t)L_16)), (int64_t)L_19));
		// mergeAccumulator64(ref acc, acc1);
		uint64_t* L_20 = ___acc11;
		int64_t L_21 = *((int64_t*)L_20);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_21, /*hidden argument*/NULL);
		// mergeAccumulator64(ref acc, acc2);
		uint64_t* L_22 = ___acc22;
		int64_t L_23 = *((int64_t*)L_22);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_23, /*hidden argument*/NULL);
		// mergeAccumulator64(ref acc, acc3);
		uint64_t* L_24 = ___acc33;
		int64_t L_25 = *((int64_t*)L_24);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_25, /*hidden argument*/NULL);
		// mergeAccumulator64(ref acc, acc4);
		uint64_t* L_26 = ___acc44;
		int64_t L_27 = *((int64_t*)L_26);
		XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline((uint64_t*)(&V_0), L_27, /*hidden argument*/NULL);
		// return acc;
		uint64_t L_28 = V_0;
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_processRemaining64_mDB780AE9FD5DD632D0DC309C8C77FA7F9877B945_inline (uint8_t* ___pInput0, uint64_t ___acc1, int32_t ___remainingLen2, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		goto IL_003c;
	}

IL_0002:
	{
		// lane = *(ulong*)pInput;
		uint8_t* L_0 = ___pInput0;
		int64_t L_1 = *((int64_t*)L_0);
		V_0 = L_1;
		// acc ^= round64(0, lane);
		uint64_t L_2 = ___acc1;
		uint64_t L_3 = V_0;
		uint64_t L_4;
		L_4 = XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline(((int64_t)((int64_t)0)), L_3, /*hidden argument*/NULL);
		___acc1 = ((int64_t)((int64_t)L_2^(int64_t)L_4));
		// acc = Bits.RotateLeft(acc, 27) * k_Prime64v1;
		uint64_t L_5 = ___acc1;
		uint64_t L_6;
		L_6 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_5, ((int32_t)27), /*hidden argument*/NULL);
		___acc1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)((int64_t)-7046029288634856825LL)));
		// acc += k_Prime64v4;
		uint64_t L_7 = ___acc1;
		___acc1 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)((int64_t)-8796714831421723037LL)));
		// for (ulong lane; remainingLen >= 8; remainingLen -= 8, pInput += 8)
		int32_t L_8 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8));
		// for (ulong lane; remainingLen >= 8; remainingLen -= 8, pInput += 8)
		uint8_t* L_9 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)8));
	}

IL_003c:
	{
		// for (ulong lane; remainingLen >= 8; remainingLen -= 8, pInput += 8)
		int32_t L_10 = ___remainingLen2;
		if ((((int32_t)L_10) >= ((int32_t)8)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0080;
	}

IL_0042:
	{
		// lane32 = *(uint*)pInput;
		uint8_t* L_11 = ___pInput0;
		int32_t L_12 = *((uint32_t*)L_11);
		V_1 = L_12;
		// acc ^= lane32 * k_Prime64v1;
		uint64_t L_13 = ___acc1;
		uint32_t L_14 = V_1;
		___acc1 = ((int64_t)((int64_t)L_13^(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_14)), (int64_t)((int64_t)-7046029288634856825LL)))));
		// acc = Bits.RotateLeft(acc, 23) * k_Prime64v2;
		uint64_t L_15 = ___acc1;
		uint64_t L_16;
		L_16 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_15, ((int32_t)23), /*hidden argument*/NULL);
		___acc1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)((int64_t)-4417276706812531889LL)));
		// acc += k_Prime64v3;
		uint64_t L_17 = ___acc1;
		___acc1 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, (int64_t)((int64_t)1609587929392839161LL)));
		// for (uint lane32; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_18 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)4));
		// for (uint lane32; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		uint8_t* L_19 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)4));
	}

IL_0080:
	{
		// for (uint lane32; remainingLen >= 4; remainingLen -= 4, pInput += 4)
		int32_t L_20 = ___remainingLen2;
		if ((((int32_t)L_20) >= ((int32_t)4)))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_00b7;
	}

IL_0086:
	{
		// lane8 = *pInput;
		uint8_t* L_21 = ___pInput0;
		int32_t L_22 = *((uint8_t*)L_21);
		V_2 = (uint8_t)L_22;
		// acc ^= lane8 * k_Prime64v5;
		uint64_t L_23 = ___acc1;
		uint8_t L_24 = V_2;
		___acc1 = ((int64_t)((int64_t)L_23^(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_24)), (int64_t)((int64_t)2870177450012600261LL)))));
		// acc = Bits.RotateLeft(acc, 11) * k_Prime64v1;
		uint64_t L_25 = ___acc1;
		uint64_t L_26;
		L_26 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_25, ((int32_t)11), /*hidden argument*/NULL);
		___acc1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_26, (int64_t)((int64_t)-7046029288634856825LL)));
		// for (byte lane8; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_27 = ___remainingLen2;
		___remainingLen2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		// for (byte lane8; remainingLen >= 1; remainingLen--, pInput++)
		uint8_t* L_28 = ___pInput0;
		___pInput0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_28, (int32_t)1));
	}

IL_00b7:
	{
		// for (byte lane8; remainingLen >= 1; remainingLen--, pInput++)
		int32_t L_29 = ___remainingLen2;
		if ((((int32_t)L_29) >= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		// return acc;
		uint64_t L_30 = ___acc1;
		return L_30;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_avalanche64_m8A1A1B6C3BC532A910E9B6FDAB6AECB5703F91E3_inline (uint64_t ___acc0, const RuntimeMethod* method)
{
	{
		// acc ^= acc >> 33;
		uint64_t L_0 = ___acc0;
		uint64_t L_1 = ___acc0;
		___acc0 = ((int64_t)((int64_t)L_0^(int64_t)((int64_t)((uint64_t)L_1>>((int32_t)33)))));
		// acc *= k_Prime64v2;
		uint64_t L_2 = ___acc0;
		___acc0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)-4417276706812531889LL)));
		// acc ^= acc >> 29;
		uint64_t L_3 = ___acc0;
		uint64_t L_4 = ___acc0;
		___acc0 = ((int64_t)((int64_t)L_3^(int64_t)((int64_t)((uint64_t)L_4>>((int32_t)29)))));
		// acc *= k_Prime64v3;
		uint64_t L_5 = ___acc0;
		___acc0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_5, (int64_t)((int64_t)1609587929392839161LL)));
		// acc ^= acc >> 32;
		uint64_t L_6 = ___acc0;
		uint64_t L_7 = ___acc0;
		___acc0 = ((int64_t)((int64_t)L_6^(int64_t)((int64_t)((uint64_t)L_7>>((int32_t)32)))));
		// return acc;
		uint64_t L_8 = ___acc0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XXHash_processLane64_m292B36BA3B67ACC668B53E7EDF66F33D5C19F9E0_inline (uint64_t* ___accn0, uint8_t** ___pInput1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// ulong lane = *(ulong*)pInput;
		uint8_t** L_0 = ___pInput1;
		int64_t L_1 = *((int64_t*)(*((intptr_t*)L_0)));
		V_0 = L_1;
		// accn = round64(accn, lane);
		uint64_t* L_2 = ___accn0;
		uint64_t* L_3 = ___accn0;
		int64_t L_4 = *((int64_t*)L_3);
		uint64_t L_5 = V_0;
		uint64_t L_6;
		L_6 = XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline(L_4, L_5, /*hidden argument*/NULL);
		*((int64_t*)L_2) = (int64_t)L_6;
		// pInput += 8;
		uint8_t** L_7 = ___pInput1;
		uint8_t** L_8 = ___pInput1;
		*((intptr_t*)L_7) = (intptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)(*((intptr_t*)L_8)), (int32_t)8));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline (uint64_t ___value0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		// return (value << bits) | (value >> (64 - bits));
		uint64_t L_0 = ___value0;
		int32_t L_1 = ___bits1;
		uint64_t L_2 = ___value0;
		int32_t L_3 = ___bits1;
		return ((int64_t)((int64_t)((int64_t)((int64_t)L_0<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)63)))))|(int64_t)((int64_t)((uint64_t)L_2>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)64), (int32_t)L_3))&(int32_t)((int32_t)63)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XXHash_mergeAccumulator64_mB141FEC9D70EDD28502C84BCD47CA3F69E57D769_inline (uint64_t* ___acc0, uint64_t ___accn1, const RuntimeMethod* method)
{
	{
		// acc ^= round64(0, accn);
		uint64_t* L_0 = ___acc0;
		uint64_t* L_1 = ___acc0;
		int64_t L_2 = *((int64_t*)L_1);
		uint64_t L_3 = ___accn1;
		uint64_t L_4;
		L_4 = XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline(((int64_t)((int64_t)0)), L_3, /*hidden argument*/NULL);
		*((int64_t*)L_0) = (int64_t)((int64_t)((int64_t)L_2^(int64_t)L_4));
		// acc *= k_Prime64v1;
		uint64_t* L_5 = ___acc0;
		uint64_t* L_6 = ___acc0;
		int64_t L_7 = *((int64_t*)L_6);
		*((int64_t*)L_5) = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)((int64_t)-7046029288634856825LL)));
		// acc += k_Prime64v4;
		uint64_t* L_8 = ___acc0;
		uint64_t* L_9 = ___acc0;
		int64_t L_10 = *((int64_t*)L_9);
		*((int64_t*)L_8) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)-8796714831421723037LL)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t XXHash_round64_m3022093F18A470D0734A81DCBFD4C2ADFB1EBA05_inline (uint64_t ___accn0, uint64_t ___lane1, const RuntimeMethod* method)
{
	{
		// accn += lane * k_Prime64v2;
		uint64_t L_0 = ___accn0;
		uint64_t L_1 = ___lane1;
		___accn0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_1, (int64_t)((int64_t)-4417276706812531889LL)))));
		// return Bits.RotateLeft(accn, 31) * k_Prime64v1;
		uint64_t L_2 = ___accn0;
		uint64_t L_3;
		L_3 = Bits_RotateLeft_mCFD889A53E9322A5A1F7E8CD8F392B78FF738025_inline(L_2, ((int32_t)31), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)((int64_t)-7046029288634856825LL)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XXHash_processLane32_m9CBE7EB9EC74635CB53493344B4B372DD5C1D38F_inline (uint8_t** ___pInput0, uint32_t* ___accn1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// uint lane = *(uint*)pInput;
		uint8_t** L_0 = ___pInput0;
		int32_t L_1 = *((uint32_t*)(*((intptr_t*)L_0)));
		V_0 = L_1;
		// accn = round32(accn, lane);
		uint32_t* L_2 = ___accn1;
		uint32_t* L_3 = ___accn1;
		int32_t L_4 = *((uint32_t*)L_3);
		uint32_t L_5 = V_0;
		uint32_t L_6;
		L_6 = XXHash_round32_m021DA1026431AF261903FE45CEC4DBB390E22E6E_inline(L_4, L_5, /*hidden argument*/NULL);
		*((int32_t*)L_2) = (int32_t)L_6;
		// pInput += 4;
		uint8_t** L_7 = ___pInput0;
		uint8_t** L_8 = ___pInput0;
		*((intptr_t*)L_7) = (intptr_t)((intptr_t)il2cpp_codegen_add((intptr_t)(*((intptr_t*)L_8)), (int32_t)4));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline (uint32_t ___value0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		// return (value << bits) | (value >> (32 - bits));
		uint32_t L_0 = ___value0;
		int32_t L_1 = ___bits1;
		uint32_t L_2 = ___value0;
		int32_t L_3 = ___bits1;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))))|(int32_t)((int32_t)((uint32_t)L_2>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)32), (int32_t)L_3))&(int32_t)((int32_t)31)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XXHash_round32_m021DA1026431AF261903FE45CEC4DBB390E22E6E_inline (uint32_t ___accn0, uint32_t ___lane1, const RuntimeMethod* method)
{
	{
		// accn += lane * k_Prime32v2;
		uint32_t L_0 = ___accn0;
		uint32_t L_1 = ___lane1;
		___accn0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)-2048144777)))));
		// accn = Bits.RotateLeft(accn, 13);
		uint32_t L_2 = ___accn0;
		uint32_t L_3;
		L_3 = Bits_RotateLeft_m3C23A994BD4C619DAF670273B7993715064AFCE8_inline(L_2, ((int32_t)13), /*hidden argument*/NULL);
		___accn0 = L_3;
		// accn *= k_Prime32v1;
		uint32_t L_4 = ___accn0;
		___accn0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1640531535)));
		// return accn;
		uint32_t L_5 = ___accn0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_m2F57B2E52A743F6B9E020B345F62DE97CDED042C_inline (NetworkTime_t865D5183625069F551DCE20477B0E4BDB300123A * __this, const RuntimeMethod* method)
{
	{
		// public double Time => m_TimeSec;
		double L_0 = __this->get_m_TimeSec_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PendingClient_get_ConnectionState_m0CD1231B5AD18C236A239CB878617430DFA52A66_inline (PendingClient_t18CB3BAE7863130798EFF72BDEC235EBBED3CC2B * __this, const RuntimeMethod* method)
{
	{
		// public State ConnectionState { get; internal set; }
		int32_t L_0 = __this->get_U3CConnectionStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* FastBufferWriter_ToArray_m20A12CE89DE19E17D9F4D3281D535E9187283999_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B2_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B1_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_7 = __this->get_Handle_0();
		NullCheck(L_7);
		uint8_t* L_8 = L_7->get_BufferPointer_0();
		int32_t L_9;
		L_9 = FastBufferWriter_get_Length_mF13D32F7E7151C2EC4BBEA1FFCD611EDD99DBA57_inline((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, /*hidden argument*/NULL);
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_6, (void*)(void*)L_8, ((int64_t)((int64_t)L_9)), /*hidden argument*/NULL);
		V_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_mC38DB25F29B37C869E3A451D8AADACF3E581BAB2_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		int32_t L_2 = ___bytes0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Capacity_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = __this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Position_1();
		int32_t L_7 = ___bytes0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = __this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_MaxCapacity_4();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_10 = __this->get_Handle_0();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_Capacity_3();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = __this->get_Handle_0();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_MaxCapacity_4();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_mBBFF2DB791E8BBC5A732DC63351724CBE84AA9AC((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_m718713B1DDC33A4A9BBF4250251C7B454E2C2029_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		int32_t L_2 = ___bytes0;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Length_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_mF8F0216E14C54E39812122729D57485323ECD580_gshared_inline (KeyValuePair_2_tCEEEA2545C9572EC331DBB69871921A5B01E60DA * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_key_0();
		return (uint32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m79DF85333A4DB2C2CEC26107C5499E2E87984855_gshared_inline (uint64_t* ___value0, const RuntimeMethod* method)
{
	{
		// return sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m5577D2FBD8BB5A6D761F62B59B0DFF9167C36903_gshared_inline (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method)
{
	{
		// return sizeof(T);
		uint32_t L_0 = sizeof(TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C );
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCEABA5E770FD17C56A2725FD6FA45D8E06CEA5C7_gshared_inline (bool* ___value0, const RuntimeMethod* method)
{
	{
		// return sizeof(T);
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m6304897E97F59D052D686243067CE41763F4CC1C_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * V_1 = NULL;
	HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 );
		V_0 = (int32_t)L_0;
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_1 = ___value0;
		V_2 = (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)L_1;
		// fixed (T* ptr = &value)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_2 = V_2;
		V_1 = (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)((uintptr_t)L_2);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_7 = V_1;
		int32_t L_8 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (void*)(void*)L_7, (int64_t)((int64_t)((int64_t)L_8)), /*hidden argument*/NULL);
		V_2 = (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_9 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_9);
		int32_t* L_10 = (int32_t*)L_9->get_address_of_Position_1();
		int32_t* L_11 = (int32_t*)L_10;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m752FE3EC881DCED8DB2ACBFD097CCE25A6E4B65A_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	uint64_t* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		uint64_t* L_1 = ___value0;
		V_2 = (uint64_t*)L_1;
		// fixed (T* ptr = &value)
		uint64_t* L_2 = V_2;
		V_1 = (uint64_t*)((uintptr_t)L_2);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		uint64_t* L_7 = V_1;
		int32_t L_8 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (void*)(void*)L_7, (int64_t)((int64_t)((int64_t)L_8)), /*hidden argument*/NULL);
		V_2 = (uint64_t*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_9 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_9);
		int32_t* L_10 = (int32_t*)L_9->get_address_of_Position_1();
		int32_t* L_11 = (int32_t*)L_10;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m3791142948AFC54905FA2CF7ACE63AC9E45041D7_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * V_1 = NULL;
	TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C );
		V_0 = (int32_t)L_0;
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_1 = ___value0;
		V_2 = (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)L_1;
		// fixed (T* ptr = &value)
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_2 = V_2;
		V_1 = (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)((uintptr_t)L_2);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_7 = V_1;
		int32_t L_8 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (void*)(void*)L_7, (int64_t)((int64_t)((int64_t)L_8)), /*hidden argument*/NULL);
		V_2 = (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_9 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_9);
		int32_t* L_10 = (int32_t*)L_9->get_address_of_Position_1();
		int32_t* L_11 = (int32_t*)L_10;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF5907F2C4B8A0E219D6657206D051A9DAB57535E_gshared_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, bool* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool* V_1 = NULL;
	bool* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(bool);
		V_0 = (int32_t)L_0;
		bool* L_1 = ___value0;
		V_2 = (bool*)L_1;
		// fixed (T* ptr = &value)
		bool* L_2 = V_2;
		V_1 = (bool*)((uintptr_t)L_2);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		bool* L_7 = V_1;
		int32_t L_8 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (void*)(void*)L_7, (int64_t)((int64_t)((int64_t)L_8)), /*hidden argument*/NULL);
		V_2 = (bool*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_9 = (WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 *)__this->get_Handle_0();
		NullCheck(L_9);
		int32_t* L_10 = (int32_t*)L_9->get_address_of_Position_1();
		int32_t* L_11 = (int32_t*)L_10;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisHeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37_m8DCE42A81F61B0ADBDB1D90534D3533B9A7AF7C4_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 );
		V_0 = (int32_t)L_0;
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_1 = ___value0;
		V_1 = (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)L_1;
		// fixed (T* ptr = &value)
		HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 * L_2 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_5 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_2), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (int64_t)((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		V_1 = (HeaderData_tB0EA9D8D02D802471B8F019DF46114F192E95B37 *)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)L_8->get_address_of_Position_1();
		int32_t* L_10 = (int32_t*)L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEB0136152CA63D7514A5F586243D401646A08B11_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		uint64_t* L_1 = ___value0;
		V_1 = (uint64_t*)L_1;
		// fixed (T* ptr = &value)
		uint64_t* L_2 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_5 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_2), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (int64_t)((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		V_1 = (uint64_t*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)L_8->get_address_of_Position_1();
		int32_t* L_10 = (int32_t*)L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisTransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C_m8F88805DFBE91E0ED187E5B5D3BF65BB0166D769_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C );
		V_0 = (int32_t)L_0;
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_1 = ___value0;
		V_1 = (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)L_1;
		// fixed (T* ptr = &value)
		TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C * L_2 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_5 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_2), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (int64_t)((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		V_1 = (TransformData_t1C146EA9D3EAE675C9B35AFAC9A96E765F439E9C *)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)L_8->get_address_of_Position_1();
		int32_t* L_10 = (int32_t*)L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mB3F046AE3439D14E4D76DAE26BF727A74E94972D_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, bool* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(bool);
		V_0 = (int32_t)L_0;
		bool* L_1 = ___value0;
		V_1 = (bool*)L_1;
		// fixed (T* ptr = &value)
		bool* L_2 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_3);
		uint8_t* L_4 = (uint8_t*)L_3->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_5 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = (int32_t)L_5->get_Position_1();
		int32_t L_7 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_2), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, (int32_t)L_6)), (int64_t)((int64_t)((int64_t)L_7)), /*hidden argument*/NULL);
		V_1 = (bool*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t* L_9 = (int32_t*)L_8->get_address_of_Position_1();
		int32_t* L_10 = (int32_t*)L_9;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_gshared_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, uint64_t* ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint64_t* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(uint64_t);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline((FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)(FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 *)__this, (int32_t)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_3 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m93384109E3514E1EB7F97A50893B1B617D21F91E(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6BB3F86F6E3281725CB16A0A7961EEA5BA21658F_RuntimeMethod_var)));
	}

IL_001b:
	{
		uint64_t* L_4 = ___value0;
		V_1 = (uint64_t*)L_4;
		// fixed (T* ptr = &value)
		uint64_t* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_6 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->get_BufferPointer_0();
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_8 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->get_Position_1();
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uintptr_t)L_5), (void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_9)), (int64_t)((int64_t)((int64_t)L_10)), /*hidden argument*/NULL);
		V_1 = (uint64_t*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_11 = (ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 *)__this->get_Handle_0();
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)L_11->get_address_of_Position_1();
		int32_t* L_13 = (int32_t*)L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m0E11A9DD45BCB114F30311AEF7096731A397DF85_inline (FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F * __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		int32_t L_2 = ___bytes0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Capacity_3();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_5 = __this->get_Handle_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Position_1();
		int32_t L_7 = ___bytes0;
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_8 = __this->get_Handle_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_MaxCapacity_4();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_10 = __this->get_Handle_0();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_Capacity_3();
		WriterHandle_tA6F8164261C224DAA28A5D21398DA7E0941FD408 * L_12 = __this->get_Handle_0();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_MaxCapacity_4();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_mBBFF2DB791E8BBC5A732DC63351724CBE84AA9AC((FastBufferWriter_tA15F53D565A5C246E7E51425FC6BF8DCCB6C727F *)__this, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m17F2D2B7AE4A99D44C3223B916DB85FEA9B1456C_inline (FastBufferReader_t248DD3038EF5866794A778E8A271A2838EF0C855 * __this, int32_t ___bytes0, const RuntimeMethod* method)
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_0 = __this->get_Handle_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Position_1();
		int32_t L_2 = ___bytes0;
		ReaderHandle_tF9B3767047D609805123EE336E4FC4CA06D87202 * L_3 = __this->get_Handle_0();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Length_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
