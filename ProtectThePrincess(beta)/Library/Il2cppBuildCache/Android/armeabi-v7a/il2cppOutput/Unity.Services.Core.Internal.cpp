#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>
struct Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1C0C51B19916511E9D525272F055515334C93525;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0A3175E42D7B4FC8B83BCBF384D9202A04B1A5BE;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D;
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32>
struct IReadOnlyCollection_1_t0D95864C2E83E646D47E3F985CE9697CCCA3DFCF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct KeyCollection_t987D1B8498991E9507929B91EA51387E3E99276E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct KeyCollection_tE37BE2D9EFD453520DA39A0A7AFF9274BF8703CF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct KeyCollection_t46D1B32E9AF9D793FCA2F5D293753E8ECAB743CA;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct ValueCollection_tD0BF2351FEF23BF110C086D0A74E79DA15680004;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct ValueCollection_tF2D2673E7F7D0C1D09DDB1936B74F4019E1A0F59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct ValueCollection_tADF3859E0E96532814B2E34397590183D83B3A58;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Int32>>[]
struct EntryU5BU5D_t51315F365020443A2CAC74C8D40B2AA9FB7693AC;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>[]
struct EntryU5BU5D_t3DFDAD7E13390B47E7CCEDF9662AFFE42AC2DBAE;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.IServiceComponent>[]
struct EntryU5BU5D_tBB2250BAB1719B623430CCE012033068F99FE4CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>[]
struct EntryU5BU5D_t414C8D19D39F674BF8F102B0D517E8A51AA74200;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Exception[]
struct ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Unity.Services.Core.Internal.AsyncOperation
struct AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B;
// Unity.Services.Core.Internal.AsyncOperationBase
struct AsyncOperationBase_t99A0731A757379BAEAFB5A036DD17CAC89E22E35;
// Unity.Services.Core.Internal.CircularDependencyException
struct CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19;
// Unity.Services.Core.Internal.ComponentRegistry
struct ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D;
// Unity.Services.Core.Internal.CoreRegistryInitializer
struct CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Unity.Services.Core.Internal.DependencyTree
struct DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Internal.IAsyncOperation
struct IAsyncOperation_t27065F422E2634878FD106FC5189873221AD7F56;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t865A92B9368E04957931C2131EE80EC43115A7AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Services.Core.Internal.IInitializablePackage
struct IInitializablePackage_t44614554DEC65713B9337B95F7DAD5C97C88BF34;
// UnityEngine.ILogger
struct ILogger_t25627AC5B51863702868D31972297B7D633B4583;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE;
// Unity.Services.Core.Internal.IServiceComponent
struct IServiceComponent_t97F3CB59980A81BDDA1E0FCB0EF2934DA163876D;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268;
// Unity.Services.Core.Internal.LockedPackageRegistry
struct LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Core.Internal.MissingComponent
struct MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2;
// Unity.Services.Core.Internal.PackageRegistry
struct PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Unity.Services.Core.Internal.UnityServicesInternal
struct UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializablePackage_t44614554DEC65713B9337B95F7DAD5C97C88BF34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t0D95864C2E83E646D47E3F985CE9697CCCA3DFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9;
IL2CPP_EXTERN_C String_t* _stringLiteralFAFBB570A0C923E831AB15C338ABE4641A7828DE;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFC8C08D235315E50E7C79D2CA05A5F6C7EDF82A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D9CC7085D07F483CAD54F08F6B0009DB52180F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3BF25BCD7D58B1C13A46B3CB48349253A7562A20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m461788BA75C9C0AFF2C51A98247C0A788ED9D935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDE8D000FA3F4B3DA8A3AB209D8909E7503CF73CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mD705079C5413495ED396167954F71CD4D0992425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2865040021E52CEEC40EC300508113C9113BC3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5494D8F22283AF66C3CF759043A7200202D861DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mE89A866D65B18EF8A2AAC8A9E38F0CE696196773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m7D282445E9B66A13D9D923B3951CF4C4C62804F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD930B72D3903A12F036624AD9CFCFB8B7DC30520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4BD19F409DFF8FC94B07172DF1B9A4F24C1414CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F230DA9ED2417BE072B26FEF2BE847DCC883259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m748402045BDAFD07CBE69300F832257CBD65E776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF9EA9832D6EE9DEBDBA0974BCF1EB0F4E3A2BAFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m0790C68E6D5245664E86215C9135D21279557804_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mA10DB7ECCADCFEE2387ABC6C0F6FBC06EAC5A2BE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4AACE9413E8FC112166158B6A503CE8E796666F2 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t51315F365020443A2CAC74C8D40B2AA9FB7693AC* ___entries_1;
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
	KeyCollection_t987D1B8498991E9507929B91EA51387E3E99276E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___entries_1)); }
	inline EntryU5BU5D_t51315F365020443A2CAC74C8D40B2AA9FB7693AC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t51315F365020443A2CAC74C8D40B2AA9FB7693AC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t51315F365020443A2CAC74C8D40B2AA9FB7693AC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___keys_7)); }
	inline KeyCollection_t987D1B8498991E9507929B91EA51387E3E99276E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t987D1B8498991E9507929B91EA51387E3E99276E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t987D1B8498991E9507929B91EA51387E3E99276E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ___values_8)); }
	inline ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3DFDAD7E13390B47E7CCEDF9662AFFE42AC2DBAE* ___entries_1;
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
	KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD0BF2351FEF23BF110C086D0A74E79DA15680004 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___entries_1)); }
	inline EntryU5BU5D_t3DFDAD7E13390B47E7CCEDF9662AFFE42AC2DBAE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3DFDAD7E13390B47E7CCEDF9662AFFE42AC2DBAE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3DFDAD7E13390B47E7CCEDF9662AFFE42AC2DBAE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___keys_7)); }
	inline KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ___values_8)); }
	inline ValueCollection_tD0BF2351FEF23BF110C086D0A74E79DA15680004 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD0BF2351FEF23BF110C086D0A74E79DA15680004 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD0BF2351FEF23BF110C086D0A74E79DA15680004 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB2250BAB1719B623430CCE012033068F99FE4CD* ___entries_1;
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
	KeyCollection_tE37BE2D9EFD453520DA39A0A7AFF9274BF8703CF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF2D2673E7F7D0C1D09DDB1936B74F4019E1A0F59 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___entries_1)); }
	inline EntryU5BU5D_tBB2250BAB1719B623430CCE012033068F99FE4CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB2250BAB1719B623430CCE012033068F99FE4CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB2250BAB1719B623430CCE012033068F99FE4CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___keys_7)); }
	inline KeyCollection_tE37BE2D9EFD453520DA39A0A7AFF9274BF8703CF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE37BE2D9EFD453520DA39A0A7AFF9274BF8703CF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE37BE2D9EFD453520DA39A0A7AFF9274BF8703CF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ___values_8)); }
	inline ValueCollection_tF2D2673E7F7D0C1D09DDB1936B74F4019E1A0F59 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF2D2673E7F7D0C1D09DDB1936B74F4019E1A0F59 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF2D2673E7F7D0C1D09DDB1936B74F4019E1A0F59 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* ___entries_1;
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
	KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___entries_1)); }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___keys_7)); }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___values_8)); }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t414C8D19D39F674BF8F102B0D517E8A51AA74200* ___entries_1;
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
	KeyCollection_t46D1B32E9AF9D793FCA2F5D293753E8ECAB743CA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tADF3859E0E96532814B2E34397590183D83B3A58 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___entries_1)); }
	inline EntryU5BU5D_t414C8D19D39F674BF8F102B0D517E8A51AA74200* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t414C8D19D39F674BF8F102B0D517E8A51AA74200** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t414C8D19D39F674BF8F102B0D517E8A51AA74200* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___keys_7)); }
	inline KeyCollection_t46D1B32E9AF9D793FCA2F5D293753E8ECAB743CA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t46D1B32E9AF9D793FCA2F5D293753E8ECAB743CA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t46D1B32E9AF9D793FCA2F5D293753E8ECAB743CA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ___values_8)); }
	inline ValueCollection_tADF3859E0E96532814B2E34397590183D83B3A58 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tADF3859E0E96532814B2E34397590183D83B3A58 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tADF3859E0E96532814B2E34397590183D83B3A58 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A, ___dictionary_0)); }
	inline Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Exception>
struct List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____items_1)); }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* get__items_1() const { return ____items_1; }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_StaticFields, ____emptyArray_5)); }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ExceptionU5BU5D_t683CE8E24950657A060E640B8956913D867F952D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B, ___dictionary_0)); }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Internal.ComponentRegistry
struct ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::<ComponentTypeHashToInstance>k__BackingField
	Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CComponentTypeHashToInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914, ___U3CComponentTypeHashToInstanceU3Ek__BackingField_0)); }
	inline Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * get_U3CComponentTypeHashToInstanceU3Ek__BackingField_0() const { return ___U3CComponentTypeHashToInstanceU3Ek__BackingField_0; }
	inline Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 ** get_address_of_U3CComponentTypeHashToInstanceU3Ek__BackingField_0() { return &___U3CComponentTypeHashToInstanceU3Ek__BackingField_0; }
	inline void set_U3CComponentTypeHashToInstanceU3Ek__BackingField_0(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * value)
	{
		___U3CComponentTypeHashToInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CComponentTypeHashToInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreLogger
struct CoreLogger_t8FEFA22A735882ADEA2A0A9EA90D5D2693CB3E48  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPackageRegistryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D, ___U3CPackageRegistryU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CPackageRegistryU3Ek__BackingField_1() const { return ___U3CPackageRegistryU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CPackageRegistryU3Ek__BackingField_1() { return &___U3CPackageRegistryU3Ek__BackingField_1; }
	inline void set_U3CPackageRegistryU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CPackageRegistryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageRegistryU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CComponentRegistryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D, ___U3CComponentRegistryU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CComponentRegistryU3Ek__BackingField_2() const { return ___U3CComponentRegistryU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CComponentRegistryU3Ek__BackingField_2() { return &___U3CComponentRegistryU3Ek__BackingField_2; }
	inline void set_U3CComponentRegistryU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CComponentRegistryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CComponentRegistryU3Ek__BackingField_2), (void*)value);
	}
};

struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields
{
public:
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreRegistryInitializer
struct CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistryInitializer::m_Registry
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___m_Registry_0;
	// Unity.Services.Core.Internal.AsyncOperation Unity.Services.Core.Internal.CoreRegistryInitializer::m_Operation
	AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * ___m_Operation_1;
	// System.Collections.Generic.List`1<System.Int32> Unity.Services.Core.Internal.CoreRegistryInitializer::m_SortedPackageTypeHashes
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_SortedPackageTypeHashes_2;
	// System.Collections.Generic.List`1<System.Exception> Unity.Services.Core.Internal.CoreRegistryInitializer::m_PackageInitializationFailureReasons
	List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * ___m_PackageInitializationFailureReasons_3;

public:
	inline static int32_t get_offset_of_m_Registry_0() { return static_cast<int32_t>(offsetof(CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2, ___m_Registry_0)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_m_Registry_0() const { return ___m_Registry_0; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_m_Registry_0() { return &___m_Registry_0; }
	inline void set_m_Registry_0(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___m_Registry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Registry_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Operation_1() { return static_cast<int32_t>(offsetof(CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2, ___m_Operation_1)); }
	inline AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * get_m_Operation_1() const { return ___m_Operation_1; }
	inline AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B ** get_address_of_m_Operation_1() { return &___m_Operation_1; }
	inline void set_m_Operation_1(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * value)
	{
		___m_Operation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Operation_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortedPackageTypeHashes_2() { return static_cast<int32_t>(offsetof(CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2, ___m_SortedPackageTypeHashes_2)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_SortedPackageTypeHashes_2() const { return ___m_SortedPackageTypeHashes_2; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_SortedPackageTypeHashes_2() { return &___m_SortedPackageTypeHashes_2; }
	inline void set_m_SortedPackageTypeHashes_2(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_SortedPackageTypeHashes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortedPackageTypeHashes_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PackageInitializationFailureReasons_3() { return static_cast<int32_t>(offsetof(CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2, ___m_PackageInitializationFailureReasons_3)); }
	inline List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * get_m_PackageInitializationFailureReasons_3() const { return ___m_PackageInitializationFailureReasons_3; }
	inline List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB ** get_address_of_m_PackageInitializationFailureReasons_3() { return &___m_PackageInitializationFailureReasons_3; }
	inline void set_m_PackageInitializationFailureReasons_3(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * value)
	{
		___m_PackageInitializationFailureReasons_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PackageInitializationFailureReasons_3), (void*)value);
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Debug
struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B  : public RuntimeObject
{
public:

public:
};

struct Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;

public:
	inline static int32_t get_offset_of_s_DefaultLogger_0() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_DefaultLogger_0)); }
	inline RuntimeObject* get_s_DefaultLogger_0() const { return ___s_DefaultLogger_0; }
	inline RuntimeObject** get_address_of_s_DefaultLogger_0() { return &___s_DefaultLogger_0; }
	inline void set_s_DefaultLogger_0(RuntimeObject* value)
	{
		___s_DefaultLogger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultLogger_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Logger_1() { return static_cast<int32_t>(offsetof(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields, ___s_Logger_1)); }
	inline RuntimeObject* get_s_Logger_1() const { return ___s_Logger_1; }
	inline RuntimeObject** get_address_of_s_Logger_1() { return &___s_Logger_1; }
	inline void set_s_Logger_1(RuntimeObject* value)
	{
		___s_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Logger_1), (void*)value);
	}
};


// Unity.Services.Core.Internal.DependencyTree
struct DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage> Unity.Services.Core.Internal.DependencyTree::PackageTypeHashToInstance
	Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * ___PackageTypeHashToInstance_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Unity.Services.Core.Internal.DependencyTree::ComponentTypeHashToPackageTypeHash
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___ComponentTypeHashToPackageTypeHash_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Unity.Services.Core.Internal.DependencyTree::PackageTypeHashToComponentTypeHashDependencies
	Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___PackageTypeHashToComponentTypeHashDependencies_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.DependencyTree::ComponentTypeHashToInstance
	Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ___ComponentTypeHashToInstance_3;

public:
	inline static int32_t get_offset_of_PackageTypeHashToInstance_0() { return static_cast<int32_t>(offsetof(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174, ___PackageTypeHashToInstance_0)); }
	inline Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * get_PackageTypeHashToInstance_0() const { return ___PackageTypeHashToInstance_0; }
	inline Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 ** get_address_of_PackageTypeHashToInstance_0() { return &___PackageTypeHashToInstance_0; }
	inline void set_PackageTypeHashToInstance_0(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * value)
	{
		___PackageTypeHashToInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackageTypeHashToInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_ComponentTypeHashToPackageTypeHash_1() { return static_cast<int32_t>(offsetof(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174, ___ComponentTypeHashToPackageTypeHash_1)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_ComponentTypeHashToPackageTypeHash_1() const { return ___ComponentTypeHashToPackageTypeHash_1; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_ComponentTypeHashToPackageTypeHash_1() { return &___ComponentTypeHashToPackageTypeHash_1; }
	inline void set_ComponentTypeHashToPackageTypeHash_1(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___ComponentTypeHashToPackageTypeHash_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComponentTypeHashToPackageTypeHash_1), (void*)value);
	}

	inline static int32_t get_offset_of_PackageTypeHashToComponentTypeHashDependencies_2() { return static_cast<int32_t>(offsetof(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174, ___PackageTypeHashToComponentTypeHashDependencies_2)); }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * get_PackageTypeHashToComponentTypeHashDependencies_2() const { return ___PackageTypeHashToComponentTypeHashDependencies_2; }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA ** get_address_of_PackageTypeHashToComponentTypeHashDependencies_2() { return &___PackageTypeHashToComponentTypeHashDependencies_2; }
	inline void set_PackageTypeHashToComponentTypeHashDependencies_2(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * value)
	{
		___PackageTypeHashToComponentTypeHashDependencies_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackageTypeHashToComponentTypeHashDependencies_2), (void*)value);
	}

	inline static int32_t get_offset_of_ComponentTypeHashToInstance_3() { return static_cast<int32_t>(offsetof(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174, ___ComponentTypeHashToInstance_3)); }
	inline Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * get_ComponentTypeHashToInstance_3() const { return ___ComponentTypeHashToInstance_3; }
	inline Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 ** get_address_of_ComponentTypeHashToInstance_3() { return &___ComponentTypeHashToInstance_3; }
	inline void set_ComponentTypeHashToInstance_3(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * value)
	{
		___ComponentTypeHashToInstance_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComponentTypeHashToInstance_3), (void*)value);
	}
};


// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::m_Values
	RuntimeObject* ___m_Values_0;

public:
	inline static int32_t get_offset_of_m_Values_0() { return static_cast<int32_t>(offsetof(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268, ___m_Values_0)); }
	inline RuntimeObject* get_m_Values_0() const { return ___m_Values_0; }
	inline RuntimeObject** get_address_of_m_Values_0() { return &___m_Values_0; }
	inline void set_m_Values_0(RuntimeObject* value)
	{
		___m_Values_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Values_0), (void*)value);
	}
};


// Unity.Services.Core.Internal.LockedPackageRegistry
struct LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::<Registry>k__BackingField
	RuntimeObject* ___U3CRegistryU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CRegistryU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE, ___U3CRegistryU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CRegistryU3Ek__BackingField_0() const { return ___U3CRegistryU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CRegistryU3Ek__BackingField_0() { return &___U3CRegistryU3Ek__BackingField_0; }
	inline void set_U3CRegistryU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CRegistryU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistryU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Internal.MissingComponent
struct MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2  : public RuntimeObject
{
public:

public:
};

struct MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_StaticFields
{
public:
	// Unity.Services.Core.Internal.MissingComponent Unity.Services.Core.Internal.MissingComponent::<Instance>k__BackingField
	MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 ** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Services.Core.Internal.PackageRegistry
struct PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::<Tree>k__BackingField
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___U3CTreeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTreeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A, ___U3CTreeU3Ek__BackingField_0)); }
	inline DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * get_U3CTreeU3Ek__BackingField_0() const { return ___U3CTreeU3Ek__BackingField_0; }
	inline DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 ** get_address_of_U3CTreeU3Ek__BackingField_0() { return &___U3CTreeU3Ek__BackingField_0; }
	inline void set_U3CTreeU3Ek__BackingField_0(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * value)
	{
		___U3CTreeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTreeU3Ek__BackingField_0), (void*)value);
	}
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


// Unity.Services.Core.UnityServices
struct UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2  : public RuntimeObject
{
public:

public:
};

