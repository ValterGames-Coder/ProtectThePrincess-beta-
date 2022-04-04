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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>>
struct Func_2_tB020C1DDC101FC663044D8B1B6C2C8F20A9F4297;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>>
struct Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>>
struct Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct TaskFactory_1_tE2FAD5FC4E89AA4E34F931784A65D6AA5A837FA3;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct Task_1_t97DFB866E59201D2557169D88A6A2528985E7333;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>[]
struct EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96;
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Unity.Services.Core.Registration.CorePackageInitializer
struct CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D;
// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t865A92B9368E04957931C2131EE80EC43115A7AC;
// Unity.Services.Core.Configuration.IConfigurationLoader
struct IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Unity.Services.Core.Environments.Internal.IEnvironments
struct IEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED;
// Unity.Services.Core.Device.Internal.IInstallationId
struct IInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_tC4E727967447DA452A70876AA8278363D5AEF4FE;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668;
// Unity.Services.Core.Device.IUserIdentifierProvider
struct IUserIdentifierProvider_t40461661E5FE07A813535047577423A33D6BE3A2;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268;
// Unity.Services.Core.Device.InstallationId
struct InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A;
// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_tB17564F0224F6B6EE1A6AFC3940CBC6F7CD968E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C;
IL2CPP_EXTERN_C String_t* _stringLiteral72A108E053F65E47DD8EFDC2C7EB71B5E7879550;
IL2CPP_EXTERN_C String_t* _stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m19E8D22932231FE7AA782A32090C2AEAD4B71FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mBCE22959DCBACB25F2ABE9844785B66238AEC895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m673605AD6C0EFC3A71753D6687C035EC9A87E1AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m015B8E518DAC172242607AE348F8F785B84EC55C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m95356C0025EC3EB6801B5CB7EC6B932EA4C79ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m8DC910AC00E5302C1C625946929C530D952820B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m5137D231A5E5B713272E33F5D9D26514B726B9D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_mF2292CF888DFFB5B88C3E665900EB570AB34BB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m50048EB4309791512D0AD869B902738640D2C28C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mBDD81B756F0BF38208853C2C6908FAA60A355448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC16CAA49AE917851C8BDE8AD24948777F7B8625E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m8879AD20BE9D6688C8FDC2F8B315341A8092EEEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m4EC26B6DBAFFC810EE919E1AEE028887693CFF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t49C51B521711AC6762E985EB9E3D5C227A01B824 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96* ___entries_1;
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
	KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___entries_1)); }
	inline EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8CB050746E70241DE17861AEDF0482915EC61F96* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___keys_7)); }
	inline KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t772892AF3BE19FC8C91BB7C87F66708E2B9B936B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ___values_8)); }
	inline ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6D59100C1892FF652FC6F96A7023A3C54CA4AB02 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Configuration.ConfigurationUtils
struct ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782  : public RuntimeObject
{
public:

public:
};

struct ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields
{
public:
	// System.String Unity.Services.Core.Configuration.ConfigurationUtils::<RuntimeConfigFullPath>k__BackingField
	String_t* ___U3CRuntimeConfigFullPathU3Ek__BackingField_0;
	// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::<ConfigurationLoader>k__BackingField
	RuntimeObject* ___U3CConfigurationLoaderU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRuntimeConfigFullPathU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields, ___U3CRuntimeConfigFullPathU3Ek__BackingField_0)); }
	inline String_t* get_U3CRuntimeConfigFullPathU3Ek__BackingField_0() const { return ___U3CRuntimeConfigFullPathU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRuntimeConfigFullPathU3Ek__BackingField_0() { return &___U3CRuntimeConfigFullPathU3Ek__BackingField_0; }
	inline void set_U3CRuntimeConfigFullPathU3Ek__BackingField_0(String_t* value)
	{
		___U3CRuntimeConfigFullPathU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRuntimeConfigFullPathU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConfigurationLoaderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields, ___U3CConfigurationLoaderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CConfigurationLoaderU3Ek__BackingField_1() const { return ___U3CConfigurationLoaderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CConfigurationLoaderU3Ek__BackingField_1() { return &___U3CConfigurationLoaderU3Ek__BackingField_1; }
	inline void set_U3CConfigurationLoaderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CConfigurationLoaderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationLoaderU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer
struct CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509  : public RuntimeObject
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


// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Environments.Internal.Environments::<Current>k__BackingField
	String_t* ___U3CCurrentU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8, ___U3CCurrentU3Ek__BackingField_0)); }
	inline String_t* get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(String_t* value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentU3Ek__BackingField_0), (void*)value);
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


