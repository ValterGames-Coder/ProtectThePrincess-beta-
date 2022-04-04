#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>>
struct Func_2_tB2A45BDF375D6CEC1A2B6D3427E10423DEBE5A89;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskFactory_1_t9312EBAF258211D129B0A1E9E78AEA2E399B4AA0;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Unity.Services.Core.Configuration.IConfigurationLoader
struct IConfigurationLoader_t982DEACE8EE9A49F9A433FBFA20A248E7B79E6F9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
struct StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Unity.Services.Core.Configuration.UnityWebRequestUtils/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9;
IL2CPP_EXTERN_C String_t* _stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630;
IL2CPP_EXTERN_C String_t* _stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81;
IL2CPP_EXTERN_C String_t* _stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3;
IL2CPP_EXTERN_C String_t* _stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mE962A56E74030E1BB6913C31B34F6678A31E4673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_m80B5793F207F9A2C99ABCE84CBE6DB485A0B2086_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t197DAAB3889AD384C4F53CC506E63848F26D7B02 
{
public:

public:
};


// System.Object


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


// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Services.Core.Configuration.ConfigurationCollectionHelper
struct ConfigurationCollectionHelper_t95CFD00D1C787ECD563FD81D028204D4B1371E65  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6  : public RuntimeObject
{
public:
	// System.String Unity.Services.Core.Configuration.ConfigurationEntry::m_Value
	String_t* ___m_Value_0;
	// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::m_IsReadOnly
	bool ___m_IsReadOnly_1;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6, ___m_Value_0)); }
	inline String_t* get_m_Value_0() const { return ___m_Value_0; }
	inline String_t** get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(String_t* value)
	{
		___m_Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsReadOnly_1() { return static_cast<int32_t>(offsetof(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6, ___m_IsReadOnly_1)); }
	inline bool get_m_IsReadOnly_1() const { return ___m_IsReadOnly_1; }
	inline bool* get_address_of_m_IsReadOnly_1() { return &___m_IsReadOnly_1; }
	inline void set_m_IsReadOnly_1(bool value)
	{
		___m_IsReadOnly_1 = value;
	}
};


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


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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


// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
struct StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA  : public RuntimeObject
{
public:

public:
};


// Unity.Services.Core.Configuration.StreamingAssetsUtils
struct StreamingAssetsUtils_t14EB2A8F35BF58C83FF1FAFCC330185D3E70082C  : public RuntimeObject
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


// Unity.Services.Core.Configuration.UnityWebRequestUtils
struct UnityWebRequestUtils_t9549D53C2B1427C4A5F0F8E336113C10A6D25035  : public RuntimeObject
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

// Unity.Services.Core.Configuration.UnityWebRequestUtils/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.Core.Configuration.UnityWebRequestUtils/<>c__DisplayClass1_0::completionSource
	TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * ___completionSource_0;