struct UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields
{
public:
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___U3CInstantiationCompletionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstantiationCompletionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields, ___U3CInstantiationCompletionU3Ek__BackingField_1)); }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * get_U3CInstantiationCompletionU3Ek__BackingField_1() const { return ___U3CInstantiationCompletionU3Ek__BackingField_1; }
	inline TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 ** get_address_of_U3CInstantiationCompletionU3Ek__BackingField_1() { return &___U3CInstantiationCompletionU3Ek__BackingField_1; }
	inline void set_U3CInstantiationCompletionU3Ek__BackingField_1(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * value)
	{
		___U3CInstantiationCompletionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Internal.UnityServicesInitializer
struct UnityServicesInitializer_tD3AD5CB30AC0AC112A1E25F36F0CD5ED07A43CC3  : public RuntimeObject
{
public:

public:
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

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128  : public RuntimeObject
{
public:
	// Unity.Services.Core.Internal.CoreRegistryInitializer Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::<>4__this
	CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * ___U3CU3E4__this_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128, ___U3CU3E4__this_0)); }
	inline CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F, ___dictionary_0)); }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F, ___currentValue_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_currentValue_3() const { return ___currentValue_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// Unity.Services.Core.Internal.AsyncOperationBase
struct AsyncOperationBase_t99A0731A757379BAEAFB5A036DD17CAC89E22E35  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:

public:
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


// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 
{
public:
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;

public:
	inline static int32_t get_offset_of_m_Registry_0() { return static_cast<int32_t>(offsetof(CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7, ___m_Registry_0)); }
	inline RuntimeObject* get_m_Registry_0() const { return ___m_Registry_0; }
	inline RuntimeObject** get_address_of_m_Registry_0() { return &___m_Registry_0; }
	inline void set_m_Registry_0(RuntimeObject* value)
	{
		___m_Registry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Registry_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PackageHash_1() { return static_cast<int32_t>(offsetof(CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7, ___m_PackageHash_1)); }
	inline int32_t get_m_PackageHash_1() const { return ___m_PackageHash_1; }
	inline int32_t* get_address_of_m_PackageHash_1() { return &___m_PackageHash_1; }
	inline void set_m_PackageHash_1(int32_t value)
	{
		___m_PackageHash_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D 
{
public:
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::Tree
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___Tree_0;
	// System.Collections.Generic.ICollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::Target
	RuntimeObject* ___Target_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::m_PackageTypeHashExplorationHistory
	Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * ___m_PackageTypeHashExplorationHistory_2;

public:
	inline static int32_t get_offset_of_Tree_0() { return static_cast<int32_t>(offsetof(DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D, ___Tree_0)); }
	inline DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * get_Tree_0() const { return ___Tree_0; }
	inline DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 ** get_address_of_Tree_0() { return &___Tree_0; }
	inline void set_Tree_0(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * value)
	{
		___Tree_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tree_0), (void*)value);
	}

	inline static int32_t get_offset_of_Target_1() { return static_cast<int32_t>(offsetof(DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D, ___Target_1)); }
	inline RuntimeObject* get_Target_1() const { return ___Target_1; }
	inline RuntimeObject** get_address_of_Target_1() { return &___Target_1; }
	inline void set_Target_1(RuntimeObject* value)
	{
		___Target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PackageTypeHashExplorationHistory_2() { return static_cast<int32_t>(offsetof(DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D, ___m_PackageTypeHashExplorationHistory_2)); }
	inline Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * get_m_PackageTypeHashExplorationHistory_2() const { return ___m_PackageTypeHashExplorationHistory_2; }
	inline Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 ** get_address_of_m_PackageTypeHashExplorationHistory_2() { return &___m_PackageTypeHashExplorationHistory_2; }
	inline void set_m_PackageTypeHashExplorationHistory_2(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * value)
	{
		___m_PackageTypeHashExplorationHistory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PackageTypeHashExplorationHistory_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_pinvoke
{
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___Tree_0;
	RuntimeObject* ___Target_1;
	Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * ___m_PackageTypeHashExplorationHistory_2;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_com
{
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___Tree_0;
	RuntimeObject* ___Target_1;
	Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * ___m_PackageTypeHashExplorationHistory_2;
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


// Unity.Services.Core.Internal.AsyncOperationStatus
struct AsyncOperationStatus_tF442DD146E61F872DCD10DD01A43215DC6B11C94 
{
public:
	// System.Int32 Unity.Services.Core.Internal.AsyncOperationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncOperationStatus_tF442DD146E61F872DCD10DD01A43215DC6B11C94, ___value___2)); }
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

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Services.Core.ServicesInitializationState
struct ServicesInitializationState_t3E3AB811280F61433AAE9A5AEFF74C640A506D2F 
{
public:
	// System.Int32 Unity.Services.Core.ServicesInitializationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServicesInitializationState_t3E3AB811280F61433AAE9A5AEFF74C640A506D2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086  : public AsyncOperationBase_t99A0731A757379BAEAFB5A036DD17CAC89E22E35
{
public:
	// System.Threading.Tasks.Task Unity.Services.Core.Internal.TaskAsyncOperation::m_Task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_Task_1;

public:
	inline static int32_t get_offset_of_m_Task_1() { return static_cast<int32_t>(offsetof(TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086, ___m_Task_1)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_Task_1() const { return ___m_Task_1; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_Task_1() { return &___m_Task_1; }
	inline void set_m_Task_1(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_Task_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Task_1), (void*)value);
	}
};

struct TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086_StaticFields
{
public:
	// System.Threading.Tasks.TaskScheduler Unity.Services.Core.Internal.TaskAsyncOperation::Scheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___Scheduler_0;

public:
	inline static int32_t get_offset_of_Scheduler_0() { return static_cast<int32_t>(offsetof(TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086_StaticFields, ___Scheduler_0)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_Scheduler_0() const { return ___Scheduler_0; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_Scheduler_0() { return &___Scheduler_0; }
	inline void set_Scheduler_0(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___Scheduler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Scheduler_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Threading.Tasks.TaskStatus
struct TaskStatus_t550D7DA3655E0A44C7B2925539A4025FB6BA9EF2 
{
public:
	// System.Int32 System.Threading.Tasks.TaskStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskStatus_t550D7DA3655E0A44C7B2925539A4025FB6BA9EF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark
struct ExplorationMark_t6ED45AC5634D1694D80B4599DD62CBBE20D3CDFD 
{
public:
	// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExplorationMark_t6ED45AC5634D1694D80B4599DD62CBBE20D3CDFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// Unity.Services.Core.Internal.AsyncOperation
struct AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B  : public RuntimeObject
{
public:
	// System.Boolean Unity.Services.Core.Internal.AsyncOperation::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.Exception Unity.Services.Core.Internal.AsyncOperation::<Exception>k__BackingField
	Exception_t * ___U3CExceptionU3Ek__BackingField_2;
	// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation> Unity.Services.Core.Internal.AsyncOperation::m_CompletedCallback
	Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * ___m_CompletedCallback_3;

public:
	inline static int32_t get_offset_of_U3CIsDoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B, ___U3CIsDoneU3Ek__BackingField_0)); }
	inline bool get_U3CIsDoneU3Ek__BackingField_0() const { return ___U3CIsDoneU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsDoneU3Ek__BackingField_0() { return &___U3CIsDoneU3Ek__BackingField_0; }
	inline void set_U3CIsDoneU3Ek__BackingField_0(bool value)
	{
		___U3CIsDoneU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B, ___U3CStatusU3Ek__BackingField_1)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_1() const { return ___U3CStatusU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_1() { return &___U3CStatusU3Ek__BackingField_1; }
	inline void set_U3CStatusU3Ek__BackingField_1(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B, ___U3CExceptionU3Ek__BackingField_2)); }
	inline Exception_t * get_U3CExceptionU3Ek__BackingField_2() const { return ___U3CExceptionU3Ek__BackingField_2; }
	inline Exception_t ** get_address_of_U3CExceptionU3Ek__BackingField_2() { return &___U3CExceptionU3Ek__BackingField_2; }
	inline void set_U3CExceptionU3Ek__BackingField_2(Exception_t * value)
	{
		___U3CExceptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CompletedCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B, ___m_CompletedCallback_3)); }
	inline Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * get_m_CompletedCallback_3() const { return ___m_CompletedCallback_3; }
	inline Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 ** get_address_of_m_CompletedCallback_3() { return &___m_CompletedCallback_3; }
	inline void set_m_CompletedCallback_3(Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * value)
	{
		___m_CompletedCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CompletedCallback_3), (void*)value);
	}
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

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1  : public Exception_t
{
public:

public:
};


// Unity.Services.Core.Internal.UnityServicesInternal
struct UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676  : public RuntimeObject
{
public:
	// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::<Options>k__BackingField
	InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___U3COptionsU3Ek__BackingField_1;
	// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::CanInitialize
	bool ___CanInitialize_2;
	// Unity.Services.Core.Internal.AsyncOperation Unity.Services.Core.Internal.UnityServicesInternal::m_Initialization
	AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * ___m_Initialization_3;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::<Registry>k__BackingField
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___U3CRegistryU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676, ___U3CStateU3Ek__BackingField_0)); }
	inline int32_t get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(int32_t value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676, ___U3COptionsU3Ek__BackingField_1)); }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * get_U3COptionsU3Ek__BackingField_1() const { return ___U3COptionsU3Ek__BackingField_1; }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 ** get_address_of_U3COptionsU3Ek__BackingField_1() { return &___U3COptionsU3Ek__BackingField_1; }
	inline void set_U3COptionsU3Ek__BackingField_1(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * value)
	{
		___U3COptionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_CanInitialize_2() { return static_cast<int32_t>(offsetof(UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676, ___CanInitialize_2)); }
	inline bool get_CanInitialize_2() const { return ___CanInitialize_2; }
	inline bool* get_address_of_CanInitialize_2() { return &___CanInitialize_2; }
	inline void set_CanInitialize_2(bool value)
	{
		___CanInitialize_2 = value;
	}

	inline static int32_t get_offset_of_m_Initialization_3() { return static_cast<int32_t>(offsetof(UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676, ___m_Initialization_3)); }
	inline AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * get_m_Initialization_3() const { return ___m_Initialization_3; }
	inline AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B ** get_address_of_m_Initialization_3() { return &___m_Initialization_3; }
	inline void set_m_Initialization_3(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * value)
	{
		___m_Initialization_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Initialization_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRegistryU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676, ___U3CRegistryU3Ek__BackingField_4)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_U3CRegistryU3Ek__BackingField_4() const { return ___U3CRegistryU3Ek__BackingField_4; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_U3CRegistryU3Ek__BackingField_4() { return &___U3CRegistryU3Ek__BackingField_4; }
	inline void set_U3CRegistryU3Ek__BackingField_4(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___U3CRegistryU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistryU3Ek__BackingField_4), (void*)value);
	}
};


// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>
struct Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Services.Core.Internal.CircularDependencyException
struct CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19  : public ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m44347BB07B4E3330B906FD92BA1D63E640B34779_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC4BC2CF356468F9CE48C69C89BF5616E99D66F60_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m988809E98194DE981FF9EE6E01D063DA5ED35D4E_gshared (Dictionary_2_t3F631552EE10022FD5F4AE6E71CA4F6987BF6FE0 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * Dictionary_2_get_Keys_m924AFD154B5C2155ADFF034DB79BDEEF3A6F3B5A_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method);

// System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mB26E4A8824F6D76728C63598D7B5429CDF04C1F5_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mC6BF7583E63ECD4EFC2C009DF1396C94C74A6FCB_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m5C29CA992616C9B8D4FFA23BD7CC37CCADA60FFF_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>::Invoke(!0)
inline void Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462 (Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m1C8E32318055D52EB0459AEE5B21599D723D70DF_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m0AEEA3462F9CDB75941615F596738DED9A9FC01E (ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ComponentRegistry_get_ComponentTypeHashToInstance_m6C2F6C1142114F481C818C72761F4112CD28BC2B_inline (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484 (Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 *, int32_t, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// Unity.Services.Core.Internal.MissingComponent Unity.Services.Core.Internal.MissingComponent::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * MissingComponent_get_Instance_m67F2B4C3B8EF8B321A1AAF2B9B28CB2E00324965_inline (const RuntimeMethod* method);
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistration__ctor_m47C3571B4810250E1DC7EF60A60E478C0064AECA (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, RuntimeObject* ___registry0, int32_t ___packageHash1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_m7ED4C74645B3FF90D81A281351B055B51D2100A0 (DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry__ctor_m1E23A96958F4E2DF69D6AA88100B36C7232411EA (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___tree0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mDFE3AB3DFC827714943503FAADB0B3DBCFA4E9B2_inline (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry__ctor_m51EEDAB27A7F52F107E5734A1C680987E2A03EE3 (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * __this, Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ___componentTypeHashToInstance0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_m13BAB75683A7EC858614FD5BDE2AF52017B20D86_inline (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry__ctor_m281B0C298C8B5D3E480D49CD7AD312E77819FDD8 (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, RuntimeObject* ___registryToLock0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_mDFD63B69F2C991640B2A1A0BDBAC8E3446CE5910 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::CompleteInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_CompleteInitialization_m621AC5E9F2CF351F3A014CF925766E2DD0A63B57 (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
inline void List_1__ctor_mF9EA9832D6EE9DEBDBA0974BCF1EB0F4E3A2BAFE (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializePackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializePackageAt_mE8AF6A95898D686A793FB73D3CF84B6C881342AD (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_inline (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Succeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Succeed_m86ED19065E6A8CEA5BDCDD49C521FCDEBB17C1AE (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, const RuntimeMethod* method);
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m8402940DB4199F47B93D5E4A649438657D288BC1 (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_mDB62E664CCAE4AF4458273E554D2F89253EABDFA (ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.AsyncOperation::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Fail_m75F6D7FCB552896D14B7422F7C6836363FA0435F (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, Exception_t * ___reason0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m036CB544AF5D823F193E9589B27719F6392600B7 (U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer::GetPackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistryInitializer_GetPackageAt_mEC3A82D7F4F84E30B2350F9005847A2CAD8EFFB3 (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_FromCurrentSynchronizationContext_m0C14AFBD067489E31AFAA6CE72784F2587904636 (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_m20B3C667396F5BF42307B3E2BEE5A30152BD76EC (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___continuationAction0, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(!0)
inline void List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892 (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * __this, Exception_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *, Exception_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Item(!0)
inline RuntimeObject* Dictionary_2_get_Item_m5494D8F22283AF66C3CF759043A7200202D861DF (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::.ctor()
inline void Dictionary_2__ctor_m461788BA75C9C0AFF2C51A98247C0A788ED9D935 (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, const RuntimeMethod*))Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m0D9CC7085D07F483CAD54F08F6B0009DB52180F0 (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::.ctor()
inline void Dictionary_2__ctor_m3BF25BCD7D58B1C13A46B3CB48349253A7562A20 (Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mBC4BC6A44459E4C7B2B9C0C169D288226AF0BD82 (DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * __this, Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * ___packageToInstance0, Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___componentToPackage1, Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___packageToComponentDependencies2, Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ___componentToInstance3, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter__ctor_m354E34F6E9033EB9F3F5C373B30B98E8499BE73E (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___tree0, RuntimeObject* ___target1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_m7B3D548832DAD1AF0CD05D28642C14AA6DE77BBA (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mE60A46C5735C2E4FE9D9DAFD1A8DEF79487307CE (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mDE8D000FA3F4B3DA8A3AB209D8909E7503CF73CE (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m44347BB07B4E3330B906FD92BA1D63E640B34779_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___packageTypeHash0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_mBA33706AB7C2A51F13C824127EA445DAB73C82CE (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Values()
inline ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * Dictionary_2_get_Values_m7D282445E9B66A13D9D923B3951CF4C4C62804F0 (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * (*) (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA *, const RuntimeMethod*))Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F  ValueCollection_GetEnumerator_mA10DB7ECCADCFEE2387ABC6C0F6FBC06EAC5A2BE (ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F  (*) (ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B *, const RuntimeMethod*))ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * Enumerator_get_Current_m748402045BDAFD07CBE69300F832257CBD65E776_inline (Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F * __this, const RuntimeMethod* method)
{
	return ((  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * (*) (Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F *, const RuntimeMethod*))Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline)(__this, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mB375F26E02C49D339C2150203904B118750AC9A7 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_m5F230DA9ED2417BE072B26FEF2BE847DCC883259 (Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F *, const RuntimeMethod*))Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_m4BD19F409DFF8FC94B07172DF1B9A4F24C1414CC (Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F *, const RuntimeMethod*))Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared)(__this, method);
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsOptional(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsOptional_m4F55A441DC27876F249391D51B98F99323A42117 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsProvided(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsProvided_mE1CAAF4A2D148008B96BA4CB7ABA3A50D41CDF4A (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mFC8C08D235315E50E7C79D2CA05A5F6C7EDF82A4 (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 *, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mC4BC2CF356468F9CE48C69C89BF5616E99D66F60_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m33B194CD51110E3A00D6D0891F318956C201310C (CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_MarkPackage_m2538E4F3895CF187CB43976AB8C941EEE733A77C (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___packageTypeHash0, int32_t ___mark1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mCA8E59A295228393AC49578983CA429A781CE9A2 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___packageTypeHash0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m8DFEC2BE0B33DE351602568319E01C1865DD7E19 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method);
// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_m64D65DB89EF38D690E2A77C62BCE760A15147674 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD930B72D3903A12F036624AD9CFCFB8B7DC30520 (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m988809E98194DE981FF9EE6E01D063DA5ED35D4E_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Keys()
inline KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A * Dictionary_2_get_Keys_mE89A866D65B18EF8A2AAC8A9E38F0CE696196773 (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A * (*) (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 *, const RuntimeMethod*))Dictionary_2_get_Keys_m924AFD154B5C2155ADFF034DB79BDEEF3A6F3B5A_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Item(!0)
inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * Dictionary_2_get_Item_m2865040021E52CEEC40EC300508113C9113BC3A6 (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * (*) (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_gshared)(__this, ___key0, method);
}
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_mE84E248EBB79F22FA86D923B7616BD0D38666600_inline (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.MissingComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__ctor_m677E807677CE360F3DA822B9C4338DDD2DFA9D66 (MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m38494044D09397158ADD445F7B267686565E50E8_inline (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal__ctor_m8A9C7D1A28893EA079267C258A14A830C126952C (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.UnityServices::set_Instance(Unity.Services.Core.IUnityServices)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m39A45BA6CA2C6A05AE326D5D702B5C9C3B10CE90_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * UnityServices_get_InstantiationCompletion_m59DE03F61C3C54AA331F4338E5683613392D8E71_inline (const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71 (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 *, RuntimeObject *, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_gshared)(__this, ___result0, method);
}
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::EnableInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_EnableInitialization_mC141C6B55FCF4D45E2DCE40E928FF70BC6F0CEBB (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_m398A4C1563A1B070DA389BC79F75C635339FF5B1_inline (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, int32_t ___value0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65_inline (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Count()
inline int32_t Dictionary_2_get_Count_mD705079C5413495ED396167954F71CD4D0992425 (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 *, const RuntimeMethod*))Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.AsyncOperation,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer__ctor_m8DB2ADDB6F48F26B3263A221D33B47510002B5EF (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * ___operation1, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___sortedPackageTypeHashes2, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializeRegistry_m19E9B55256247DEB0FF67ABCEE620E6EDCCFDBD2 (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockPackageRegistration_m9365486F21428BC201D2F54820870C86879A121D (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasRequestedInitialization_mC930EB5D147267B82A79DD54378C662742168AC2 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::StartInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_StartInitialization_mECE696ED0D75F0C360F88FE938D6E380F05CDA43 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m322B3FEDAED081C1EA55F6E2922007475E7CAAED (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mB26E4A8824F6D76728C63598D7B5429CDF04C1F5 (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->get_U3CIsDoneU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mC6BF7583E63ECD4EFC2C009DF1396C94C74A6FCB (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsDoneU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m5C29CA992616C9B8D4FFA23BD7CC37CCADA60FFF (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m1C8E32318055D52EB0459AEE5B21599D723D70DF (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Exception Exception { get; protected set; }
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Succeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Succeed_m86ED19065E6A8CEA5BDCDD49C521FCDEBB17C1AE (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * G_B4_0 = NULL;
	Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mB26E4A8824F6D76728C63598D7B5429CDF04C1F5_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// IsDone = true;
		AsyncOperation_set_IsDone_mC6BF7583E63ECD4EFC2C009DF1396C94C74A6FCB_inline(__this, (bool)1, /*hidden argument*/NULL);
		// Status = AsyncOperationStatus.Succeeded;
		AsyncOperation_set_Status_m5C29CA992616C9B8D4FFA23BD7CC37CCADA60FFF_inline(__this, 2, /*hidden argument*/NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * L_1 = __this->get_m_CompletedCallback_3();
		Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0023;
		}
	}
	{
		goto IL_0029;
	}

IL_0023:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462(G_B4_0, __this, /*hidden argument*/Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462_RuntimeMethod_var);
	}

IL_0029:
	{
		// m_CompletedCallback = null;
		__this->set_m_CompletedCallback_3((Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 *)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Fail_m75F6D7FCB552896D14B7422F7C6836363FA0435F (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, Exception_t * ___reason0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * G_B4_0 = NULL;
	Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mB26E4A8824F6D76728C63598D7B5429CDF04C1F5_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Exception = reason;
		Exception_t * L_1 = ___reason0;
		AsyncOperation_set_Exception_m1C8E32318055D52EB0459AEE5B21599D723D70DF_inline(__this, L_1, /*hidden argument*/NULL);
		// IsDone = true;
		AsyncOperation_set_IsDone_mC6BF7583E63ECD4EFC2C009DF1396C94C74A6FCB_inline(__this, (bool)1, /*hidden argument*/NULL);
		// Status = AsyncOperationStatus.Failed;
		AsyncOperation_set_Status_m5C29CA992616C9B8D4FFA23BD7CC37CCADA60FFF_inline(__this, 3, /*hidden argument*/NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * L_2 = __this->get_m_CompletedCallback_3();
		Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_002a;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462(G_B4_0, __this, /*hidden argument*/Action_1_Invoke_m3D9E733AE7CCF0223B1CFCC8D5CE2288345C3462_RuntimeMethod_var);
	}

IL_0030:
	{
		// m_CompletedCallback = null;
		__this->set_m_CompletedCallback_3((Action_1_tA8AF7C6D81D59DCF5691D2160BCA269CA9F7E705 *)NULL);
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
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_keepWaiting_m4AD1ACE24F35A45C0AB14BC46C5C9CEAEA2B9841 (AsyncOperationBase_t99A0731A757379BAEAFB5A036DD17CAC89E22E35 * __this, const RuntimeMethod* method)
{
	{
		// public override bool keepWaiting => !IsCompleted;
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted() */, __this);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
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
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m33B194CD51110E3A00D6D0891F318956C201310C (CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19 * __this, const RuntimeMethod* method)
{
	{
		// public CircularDependencyException() {}
		ServicesInitializationException__ctor_m0AEEA3462F9CDB75941615F596738DED9A9FC01E(__this, /*hidden argument*/NULL);
		// public CircularDependencyException() {}
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
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ComponentRegistry_get_ComponentTypeHashToInstance_m6C2F6C1142114F481C818C72761F4112CD28BC2B (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * __this, const RuntimeMethod* method)
{
	{
		// internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_0 = __this->get_U3CComponentTypeHashToInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry__ctor_m51EEDAB27A7F52F107E5734A1C680987E2A03EE3 (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * __this, Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ___componentTypeHashToInstance0, const RuntimeMethod* method)
{
	{
		// public ComponentRegistry(
		//     [NotNull] Dictionary<int, IServiceComponent> componentTypeHashToInstance)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// ComponentTypeHashToInstance = componentTypeHashToInstance;
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_0 = ___componentTypeHashToInstance0;
		__this->set_U3CComponentTypeHashToInstanceU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Internal.ComponentRegistry::IsComponentTypeRegistered(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentRegistry_IsComponentTypeRegistered_mAE195E37191650B64DD225A0CD70F2AD23284941 (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return ComponentTypeHashToInstance.TryGetValue(componentTypeHash, out var storedComponent)
		//     && !(storedComponent is null)
		//     && storedComponent != MissingComponent.Instance;
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_0;
		L_0 = ComponentRegistry_get_ComponentTypeHashToInstance_m6C2F6C1142114F481C818C72761F4112CD28BC2B_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___componentTypeHash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484(L_0, L_1, (RuntimeObject**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * L_5;
		L_5 = MissingComponent_get_Instance_m67F2B4C3B8EF8B321A1AAF2B9B28CB2E00324965_inline(/*hidden argument*/NULL);
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 *)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
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
// System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogWarning_m324CE62EFBFC9487C9887F40734A3F0187480B9C (RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogWarning(object message) => Debug.unityLogger.LogWarning(k_Tag, message);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline(/*hidden argument*/NULL);
		RuntimeObject * L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(4 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogError_m83F82BBCC1AA3D9B4D8DEC69C0C3F0FB6546CCB4 (RuntimeObject * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogError(object message) => Debug.unityLogger.LogError(k_Tag, message);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline(/*hidden argument*/NULL);
		RuntimeObject * L_1 = ___message0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(5 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_t25627AC5B51863702868D31972297B7D633B4583_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
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
// Conversion methods for marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshal_pinvoke(const CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7& unmarshaled, CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
IL2CPP_EXTERN_C void CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshal_pinvoke_back(const CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_pinvoke& marshaled, CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7& unmarshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshal_pinvoke_cleanup(CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshal_com(const CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7& unmarshaled, CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_com& marshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
IL2CPP_EXTERN_C void CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshal_com_back(const CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_com& marshaled, CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7& unmarshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshal_com_cleanup(CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistration__ctor_m47C3571B4810250E1DC7EF60A60E478C0064AECA (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, RuntimeObject* ___registry0, int32_t ___packageHash1, const RuntimeMethod* method)
{
	{
		// m_Registry = registry;
		RuntimeObject* L_0 = ___registry0;
		__this->set_m_Registry_0(L_0);
		// m_PackageHash = packageHash;
		int32_t L_1 = ___packageHash1;
		__this->set_m_PackageHash_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CoreRegistration__ctor_m47C3571B4810250E1DC7EF60A60E478C0064AECA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___registry0, int32_t ___packageHash1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * _thisAdjusted = reinterpret_cast<CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *>(__this + _offset);
	CoreRegistration__ctor_m47C3571B4810250E1DC7EF60A60E478C0064AECA(_thisAdjusted, ___registry0, ___packageHash1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; } = new CoreRegistry();
		IL2CPP_RUNTIME_CLASS_INIT(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ((CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPackageRegistryU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mDFE3AB3DFC827714943503FAADB0B3DBCFA4E9B2 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPackageRegistryU3Ek__BackingField_1(L_0);
		return;
	}
}
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_m25731FA880291808592339A4FFAE940F469E6B0E (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CComponentRegistryU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_m13BAB75683A7EC858614FD5BDE2AF52017B20D86 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CComponentRegistryU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_mDFD63B69F2C991640B2A1A0BDBAC8E3446CE5910 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * V_0 = NULL;
	{
		// internal CoreRegistry()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// var dependencyTree = new DependencyTree();
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = (DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 *)il2cpp_codegen_object_new(DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174_il2cpp_TypeInfo_var);
		DependencyTree__ctor_m7ED4C74645B3FF90D81A281351B055B51D2100A0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// PackageRegistry = new PackageRegistry(dependencyTree);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_1 = V_0;
		PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * L_2 = (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A *)il2cpp_codegen_object_new(PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A_il2cpp_TypeInfo_var);
		PackageRegistry__ctor_m1E23A96958F4E2DF69D6AA88100B36C7232411EA(L_2, L_1, /*hidden argument*/NULL);
		CoreRegistry_set_PackageRegistry_mDFE3AB3DFC827714943503FAADB0B3DBCFA4E9B2_inline(__this, L_2, /*hidden argument*/NULL);
		// ComponentRegistry = new ComponentRegistry(dependencyTree.ComponentTypeHashToInstance);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_4 = L_3->get_ComponentTypeHashToInstance_3();
		ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * L_5 = (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 *)il2cpp_codegen_object_new(ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914_il2cpp_TypeInfo_var);
		ComponentRegistry__ctor_m51EEDAB27A7F52F107E5734A1C680987E2A03EE3(L_5, L_4, /*hidden argument*/NULL);
		CoreRegistry_set_ComponentRegistry_m13BAB75683A7EC858614FD5BDE2AF52017B20D86_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockPackageRegistration_m9365486F21428BC201D2F54820870C86879A121D (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PackageRegistry is LockedPackageRegistry)
		RuntimeObject* L_0;
		L_0 = CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline(__this, /*hidden argument*/NULL);
		if (!((LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE *)IsInstClass((RuntimeObject*)L_0, LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE_il2cpp_TypeInfo_var)))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// PackageRegistry = new LockedPackageRegistry(PackageRegistry);
		RuntimeObject* L_1;
		L_1 = CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline(__this, /*hidden argument*/NULL);
		LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * L_2 = (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE *)il2cpp_codegen_object_new(LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE_il2cpp_TypeInfo_var);
		LockedPackageRegistry__ctor_m281B0C298C8B5D3E480D49CD7AD312E77819FDD8(L_2, L_1, /*hidden argument*/NULL);
		CoreRegistry_set_PackageRegistry_mDFE3AB3DFC827714943503FAADB0B3DBCFA4E9B2_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__cctor_mF07247596918234AC5B708A7A1BC8B1CF1556BA9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; } = new CoreRegistry();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *)il2cpp_codegen_object_new(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		CoreRegistry__ctor_mDFD63B69F2C991640B2A1A0BDBAC8E3446CE5910(L_0, /*hidden argument*/NULL);
		((CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.AsyncOperation,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer__ctor_m8DB2ADDB6F48F26B3263A221D33B47510002B5EF (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * ___operation1, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___sortedPackageTypeHashes2, const RuntimeMethod* method)
{
	{
		// public CoreRegistryInitializer(
		//     CoreRegistry registry, AsyncOperation operation, List<int> sortedPackageTypeHashes)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Registry = registry;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ___registry0;
		__this->set_m_Registry_0(L_0);
		// m_Operation = operation;
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_1 = ___operation1;
		__this->set_m_Operation_1(L_1);
		// m_SortedPackageTypeHashes = sortedPackageTypeHashes;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = ___sortedPackageTypeHashes2;
		__this->set_m_SortedPackageTypeHashes_2(L_2);
		// m_PackageInitializationFailureReasons = null;
		__this->set_m_PackageInitializationFailureReasons_3((List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializeRegistry_m19E9B55256247DEB0FF67ABCEE620E6EDCCFDBD2 (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF9EA9832D6EE9DEBDBA0974BCF1EB0F4E3A2BAFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_SortedPackageTypeHashes.Count <= 0)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_m_SortedPackageTypeHashes_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_0, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// CompleteInitialization();
		CoreRegistryInitializer_CompleteInitialization_m621AC5E9F2CF351F3A014CF925766E2DD0A63B57(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0015:
	{
		// m_PackageInitializationFailureReasons = new List<Exception>(m_SortedPackageTypeHashes.Count);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = __this->get_m_SortedPackageTypeHashes_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_2, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_4 = (List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *)il2cpp_codegen_object_new(List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB_il2cpp_TypeInfo_var);
		List_1__ctor_mF9EA9832D6EE9DEBDBA0974BCF1EB0F4E3A2BAFE(L_4, L_3, /*hidden argument*/List_1__ctor_mF9EA9832D6EE9DEBDBA0974BCF1EB0F4E3A2BAFE_RuntimeMethod_var);
		__this->set_m_PackageInitializationFailureReasons_3(L_4);
		// InitializePackageAt(0);
		CoreRegistryInitializer_InitializePackageAt_mE8AF6A95898D686A793FB73D3CF84B6C881342AD(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::CompleteInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_CompleteInitialization_m621AC5E9F2CF351F3A014CF925766E2DD0A63B57 (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAFBB570A0C923E831AB15C338ABE4641A7828DE);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * V_0 = NULL;
	ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * V_1 = NULL;
	{
		// if (m_PackageInitializationFailureReasons is null
		//     || m_PackageInitializationFailureReasons.Count <= 0)
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_0 = __this->get_m_PackageInitializationFailureReasons_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_1 = __this->get_m_PackageInitializationFailureReasons_3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_inline(L_1, /*hidden argument*/List_1_get_Count_m162750049C0DEF6C91B1197B9A57A376C86D16D7_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0016:
	{
		// m_Operation.Succeed();
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_3 = __this->get_m_Operation_1();
		NullCheck(L_3);
		AsyncOperation_Succeed_m86ED19065E6A8CEA5BDCDD49C521FCDEBB17C1AE(L_3, /*hidden argument*/NULL);
		// }
		goto IL_0047;
	}

IL_0023:
	{
		// var innerException = new AggregateException(m_PackageInitializationFailureReasons);
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_4 = __this->get_m_PackageInitializationFailureReasons_3();
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_5 = (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *)il2cpp_codegen_object_new(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var);
		AggregateException__ctor_m8402940DB4199F47B93D5E4A649438657D288BC1(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var reason = new ServicesInitializationException(errorMessage, innerException);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_6 = V_0;
		ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * L_7 = (ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 *)il2cpp_codegen_object_new(ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1_il2cpp_TypeInfo_var);
		ServicesInitializationException__ctor_mDB62E664CCAE4AF4458273E554D2F89253EABDFA(L_7, _stringLiteralFAFBB570A0C923E831AB15C338ABE4641A7828DE, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// m_Operation.Fail(reason);
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_8 = __this->get_m_Operation_1();
		ServicesInitializationException_tB29CA123886F164D3642AC2F2EFEEA32AE80A0C1 * L_9 = V_1;
		NullCheck(L_8);
		AsyncOperation_Fail_m75F6D7FCB552896D14B7422F7C6836363FA0435F(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// m_Registry.PackageRegistry.Tree = null;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_10 = __this->get_m_Registry_0();
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * >::Invoke(1 /* System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree) */, IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var, L_11, (DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 *)NULL);
		// m_PackageInitializationFailureReasons = null;
		__this->set_m_PackageInitializationFailureReasons_3((List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB *)NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::InitializePackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer_InitializePackageAt_mE8AF6A95898D686A793FB73D3CF84B6C881342AD (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializablePackage_t44614554DEC65713B9337B95F7DAD5C97C88BF34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m0790C68E6D5245664E86215C9135D21279557804_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * L_0 = (U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_m036CB544AF5D823F193E9589B27719F6392600B7(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * L_2 = V_0;
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		L_2->set_index_1(L_3);
		// var package = GetPackageAt(index);
		U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_index_1();
		RuntimeObject* L_6;
		L_6 = CoreRegistryInitializer_GetPackageAt_mEC3A82D7F4F84E30B2350F9005847A2CAD8EFFB3(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// var initialization = package.Initialize(m_Registry);
		RuntimeObject* L_7 = V_1;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_8 = __this->get_m_Registry_0();
		NullCheck(L_7);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
		L_9 = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * >::Invoke(0 /* System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackage::Initialize(Unity.Services.Core.Internal.CoreRegistry) */, IInitializablePackage_t44614554DEC65713B9337B95F7DAD5C97C88BF34_il2cpp_TypeInfo_var, L_7, L_8);
		// initialization.ContinueWith(TrackFailureAndProceedInitialization,
		//     TaskScheduler.FromCurrentSynchronizationContext());
		U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * L_10 = V_0;
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_11 = (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *)il2cpp_codegen_object_new(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m0790C68E6D5245664E86215C9135D21279557804_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_12;
		L_12 = TaskScheduler_FromCurrentSynchronizationContext_m0C14AFBD067489E31AFAA6CE72784F2587904636(/*hidden argument*/NULL);
		NullCheck(L_9);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_13;
		L_13 = Task_ContinueWith_m20B3C667396F5BF42307B3E2BEE5A30152BD76EC(L_9, L_11, L_12, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// m_PackageInitializationFailureReasons.Add(e);
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_14 = __this->get_m_PackageInitializationFailureReasons_3();
		Exception_t * L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892(L_14, L_15, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892_RuntimeMethod_var)));
		// InitializePackageAt(index + 1);
		U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_index_1();
		CoreRegistryInitializer_InitializePackageAt_mE8AF6A95898D686A793FB73D3CF84B6C881342AD(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0063;
	} // end catch (depth: 1)

IL_0063:
	{
		// }
		return;
	}
}
// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer::GetPackageAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistryInitializer_GetPackageAt_mEC3A82D7F4F84E30B2350F9005847A2CAD8EFFB3 (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5494D8F22283AF66C3CF759043A7200202D861DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var packageTypeHash = m_SortedPackageTypeHashes[index];
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_m_SortedPackageTypeHashes_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		V_0 = L_2;
		// return m_Registry.PackageRegistry.Tree.PackageTypeHashToInstance[packageTypeHash];
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_3 = __this->get_m_Registry_0();
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_5;
		L_5 = InterfaceFuncInvoker0< DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * L_6 = L_5->get_PackageTypeHashToInstance_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_m5494D8F22283AF66C3CF759043A7200202D861DF(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m5494D8F22283AF66C3CF759043A7200202D861DF_RuntimeMethod_var);
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
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_m7ED4C74645B3FF90D81A281351B055B51D2100A0 (DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0D9CC7085D07F483CAD54F08F6B0009DB52180F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3BF25BCD7D58B1C13A46B3CB48349253A7562A20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m461788BA75C9C0AFF2C51A98247C0A788ED9D935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(
		//     new Dictionary<int, IInitializablePackage>(),
		//     new Dictionary<int, int>(),
		//     new Dictionary<int, List<int>>(),
		//     new Dictionary<int, IServiceComponent>()) {}
		Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * L_0 = (Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 *)il2cpp_codegen_object_new(Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m461788BA75C9C0AFF2C51A98247C0A788ED9D935(L_0, /*hidden argument*/Dictionary_2__ctor_m461788BA75C9C0AFF2C51A98247C0A788ED9D935_RuntimeMethod_var);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1(L_1, /*hidden argument*/Dictionary_2__ctor_mE4D6F6FA5A737865159110CFFF4034001E7F75C1_RuntimeMethod_var);
		Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * L_2 = (Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA *)il2cpp_codegen_object_new(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0D9CC7085D07F483CAD54F08F6B0009DB52180F0(L_2, /*hidden argument*/Dictionary_2__ctor_m0D9CC7085D07F483CAD54F08F6B0009DB52180F0_RuntimeMethod_var);
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_3 = (Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 *)il2cpp_codegen_object_new(Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3BF25BCD7D58B1C13A46B3CB48349253A7562A20(L_3, /*hidden argument*/Dictionary_2__ctor_m3BF25BCD7D58B1C13A46B3CB48349253A7562A20_RuntimeMethod_var);
		DependencyTree__ctor_mBC4BC6A44459E4C7B2B9C0C169D288226AF0BD82(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// new Dictionary<int, IServiceComponent>()) {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mBC4BC6A44459E4C7B2B9C0C169D288226AF0BD82 (DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * __this, Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * ___packageToInstance0, Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___componentToPackage1, Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___packageToComponentDependencies2, Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ___componentToInstance3, const RuntimeMethod* method)
{
	{
		// internal DependencyTree(
		//     Dictionary<int, IInitializablePackage> packageToInstance,
		//     Dictionary<int, int> componentToPackage,
		//     Dictionary<int, List<int>> packageToComponentDependencies,
		//     Dictionary<int, IServiceComponent> componentToInstance)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// PackageTypeHashToInstance = packageToInstance;
		Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * L_0 = ___packageToInstance0;
		__this->set_PackageTypeHashToInstance_0(L_0);
		// ComponentTypeHashToPackageTypeHash = componentToPackage;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = ___componentToPackage1;
		__this->set_ComponentTypeHashToPackageTypeHash_1(L_1);
		// PackageTypeHashToComponentTypeHashDependencies = packageToComponentDependencies;
		Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * L_2 = ___packageToComponentDependencies2;
		__this->set_PackageTypeHashToComponentTypeHashDependencies_2(L_2);
		// ComponentTypeHashToInstance = componentToInstance;
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_3 = ___componentToInstance3;
		__this->set_ComponentTypeHashToInstance_3(L_3);
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
// Conversion methods for marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshal_pinvoke(const DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D& unmarshaled, DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshal_pinvoke_back(const DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_pinvoke& marshaled, DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D& unmarshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshal_pinvoke_cleanup(DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshal_com(const DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D& unmarshaled, DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_com& marshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshal_com_back(const DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_com& marshaled, DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D& unmarshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshal_com_cleanup(DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter__ctor_m354E34F6E9033EB9F3F5C373B30B98E8499BE73E (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___tree0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	{
		// Tree = tree;
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = ___tree0;
		__this->set_Tree_0(L_0);
		// Target = target;
		RuntimeObject* L_1 = ___target1;
		__this->set_Target_1(L_1);
		// m_PackageTypeHashExplorationHistory = null;
		__this->set_m_PackageTypeHashExplorationHistory_2((Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter__ctor_m354E34F6E9033EB9F3F5C373B30B98E8499BE73E_AdjustorThunk (RuntimeObject * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___tree0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter__ctor_m354E34F6E9033EB9F3F5C373B30B98E8499BE73E(_thisAdjusted, ___tree0, ___target1, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_mBA33706AB7C2A51F13C824127EA445DAB73C82CE (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDE8D000FA3F4B3DA8A3AB209D8909E7503CF73CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t0D95864C2E83E646D47E3F985CE9697CCCA3DFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Target.Clear();
		RuntimeObject* L_0 = __this->get_Target_1();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var, L_0);
		// RemoveUnprovidedOptionalDependenciesFromTree();
		DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_m7B3D548832DAD1AF0CD05D28642C14AA6DE77BBA((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, /*hidden argument*/NULL);
		// var registeredPackageTypeHashes = GetPackageTypeHashes();
		RuntimeObject* L_1;
		L_1 = DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mE60A46C5735C2E4FE9D9DAFD1A8DEF79487307CE((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		// m_PackageTypeHashExplorationHistory = new Dictionary<int, ExplorationMark>(registeredPackageTypeHashes.Count);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Int32>::get_Count() */, IReadOnlyCollection_1_t0D95864C2E83E646D47E3F985CE9697CCCA3DFCF_il2cpp_TypeInfo_var, L_2);
		Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * L_4 = (Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 *)il2cpp_codegen_object_new(Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDE8D000FA3F4B3DA8A3AB209D8909E7503CF73CE(L_4, L_3, /*hidden argument*/Dictionary_2__ctor_mDE8D000FA3F4B3DA8A3AB209D8909E7503CF73CE_RuntimeMethod_var);
		__this->set_m_PackageTypeHashExplorationHistory_2(L_4);
		// foreach (var packageTypeHash in registeredPackageTypeHashes)
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0032:
		{
			// foreach (var packageTypeHash in registeredPackageTypeHashes)
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			// SortTreeThrough(packageTypeHash);
			int32_t L_9 = V_2;
			DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_9, /*hidden argument*/NULL);
		}

IL_0040:
		{
			// foreach (var packageTypeHash in registeredPackageTypeHashes)
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0032;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x54, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(74)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// m_PackageTypeHashExplorationHistory = null;
		__this->set_m_PackageTypeHashExplorationHistory_2((Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 *)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_mBA33706AB7C2A51F13C824127EA445DAB73C82CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_mBA33706AB7C2A51F13C824127EA445DAB73C82CE(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_m7B3D548832DAD1AF0CD05D28642C14AA6DE77BBA (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m7D282445E9B66A13D9D923B3951CF4C4C62804F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BD19F409DFF8FC94B07172DF1B9A4F24C1414CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F230DA9ED2417BE072B26FEF2BE847DCC883259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m748402045BDAFD07CBE69300F832257CBD65E776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mA10DB7ECCADCFEE2387ABC6C0F6FBC06EAC5A2BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_Tree_0();
		NullCheck(L_0);
		Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * L_1 = L_0->get_PackageTypeHashToComponentTypeHashDependencies_2();
		NullCheck(L_1);
		ValueCollection_t9A8593E30C078B539732ACEBEE92105480CAD93B * L_2;
		L_2 = Dictionary_2_get_Values_m7D282445E9B66A13D9D923B3951CF4C4C62804F0(L_1, /*hidden argument*/Dictionary_2_get_Values_m7D282445E9B66A13D9D923B3951CF4C4C62804F0_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F  L_3;
		L_3 = ValueCollection_GetEnumerator_mA10DB7ECCADCFEE2387ABC6C0F6FBC06EAC5A2BE(L_2, /*hidden argument*/ValueCollection_GetEnumerator_mA10DB7ECCADCFEE2387ABC6C0F6FBC06EAC5A2BE_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_0018:
		{
			// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4;
			L_4 = Enumerator_get_Current_m748402045BDAFD07CBE69300F832257CBD65E776_inline((Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m748402045BDAFD07CBE69300F832257CBD65E776_RuntimeMethod_var);
			V_1 = L_4;
			// RemoveUnprovidedOptionalDependencies(dependencyTypeHashes);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = V_1;
			DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mB375F26E02C49D339C2150203904B118750AC9A7((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_5, /*hidden argument*/NULL);
		}

IL_0027:
		{
			// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
			bool L_6;
			L_6 = Enumerator_MoveNext_m5F230DA9ED2417BE072B26FEF2BE847DCC883259((Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m5F230DA9ED2417BE072B26FEF2BE847DCC883259_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4BD19F409DFF8FC94B07172DF1B9A4F24C1414CC((Enumerator_t175C313079C0912CCE5D01586DAAC62E982B953F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4BD19F409DFF8FC94B07172DF1B9A4F24C1414CC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_m7B3D548832DAD1AF0CD05D28642C14AA6DE77BBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_m7B3D548832DAD1AF0CD05D28642C14AA6DE77BBA(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mB375F26E02C49D339C2150203904B118750AC9A7 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		RuntimeObject* L_0 = ___dependencyTypeHashes0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var, L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0030;
	}

IL_000b:
	{
		// var dependencyTypeHash = dependencyTypeHashes[i];
		RuntimeObject* L_2 = ___dependencyTypeHashes0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		// if (IsOptional(dependencyTypeHash)
		//     && !IsProvided(dependencyTypeHash))
		int32_t L_5 = V_1;
		bool L_6;
		L_6 = DependencyTreeInitializeOrderSorter_IsOptional_m4F55A441DC27876F249391D51B98F99323A42117((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_1;
		bool L_8;
		L_8 = DependencyTreeInitializeOrderSorter_IsProvided_mE1CAAF4A2D148008B96BA4CB7ABA3A50D41CDF4A((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		// dependencyTypeHashes.RemoveAt(i);
		RuntimeObject* L_9 = ___dependencyTypeHashes0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IList_1_t1C0FF9038440D4E3F8C4A2D43AF1062780CF179D_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_002c:
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
	}

IL_0030:
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mB375F26E02C49D339C2150203904B118750AC9A7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mB375F26E02C49D339C2150203904B118750AC9A7(_thisAdjusted, ___dependencyTypeHashes0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___packageTypeHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFC8C08D235315E50E7C79D2CA05A5F6C7EDF82A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		// m_PackageTypeHashExplorationHistory.TryGetValue(packageTypeHash, out var explorationMark);
		Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * L_0 = __this->get_m_PackageTypeHashExplorationHistory_2();
		int32_t L_1 = ___packageTypeHash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mFC8C08D235315E50E7C79D2CA05A5F6C7EDF82A4(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mFC8C08D235315E50E7C79D2CA05A5F6C7EDF82A4_RuntimeMethod_var);
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0020;
	}

IL_0019:
	{
		// throw new CircularDependencyException();
		CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19 * L_5 = (CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CircularDependencyException_tB8FA7AA3B84DAF6901EA2B1C520C16865FDF0A19_il2cpp_TypeInfo_var)));
		CircularDependencyException__ctor_m33B194CD51110E3A00D6D0891F318956C201310C(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63_RuntimeMethod_var)));
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// MarkPackage(packageTypeHash, ExplorationMark.Viewed);
		int32_t L_6 = ___packageTypeHash0;
		DependencyTreeInitializeOrderSorter_MarkPackage_m2538E4F3895CF187CB43976AB8C941EEE733A77C((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_6, 1, /*hidden argument*/NULL);
		// var dependencyTypeHashes = GetDependencyTypeHashesFor(packageTypeHash);
		int32_t L_7 = ___packageTypeHash0;
		RuntimeObject* L_8;
		L_8 = DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mCA8E59A295228393AC49578983CA429A781CE9A2((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// SortTreeThrough(dependencyTypeHashes);
		RuntimeObject* L_9 = V_1;
		DependencyTreeInitializeOrderSorter_SortTreeThrough_m8DFEC2BE0B33DE351602568319E01C1865DD7E19((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_9, /*hidden argument*/NULL);
		// Target.Add(packageTypeHash);
		RuntimeObject* L_10 = __this->get_Target_1();
		int32_t L_11 = ___packageTypeHash0;
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(!0) */, ICollection_1_t1C0C51B19916511E9D525272F055515334C93525_il2cpp_TypeInfo_var, L_10, L_11);
		// MarkPackage(packageTypeHash, ExplorationMark.Sorted);
		int32_t L_12 = ___packageTypeHash0;
		DependencyTreeInitializeOrderSorter_MarkPackage_m2538E4F3895CF187CB43976AB8C941EEE733A77C((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_12, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63_AdjustorThunk (RuntimeObject * __this, int32_t ___packageTypeHash0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63(_thisAdjusted, ___packageTypeHash0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m8DFEC2BE0B33DE351602568319E01C1865DD7E19 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var dependency in dependencyTypeHashes)
		RuntimeObject* L_0 = ___dependencyTypeHashes0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0009:
		{
			// foreach (var dependency in dependencyTypeHashes)
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// var dependencyPackageTypeHash = GetPackageTypeHashFor(dependency);
			int32_t L_4 = V_1;
			int32_t L_5;
			L_5 = DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_m64D65DB89EF38D690E2A77C62BCE760A15147674((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			// SortTreeThrough(dependencyPackageTypeHash);
			int32_t L_6 = V_2;
			DependencyTreeInitializeOrderSorter_SortTreeThrough_mA8B8BAE3D379ED72D4B457CCD3297BADAE9DDC63((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)__this, L_6, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach (var dependency in dependencyTypeHashes)
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			bool L_8;
			L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0009;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x33, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			if (!L_9)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortTreeThrough_m8DFEC2BE0B33DE351602568319E01C1865DD7E19_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___dependencyTypeHashes0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m8DFEC2BE0B33DE351602568319E01C1865DD7E19(_thisAdjusted, ___dependencyTypeHashes0, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_MarkPackage_m2538E4F3895CF187CB43976AB8C941EEE733A77C (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___packageTypeHash0, int32_t ___mark1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD930B72D3903A12F036624AD9CFCFB8B7DC30520_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PackageTypeHashExplorationHistory[packageTypeHash] = mark;
		Dictionary_2_tFECBFEC52AAB9CC88FB0DA6220E682DBFE81F0B4 * L_0 = __this->get_m_PackageTypeHashExplorationHistory_2();
		int32_t L_1 = ___packageTypeHash0;
		int32_t L_2 = ___mark1;
		NullCheck(L_0);
		Dictionary_2_set_Item_mD930B72D3903A12F036624AD9CFCFB8B7DC30520(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_mD930B72D3903A12F036624AD9CFCFB8B7DC30520_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_MarkPackage_m2538E4F3895CF187CB43976AB8C941EEE733A77C_AdjustorThunk (RuntimeObject * __this, int32_t ___packageTypeHash0, int32_t ___mark1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	DependencyTreeInitializeOrderSorter_MarkPackage_m2538E4F3895CF187CB43976AB8C941EEE733A77C(_thisAdjusted, ___packageTypeHash0, ___mark1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mE60A46C5735C2E4FE9D9DAFD1A8DEF79487307CE (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mE89A866D65B18EF8A2AAC8A9E38F0CE696196773_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => Tree.PackageTypeHashToInstance.Keys;
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_Tree_0();
		NullCheck(L_0);
		Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * L_1 = L_0->get_PackageTypeHashToInstance_0();
		NullCheck(L_1);
		KeyCollection_tB4C63BF423B2CD745A9B6796CA81949AD1334C1A * L_2;
		L_2 = Dictionary_2_get_Keys_mE89A866D65B18EF8A2AAC8A9E38F0CE696196773(L_1, /*hidden argument*/Dictionary_2_get_Keys_mE89A866D65B18EF8A2AAC8A9E38F0CE696196773_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mE60A46C5735C2E4FE9D9DAFD1A8DEF79487307CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mE60A46C5735C2E4FE9D9DAFD1A8DEF79487307CE(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_m64D65DB89EF38D690E2A77C62BCE760A15147674 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => Tree.ComponentTypeHashToPackageTypeHash[componentTypeHash];
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_Tree_0();
		NullCheck(L_0);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = L_0->get_ComponentTypeHashToPackageTypeHash_1();
		int32_t L_2 = ___componentTypeHash0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_m64D65DB89EF38D690E2A77C62BCE760A15147674_AdjustorThunk (RuntimeObject * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_m64D65DB89EF38D690E2A77C62BCE760A15147674(_thisAdjusted, ___componentTypeHash0, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mCA8E59A295228393AC49578983CA429A781CE9A2 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___packageTypeHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2865040021E52CEEC40EC300508113C9113BC3A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => Tree.PackageTypeHashToComponentTypeHashDependencies[packageTypeHash];
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_Tree_0();
		NullCheck(L_0);
		Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * L_1 = L_0->get_PackageTypeHashToComponentTypeHashDependencies_2();
		int32_t L_2 = ___packageTypeHash0;
		NullCheck(L_1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3;
		L_3 = Dictionary_2_get_Item_m2865040021E52CEEC40EC300508113C9113BC3A6(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m2865040021E52CEEC40EC300508113C9113BC3A6_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mCA8E59A295228393AC49578983CA429A781CE9A2_AdjustorThunk (RuntimeObject * __this, int32_t ___packageTypeHash0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mCA8E59A295228393AC49578983CA429A781CE9A2(_thisAdjusted, ___packageTypeHash0, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsOptional(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsOptional_m4F55A441DC27876F249391D51B98F99323A42117 (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Tree.ComponentTypeHashToInstance.TryGetValue(componentTypeHash, out var component)
		//     && component is null;
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_Tree_0();
		NullCheck(L_0);
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_1 = L_0->get_ComponentTypeHashToInstance_3();
		int32_t L_2 = ___componentTypeHash0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484(L_1, L_2, (RuntimeObject**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mB1138F4F4154463F16BF7F721C3F4AE2F6826484_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool DependencyTreeInitializeOrderSorter_IsOptional_m4F55A441DC27876F249391D51B98F99323A42117_AdjustorThunk (RuntimeObject * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	bool _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_IsOptional_m4F55A441DC27876F249391D51B98F99323A42117(_thisAdjusted, ___componentTypeHash0, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::IsProvided(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeInitializeOrderSorter_IsProvided_mE1CAAF4A2D148008B96BA4CB7ABA3A50D41CDF4A (DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Tree.ComponentTypeHashToPackageTypeHash.ContainsKey(componentTypeHash);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_Tree_0();
		NullCheck(L_0);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = L_0->get_ComponentTypeHashToPackageTypeHash_1();
		int32_t L_2 = ___componentTypeHash0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_RuntimeMethod_var);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool DependencyTreeInitializeOrderSorter_IsProvided_mE1CAAF4A2D148008B96BA4CB7ABA3A50D41CDF4A_AdjustorThunk (RuntimeObject * __this, int32_t ___componentTypeHash0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D * _thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *>(__this + _offset);
	bool _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_IsProvided_mE1CAAF4A2D148008B96BA4CB7ABA3A50D41CDF4A(_thisAdjusted, ___componentTypeHash0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_mE84E248EBB79F22FA86D923B7616BD0D38666600 (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, const RuntimeMethod* method)
{
	{
		// internal IPackageRegistry Registry { get; }
		RuntimeObject* L_0 = __this->get_U3CRegistryU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry__ctor_m281B0C298C8B5D3E480D49CD7AD312E77819FDD8 (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, RuntimeObject* ___registryToLock0, const RuntimeMethod* method)
{
	{
		// public LockedPackageRegistry(
		//     [NotNull] IPackageRegistry registryToLock)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Registry = registryToLock;
		RuntimeObject* L_0 = ___registryToLock0;
		__this->set_U3CRegistryU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.LockedPackageRegistry::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * LockedPackageRegistry_get_Tree_m294D8362DEEADB16225E80624408144FA47FEA68 (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => Registry.Tree;
		RuntimeObject* L_0;
		L_0 = LockedPackageRegistry_get_Registry_mE84E248EBB79F22FA86D923B7616BD0D38666600_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_1;
		L_1 = InterfaceFuncInvoker0< DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry_set_Tree_m2A77B3868BC9CF3576D89C46F696AD4C8ACF735B (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => Registry.Tree = value;
		RuntimeObject* L_0;
		L_0 = LockedPackageRegistry_get_Registry_mE84E248EBB79F22FA86D923B7616BD0D38666600_inline(__this, /*hidden argument*/NULL);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * >::Invoke(1 /* System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree) */, IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var, L_0, L_1);
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
// Unity.Services.Core.Internal.MissingComponent Unity.Services.Core.Internal.MissingComponent::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * MissingComponent_get_Instance_m67F2B4C3B8EF8B321A1AAF2B9B28CB2E00324965 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MissingComponent Instance { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * L_0 = ((MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.MissingComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__ctor_m677E807677CE360F3DA822B9C4338DDD2DFA9D66 (MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * __this, const RuntimeMethod* method)
{
	{
		// MissingComponent() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// MissingComponent() {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.MissingComponent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__cctor_m0045CD50DB56501239EC8D924DEB751CED9E4B70 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = new MissingComponent();
		MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * L_0 = (MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 *)il2cpp_codegen_object_new(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		MissingComponent__ctor_m677E807677CE360F3DA822B9C4338DDD2DFA9D66(L_0, /*hidden argument*/NULL);
		((MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * PackageRegistry_get_Tree_m82266A4B888C8B70AEE2697607AAC33E9C309950 (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * __this, const RuntimeMethod* method)
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = __this->get_U3CTreeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m38494044D09397158ADD445F7B267686565E50E8 (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___value0, const RuntimeMethod* method)
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = ___value0;
		__this->set_U3CTreeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry__ctor_m1E23A96958F4E2DF69D6AA88100B36C7232411EA (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___tree0, const RuntimeMethod* method)
{
	{
		// public PackageRegistry(
		//     [CanBeNull] DependencyTree tree)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Tree = tree;
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = ___tree0;
		PackageRegistry_set_Tree_m38494044D09397158ADD445F7B267686565E50E8_inline(__this, L_0, /*hidden argument*/NULL);
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
// System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAsyncOperation_get_IsCompleted_mB8DDB75187B62DB0CA45F0BB89E25CA67A16A74D (TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsCompleted => m_Task.IsCompleted;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = __this->get_m_Task_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_SetScheduler_m403E8056436B7A7045670A58495F2074473D4585 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Scheduler = TaskScheduler.FromCurrentSynchronizationContext();
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0;
		L_0 = TaskScheduler_FromCurrentSynchronizationContext_m0C14AFBD067489E31AFAA6CE72784F2587904636(/*hidden argument*/NULL);
		((TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t4299FAEB4F1FFBBC669C5E4E520149B254F9A086_il2cpp_TypeInfo_var))->set_Scheduler_0(L_0);
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
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer::CreateStaticInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInitializer_CreateStaticInstance_m56955B1FAF57F9A61ED993CA7DFB17731ABA4633 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * G_B2_0 = NULL;
	TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * G_B1_0 = NULL;
	{
		// UnityServices.Instance = new UnityServicesInternal(CoreRegistry.Instance);
		IL2CPP_RUNTIME_CLASS_INIT(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0;
		L_0 = CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline(/*hidden argument*/NULL);
		UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * L_1 = (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 *)il2cpp_codegen_object_new(UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676_il2cpp_TypeInfo_var);
		UnityServicesInternal__ctor_m8A9C7D1A28893EA079267C258A14A830C126952C(L_1, L_0, /*hidden argument*/NULL);
		UnityServices_set_Instance_m39A45BA6CA2C6A05AE326D5D702B5C9C3B10CE90_inline(L_1, /*hidden argument*/NULL);
		// UnityServices.InstantiationCompletion?.TrySetResult(null);
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_2;
		L_2 = UnityServices_get_InstantiationCompletion_m59DE03F61C3C54AA331F4338E5683613392D8E71_inline(/*hidden argument*/NULL);
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		bool L_4;
		L_4 = TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71(G_B2_0, NULL, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m3EE8E1110E0E022021CDBF4CA6C7485EAFD17E71_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer::EnableServicesInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInitializer_EnableServicesInitialization_mB78909D42C0AECB6F35A4846012DBE2B4AC70DC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = (UnityServicesInternal)UnityServices.Instance;
		RuntimeObject* L_0;
		L_0 = UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline(/*hidden argument*/NULL);
		// instance.EnableInitialization();
		NullCheck(((UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 *)CastclassClass((RuntimeObject*)L_0, UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676_il2cpp_TypeInfo_var)));
		UnityServicesInternal_EnableInitialization_mC141C6B55FCF4D45E2DCE40E928FF70BC6F0CEBB(((UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 *)CastclassClass((RuntimeObject*)L_0, UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_m398A4C1563A1B070DA389BC79F75C635339FF5B1 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
		return;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * UnityServicesInternal_get_Options_m10314FE528B4475522031007484EF8C6CD1A7341 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method)
{
	{
		// public InitializationOptions Options { get; private set; }
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = __this->get_U3COptionsU3Ek__BackingField_1();
		return L_0;
	}
}
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method)
{
	{
		// CoreRegistry Registry { get; }
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = __this->get_U3CRegistryU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal__ctor_m8A9C7D1A28893EA079267C258A14A830C126952C (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method)
{
	{
		// public UnityServicesInternal(
		//     [NotNull] CoreRegistry registry)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Registry = registry;
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ___registry0;
		__this->set_U3CRegistryU3Ek__BackingField_4(L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasRequestedInitialization_mC930EB5D147267B82A79DD54378C662742168AC2 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method)
{
	{
		// return !(m_Initialization is null);
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_0 = __this->get_m_Initialization_3();
		return (bool)((((int32_t)((((RuntimeObject*)(AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::StartInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_StartInitialization_mECE696ED0D75F0C360F88FE938D6E380F05CDA43 (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mD705079C5413495ED396167954F71CD4D0992425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * G_B2_0 = NULL;
	DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// State = ServicesInitializationState.Initializing;
		UnityServicesInternal_set_State_m398A4C1563A1B070DA389BC79F75C635339FF5B1_inline(__this, 1, /*hidden argument*/NULL);
		// var sortedPackageTypeHashes = new List<int>(
		//     Registry.PackageRegistry.Tree?.PackageTypeHashToInstance.Count ?? 0);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0;
		L_0 = UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_2;
		L_2 = InterfaceFuncInvoker0< DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var, L_1);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0028;
	}

IL_001e:
	{
		NullCheck(G_B2_0);
		Dictionary_2_t13F49D1A0750668EE65D838AF9D916C87CF42705 * L_4 = G_B2_0->get_PackageTypeHashToInstance_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mD705079C5413495ED396167954F71CD4D0992425(L_4, /*hidden argument*/Dictionary_2_get_Count_mD705079C5413495ED396167954F71CD4D0992425_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_6, G_B3_0, /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		// var sorter = new DependencyTreeInitializeOrderSorter(
		//     Registry.PackageRegistry.Tree, sortedPackageTypeHashes);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_7;
		L_7 = UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_9;
		L_9 = InterfaceFuncInvoker0< DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE_il2cpp_TypeInfo_var, L_8);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = V_0;
		DependencyTreeInitializeOrderSorter__ctor_m354E34F6E9033EB9F3F5C373B30B98E8499BE73E((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)(&V_1), L_9, L_10, /*hidden argument*/NULL);
		// sorter.SortRegisteredPackagesIntoTarget();
		DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_mBA33706AB7C2A51F13C824127EA445DAB73C82CE((DependencyTreeInitializeOrderSorter_t26DDA334C6B5734A76F73BC76B6FE4BFF71B808D *)(&V_1), /*hidden argument*/NULL);
		// }
		goto IL_005e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004f;
		}
		throw e;
	}

CATCH_004f:
	{ // begin catch(System.Exception)
		// catch (Exception reason)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// m_Initialization.Fail(reason);
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_11 = __this->get_m_Initialization_3();
		Exception_t * L_12 = V_2;
		NullCheck(L_11);
		AsyncOperation_Fail_m75F6D7FCB552896D14B7422F7C6836363FA0435F(L_11, L_12, /*hidden argument*/NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	} // end catch (depth: 1)

IL_005e:
	{
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		// var initializer = new CoreRegistryInitializer(Registry, m_Initialization, sortedPackageTypeHashes);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_13;
		L_13 = UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65_inline(__this, /*hidden argument*/NULL);
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_14 = __this->get_m_Initialization_3();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = V_0;
		CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * L_16 = (CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 *)il2cpp_codegen_object_new(CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2_il2cpp_TypeInfo_var);
		CoreRegistryInitializer__ctor_m8DB2ADDB6F48F26B3263A221D33B47510002B5EF(L_16, L_13, L_14, L_15, /*hidden argument*/NULL);
		// initializer.InitializeRegistry();
		NullCheck(L_16);
		CoreRegistryInitializer_InitializeRegistry_m19E9B55256247DEB0FF67ABCEE620E6EDCCFDBD2(L_16, /*hidden argument*/NULL);
		// }
		goto IL_0087;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0078;
		}
		throw e;
	}

CATCH_0078:
	{ // begin catch(System.Exception)
		// catch (Exception reason)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// m_Initialization.Fail(reason);
		AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * L_17 = __this->get_m_Initialization_3();
		Exception_t * L_18 = V_3;
		NullCheck(L_17);
		AsyncOperation_Fail_m75F6D7FCB552896D14B7422F7C6836363FA0435F(L_17, L_18, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	} // end catch (depth: 1)

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::EnableInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_EnableInitialization_mC141C6B55FCF4D45E2DCE40E928FF70BC6F0CEBB (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method)
{
	{
		// CanInitialize = true;
		__this->set_CanInitialize_2((bool)1);
		// Registry.LockPackageRegistration();
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0;
		L_0 = UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CoreRegistry_LockPackageRegistration_m9365486F21428BC201D2F54820870C86879A121D(L_0, /*hidden argument*/NULL);
		// if (HasRequestedInitialization())
		bool L_1;
		L_1 = UnityServicesInternal_HasRequestedInitialization_mC930EB5D147267B82A79DD54378C662742168AC2(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// StartInitialization();
		UnityServicesInternal_StartInitialization_mECE696ED0D75F0C360F88FE938D6E380F05CDA43(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
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
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m036CB544AF5D823F193E9589B27719F6392600B7 (U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass7_0::<InitializePackageAt>g__TrackFailureAndProceedInitialization|0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CInitializePackageAtU3Eg__TrackFailureAndProceedInitializationU7C0_m0790C68E6D5245664E86215C9135D21279557804 (U3CU3Ec__DisplayClass7_0_t800CB07798B45835B7161FC8938AB23BCF757128 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___previousInitialization0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (previousInitialization.Status == TaskStatus.Faulted)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___previousInitialization0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Task_get_Status_m322B3FEDAED081C1EA55F6E2922007475E7CAAED(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_001f;
		}
	}
	{
		// m_PackageInitializationFailureReasons.Add(previousInitialization.Exception);
		CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		List_1_t433251677FFAE6CDCEC92C181CEA282328DA13EB * L_3 = L_2->get_m_PackageInitializationFailureReasons_3();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = ___previousInitialization0;
		NullCheck(L_4);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_5;
		L_5 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892(L_3, L_5, /*hidden argument*/List_1_Add_m11BADA3EECE6909E4F094E70A7EC1FED692E1892_RuntimeMethod_var);
	}

IL_001f:
	{
		// index++;
		int32_t L_6 = __this->get_index_1();
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->set_index_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// if (index >= m_SortedPackageTypeHashes.Count)
		int32_t L_8 = __this->get_index_1();
		CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * L_9 = __this->get_U3CU3E4__this_0();
		NullCheck(L_9);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_10 = L_9->get_m_SortedPackageTypeHashes_2();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_10, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_11)))
		{
			goto IL_0053;
		}
	}
	{
		// CompleteInitialization();
		CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		CoreRegistryInitializer_CompleteInitialization_m621AC5E9F2CF351F3A014CF925766E2DD0A63B57(L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0053:
	{
		// InitializePackageAt(index);
		CoreRegistryInitializer_t887CE9628EB9B66F8B005B55DAAFE4ED461712E2 * L_13 = __this->get_U3CU3E4__this_0();
		int32_t L_14 = __this->get_index_1();
		NullCheck(L_13);
		CoreRegistryInitializer_InitializePackageAt_mE8AF6A95898D686A793FB73D3CF84B6C881342AD(L_13, L_14, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mB26E4A8824F6D76728C63598D7B5429CDF04C1F5_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->get_U3CIsDoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mC6BF7583E63ECD4EFC2C009DF1396C94C74A6FCB_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsDoneU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m5C29CA992616C9B8D4FFA23BD7CC37CCADA60FFF_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m1C8E32318055D52EB0459AEE5B21599D723D70DF_inline (AsyncOperation_t8406496AF6C3A29E4937A18563594FEE6D1F9E1B * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Exception Exception { get; protected set; }
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * ComponentRegistry_get_ComponentTypeHashToInstance_m6C2F6C1142114F481C818C72761F4112CD28BC2B_inline (ComponentRegistry_t462CE76B4EEC5FF27B41EA80B81920D54EFB8914 * __this, const RuntimeMethod* method)
{
	{
		// internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }
		Dictionary_2_tCBC7F91155B160E6C17688CBAEF5DB9C94697A94 * L_0 = __this->get_U3CComponentTypeHashToInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * MissingComponent_get_Instance_m67F2B4C3B8EF8B321A1AAF2B9B28CB2E00324965_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MissingComponent Instance { get; }
		IL2CPP_RUNTIME_CLASS_INIT(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var);
		MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2 * L_0 = ((MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_StaticFields*)il2cpp_codegen_static_fields_for(MissingComponent_t9334A4169C9CD7069864DFE5B216E4D2253D44E2_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m70D38067C3055104F6C8D050AB7CE0FDFD05EE22_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_StaticFields*)il2cpp_codegen_static_fields_for(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var))->get_s_Logger_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mDFE3AB3DFC827714943503FAADB0B3DBCFA4E9B2_inline (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPackageRegistryU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_m13BAB75683A7EC858614FD5BDE2AF52017B20D86_inline (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CComponentRegistryU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m90BD8B0B49088169D3DF991B4DED0DB5C4E2FB42_inline (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, const RuntimeMethod* method)
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPackageRegistryU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_mE84E248EBB79F22FA86D923B7616BD0D38666600_inline (LockedPackageRegistry_t5A365D216178DF7DCEAE8292AD5789360CD663DE * __this, const RuntimeMethod* method)
{
	{
		// internal IPackageRegistry Registry { get; }
		RuntimeObject* L_0 = __this->get_U3CRegistryU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m38494044D09397158ADD445F7B267686565E50E8_inline (PackageRegistry_tC667B9CCF7412DB50D78692B737B1CBEE2ADB33A * __this, DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * ___value0, const RuntimeMethod* method)
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_t29BFFC0AFCC6BAC003421465956C26AD271D7174 * L_0 = ___value0;
		__this->set_U3CTreeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; } = new CoreRegistry();
		IL2CPP_RUNTIME_CLASS_INIT(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ((CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m39A45BA6CA2C6A05AE326D5D702B5C9C3B10CE90_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * UnityServices_get_InstantiationCompletion_m59DE03F61C3C54AA331F4338E5683613392D8E71_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * L_0 = ((UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var))->get_U3CInstantiationCompletionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ((UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_m398A4C1563A1B070DA389BC79F75C635339FF5B1_inline (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * UnityServicesInternal_get_Registry_mD448646E07936AE178745408C2D02B207E9B7F65_inline (UnityServicesInternal_t2BCDA898B82FCEDBA739AB05EA5B3EFCE131B676 * __this, const RuntimeMethod* method)
{
	{
		// CoreRegistry Registry { get; }
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = __this->get_U3CRegistryU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