// Unity.Services.Core.Device.InstallationId
struct InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Device.InstallationId::identifier
	String_t* ___identifier_0;
	// Unity.Services.Core.Device.IUserIdentifierProvider Unity.Services.Core.Device.InstallationId::unityAdsIdentifierProvider
	RuntimeObject* ___unityAdsIdentifierProvider_1;
	// Unity.Services.Core.Device.IUserIdentifierProvider Unity.Services.Core.Device.InstallationId::unityAnalyticsIdentifierProvider
	RuntimeObject* ___unityAnalyticsIdentifierProvider_2;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identifier_0), (void*)value);
	}

	inline static int32_t get_offset_of_unityAdsIdentifierProvider_1() { return static_cast<int32_t>(offsetof(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A, ___unityAdsIdentifierProvider_1)); }
	inline RuntimeObject* get_unityAdsIdentifierProvider_1() const { return ___unityAdsIdentifierProvider_1; }
	inline RuntimeObject** get_address_of_unityAdsIdentifierProvider_1() { return &___unityAdsIdentifierProvider_1; }
	inline void set_unityAdsIdentifierProvider_1(RuntimeObject* value)
	{
		___unityAdsIdentifierProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityAdsIdentifierProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of_unityAnalyticsIdentifierProvider_2() { return static_cast<int32_t>(offsetof(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A, ___unityAnalyticsIdentifierProvider_2)); }
	inline RuntimeObject* get_unityAnalyticsIdentifierProvider_2() const { return ___unityAnalyticsIdentifierProvider_2; }
	inline RuntimeObject** get_address_of_unityAnalyticsIdentifierProvider_2() { return &___unityAnalyticsIdentifierProvider_2; }
	inline void set_unityAnalyticsIdentifierProvider_2(RuntimeObject* value)
	{
		___unityAnalyticsIdentifierProvider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityAnalyticsIdentifierProvider_2), (void*)value);
	}
};


// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry> Unity.Services.Core.Configuration.ProjectConfiguration::m_ConfigValues
	RuntimeObject* ___m_ConfigValues_0;

public:
	inline static int32_t get_offset_of_m_ConfigValues_0() { return static_cast<int32_t>(offsetof(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05, ___m_ConfigValues_0)); }
	inline RuntimeObject* get_m_ConfigValues_0() const { return ___m_ConfigValues_0; }
	inline RuntimeObject** get_address_of_m_ConfigValues_0() { return &___m_ConfigValues_0; }
	inline void set_m_ConfigValues_0(RuntimeObject* value)
	{
		___m_ConfigValues_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigValues_0), (void*)value);
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

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894, ___m_task_0)); }
	inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605, ___m_task_0)); }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51, ___m_task_0)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B 
{
public:
	// System.String[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Keys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Keys_0;
	// Unity.Services.Core.Configuration.ConfigurationEntry[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Values
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;

public:
	inline static int32_t get_offset_of_Keys_0() { return static_cast<int32_t>(offsetof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B, ___Keys_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Keys_0() const { return ___Keys_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Keys_0() { return &___Keys_0; }
	inline void set_Keys_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B, ___Values_1)); }
	inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* get_Values_1() const { return ___Values_1; }
	inline ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke
{
	char** ___Keys_0;
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com
{
	Il2CppChar** ___Keys_0;
	ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* ___Values_1;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1, ___m_task_2)); }
	inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902, ___m_task_2)); }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B, ___m_task_2)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
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


// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>
struct Task_1_t97DFB866E59201D2557169D88A6A2528985E7333  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t97DFB866E59201D2557169D88A6A2528985E7333, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t97DFB866E59201D2557169D88A6A2528985E7333_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tE2FAD5FC4E89AA4E34F931784A65D6AA5A837FA3 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB020C1DDC101FC663044D8B1B6C2C8F20A9F4297 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t97DFB866E59201D2557169D88A6A2528985E7333_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tE2FAD5FC4E89AA4E34F931784A65D6AA5A837FA3 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tE2FAD5FC4E89AA4E34F931784A65D6AA5A837FA3 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tE2FAD5FC4E89AA4E34F931784A65D6AA5A837FA3 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t97DFB866E59201D2557169D88A6A2528985E7333_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tB020C1DDC101FC663044D8B1B6C2C8F20A9F4297 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tB020C1DDC101FC663044D8B1B6C2C8F20A9F4297 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tB020C1DDC101FC663044D8B1B6C2C8F20A9F4297 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>
struct Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970, ___m_result_22)); }
	inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * get_m_result_22() const { return ___m_result_22; }
	inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tF02A2E2EF83EAC947A70576DD5BAD4F529134833 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tFF546E62E63CD94FE7706BDCF31625AEA5CC1ADC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7, ___m_result_22)); }
	inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  get_m_result_22() const { return ___m_result_22; }
	inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___Keys_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_22))->___Values_1), (void*)NULL);
		#endif
	}
};

struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5
struct U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::options
	InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::<>u__1
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457, ___options_2)); }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * get_options_2() const { return ___options_2; }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6
struct U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::<>u__1
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4, ___U3CU3Eu__1_2)); }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4
struct U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::<>t__builder
	AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::options
	InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options_2;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::registry
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::<>u__1
	TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5, ___options_2)); }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * get_options_2() const { return ___options_2; }
	inline InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_2), (void*)value);
	}

	inline static int32_t get_offset_of_registry_3() { return static_cast<int32_t>(offsetof(U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5, ___registry_3)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_registry_3() const { return ___registry_3; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_registry_3() { return &___registry_3; }
	inline void set_registry_3(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___registry_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registry_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1
struct U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 
{
public:
	// System.Int32 Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::registry
	CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::<>u__1
	TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_registry_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938, ___registry_2)); }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * get_registry_2() const { return ___registry_2; }
	inline CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D ** get_address_of_registry_2() { return &___registry_2; }
	inline void set_registry_2(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * value)
	{
		___registry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registry_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistry_RegisterPackage_TisRuntimeObject_m01248EDCB97C401EB2D7EEEC3EC471D8E5A4DF19_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject * ___package0, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject * ___component0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m4D16A24ABCA48F98DFBFDDAC41E5A8D16A2D2049_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m44F5E09F2D38D5A6D52E8B10A1D44E53A05E8266_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_gshared (Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_gshared (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mB3C62BE2221310AC1EBC3FC7F05766A5B134107B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_gshared (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mDFFB04BB363BC7A8851A4E309FA2D4386200D54D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m2CE9B5655E0BF2A3F9430A93A3F4620B3181D29B_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * ___stateMachine1, const RuntimeMethod* method);

// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline (const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer__ctor_m6FD7E4A9C9A9480A2A83B8C1B78469BD73560321 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method);
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistry::RegisterPackage<Unity.Services.Core.Registration.CorePackageInitializer>(!!0)
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * ___package0, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 *, const RuntimeMethod*))CoreRegistry_RegisterPackage_TisRuntimeObject_m01248EDCB97C401EB2D7EEEC3EC471D8E5A4DF19_gshared)(__this, ___package0, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Device.Internal.IInstallationId>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Environments.Internal.IEnvironments>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// Unity.Services.Core.Internal.CoreRegistration Unity.Services.Core.Internal.CoreRegistration::ProvidesComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>()
inline CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736 (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 * __this, const RuntimeMethod* method)
{
	return ((  CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  (*) (CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *, const RuntimeMethod*))CoreRegistration_ProvidesComponent_TisRuntimeObject_mFF019F101DC670F4855A0ACBCCDCAE0817385F6A_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.InstallationId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18 (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069 (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Device.Internal.IInstallationId>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void Unity.Services.Core.Environments.Internal.Environments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environments__ctor_m4F4F1D14D9A5DEBB9515765DE741DCA3687A7E32 (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Environments.Internal.Environments::set_Current(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Environments_set_Current_m2B00B2071BC0C9CFBE4FF9BA3EF09134226EFC0A_inline (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Environments.Internal.IEnvironments>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  AsyncTaskMethodBuilder_1_Create_m673605AD6C0EFC3A71753D6687C035EC9A87E1AB (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_mF2292CF888DFFB5B88C3E665900EB570AB34BB6A (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * __this, U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *, U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m4D16A24ABCA48F98DFBFDDAC41E5A8D16A2D2049_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::get_Task()
inline Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * AsyncTaskMethodBuilder_1_get_Task_m50048EB4309791512D0AD869B902738640D2C28C (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * (*) (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m9A01E4B2FB83D8B9A71740D85F771F9A2E0DBAC9_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m5137D231A5E5B713272E33F5D9D26514B726B9D0 (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m44F5E09F2D38D5A6D52E8B10A1D44E53A05E8266_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::get_Task()
inline Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedConfigOrEmptyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * CorePackageInitializer_GetSerializedConfigOrEmptyAsync_mB1590D8A5D759EF7CDC74CF0FB60CC2CAFB61DD5 (const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D (Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  (*) (Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 *, const RuntimeMethod*))Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490 (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mBCE22959DCBACB25F2ABE9844785B66238AEC895 (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mB3C62BE2221310AC1EBC3FC7F05766A5B134107B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::GetResult()
inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * __this, const RuntimeMethod* method)
{
	return ((  SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  (*) (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A (Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Configuration.SerializableProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m5108DA7E7876453FEE4E030AD578C513313446CB (RuntimeObject* ___self0, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___config1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m36219B38089B98238B7FB691ABF4754AB31CA170 (RuntimeObject* ___self0, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options1, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration::.ctor(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectConfiguration__ctor_m1541CE1BD7ECC522D7F15A6883D4E3628CE960EA (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, RuntimeObject* ___configValues0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__5_MoveNext_m06231A60D2B6865AB9BDCA6382E208393B17001B (U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.ProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__5_SetStateMachine_m6F5427B222D3F35458B6CC3D08CABDACEE1FD324 (U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::get_ConfigurationLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91_inline (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * ___awaiter0, U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *, U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogError_m83F82BBCC1AA3D9B4D8DEC69C0C3F0FB6546CCB4 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Unity.Services.Core.Configuration.SerializableProjectConfiguration Unity.Services.Core.Configuration.SerializableProjectConfiguration::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_MoveNext_m3C8037990110A9CEA7A2F55A31B86C5506DA393B (U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_SetStateMachine_m9025D1BC9907F98A2EC8AE4DC26D7ED3E8DA6F40 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterInstallationId(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterInstallationId_m9C8DB0FD85BD44E891A150BD8711F6A0F325E399 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method);
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::RegisterProjectConfigurationAsync(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * CorePackageInitializer_RegisterProjectConfigurationAsync_m157CC72030526F2454C2FF3D8C8A465B099D1247 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  Task_1_GetAwaiter_m4EC26B6DBAFFC810EE919E1AEE028887693CFF28 (Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  (*) (Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m8879AD20BE9D6688C8FDC2F8B315341A8092EEEF (TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mBDD81B756F0BF38208853C2C6908FAA60A355448 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 * ___awaiter0, U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 *, U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mDFFB04BB363BC7A8851A4E309FA2D4386200D54D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mC16CAA49AE917851C8BDE8AD24948777F7B8625E (TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterEnvironments(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterEnvironments_m4633592D0A0CF8CC1FE35FF31E7A0038AD11A223 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, RuntimeObject* ___projectConfiguration1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_m3CEFECE8F3DAE552A8579864C4E19BCE50CE76AE (U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_m132902694F0FA157F3610951BB0CC3BA6C3108FE (U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GenerateProjectConfigurationAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * CorePackageInitializer_GenerateProjectConfigurationAsync_mF7DFC238E2245114C5615E652D55DE5FF2FFB551 (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration>::GetAwaiter()
inline TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822 (Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  (*) (Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23 (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>,Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m19E8D22932231FE7AA782A32090C2AEAD4B71FD5 (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * __this, TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * ___awaiter0, U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *, TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *, U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m2CE9B5655E0BF2A3F9430A93A3F4620B3181D29B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Configuration.ProjectConfiguration>::GetResult()
inline ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * __this, const RuntimeMethod* method)
{
	return ((  ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * (*) (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::RegisterServiceComponent<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>(!!0)
inline void CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	((  void (*) (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D *, RuntimeObject*, const RuntimeMethod*))CoreRegistry_RegisterServiceComponent_TisRuntimeObject_m0412E2BE82AB42ABBC2EEC663FDF2862BFE91E20_gshared)(__this, ___component0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m015B8E518DAC172242607AE348F8F785B84EC55C (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m95356C0025EC3EB6801B5CB7EC6B932EA4C79ADE (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__4_MoveNext_m27C94E121A884CF286BF26773E002674C0DED50E (U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m8DC910AC00E5302C1C625946929C530D952820B1 (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__4_SetStateMachine_mBF0B96F609AED4E5661DDA9A8F6D03F1629B14A7 (U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
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
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_Register_mCFD2E04BF259466377AF85D3E55E3B90FD9BFF0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// CoreRegistry.Instance.RegisterPackage(new CorePackageInitializer())
		//     .ProvidesComponent<IInstallationId>()
		//     .ProvidesComponent<IEnvironments>()
		//     .ProvidesComponent<IProjectConfiguration>();
		IL2CPP_RUNTIME_CLASS_INIT(CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D_il2cpp_TypeInfo_var);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0;
		L_0 = CoreRegistry_get_Instance_m4D1C714218A28598060C670E87B7B59834A53510_inline(/*hidden argument*/NULL);
		CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * L_1 = (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 *)il2cpp_codegen_object_new(CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_il2cpp_TypeInfo_var);
		CorePackageInitializer__ctor_m6FD7E4A9C9A9480A2A83B8C1B78469BD73560321(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_2;
		L_2 = CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221(L_0, L_1, /*hidden argument*/CoreRegistry_RegisterPackage_TisCorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509_m033CA8EDAE172CF6A681F4FE826DAE721C1E1221_RuntimeMethod_var);
		V_0 = L_2;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_3;
		L_3 = CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_mE82C349E67B8E7D3DFE3DA51A57E426B777073C1_RuntimeMethod_var);
		V_0 = L_3;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_4;
		L_4 = CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_mCBD558F9206C52CF394E4FBA97F4D58CD0DC90F5_RuntimeMethod_var);
		V_0 = L_4;
		CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7  L_5;
		L_5 = CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736((CoreRegistration_tBDC51C545442BA13F0A48A4FF57697E945FFE5B7 *)(&V_0), /*hidden argument*/CoreRegistration_ProvidesComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_m3A9515DC93CE2237B18EA784248D1CBB38A4E736_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Registration.CorePackageInitializer::Initialize(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CorePackageInitializer_Initialize_m13969C0F1B23D9473BD32E68CA16B7F39AA180C6 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ___registry0;
		(&V_0)->set_registry_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_m1B0CECF97E3B94643CD238E4EA044EEB31D0537A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterInstallationId(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterInstallationId_m9C8DB0FD85BD44E891A150BD8711F6A0F325E399 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * V_0 = NULL;
	{
		// var installationId = new InstallationId();
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_0 = (InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A *)il2cpp_codegen_object_new(InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A_il2cpp_TypeInfo_var);
		InstallationId__ctor_m639C8440CCFB01C47A91C4836EE10633AFACCB18(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// installationId.CreateIdentifier();
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_1 = V_0;
		NullCheck(L_1);
		InstallationId_CreateIdentifier_mBD7DDA32FAA6D3BC0DE7D6D214BE7E5DF5771069(L_1, /*hidden argument*/NULL);
		// registry.RegisterServiceComponent<IInstallationId>(installationId);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_2 = ___registry0;
		InstallationId_t5FC404DD9CB967412310AB48BC02CF07B44B607A * L_3 = V_0;
		NullCheck(L_2);
		CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC(L_2, L_3, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIInstallationId_t5CB14D437B23280DBBB319781B3463D5635DC863_m09818CDD4EB3088FA6858977564CCFA3E3A1AAFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::RegisterEnvironments(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Configuration.Internal.IProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer_RegisterEnvironments_m4633592D0A0CF8CC1FE35FF31E7A0038AD11A223 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, RuntimeObject* ___projectConfiguration1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395);
		s_Il2CppMethodInitialized = true;
	}
	Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * V_0 = NULL;
	{
		// var environments = new Environments.Internal.Environments();
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_0 = (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 *)il2cpp_codegen_object_new(Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8_il2cpp_TypeInfo_var);
		Environments__ctor_m4F4F1D14D9A5DEBB9515765DE741DCA3687A7E32(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// environments.Current = projectConfiguration.GetString(EnvironmentsOptionsExtensions.EnvironmentNameKey, "production");
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_1 = V_0;
		RuntimeObject* L_2 = ___projectConfiguration1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(0 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_il2cpp_TypeInfo_var, L_2, _stringLiteral84570E14F5CB57CA92CBBE945CEA229B6709C395, _stringLiteral1B3211DBE32867758EEF2D80E75AAE41597EA87C);
		NullCheck(L_1);
		Environments_set_Current_m2B00B2071BC0C9CFBE4FF9BA3EF09134226EFC0A_inline(L_1, L_3, /*hidden argument*/NULL);
		// registry.RegisterServiceComponent<IEnvironments>(environments);
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_4 = ___registry0;
		Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * L_5 = V_0;
		NullCheck(L_4);
		CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207(L_4, L_5, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIEnvironments_tED3A28EF0BDCECA0E0D5286C8FCB5C8CAA8A3AED_m90548EA5C344424AA6AC9C528A818CAA9E906207_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.Internal.IProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::RegisterProjectConfigurationAsync(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * CorePackageInitializer_RegisterProjectConfigurationAsync_m157CC72030526F2454C2FF3D8C8A465B099D1247 (CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * ___registry0, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m673605AD6C0EFC3A71753D6687C035EC9A87E1AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_mF2292CF888DFFB5B88C3E665900EB570AB34BB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m50048EB4309791512D0AD869B902738640D2C28C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_0 = ___registry0;
		(&V_0)->set_registry_3(L_0);
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_1 = ___options1;
		(&V_0)->set_options_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m673605AD6C0EFC3A71753D6687C035EC9A87E1AB(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m673605AD6C0EFC3A71753D6687C035EC9A87E1AB_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5  L_3 = V_0;
		AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_mF2292CF888DFFB5B88C3E665900EB570AB34BB6A((AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *)(&V_1), (U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_mF2292CF888DFFB5B88C3E665900EB570AB34BB6A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * L_6;
		L_6 = AsyncTaskMethodBuilder_1_get_Task_m50048EB4309791512D0AD869B902738640D2C28C((AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m50048EB4309791512D0AD869B902738640D2C28C_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.ProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GenerateProjectConfigurationAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * CorePackageInitializer_GenerateProjectConfigurationAsync_mF7DFC238E2245114C5615E652D55DE5FF2FFB551 (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m5137D231A5E5B713272E33F5D9D26514B726B9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = ___options0;
		(&V_0)->set_options_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m4F7B791295F539A76BEBFA847C3F92E50F687068_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457  L_2 = V_0;
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m5137D231A5E5B713272E33F5D9D26514B726B9D0((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)(&V_1), (U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_m5137D231A5E5B713272E33F5D9D26514B726B9D0_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m314E168DEA287E26E8DB822BE40015F2C9B8796E_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Registration.CorePackageInitializer::GetSerializedConfigOrEmptyAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * CorePackageInitializer_GetSerializedConfigOrEmptyAsync_mB1590D8A5D759EF7CDC74CF0FB60CC2CAFB61DD5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)(&V_1), (U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_mCF6A5C76E1C4AEF21CFCA675307D5C8D81DD7501_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorePackageInitializer__ctor_m6FD7E4A9C9A9480A2A83B8C1B78469BD73560321 (CorePackageInitializer_tF2B34F210194AE9230E151DE7CF1BDDC24AD0509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__5_MoveNext_m06231A60D2B6865AB9BDCA6382E208393B17001B (U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mBCE22959DCBACB25F2ABE9844785B66238AEC895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * V_1 = NULL;
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_003e;
			}
		}

IL_000a:
		{
			// var serializedConfig = await GetSerializedConfigOrEmptyAsync();
			Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_2;
			L_2 = CorePackageInitializer_GetSerializedConfigOrEmptyAsync_mB1590D8A5D759EF7CDC74CF0FB60CC2CAFB61DD5(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_3;
			L_3 = Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D(L_2, /*hidden argument*/Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
			V_3 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005a;
			}
		}

IL_001e:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_6 = V_3;
			__this->set_U3CU3Eu__1_3(L_6);
			AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mBCE22959DCBACB25F2ABE9844785B66238AEC895((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_7, (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_3), (U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457_mBCE22959DCBACB25F2ABE9844785B66238AEC895_RuntimeMethod_var);
			goto IL_00b7;
		}

IL_003e:
		{
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_8 = __this->get_U3CU3Eu__1_3();
			V_3 = L_8;
			TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * L_9 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_005a:
		{
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_11;
			L_11 = TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
			V_2 = L_11;
			// var configValues = new Dictionary<string, ConfigurationEntry>(serializedConfig.Keys.Length);
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_12 = V_2;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12.get_Keys_0();
			NullCheck(L_13);
			Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * L_14 = (Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B *)il2cpp_codegen_object_new(Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A(L_14, ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), /*hidden argument*/Dictionary_2__ctor_mE3D8C5059BE2B615AF01FEDA06DBED90B82F588A_RuntimeMethod_var);
			// configValues.FillWith(serializedConfig);
			Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * L_15 = L_14;
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_16 = V_2;
			ConfigurationCollectionHelper_FillWith_m5108DA7E7876453FEE4E030AD578C513313446CB(L_15, L_16, /*hidden argument*/NULL);
			// configValues.FillWith(options);
			Dictionary_2_tEB42A8457720AFB8F893168696CB26F4079FC44B * L_17 = L_15;
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_18 = __this->get_options_2();
			ConfigurationCollectionHelper_FillWith_m36219B38089B98238B7FB691ABF4754AB31CA170(L_17, L_18, /*hidden argument*/NULL);
			// return new ProjectConfiguration(configValues);
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_19 = (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 *)il2cpp_codegen_object_new(ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05_il2cpp_TypeInfo_var);
			ProjectConfiguration__ctor_m1541CE1BD7ECC522D7F15A6883D4E3628CE960EA(L_19, L_17, /*hidden argument*/NULL);
			V_1 = L_19;
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_20, L_21, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE4BF6DEA7B8FEC712C70899EF6EE058748C3C9CF_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_22, L_23, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m01A9A9B52C92A94DC0452D1A40FA43369DE5CC2C_RuntimeMethod_var);
	}

IL_00b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateProjectConfigurationAsyncU3Ed__5_MoveNext_m06231A60D2B6865AB9BDCA6382E208393B17001B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * _thisAdjusted = reinterpret_cast<U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 *>(__this + _offset);
	U3CGenerateProjectConfigurationAsyncU3Ed__5_MoveNext_m06231A60D2B6865AB9BDCA6382E208393B17001B(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GenerateProjectConfigurationAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateProjectConfigurationAsyncU3Ed__5_SetStateMachine_m6F5427B222D3F35458B6CC3D08CABDACEE1FD324 (U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE((AsyncTaskMethodBuilder_1_t707435D4D64536A7BBA261FEFBCCAA642529D902 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m13775651404DF63FC11AE1A12A73BD02B9D5F0FE_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGenerateProjectConfigurationAsyncU3Ed__5_SetStateMachine_m6F5427B222D3F35458B6CC3D08CABDACEE1FD324_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 * _thisAdjusted = reinterpret_cast<U3CGenerateProjectConfigurationAsyncU3Ed__5_tB2C72CD506596DD6C9E5EBBB7F93F66015523457 *>(__this + _offset);
	U3CGenerateProjectConfigurationAsyncU3Ed__5_SetStateMachine_m6F5427B222D3F35458B6CC3D08CABDACEE1FD324(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_MoveNext_m3C8037990110A9CEA7A2F55A31B86C5506DA393B (U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}

IL_000a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0046;
				}
			}

IL_000d:
			{
				// var config = await ConfigurationUtils.ConfigurationLoader.GetConfigAsync();
				IL2CPP_RUNTIME_CLASS_INIT(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
				RuntimeObject* L_3;
				L_3 = ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91_inline(/*hidden argument*/NULL);
				NullCheck(L_3);
				Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_4;
				L_4 = InterfaceFuncInvoker0< Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.IConfigurationLoader::GetConfigAsync() */, IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9_il2cpp_TypeInfo_var, L_3);
				NullCheck(L_4);
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_5;
				L_5 = Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D(L_4, /*hidden argument*/Task_1_GetAwaiter_m2AB9DBB9386479EAC3AA62471E4849C7A114370D_RuntimeMethod_var);
				V_2 = L_5;
				bool L_6;
				L_6 = TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mB2B7A24E436296C969845CFFFCFE1211C47CA490_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0062;
				}
			}

IL_0026:
			{
				int32_t L_7 = 0;
				V_0 = L_7;
				__this->set_U3CU3E1__state_0(L_7);
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_8 = V_2;
				__this->set_U3CU3Eu__1_2(L_8);
				AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_9, (TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_2), (U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51_TisU3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4_m6E0AC0DD614C48B670AC0EB2FAD93A24ED89ECC5_RuntimeMethod_var);
				goto IL_00c2;
			}

IL_0046:
			{
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51  L_10 = __this->get_U3CU3Eu__1_2();
				V_2 = L_10;
				TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 * L_11 = __this->get_address_of_U3CU3Eu__1_2();
				il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 ));
				int32_t L_12 = (-1);
				V_0 = L_12;
				__this->set_U3CU3E1__state_0(L_12);
			}

IL_0062:
			{
				SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_13;
				L_13 = TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D((TaskAwaiter_1_t6DD50690E22ED8BE344F93712764C6C55977BF51 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mA7E2D0B6607A8EE6622C60C7A04F35226EA6A81D_RuntimeMethod_var);
				// return config;
				V_1 = L_13;
				goto IL_00ae;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006c;
			}
			throw e;
		}

CATCH_006c:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// CoreLogger.LogError(
			//     "En error occured while trying to get the project configuration for services." +
			//     $"\n{e.Message}" +
			//     $"\n{e.StackTrace}");
			Exception_t * L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			Exception_t * L_16 = V_3;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
			String_t* L_18;
			L_18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72A108E053F65E47DD8EFDC2C7EB71B5E7879550)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_17, /*hidden argument*/NULL);
			CoreLogger_LogError_m83F82BBCC1AA3D9B4D8DEC69C0C3F0FB6546CCB4(L_18, /*hidden argument*/NULL);
			// return SerializableProjectConfiguration.Empty;
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_19;
			L_19 = SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA(/*hidden argument*/NULL);
			V_1 = L_19;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ae;
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_20, L_21, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_22, L_23, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_MoveNext_m3C8037990110A9CEA7A2F55A31B86C5506DA393B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * _thisAdjusted = reinterpret_cast<U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 *>(__this + _offset);
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_MoveNext_m3C8037990110A9CEA7A2F55A31B86C5506DA393B(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<GetSerializedConfigOrEmptyAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_SetStateMachine_m9025D1BC9907F98A2EC8AE4DC26D7ED3E8DA6F40 (U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_SetStateMachine_m9025D1BC9907F98A2EC8AE4DC26D7ED3E8DA6F40_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 * _thisAdjusted = reinterpret_cast<U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_tE4A19540B18B8FEB3567F46B9DD5FB1AAA55C1E4 *>(__this + _offset);
	U3CGetSerializedConfigOrEmptyAsyncU3Ed__6_SetStateMachine_m9025D1BC9907F98A2EC8AE4DC26D7ED3E8DA6F40(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_MoveNext_m3CEFECE8F3DAE552A8579864C4E19BCE50CE76AE (U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mBDD81B756F0BF38208853C2C6908FAA60A355448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC16CAA49AE917851C8BDE8AD24948777F7B8625E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8879AD20BE9D6688C8FDC2F8B315341A8092EEEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m4EC26B6DBAFFC810EE919E1AEE028887693CFF28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0059;
			}
		}

IL_000a:
		{
			// RegisterInstallationId(registry);
			CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_2 = __this->get_registry_2();
			CorePackageInitializer_RegisterInstallationId_m9C8DB0FD85BD44E891A150BD8711F6A0F325E399(L_2, /*hidden argument*/NULL);
			// var projectConfiguration = await RegisterProjectConfigurationAsync(
			//     registry, UnityServices.Instance.Options);
			CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_3 = __this->get_registry_2();
			RuntimeObject* L_4;
			L_4 = UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC_inline(/*hidden argument*/NULL);
			NullCheck(L_4);
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_5;
			L_5 = InterfaceFuncInvoker0< InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * >::Invoke(0 /* Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options() */, IUnityServices_t70D6D5FD5C1D34A32F1406FED0CD46FE7C429668_il2cpp_TypeInfo_var, L_4);
			Task_1_t97DFB866E59201D2557169D88A6A2528985E7333 * L_6;
			L_6 = CorePackageInitializer_RegisterProjectConfigurationAsync_m157CC72030526F2454C2FF3D8C8A465B099D1247(L_3, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  L_7;
			L_7 = Task_1_GetAwaiter_m4EC26B6DBAFFC810EE919E1AEE028887693CFF28(L_6, /*hidden argument*/Task_1_GetAwaiter_m4EC26B6DBAFFC810EE919E1AEE028887693CFF28_RuntimeMethod_var);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m8879AD20BE9D6688C8FDC2F8B315341A8092EEEF((TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m8879AD20BE9D6688C8FDC2F8B315341A8092EEEF_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0075;
			}
		}

IL_0039:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mBDD81B756F0BF38208853C2C6908FAA60A355448((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_11, (TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 *)(&V_2), (U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894_TisU3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938_mBDD81B756F0BF38208853C2C6908FAA60A355448_RuntimeMethod_var);
			goto IL_00b5;
		}

IL_0059:
		{
			TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0075:
		{
			RuntimeObject* L_15;
			L_15 = TaskAwaiter_1_GetResult_mC16CAA49AE917851C8BDE8AD24948777F7B8625E((TaskAwaiter_1_t0CCC15C33951028B0F19FE9F8D64D2BDF1D47894 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_mC16CAA49AE917851C8BDE8AD24948777F7B8625E_RuntimeMethod_var);
			V_1 = L_15;
			// RegisterEnvironments(registry, projectConfiguration);
			CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_16 = __this->get_registry_2();
			RuntimeObject* L_17 = V_1;
			CorePackageInitializer_RegisterEnvironments_m4633592D0A0CF8CC1FE35FF31E7A0038AD11A223(L_16, L_17, /*hidden argument*/NULL);
			goto IL_00a2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b5;
	} // end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_20, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__1_MoveNext_m3CEFECE8F3DAE552A8579864C4E19BCE50CE76AE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * _thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 *>(__this + _offset);
	U3CInitializeU3Ed__1_MoveNext_m3CEFECE8F3DAE552A8579864C4E19BCE50CE76AE(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<Initialize>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__1_SetStateMachine_m132902694F0FA157F3610951BB0CC3BA6C3108FE (U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeU3Ed__1_SetStateMachine_m132902694F0FA157F3610951BB0CC3BA6C3108FE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 * _thisAdjusted = reinterpret_cast<U3CInitializeU3Ed__1_t4537E758EC8F0B56799BDA06895FB579894CC938 *>(__this + _offset);
	U3CInitializeU3Ed__1_SetStateMachine_m132902694F0FA157F3610951BB0CC3BA6C3108FE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__4_MoveNext_m27C94E121A884CF286BF26773E002674C0DED50E (U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m19E8D22932231FE7AA782A32090C2AEAD4B71FD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m95356C0025EC3EB6801B5CB7EC6B932EA4C79ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * V_2 = NULL;
	TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0044;
			}
		}

IL_000a:
		{
			// var projectConfig = await GenerateProjectConfigurationAsync(options);
			InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_2 = __this->get_options_2();
			Task_1_tF2DDB56E961AF775A37354CA26D11149EF71A970 * L_3;
			L_3 = CorePackageInitializer_GenerateProjectConfigurationAsync_mF7DFC238E2245114C5615E652D55DE5FF2FFB551(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  L_4;
			L_4 = Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822(L_3, /*hidden argument*/Task_1_GetAwaiter_mC143DF70EA2F518DA4A94EB7ABB59A0803048822_RuntimeMethod_var);
			V_3 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23((TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m1D7A8FF71FC1DAF857EA76E26E9B007F5BCF3F23_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0060;
			}
		}

IL_0024:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  L_7 = V_3;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m19E8D22932231FE7AA782A32090C2AEAD4B71FD5((AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *)L_8, (TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *)(&V_3), (U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605_TisU3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5_m19E8D22932231FE7AA782A32090C2AEAD4B71FD5_RuntimeMethod_var);
			goto IL_00a5;
		}

IL_0044:
		{
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605  L_9 = __this->get_U3CU3Eu__1_4();
			V_3 = L_9;
			TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0060:
		{
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_12;
			L_12 = TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE((TaskAwaiter_1_t65D181821CEA522716AE65867BF02BDBF8ED0605 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m017A6EFA80A22876E2FD0C0A021182CFE0DA1DDE_RuntimeMethod_var);
			V_2 = L_12;
			// registry.RegisterServiceComponent<IProjectConfiguration>(projectConfig);
			CoreRegistry_tFC6FA651309E167213B53E26F499C6461309BB4D * L_13 = __this->get_registry_3();
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_14 = V_2;
			NullCheck(L_13);
			CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49(L_13, L_14, /*hidden argument*/CoreRegistry_RegisterServiceComponent_TisIProjectConfiguration_t6DDBA1911FBBF9462289FBF70732DA42E300CFA4_mD24F68CA4EA3D8D1478B3062B0F80E59A8E5AD49_RuntimeMethod_var);
			// return projectConfig;
			ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * L_15 = V_2;
			V_1 = L_15;
			goto IL_0091;
		}
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
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m015B8E518DAC172242607AE348F8F785B84EC55C((AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *)L_16, L_17, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m015B8E518DAC172242607AE348F8F785B84EC55C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a5;
	} // end catch (depth: 1)

IL_0091:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_19 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m95356C0025EC3EB6801B5CB7EC6B932EA4C79ADE((AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m95356C0025EC3EB6801B5CB7EC6B932EA4C79ADE_RuntimeMethod_var);
	}

IL_00a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRegisterProjectConfigurationAsyncU3Ed__4_MoveNext_m27C94E121A884CF286BF26773E002674C0DED50E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * _thisAdjusted = reinterpret_cast<U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 *>(__this + _offset);
	U3CRegisterProjectConfigurationAsyncU3Ed__4_MoveNext_m27C94E121A884CF286BF26773E002674C0DED50E(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Registration.CorePackageInitializer/<RegisterProjectConfigurationAsync>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterProjectConfigurationAsyncU3Ed__4_SetStateMachine_mBF0B96F609AED4E5661DDA9A8F6D03F1629B14A7 (U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m8DC910AC00E5302C1C625946929C530D952820B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m8DC910AC00E5302C1C625946929C530D952820B1((AsyncTaskMethodBuilder_1_tC483B22E7EE76A01024F3DE9771385F13BF53CB1 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m8DC910AC00E5302C1C625946929C530D952820B1_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRegisterProjectConfigurationAsyncU3Ed__4_SetStateMachine_mBF0B96F609AED4E5661DDA9A8F6D03F1629B14A7_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 * _thisAdjusted = reinterpret_cast<U3CRegisterProjectConfigurationAsyncU3Ed__4_t8A62539B3134ABA41EDE23789C4D606F06AFDAB5 *>(__this + _offset);
	U3CRegisterProjectConfigurationAsyncU3Ed__4_SetStateMachine_mBF0B96F609AED4E5661DDA9A8F6D03F1629B14A7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Environments_set_Current_m2B00B2071BC0C9CFBE4FF9BA3EF09134226EFC0A_inline (Environments_tA0ACB8117616CD5D2513145C9E176723F8FBE4A8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Current { get; internal set; }
		String_t* L_0 = ___value0;
		__this->set_U3CCurrentU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IConfigurationLoader ConfigurationLoader { get; internal set; }
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var))->get_U3CConfigurationLoaderU3Ek__BackingField_1();
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