public:
	inline static int32_t get_offset_of_completionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96, ___completionSource_0)); }
	inline TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * get_completionSource_0() const { return ___completionSource_0; }
	inline TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 ** get_address_of_completionSource_0() { return &___completionSource_0; }
	inline void set_completionSource_0(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * value)
	{
		___completionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionSource_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
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

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
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


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0
struct U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 
{
public:
	// System.Int32 Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3Eu__1_2() { return static_cast<int32_t>(offsetof(U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4, ___U3CU3Eu__1_2)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_2() const { return ___U3CU3Eu__1_2; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_2() { return &___U3CU3Eu__1_2; }
	inline void set_U3CU3Eu__1_2(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31  : public MulticastDelegate_t
{
public:

public:
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
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * m_Items[1];

public:
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mFB50E1C6C936A5C9479A403400FED5ABF1A18727_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Unity.Services.Core.Configuration.SerializableProjectConfiguration>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);

// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::SetOrCreateEntry(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2 (RuntimeObject* ___self0, String_t* ___key1, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m271DC6F423A1C5EE25EA4F0B6ED27EF1965BC18D_inline (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m76907E327BF16DC37142EAE2D8F461CECD6DE4EB (RuntimeObject * ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// Unity.Services.Core.Configuration.ConfigurationEntry Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ConfigurationEntry_op_Implicit_m6673309A77303555BB112DFA786C9B8079BB48A8 (String_t* ___value0, const RuntimeMethod* method);
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_op_Implicit_mAB2DECA59966A045CB115C66AC338E7C2EFCCB48 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry0, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::TrySetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_TrySetValue_mAB6B3FCFBCCAA62DE2964BD3F79510C7EBD3C9C5 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogWarning_m324CE62EFBFC9487C9887F40734A3F0187480B9C (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method);
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m219AA70B213D204EE35413E503586F8CCF5A56DE (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, bool ___isReadOnly1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingAssetsConfigurationLoader__ctor_mBB2F2D1BA35C7FE744F8C0B158342E5D6E1CEAD1 (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
inline Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.UnityWebRequestUtils::GetTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * UnityWebRequestUtils_GetTextAsync_m79E5876D4EA0BF60789678A770978F96290A7BA5 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void Unity.Services.Core.Configuration.UnityWebRequestUtils/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m05E2BE22E35E2B2FDB27CDBA5BB18D2440F35E7C (U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10 (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m3889E5A0492F8F632A6E4F9A3DF33D067218EFC8 (String_t* ___path0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mE962A56E74030E1BB6913C31B34F6678A31E4673 (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mFB50E1C6C936A5C9479A403400FED5ABF1A18727_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<Unity.Services.Core.Configuration.SerializableProjectConfiguration>(System.String)
inline SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4_gshared)(___json0, method);
}
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
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_MoveNext_mD1D2FFAED4612D06A8168066F48D19D4AA5E9E05 (U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mE1D79B1C3F8D857F0E37CDDF85128A62836562EF_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_SetStateMachine_m541C910E6B8487D96678F5A2529C6BA4240B50BA (U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Services.Core.Configuration.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_mD4AF7C00E97ABAC31F5FB37D6D60BA170C0425C3 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___self0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201 (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m802F6A7942362F28F2D856F17B2BDF8C2561734E (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
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
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Configuration.SerializableProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m5108DA7E7876453FEE4E030AD578C513313446CB (RuntimeObject* ___self0, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  ___config1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * V_2 = NULL;
	{
		// for (var i = 0; i < config.Keys.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// var entryKey = config.Keys[i];
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_0 = ___config1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0.get_Keys_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var entryValue = config.Values[i];
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_5 = ___config1;
		ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* L_6 = L_5.get_Values_1();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// self.SetOrCreateEntry(entryKey, entryValue);
		RuntimeObject* L_10 = ___self0;
		String_t* L_11 = V_1;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_12 = V_2;
		ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2(L_10, L_11, L_12, /*hidden argument*/NULL);
		// for (var i = 0; i < config.Keys.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0022:
	{
		// for (var i = 0; i < config.Keys.Length; i++)
		int32_t L_14 = V_0;
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_15 = ___config1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15.get_Keys_0();
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_m36219B38089B98238B7FB691ABF4754AB31CA170 (RuntimeObject* ___self0, InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var option in options.Values)
		InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * L_0 = ___options1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InitializationOptions_get_Values_m271DC6F423A1C5EE25EA4F0B6ED27EF1965BC18D_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_000e:
		{
			// foreach (var option in options.Values)
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_4;
			L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t04D882226AB7D8875E8DE1B4FEDCB5060F885EBB_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			// var optionValue = Convert.ToString(option.Value, CultureInfo.InvariantCulture);
			RuntimeObject * L_5;
			L_5 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
			L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
			String_t* L_7;
			L_7 = Convert_ToString_m76907E327BF16DC37142EAE2D8F461CECD6DE4EB(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			// self.SetOrCreateEntry(option.Key, optionValue);
			RuntimeObject* L_8 = ___self0;
			String_t* L_9;
			L_9 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			String_t* L_10 = V_2;
			ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_11;
			L_11 = ConfigurationEntry_op_Implicit_m6673309A77303555BB112DFA786C9B8079BB48A8(L_10, /*hidden argument*/NULL);
			ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2(L_8, L_9, L_11, /*hidden argument*/NULL);
		}

IL_003a:
		{
			// foreach (var option in options.Values)
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_000e;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_004d;
			}
		}

IL_0047:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_004d:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::SetOrCreateEntry(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_SetOrCreateEntry_m02712DDC35D8AA7A92265B5307CC8A2452176AF2 (RuntimeObject* ___self0, String_t* ___key1, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * V_0 = NULL;
	{
		// if (self.TryGetValue(key, out var existingEntry))
		RuntimeObject* L_0 = ___self0;
		String_t* L_1 = ___key1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** >::Invoke(5 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::TryGetValue(!0,!1&) */, IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var, L_0, L_1, (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 **)(&V_0));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// if (!existingEntry.TrySetValue(entry))
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_3 = V_0;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_4 = ___entry2;
		String_t* L_5;
		L_5 = ConfigurationEntry_op_Implicit_mAB2DECA59966A045CB115C66AC338E7C2EFCCB48(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = ConfigurationEntry_TrySetValue_mAB6B3FCFBCCAA62DE2964BD3F79510C7EBD3C9C5(L_3, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// CoreLogger.LogWarning(
		//     $"You are attempting to initialize Operate Solution SDK with an option \"{key}\"" +
		//     " which is readonly at runtime and can be modified only through Project Settings." +
		//     " The value provided as initialization option will be ignored." +
		//     $" Please update {nameof(InitializationOptions)} in order to remove this warning.");
		String_t* L_7 = ___key1;
		String_t* L_8;
		L_8 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9, L_7, _stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3, /*hidden argument*/NULL);
		CoreLogger_LogWarning_m324CE62EFBFC9487C9887F40734A3F0187480B9C(L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002f:
	{
		// self[key] = entry;
		RuntimeObject* L_9 = ___self0;
		String_t* L_10 = ___key1;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_11 = ___entry2;
		NullCheck(L_9);
		InterfaceActionInvoker2< String_t*, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::set_Item(!0,!1) */, IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var, L_9, L_10, L_11);
	}

IL_0037:
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
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// public string Value => m_Value;
		String_t* L_0 = __this->get_m_Value_0();
		return L_0;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// get => m_IsReadOnly;
		bool L_0 = __this->get_m_IsReadOnly_1();
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m0FF48E86A3FAD0EFBACE9EEBBF4D0A647D2B73F4 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigurationEntry() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public ConfigurationEntry() {}
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m219AA70B213D204EE35413E503586F8CCF5A56DE (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, bool ___isReadOnly1, const RuntimeMethod* method)
{
	{
		// public ConfigurationEntry(string value, bool isReadOnly = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Value = value;
		String_t* L_0 = ___value0;
		__this->set_m_Value_0(L_0);
		// m_IsReadOnly = isReadOnly;
		bool L_1 = ___isReadOnly1;
		__this->set_m_IsReadOnly_1(L_1);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::TrySetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_TrySetValue_mAB6B3FCFBCCAA62DE2964BD3F79510C7EBD3C9C5 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// if (IsReadOnly)
		bool L_0;
		L_0 = ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// m_Value = value;
		String_t* L_1 = ___value0;
		__this->set_m_Value_0(L_1);
		// return true;
		return (bool)1;
	}
}
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_op_Implicit_mAB2DECA59966A045CB115C66AC338E7C2EFCCB48 (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ___entry0, const RuntimeMethod* method)
{
	{
		// public static implicit operator string(ConfigurationEntry entry) => entry.Value;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_0 = ___entry0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Services.Core.Configuration.ConfigurationEntry Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * ConfigurationEntry_op_Implicit_m6673309A77303555BB112DFA786C9B8079BB48A8 (String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator ConfigurationEntry(string value) => new ConfigurationEntry(value);
		String_t* L_0 = ___value0;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_1 = (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 *)il2cpp_codegen_object_new(ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6_il2cpp_TypeInfo_var);
		ConfigurationEntry__ctor_m219AA70B213D204EE35413E503586F8CCF5A56DE(L_1, L_0, (bool)0, /*hidden argument*/NULL);
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
// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::get_ConfigurationLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_m43E1A55F93B27A5203B0E706C204FDB315E15A91 (const RuntimeMethod* method)
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
// System.Void Unity.Services.Core.Configuration.ConfigurationUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationUtils__cctor_m5C4DA03820D2A7A10FDE0B2B269FC45BCD031042 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = Path.Combine(Application.streamingAssetsPath, ConfigFileName);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, _stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630, /*hidden argument*/NULL);
		((ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var))->set_U3CRuntimeConfigFullPathU3Ek__BackingField_0(L_1);
		// = new StreamingAssetsConfigurationLoader();
		StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * L_2 = (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA *)il2cpp_codegen_object_new(StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA_il2cpp_TypeInfo_var);
		StreamingAssetsConfigurationLoader__ctor_mBB2F2D1BA35C7FE744F8C0B158342E5D6E1CEAD1(L_2, /*hidden argument*/NULL);
		((ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tD30DB5F113E8FC3B2F8411D1905E3BF4F2C0E782_il2cpp_TypeInfo_var))->set_U3CConfigurationLoaderU3Ek__BackingField_1(L_2);
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
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration::.ctor(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectConfiguration__ctor_m1541CE1BD7ECC522D7F15A6883D4E3628CE960EA (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, RuntimeObject* ___configValues0, const RuntimeMethod* method)
{
	{
		// public ProjectConfiguration(IDictionary<string, ConfigurationEntry> configValues)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_ConfigValues = configValues;
		RuntimeObject* L_0 = ___configValues0;
		__this->set_m_ConfigValues_0(L_0);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_GetString_m04D6676C63EC7EAAEC7B262391BAC0E11C6CA5D1 (ProjectConfiguration_t08F9FF9562A5D68702734CC17AC3A2A800CD4D05 * __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * V_0 = NULL;
	{
		// if (m_ConfigValues.TryGetValue(key, out var configValue))
		RuntimeObject* L_0 = __this->get_m_ConfigValues_0();
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 ** >::Invoke(5 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::TryGetValue(!0,!1&) */, IDictionary_2_t9F846AC4D29920A3D4F6186A400798308B1B137B_il2cpp_TypeInfo_var, L_0, L_1, (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 **)(&V_0));
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return configValue.Value;
		ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		// return defaultValue;
		String_t* L_5 = ___defaultValue1;
		return L_5;
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
// Conversion methods for marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_pinvoke(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_pinvoke_back(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke& marshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_pinvoke_cleanup(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_com(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com& marshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_com_back(const SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com& marshaled, SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B& unmarshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshal_com_cleanup(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_marshaled_com& marshaled)
{
}
// Unity.Services.Core.Configuration.SerializableProjectConfiguration Unity.Services.Core.Configuration.SerializableProjectConfiguration::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  SerializableProjectConfiguration_get_Empty_m82FCFB758A9B72A0A875F64C007D32B9BE207BDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//     => new SerializableProjectConfiguration
		// {
		//     Keys = new string[0],
		//     Values = new ConfigurationEntry[0],
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B ));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		(&V_0)->set_Keys_0(L_0);
		ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8* L_1 = (ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8*)(ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8*)SZArrayNew(ConfigurationEntryU5BU5D_tDBF1409415A0CC5B5C82B9C368E7965A0FD73BD8_il2cpp_TypeInfo_var, (uint32_t)0);
		(&V_0)->set_Values_1(L_1);
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_2 = V_0;
		return L_2;
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
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::GetConfigAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * StreamingAssetsConfigurationLoader_GetConfigAsync_mC3B423304E7E1ECBCFD725B5995784E49F0E78D3 (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m2E0D751DAB32C53B06FB7203F80372F8B7857CB7_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4  L_1 = V_0;
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)(&V_1), (U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_m68426DCEFF74C8A14F71F447BCCA69E37E4D7681_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t35E5B57F69199D0133C7EA02F05A46AEB06544C7 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m416BD5E12A7AD09F1376A725629EF2BB3E3B8FA9_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingAssetsConfigurationLoader__ctor_mBB2F2D1BA35C7FE744F8C0B158342E5D6E1CEAD1 (StreamingAssetsConfigurationLoader_t2F7439B95FACB2735EBADD15A352E820F042B7AA * __this, const RuntimeMethod* method)
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
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m3889E5A0492F8F632A6E4F9A3DF33D067218EFC8 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var fullPath = Path.Combine(Application.streamingAssetsPath, path);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mA1FBABB08D7A4590A468C7CD940CD442B58C91E1(/*hidden argument*/NULL);
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_1, /*hidden argument*/NULL);
		// return UnityWebRequestUtils.GetTextAsync(fullPath);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3;
		L_3 = UnityWebRequestUtils_GetTextAsync_m79E5876D4EA0BF60789678A770978F96290A7BA5(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Boolean Unity.Services.Core.Configuration.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_mD4AF7C00E97ABAC31F5FB37D6D60BA170C0425C3 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___self0, const RuntimeMethod* method)
{
	{
		// return self.result == UnityWebRequest.Result.Success;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = ___self0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.UnityWebRequestUtils::GetTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * UnityWebRequestUtils_GetTextAsync_m79E5876D4EA0BF60789678A770978F96290A7BA5 (String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_m80B5793F207F9A2C99ABCE84CBE6DB485A0B2086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * L_0 = (U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m05E2BE22E35E2B2FDB27CDBA5BB18D2440F35E7C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var completionSource = new TaskCompletionSource<string>();
		U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * L_1 = V_0;
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_2 = (TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m99938CAD3E8D5DCB7AB93B5AF89896C606862056_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_completionSource_0(L_2);
		// var request = UnityWebRequest.Get(uri);
		String_t* L_3 = ___uri0;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4;
		L_4 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_3, /*hidden argument*/NULL);
		// request.SendWebRequest()
		//     .completed += CompleteFetchTaskOnRequestCompleted;
		NullCheck(L_4);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_5;
		L_5 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_4, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * L_6 = V_0;
		Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * L_7 = (Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 *)il2cpp_codegen_object_new(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31_il2cpp_TypeInfo_var);
		Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_m80B5793F207F9A2C99ABCE84CBE6DB485A0B2086_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4B5464B1F72F571F9E5A969A5EE185405C7B9D10_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncOperation_add_completed_m44D28A82BB10C85AED56A43BB666850D2E9E59E8(L_5, L_7, /*hidden argument*/NULL);
		// return completionSource.Task;
		U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_9 = L_8->get_completionSource_0();
		NullCheck(L_9);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_10;
		L_10 = TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_inline(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_mC10EE08948EBF1F3B43C84E7FF42FB418BF4F208_RuntimeMethod_var);
		return L_10;
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
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_MoveNext_mD1D2FFAED4612D06A8168066F48D19D4AA5E9E05 (U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mE962A56E74030E1BB6913C31B34F6678A31E4673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_2;
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
				goto IL_0043;
			}
		}

IL_000a:
		{
			// var jsonConfig = await StreamingAssetsUtils.GetFileTextFromStreamingAssetsAsync(
			//     ConfigurationUtils.ConfigFileName);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_2;
			L_2 = StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m3889E5A0492F8F632A6E4F9A3DF33D067218EFC8(_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630, /*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_3;
			L_3 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_2, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005f;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_6 = V_2;
			__this->set_U3CU3Eu__1_2(L_6);
			AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mE962A56E74030E1BB6913C31B34F6678A31E4673((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_7, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), (U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4_mE962A56E74030E1BB6913C31B34F6678A31E4673_RuntimeMethod_var);
			goto IL_0099;
		}

IL_0043:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_8 = __this->get_U3CU3Eu__1_2();
			V_2 = L_8;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_9 = __this->get_address_of_U3CU3Eu__1_2();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_005f:
		{
			String_t* L_11;
			L_11 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			// var config = JsonUtility.FromJson<SerializableProjectConfiguration>(jsonConfig);
			SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_12;
			L_12 = JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4(L_11, /*hidden argument*/JsonUtility_FromJson_TisSerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B_mEA54C506D795EC6D70E2A58BD65E2826B23D2AC4_RuntimeMethod_var);
			// return config;
			V_1 = L_12;
			goto IL_0085;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006e;
		}
		throw e;
	}

CATCH_006e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_13, L_14, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3F701CAC4F60D4475F1BDD88CD6E22A25E6CA259_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0099;
	} // end catch (depth: 1)

IL_0085:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		SerializableProjectConfiguration_t0D9B16DAF9319FC99121D52961003F4FE26DE72B  L_16 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59((AsyncTaskMethodBuilder_1_t389704546F9E3904BC4F9BDA0F1C75752CD6194B *)L_15, L_16, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m7C3E3ED78715DBAD95A4D9305C4494A18690BF59_RuntimeMethod_var);
	}

IL_0099:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetConfigAsyncU3Ed__0_MoveNext_mD1D2FFAED4612D06A8168066F48D19D4AA5E9E05_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * _thisAdjusted = reinterpret_cast<U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 *>(__this + _offset);
	U3CGetConfigAsyncU3Ed__0_MoveNext_mD1D2FFAED4612D06A8168066F48D19D4AA5E9E05(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_SetStateMachine_m541C910E6B8487D96678F5A2529C6BA4240B50BA (U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void U3CGetConfigAsyncU3Ed__0_SetStateMachine_m541C910E6B8487D96678F5A2529C6BA4240B50BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 * _thisAdjusted = reinterpret_cast<U3CGetConfigAsyncU3Ed__0_t0AF9196EC165A27C7C6FF537B4F51C3DC2391FB4 *>(__this + _offset);
	U3CGetConfigAsyncU3Ed__0_SetStateMachine_m541C910E6B8487D96678F5A2529C6BA4240B50BA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Configuration.UnityWebRequestUtils/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m05E2BE22E35E2B2FDB27CDBA5BB18D2440F35E7C (U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.UnityWebRequestUtils/<>c__DisplayClass1_0::<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_m80B5793F207F9A2C99ABCE84CBE6DB485A0B2086 (U3CU3Ec__DisplayClass1_0_tC93C36564DF98B3AD91E222276461B3FCE2E7E96 * __this, AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___rawOperation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * V_0 = NULL;
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// var operation = (UnityWebRequestAsyncOperation)rawOperation;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0 = ___rawOperation0;
		V_0 = ((UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 *)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_il2cpp_TypeInfo_var));
		// using (operation.webRequest)
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_1 = V_0;
		NullCheck(L_1);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_2;
		L_2 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (operation.webRequest.HasSucceeded())
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_3 = V_0;
			NullCheck(L_3);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4;
			L_4 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(L_3, /*hidden argument*/NULL);
			bool L_5;
			L_5 = UnityWebRequestUtils_HasSucceeded_mD4AF7C00E97ABAC31F5FB37D6D60BA170C0425C3(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0038;
			}
		}

IL_001b:
		{
			// completionSource.SetResult(operation.webRequest.downloadHandler.text);
			TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_6 = __this->get_completionSource_0();
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_7 = V_0;
			NullCheck(L_7);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8;
			L_8 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_9;
			L_9 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10;
			L_10 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetResult_m2741E572F08EDD2E8976B6020E85A1BDB98D6201_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x7B, FINALLY_0071);
		}

IL_0038:
		{
			// var errorMessage = "Couldn't fetch config file." +
			//     $"\nURL: {operation.webRequest.url}" +
			//     $"\nReason: {operation.webRequest.error}";
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_11 = V_0;
			NullCheck(L_11);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12;
			L_12 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			String_t* L_13;
			L_13 = UnityWebRequest_get_url_m802F6A7942362F28F2D856F17B2BDF8C2561734E(L_12, /*hidden argument*/NULL);
			UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_14 = V_0;
			NullCheck(L_14);
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15;
			L_15 = UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_15, /*hidden argument*/NULL);
			String_t* L_17;
			L_17 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81, L_13, _stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D, L_16, /*hidden argument*/NULL);
			V_2 = L_17;
			// completionSource.SetException(new Exception(errorMessage));
			TaskCompletionSource_1_t969729943FC80B0C6DDE548BAE94DA1E071F3AA1 * L_18 = __this->get_completionSource_0();
			String_t* L_19 = V_2;
			Exception_t * L_20 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_20, L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA(L_18, L_20, /*hidden argument*/TaskCompletionSource_1_SetException_m793BF7B3167B2B1F59848E721C99D87684DD1DEA_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x7B, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_21 = V_1;
			if (!L_21)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_22 = V_1;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_007a:
		{
			IL2CPP_END_FINALLY(113)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
	}

IL_007b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m271DC6F423A1C5EE25EA4F0B6ED27EF1965BC18D_inline (InitializationOptions_t4B5C464B32EB4D60AECF9F1212621CEA707A7268 * __this, const RuntimeMethod* method)
{
	{
		// internal IEnumerable<KeyValuePair<string, object>> Values => m_Values;
		RuntimeObject* L_0 = __this->get_m_Values_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m1A946D6DCA365C1DB33FA92F1F1609DE42EF2746_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// get => m_IsReadOnly;
		bool L_0 = __this->get_m_IsReadOnly_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m3B26770C8D238D5E39E1B11468F6007E7D68E011_inline (ConfigurationEntry_t84036EFB0F84380AE607A0A77FE0CF47842FA8C6 * __this, const RuntimeMethod* method)
{
	{
		// public string Value => m_Value;
		String_t* L_0 = __this->get_m_Value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequestAsyncOperation_get_webRequest_m3D57A3FA8CF2214D219CA25026558E212E893151_inline (UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_0 = __this->get_U3CwebRequestU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
