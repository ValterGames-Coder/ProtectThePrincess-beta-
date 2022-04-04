#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>
struct IMetric_1_t0DDA0A8AEAD59BE891B208AD63F7F464266D9FA2;
// System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyCollection_1_tFFA8F8EB33985DD2559F09655CC41916A48E15DF;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct IReadOnlyDictionary_2_tB4240C7C8DB52DC96B5782ECFB81FDB6D65D51F4;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_tA75D8A1CCCED438757E8AFF779867FEE712E24E2;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_t43B25F355A712257BBF0E9639E750FB11560C040;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_tDA8FF1BFA5BDDD63DEC28482B6836AC6A9F9DE93;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_t30EBA9652B196FAAE321FC222C1C24B4A06F6021;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>
struct IReadOnlyList_1_t7A9815D9ADDCC3B3C51DB3BB59172325B31AC9EF;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>
struct IReadOnlyList_1_tA227219B1CAD5851F69298F45AA76EFDDC4BC0E0;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>
struct IReadOnlyList_1_tC5CBBCE518EC395F7884FA9A148EDBC6CCDF1CD1;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>
struct IReadOnlyList_1_t53B594E569082EB47956EA72D6270A3955EFC500;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>
struct IReadOnlyList_1_tE912F2E49DB933A3C10E81BF185A0BA756A05182;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>
struct IReadOnlyList_1_t0E081598B151636440B5CB185785E091E46410CC;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>
struct IReadOnlyList_1_t5AA779E5E0843859DE5230AEFF50AB06E7F103AA;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>
struct IReadOnlyList_1_tE5400208E59F88D7D3B942B5FA00DB0575249CBC;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>
struct IReadOnlyList_1_t8028039EFE7F637CB337EDE5DC9EBA2591D7ADE9;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>
struct IReadOnlyList_1_tBFE7D2DAA13F711D92DEB6682854F9A3A227F223;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory
struct ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper
struct CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory
struct EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter
struct ICounter_t40003A50BBBC1226F3B87591026DB8F41094FBCE;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory
struct ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t4716A81723F434E843EBFE819DD7B636CF5634CB;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver
struct LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters
struct MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters
struct MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters
struct MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1;
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters
struct ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICounter_t40003A50BBBC1226F3B87591026DB8F41094FBCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetric_1_t0DDA0A8AEAD59BE891B208AD63F7F464266D9FA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1538A07424430301B159B5CE5821E6993791EE42;
IL2CPP_EXTERN_C String_t* _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA;
IL2CPP_EXTERN_C String_t* _stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67;
IL2CPP_EXTERN_C String_t* _stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10;
IL2CPP_EXTERN_C String_t* _stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8;
IL2CPP_EXTERN_C String_t* _stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t098CCEC98D5FF142629B1EA2B0343E60CD2AEA20 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory
struct ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory
struct EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver
struct LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B  : public RuntimeObject
{
public:

public:
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters
struct MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::m_SentCounter
	RuntimeObject* ___m_SentCounter_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::m_ReceivedCounter
	RuntimeObject* ___m_ReceivedCounter_1;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::<Sent>k__BackingField
	String_t* ___U3CSentU3Ek__BackingField_2;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::<Received>k__BackingField
	String_t* ___U3CReceivedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_SentCounter_0() { return static_cast<int32_t>(offsetof(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014, ___m_SentCounter_0)); }
	inline RuntimeObject* get_m_SentCounter_0() const { return ___m_SentCounter_0; }
	inline RuntimeObject** get_address_of_m_SentCounter_0() { return &___m_SentCounter_0; }
	inline void set_m_SentCounter_0(RuntimeObject* value)
	{
		___m_SentCounter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SentCounter_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedCounter_1() { return static_cast<int32_t>(offsetof(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014, ___m_ReceivedCounter_1)); }
	inline RuntimeObject* get_m_ReceivedCounter_1() const { return ___m_ReceivedCounter_1; }
	inline RuntimeObject** get_address_of_m_ReceivedCounter_1() { return &___m_ReceivedCounter_1; }
	inline void set_m_ReceivedCounter_1(RuntimeObject* value)
	{
		___m_ReceivedCounter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReceivedCounter_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014, ___U3CSentU3Ek__BackingField_2)); }
	inline String_t* get_U3CSentU3Ek__BackingField_2() const { return ___U3CSentU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CSentU3Ek__BackingField_2() { return &___U3CSentU3Ek__BackingField_2; }
	inline void set_U3CSentU3Ek__BackingField_2(String_t* value)
	{
		___U3CSentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceivedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014, ___U3CReceivedU3Ek__BackingField_3)); }
	inline String_t* get_U3CReceivedU3Ek__BackingField_3() const { return ___U3CReceivedU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CReceivedU3Ek__BackingField_3() { return &___U3CReceivedU3Ek__BackingField_3; }
	inline void set_U3CReceivedU3Ek__BackingField_3(String_t* value)
	{
		___U3CReceivedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceivedU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31  : public RuntimeObject
{
public:
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Events
	RuntimeObject* ___m_Events_3;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_4;
	// System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_5;
	// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::<ConnectionId>k__BackingField
	uint64_t ___U3CConnectionIdU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Counters_0() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___m_Counters_0)); }
	inline RuntimeObject* get_m_Counters_0() const { return ___m_Counters_0; }
	inline RuntimeObject** get_address_of_m_Counters_0() { return &___m_Counters_0; }
	inline void set_m_Counters_0(RuntimeObject* value)
	{
		___m_Counters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Counters_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gauges_1() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___m_Gauges_1)); }
	inline RuntimeObject* get_m_Gauges_1() const { return ___m_Gauges_1; }
	inline RuntimeObject** get_address_of_m_Gauges_1() { return &___m_Gauges_1; }
	inline void set_m_Gauges_1(RuntimeObject* value)
	{
		___m_Gauges_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gauges_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timers_2() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___m_Timers_2)); }
	inline RuntimeObject* get_m_Timers_2() const { return ___m_Timers_2; }
	inline RuntimeObject** get_address_of_m_Timers_2() { return &___m_Timers_2; }
	inline void set_m_Timers_2(RuntimeObject* value)
	{
		___m_Timers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timers_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Events_3() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___m_Events_3)); }
	inline RuntimeObject* get_m_Events_3() const { return ___m_Events_3; }
	inline RuntimeObject** get_address_of_m_Events_3() { return &___m_Events_3; }
	inline void set_m_Events_3(RuntimeObject* value)
	{
		___m_Events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Events_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_PayloadEvents_4() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___m_PayloadEvents_4)); }
	inline RuntimeObject* get_m_PayloadEvents_4() const { return ___m_PayloadEvents_4; }
	inline RuntimeObject** get_address_of_m_PayloadEvents_4() { return &___m_PayloadEvents_4; }
	inline void set_m_PayloadEvents_4(RuntimeObject* value)
	{
		___m_PayloadEvents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PayloadEvents_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetricsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___U3CMetricsU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CMetricsU3Ek__BackingField_5() const { return ___U3CMetricsU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CMetricsU3Ek__BackingField_5() { return &___U3CMetricsU3Ek__BackingField_5; }
	inline void set_U3CMetricsU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CMetricsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetricsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31, ___U3CConnectionIdU3Ek__BackingField_6)); }
	inline uint64_t get_U3CConnectionIdU3Ek__BackingField_6() const { return ___U3CConnectionIdU3Ek__BackingField_6; }
	inline uint64_t* get_address_of_U3CConnectionIdU3Ek__BackingField_6() { return &___U3CConnectionIdU3Ek__BackingField_6; }
	inline void set_U3CConnectionIdU3Ek__BackingField_6(uint64_t value)
	{
		___U3CConnectionIdU3Ek__BackingField_6 = value;
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters
struct MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Bytes
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * ___Bytes_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Events
	MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * ___Events_1;

public:
	inline static int32_t get_offset_of_Bytes_0() { return static_cast<int32_t>(offsetof(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5, ___Bytes_0)); }
	inline MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * get_Bytes_0() const { return ___Bytes_0; }
	inline MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 ** get_address_of_Bytes_0() { return &___Bytes_0; }
	inline void set_Bytes_0(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * value)
	{
		___Bytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_Events_1() { return static_cast<int32_t>(offsetof(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5, ___Events_1)); }
	inline MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * get_Events_1() const { return ___Events_1; }
	inline MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 ** get_address_of_Events_1() { return &___Events_1; }
	inline void set_Events_1(MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * value)
	{
		___Events_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Events_1), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters
struct MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1  : public RuntimeObject
{
public:
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::<Sent>k__BackingField
	String_t* ___U3CSentU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::m_SentCounter
	RuntimeObject* ___m_SentCounter_1;
	// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::<Received>k__BackingField
	String_t* ___U3CReceivedU3Ek__BackingField_2;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::m_ReceivedCounter
	RuntimeObject* ___m_ReceivedCounter_3;

public:
	inline static int32_t get_offset_of_U3CSentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1, ___U3CSentU3Ek__BackingField_0)); }
	inline String_t* get_U3CSentU3Ek__BackingField_0() const { return ___U3CSentU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CSentU3Ek__BackingField_0() { return &___U3CSentU3Ek__BackingField_0; }
	inline void set_U3CSentU3Ek__BackingField_0(String_t* value)
	{
		___U3CSentU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSentU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SentCounter_1() { return static_cast<int32_t>(offsetof(MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1, ___m_SentCounter_1)); }
	inline RuntimeObject* get_m_SentCounter_1() const { return ___m_SentCounter_1; }
	inline RuntimeObject** get_address_of_m_SentCounter_1() { return &___m_SentCounter_1; }
	inline void set_m_SentCounter_1(RuntimeObject* value)
	{
		___m_SentCounter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SentCounter_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReceivedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1, ___U3CReceivedU3Ek__BackingField_2)); }
	inline String_t* get_U3CReceivedU3Ek__BackingField_2() const { return ___U3CReceivedU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CReceivedU3Ek__BackingField_2() { return &___U3CReceivedU3Ek__BackingField_2; }
	inline void set_U3CReceivedU3Ek__BackingField_2(String_t* value)
	{
		___U3CReceivedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReceivedU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ReceivedCounter_3() { return static_cast<int32_t>(offsetof(MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1, ___m_ReceivedCounter_3)); }
	inline RuntimeObject* get_m_ReceivedCounter_3() const { return ___m_ReceivedCounter_3; }
	inline RuntimeObject** get_address_of_m_ReceivedCounter_3() { return &___m_ReceivedCounter_3; }
	inline void set_m_ReceivedCounter_3(RuntimeObject* value)
	{
		___m_ReceivedCounter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReceivedCounter_3), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters
struct ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::totalBytes
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * ___totalBytes_1;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::rpc
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___rpc_2;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::namedMessage
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___namedMessage_3;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::unnamedMessage
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___unnamedMessage_4;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::networkVariableDelta
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___networkVariableDelta_5;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::objectSpawned
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___objectSpawned_6;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::objectDestroyed
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___objectDestroyed_7;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::serverLog
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___serverLog_8;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::sceneEvent
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___sceneEvent_9;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ownershipChange
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___ownershipChange_10;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::customMessage
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___customMessage_11;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::networkMessage
	MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ___networkMessage_12;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::m_ByteCounterFactory
	RuntimeObject* ___m_ByteCounterFactory_13;
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::m_EventCounterFactory
	RuntimeObject* ___m_EventCounterFactory_14;

public:
	inline static int32_t get_offset_of_totalBytes_1() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___totalBytes_1)); }
	inline MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * get_totalBytes_1() const { return ___totalBytes_1; }
	inline MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 ** get_address_of_totalBytes_1() { return &___totalBytes_1; }
	inline void set_totalBytes_1(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * value)
	{
		___totalBytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalBytes_1), (void*)value);
	}

	inline static int32_t get_offset_of_rpc_2() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___rpc_2)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_rpc_2() const { return ___rpc_2; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_rpc_2() { return &___rpc_2; }
	inline void set_rpc_2(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___rpc_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rpc_2), (void*)value);
	}

	inline static int32_t get_offset_of_namedMessage_3() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___namedMessage_3)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_namedMessage_3() const { return ___namedMessage_3; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_namedMessage_3() { return &___namedMessage_3; }
	inline void set_namedMessage_3(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___namedMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedMessage_3), (void*)value);
	}

	inline static int32_t get_offset_of_unnamedMessage_4() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___unnamedMessage_4)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_unnamedMessage_4() const { return ___unnamedMessage_4; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_unnamedMessage_4() { return &___unnamedMessage_4; }
	inline void set_unnamedMessage_4(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___unnamedMessage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unnamedMessage_4), (void*)value);
	}

	inline static int32_t get_offset_of_networkVariableDelta_5() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___networkVariableDelta_5)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_networkVariableDelta_5() const { return ___networkVariableDelta_5; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_networkVariableDelta_5() { return &___networkVariableDelta_5; }
	inline void set_networkVariableDelta_5(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___networkVariableDelta_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkVariableDelta_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectSpawned_6() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___objectSpawned_6)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_objectSpawned_6() const { return ___objectSpawned_6; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_objectSpawned_6() { return &___objectSpawned_6; }
	inline void set_objectSpawned_6(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___objectSpawned_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectSpawned_6), (void*)value);
	}

	inline static int32_t get_offset_of_objectDestroyed_7() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___objectDestroyed_7)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_objectDestroyed_7() const { return ___objectDestroyed_7; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_objectDestroyed_7() { return &___objectDestroyed_7; }
	inline void set_objectDestroyed_7(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___objectDestroyed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectDestroyed_7), (void*)value);
	}

	inline static int32_t get_offset_of_serverLog_8() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___serverLog_8)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_serverLog_8() const { return ___serverLog_8; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_serverLog_8() { return &___serverLog_8; }
	inline void set_serverLog_8(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___serverLog_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverLog_8), (void*)value);
	}

	inline static int32_t get_offset_of_sceneEvent_9() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___sceneEvent_9)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_sceneEvent_9() const { return ___sceneEvent_9; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_sceneEvent_9() { return &___sceneEvent_9; }
	inline void set_sceneEvent_9(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___sceneEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_ownershipChange_10() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___ownershipChange_10)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_ownershipChange_10() const { return ___ownershipChange_10; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_ownershipChange_10() { return &___ownershipChange_10; }
	inline void set_ownershipChange_10(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___ownershipChange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ownershipChange_10), (void*)value);
	}

	inline static int32_t get_offset_of_customMessage_11() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___customMessage_11)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_customMessage_11() const { return ___customMessage_11; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_customMessage_11() { return &___customMessage_11; }
	inline void set_customMessage_11(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___customMessage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMessage_11), (void*)value);
	}

	inline static int32_t get_offset_of_networkMessage_12() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___networkMessage_12)); }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * get_networkMessage_12() const { return ___networkMessage_12; }
	inline MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 ** get_address_of_networkMessage_12() { return &___networkMessage_12; }
	inline void set_networkMessage_12(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * value)
	{
		___networkMessage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkMessage_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ByteCounterFactory_13() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___m_ByteCounterFactory_13)); }
	inline RuntimeObject* get_m_ByteCounterFactory_13() const { return ___m_ByteCounterFactory_13; }
	inline RuntimeObject** get_address_of_m_ByteCounterFactory_13() { return &___m_ByteCounterFactory_13; }
	inline void set_m_ByteCounterFactory_13(RuntimeObject* value)
	{
		___m_ByteCounterFactory_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ByteCounterFactory_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventCounterFactory_14() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2, ___m_EventCounterFactory_14)); }
	inline RuntimeObject* get_m_EventCounterFactory_14() const { return ___m_EventCounterFactory_14; }
	inline RuntimeObject** get_address_of_m_EventCounterFactory_14() { return &___m_EventCounterFactory_14; }
	inline void set_m_EventCounterFactory_14(RuntimeObject* value)
	{
		___m_EventCounterFactory_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventCounterFactory_14), (void*)value);
	}
};

struct ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_StaticFields
{
public:
	// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::s_Singleton
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * ___s_Singleton_0;

public:
	inline static int32_t get_offset_of_s_Singleton_0() { return static_cast<int32_t>(offsetof(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_StaticFields, ___s_Singleton_0)); }
	inline ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * get_s_Singleton_0() const { return ___s_Singleton_0; }
	inline ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 ** get_address_of_s_Singleton_0() { return &___s_Singleton_0; }
	inline void set_s_Singleton_0(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * value)
	{
		___s_Singleton_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Singleton_0), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory
struct ProfilerMetricObserverFactory_t383C58DF11DD02A3DFDC298D269BF306A4681E0B  : public RuntimeObject
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

// Unity.Profiling.ProfilerCounter`1<System.Int64>
struct ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D 
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


// Unity.Profiling.ProfilerCategory
struct ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt16 Unity.Profiling.ProfilerCategory::m_CategoryId
					uint16_t ___m_CategoryId_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___m_CategoryId_0_forAlignmentOnly;
				};
			};
		};
		uint8_t ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544__padding[2];
	};

public:
	inline static int32_t get_offset_of_m_CategoryId_0() { return static_cast<int32_t>(offsetof(ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544, ___m_CategoryId_0)); }
	inline uint16_t get_m_CategoryId_0() const { return ___m_CategoryId_0; }
	inline uint16_t* get_address_of_m_CategoryId_0() { return &___m_CategoryId_0; }
	inline void set_m_CategoryId_0(uint16_t value)
	{
		___m_CategoryId_0 = value;
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


// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper
struct CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C  : public RuntimeObject
{
public:
	// Unity.Profiling.ProfilerCounter`1<System.Int64> Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::m_Counter
	ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  ___m_Counter_0;

public:
	inline static int32_t get_offset_of_m_Counter_0() { return static_cast<int32_t>(offsetof(CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C, ___m_Counter_0)); }
	inline ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  get_m_Counter_0() const { return ___m_Counter_0; }
	inline ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * get_address_of_m_Counter_0() { return &___m_Counter_0; }
	inline void set_m_Counter_0(ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  value)
	{
		___m_Counter_0 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.MetricType
struct MetricType_t4F6AC7B59D2E1A7C4CA97DB7F2719AA5B71AE9FB 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.MetricTypes.MetricType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetricType_t4F6AC7B59D2E1A7C4CA97DB7F2719AA5B71AE9FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection
struct NetworkDirection_t169FD2B76B417B9D160BC627433A231C7CCFCF58 
{
public:
	// System.Int32 Unity.Multiplayer.Tools.MetricTypes.NetworkDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkDirection_t169FD2B76B417B9D160BC627433A231C7CCFCF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarkerDataUnit
struct ProfilerMarkerDataUnit_tC1180A8356A6095894583DC4D5493802A1898005 
{
public:
	// System.Byte Unity.Profiling.ProfilerMarkerDataUnit::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProfilerMarkerDataUnit_tC1180A8356A6095894583DC4D5493802A1898005, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo
struct DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.MetricType Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// Unity.Multiplayer.Tools.MetricTypes.NetworkDirection Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::<Direction>k__BackingField
	int32_t ___U3CDirectionU3Ek__BackingField_1;
	// System.String Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;
	// System.String Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79, ___U3CTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79, ___U3CDirectionU3Ek__BackingField_1)); }
	inline int32_t get_U3CDirectionU3Ek__BackingField_1() const { return ___U3CDirectionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CDirectionU3Ek__BackingField_1() { return &___U3CDirectionU3Ek__BackingField_1; }
	inline void set_U3CDirectionU3Ek__BackingField_1(int32_t value)
	{
		___U3CDirectionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79, ___U3CIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79, ___U3CDisplayNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_3() const { return ___U3CDisplayNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_3() { return &___U3CDisplayNameU3Ek__BackingField_3; }
	inline void set_U3CDisplayNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNameU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo
struct DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_marshaled_pinvoke
{
	int32_t ___U3CTypeU3Ek__BackingField_0;
	int32_t ___U3CDirectionU3Ek__BackingField_1;
	char* ___U3CIdU3Ek__BackingField_2;
	char* ___U3CDisplayNameU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo
struct DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_marshaled_com
{
	int32_t ___U3CTypeU3Ek__BackingField_0;
	int32_t ___U3CDirectionU3Ek__BackingField_1;
	Il2CppChar* ___U3CIdU3Ek__BackingField_2;
	Il2CppChar* ___U3CDisplayNameU3Ek__BackingField_3;
};

// Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes
struct NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE  : public RuntimeObject
{
public:

public:
};

struct NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields
{
public:
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkMessageSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___NetworkMessageSent_0;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkMessageReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___NetworkMessageReceived_1;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::TotalBytesSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___TotalBytesSent_2;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::TotalBytesReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___TotalBytesReceived_3;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RpcSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___RpcSent_4;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::RpcReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___RpcReceived_5;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NamedMessageSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___NamedMessageSent_6;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NamedMessageReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___NamedMessageReceived_7;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::UnnamedMessageSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___UnnamedMessageSent_8;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::UnnamedMessageReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___UnnamedMessageReceived_9;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkVariableDeltaSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___NetworkVariableDeltaSent_10;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::NetworkVariableDeltaReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___NetworkVariableDeltaReceived_11;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectSpawnedSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___ObjectSpawnedSent_12;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectSpawnedReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___ObjectSpawnedReceived_13;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectDestroyedSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___ObjectDestroyedSent_14;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ObjectDestroyedReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___ObjectDestroyedReceived_15;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::OwnershipChangeSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___OwnershipChangeSent_16;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::OwnershipChangeReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___OwnershipChangeReceived_17;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ServerLogSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___ServerLogSent_18;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::ServerLogReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___ServerLogReceived_19;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::SceneEventSent
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___SceneEventSent_20;
	// Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo Unity.Multiplayer.Tools.MetricTypes.NetworkMetricTypes::SceneEventReceived
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  ___SceneEventReceived_21;

public:
	inline static int32_t get_offset_of_NetworkMessageSent_0() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___NetworkMessageSent_0)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_NetworkMessageSent_0() const { return ___NetworkMessageSent_0; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_NetworkMessageSent_0() { return &___NetworkMessageSent_0; }
	inline void set_NetworkMessageSent_0(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___NetworkMessageSent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkMessageSent_0))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkMessageSent_0))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NetworkMessageReceived_1() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___NetworkMessageReceived_1)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_NetworkMessageReceived_1() const { return ___NetworkMessageReceived_1; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_NetworkMessageReceived_1() { return &___NetworkMessageReceived_1; }
	inline void set_NetworkMessageReceived_1(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___NetworkMessageReceived_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkMessageReceived_1))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkMessageReceived_1))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TotalBytesSent_2() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___TotalBytesSent_2)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_TotalBytesSent_2() const { return ___TotalBytesSent_2; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_TotalBytesSent_2() { return &___TotalBytesSent_2; }
	inline void set_TotalBytesSent_2(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___TotalBytesSent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TotalBytesSent_2))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TotalBytesSent_2))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TotalBytesReceived_3() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___TotalBytesReceived_3)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_TotalBytesReceived_3() const { return ___TotalBytesReceived_3; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_TotalBytesReceived_3() { return &___TotalBytesReceived_3; }
	inline void set_TotalBytesReceived_3(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___TotalBytesReceived_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TotalBytesReceived_3))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TotalBytesReceived_3))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_RpcSent_4() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___RpcSent_4)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_RpcSent_4() const { return ___RpcSent_4; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_RpcSent_4() { return &___RpcSent_4; }
	inline void set_RpcSent_4(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___RpcSent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___RpcSent_4))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___RpcSent_4))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_RpcReceived_5() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___RpcReceived_5)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_RpcReceived_5() const { return ___RpcReceived_5; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_RpcReceived_5() { return &___RpcReceived_5; }
	inline void set_RpcReceived_5(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___RpcReceived_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___RpcReceived_5))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___RpcReceived_5))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NamedMessageSent_6() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___NamedMessageSent_6)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_NamedMessageSent_6() const { return ___NamedMessageSent_6; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_NamedMessageSent_6() { return &___NamedMessageSent_6; }
	inline void set_NamedMessageSent_6(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___NamedMessageSent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NamedMessageSent_6))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NamedMessageSent_6))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NamedMessageReceived_7() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___NamedMessageReceived_7)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_NamedMessageReceived_7() const { return ___NamedMessageReceived_7; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_NamedMessageReceived_7() { return &___NamedMessageReceived_7; }
	inline void set_NamedMessageReceived_7(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___NamedMessageReceived_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NamedMessageReceived_7))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NamedMessageReceived_7))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_UnnamedMessageSent_8() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___UnnamedMessageSent_8)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_UnnamedMessageSent_8() const { return ___UnnamedMessageSent_8; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_UnnamedMessageSent_8() { return &___UnnamedMessageSent_8; }
	inline void set_UnnamedMessageSent_8(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___UnnamedMessageSent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___UnnamedMessageSent_8))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___UnnamedMessageSent_8))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_UnnamedMessageReceived_9() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___UnnamedMessageReceived_9)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_UnnamedMessageReceived_9() const { return ___UnnamedMessageReceived_9; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_UnnamedMessageReceived_9() { return &___UnnamedMessageReceived_9; }
	inline void set_UnnamedMessageReceived_9(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___UnnamedMessageReceived_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___UnnamedMessageReceived_9))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___UnnamedMessageReceived_9))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NetworkVariableDeltaSent_10() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___NetworkVariableDeltaSent_10)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_NetworkVariableDeltaSent_10() const { return ___NetworkVariableDeltaSent_10; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_NetworkVariableDeltaSent_10() { return &___NetworkVariableDeltaSent_10; }
	inline void set_NetworkVariableDeltaSent_10(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___NetworkVariableDeltaSent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkVariableDeltaSent_10))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkVariableDeltaSent_10))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NetworkVariableDeltaReceived_11() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___NetworkVariableDeltaReceived_11)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_NetworkVariableDeltaReceived_11() const { return ___NetworkVariableDeltaReceived_11; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_NetworkVariableDeltaReceived_11() { return &___NetworkVariableDeltaReceived_11; }
	inline void set_NetworkVariableDeltaReceived_11(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___NetworkVariableDeltaReceived_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkVariableDeltaReceived_11))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___NetworkVariableDeltaReceived_11))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ObjectSpawnedSent_12() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___ObjectSpawnedSent_12)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_ObjectSpawnedSent_12() const { return ___ObjectSpawnedSent_12; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_ObjectSpawnedSent_12() { return &___ObjectSpawnedSent_12; }
	inline void set_ObjectSpawnedSent_12(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___ObjectSpawnedSent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectSpawnedSent_12))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectSpawnedSent_12))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ObjectSpawnedReceived_13() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___ObjectSpawnedReceived_13)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_ObjectSpawnedReceived_13() const { return ___ObjectSpawnedReceived_13; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_ObjectSpawnedReceived_13() { return &___ObjectSpawnedReceived_13; }
	inline void set_ObjectSpawnedReceived_13(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___ObjectSpawnedReceived_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectSpawnedReceived_13))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectSpawnedReceived_13))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ObjectDestroyedSent_14() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___ObjectDestroyedSent_14)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_ObjectDestroyedSent_14() const { return ___ObjectDestroyedSent_14; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_ObjectDestroyedSent_14() { return &___ObjectDestroyedSent_14; }
	inline void set_ObjectDestroyedSent_14(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___ObjectDestroyedSent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectDestroyedSent_14))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectDestroyedSent_14))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ObjectDestroyedReceived_15() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___ObjectDestroyedReceived_15)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_ObjectDestroyedReceived_15() const { return ___ObjectDestroyedReceived_15; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_ObjectDestroyedReceived_15() { return &___ObjectDestroyedReceived_15; }
	inline void set_ObjectDestroyedReceived_15(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___ObjectDestroyedReceived_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectDestroyedReceived_15))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ObjectDestroyedReceived_15))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OwnershipChangeSent_16() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___OwnershipChangeSent_16)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_OwnershipChangeSent_16() const { return ___OwnershipChangeSent_16; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_OwnershipChangeSent_16() { return &___OwnershipChangeSent_16; }
	inline void set_OwnershipChangeSent_16(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___OwnershipChangeSent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___OwnershipChangeSent_16))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___OwnershipChangeSent_16))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OwnershipChangeReceived_17() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___OwnershipChangeReceived_17)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_OwnershipChangeReceived_17() const { return ___OwnershipChangeReceived_17; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_OwnershipChangeReceived_17() { return &___OwnershipChangeReceived_17; }
	inline void set_OwnershipChangeReceived_17(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___OwnershipChangeReceived_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___OwnershipChangeReceived_17))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___OwnershipChangeReceived_17))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ServerLogSent_18() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___ServerLogSent_18)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_ServerLogSent_18() const { return ___ServerLogSent_18; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_ServerLogSent_18() { return &___ServerLogSent_18; }
	inline void set_ServerLogSent_18(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___ServerLogSent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ServerLogSent_18))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ServerLogSent_18))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ServerLogReceived_19() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___ServerLogReceived_19)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_ServerLogReceived_19() const { return ___ServerLogReceived_19; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_ServerLogReceived_19() { return &___ServerLogReceived_19; }
	inline void set_ServerLogReceived_19(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___ServerLogReceived_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ServerLogReceived_19))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___ServerLogReceived_19))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_SceneEventSent_20() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___SceneEventSent_20)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_SceneEventSent_20() const { return ___SceneEventSent_20; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_SceneEventSent_20() { return &___SceneEventSent_20; }
	inline void set_SceneEventSent_20(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___SceneEventSent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SceneEventSent_20))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___SceneEventSent_20))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_SceneEventReceived_21() { return static_cast<int32_t>(offsetof(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields, ___SceneEventReceived_21)); }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  get_SceneEventReceived_21() const { return ___SceneEventReceived_21; }
	inline DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * get_address_of_SceneEventReceived_21() { return &___SceneEventReceived_21; }
	inline void set_SceneEventReceived_21(DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79  value)
	{
		___SceneEventReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___SceneEventReceived_21))->___U3CIdU3Ek__BackingField_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___SceneEventReceived_21))->___U3CDisplayNameU3Ek__BackingField_3), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Unity.Profiling.ProfilerCounter`1<System.Int64>::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_gshared_inline (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * __this, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5_gshared (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20_gshared (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method);

// Unity.Profiling.ProfilerCategory Unity.Profiling.ProfilerCategory::get_Network()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ProfilerCategory_get_Network_mEC2B961D8511B28369BFA9EFF87D7B07E82BBCE2 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerCounter`1<System.Int64>::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit)
inline void ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_inline (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * __this, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method)
{
	((  void (*) (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D *, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544 , String_t*, uint8_t, const RuntimeMethod*))ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_gshared_inline)(__this, ___category0, ___name1, ___dataUnit2, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::.ctor(Unity.Profiling.ProfilerCounter`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper__ctor_m5A447808B5C69DAD9314BBDFC38103D2001B308E (CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C * __this, ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  ___counter0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * ProfilerCounters_get_Instance_m8673AE6525547EE0E661061BABE4D928313D5E26 (const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::UpdateFromMetrics(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters_UpdateFromMetrics_mE5CBC173C33DC451432BE9659C27A71A3AE9802F (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mDA992918D4712C8280CD8A46858E16060C18756D_inline (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_m2BB9E0A482914A76F83E2BF986D334421528A3EA_inline (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters__ctor_mBD52A145EAFDD445667CE160199EF877B963E15A (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricEventCounters__ctor_m8BCA72023B4C37D1693B4B266480367DF81C0098 (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Sent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m76CE98C552034F86E1579C869F711302E0936E8D_inline (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Received()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_mE700A1AF08C6E0581A6CFFB0A41BEFB730D8EB7A_inline (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::.ctor(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters__ctor_m6B223024FCA0A956345742577C5B3E27DFE3C016 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, RuntimeObject* ___byteCounterFactory0, RuntimeObject* ___eventCounterFactory1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCounterFactory__ctor_m33B85B8A48DCB78B24F5A380099C6347B07C13D2 (ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCounterFactory__ctor_m0B5E8B725B4471D13FAD6306AAC7B4569D6E3D0C (EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41 * __this, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricByteCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * ProfilerCounters_ConstructMetricByteCounters_m7ACEB03549A085B41B61CB34643172F9252A68D7 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, String_t* ___name0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, int32_t ___metricType0, const RuntimeMethod* method);
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ProfilerCounters_ConstructMetricCounters_mFA1EFC81BC2F090654D5E327A2600E3CA5219409 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.MetricTypes.MetricTypeExtensions::GetDisplayNameString(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricTypeExtensions_GetDisplayNameString_m60710E3D5615A89A9D831E8D45DBCF177EAD2A7B (int32_t ___metricType0, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters__ctor_m9088DA4045F6C5C79E1969EBF6AA48E1C44404B1 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, String_t* ___displayName0, RuntimeObject* ___byteCounterFactory1, RuntimeObject* ___eventCounterFactory2, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.MetricTypes.DirectionalMetricInfo::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline (DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_m689B688768F14B9F093EE28C0E4DC7A8FCC6A40D (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, String_t* ___name0, RuntimeObject** ___counter1, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::Sample(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters_Sample_mD6093F83156F77C1A8D44A87D9D8B17FA1B295A4 (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.RpcEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.UnnamedMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkVariableEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ObjectDestroyedEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.ServerLogEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.SceneEventMetric>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F_gshared)(__this, ___sent0, ___received1, method);
}
// System.Collections.Generic.IReadOnlyList`1<!!0> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
inline RuntimeObject* MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, String_t* ___metricName1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *, String_t*, const RuntimeMethod*))MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5_gshared)(___collection0, ___metricName1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::Sample<Unity.Multiplayer.Tools.MetricTypes.NetworkMessageEvent>(System.Collections.Generic.IReadOnlyList`1<TEventData>,System.Collections.Generic.IReadOnlyList`1<TEventData>)
inline void MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, RuntimeObject* ___sent0, RuntimeObject* ___received1, const RuntimeMethod* method)
{
	((  void (*) (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20_gshared)(__this, ___sent0, ___received1, method);
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyProfilerMetricObserver__ctor_m9682A8C66E39AE197C9B7ACBF133E5F4CC4D2A70 (LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B * __this, const RuntimeMethod* method);
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::Construct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteCounterFactory_Construct_m6C93D47B005F52F64768A3D1F67176A67E473055 (ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new CounterWrapper(
		//     new ProfilerCounter<long>(
		//         ProfilerCategory.Network, name, ProfilerMarkerDataUnit.Bytes));
		ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  L_0;
		L_0 = ProfilerCategory_get_Network_mEC2B961D8511B28369BFA9EFF87D7B07E82BBCE2(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_inline((&L_2), L_0, L_1, 2, /*hidden argument*/ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C * L_3 = (CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C *)il2cpp_codegen_object_new(CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C_il2cpp_TypeInfo_var);
		CounterWrapper__ctor_m5A447808B5C69DAD9314BBDFC38103D2001B308E(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ByteCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCounterFactory__ctor_m33B85B8A48DCB78B24F5A380099C6347B07C13D2 (ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510 * __this, const RuntimeMethod* method)
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::.ctor(Unity.Profiling.ProfilerCounter`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper__ctor_m5A447808B5C69DAD9314BBDFC38103D2001B308E (CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C * __this, ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  ___counter0, const RuntimeMethod* method)
{
	{
		// public CounterWrapper(ProfilerCounter<long> counter)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Counter = counter;
		ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  L_0 = ___counter0;
		__this->set_m_Counter_0(L_0);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.CounterWrapper::Sample(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CounterWrapper_Sample_m62C089CA9E34AE4E79140896CBC425F1A7E320F5 (CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C * __this, int64_t ___inValue0, const RuntimeMethod* method)
{
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::Construct(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventCounterFactory_Construct_m6F38676D1D61C92910DEC92E47409145F8F9B826 (EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new CounterWrapper(
		//     new ProfilerCounter<long>(
		//         ProfilerCategory.Network, name, ProfilerMarkerDataUnit.Count));
		ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  L_0;
		L_0 = ProfilerCategory_get_Network_mEC2B961D8511B28369BFA9EFF87D7B07E82BBCE2(/*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_inline((&L_2), L_0, L_1, 3, /*hidden argument*/ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_RuntimeMethod_var);
		CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C * L_3 = (CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C *)il2cpp_codegen_object_new(CounterWrapper_t39651535EC219ED1ED6A114E4B668574AE1EB69C_il2cpp_TypeInfo_var);
		CounterWrapper__ctor_m5A447808B5C69DAD9314BBDFC38103D2001B308E(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.EventCounterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventCounterFactory__ctor_m0B5E8B725B4471D13FAD6306AAC7B4569D6E3D0C (EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41 * __this, const RuntimeMethod* method)
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyProfilerMetricObserver_Observe_m150933D88D39BC051711D63F320AEBDD792F51AA (LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B * __this, MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, const RuntimeMethod* method)
{
	{
		// ProfilerCounters.Instance.UpdateFromMetrics(collection);
		ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * L_0;
		L_0 = ProfilerCounters_get_Instance_m8673AE6525547EE0E661061BABE4D928313D5E26(/*hidden argument*/NULL);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_1 = ___collection0;
		NullCheck(L_0);
		ProfilerCounters_UpdateFromMetrics_mE5CBC173C33DC451432BE9659C27A71A3AE9802F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.LegacyProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyProfilerMetricObserver__ctor_m9682A8C66E39AE197C9B7ACBF133E5F4CC4D2A70 (LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B * __this, const RuntimeMethod* method)
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters__ctor_mBD52A145EAFDD445667CE160199EF877B963E15A (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricByteCounters(string displayName, ICounterFactory counterFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Sent = $"{displayName} Bytes Sent";
		String_t* L_0 = ___displayName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteralDCED23E1213A3021436B3BC46D18A3C173E15BD2, /*hidden argument*/NULL);
		__this->set_U3CSentU3Ek__BackingField_2(L_1);
		// Received = $"{displayName} Bytes Received";
		String_t* L_2 = ___displayName0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteral9AFD7D1866B24741AF70BA5BC7A596B8D4710B10, /*hidden argument*/NULL);
		__this->set_U3CReceivedU3Ek__BackingField_3(L_3);
		// m_SentCounter = counterFactory.Construct(Sent);
		RuntimeObject* L_4 = ___counterFactory1;
		String_t* L_5;
		L_5 = MetricByteCounters_get_Sent_mDA992918D4712C8280CD8A46858E16060C18756D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var, L_4, L_5);
		__this->set_m_SentCounter_0(L_6);
		// m_ReceivedCounter = counterFactory.Construct(Received);
		RuntimeObject* L_7 = ___counterFactory1;
		String_t* L_8;
		L_8 = MetricByteCounters_get_Received_m2BB9E0A482914A76F83E2BF986D334421528A3EA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var, L_7, L_8);
		__this->set_m_ReceivedCounter_1(L_9);
		// }
		return;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mDA992918D4712C8280CD8A46858E16060C18756D (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_2();
		return L_0;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_m2BB9E0A482914A76F83E2BF986D334421528A3EA (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters::Sample(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricByteCounters_Sample_mD6093F83156F77C1A8D44A87D9D8B17FA1B295A4 (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, int64_t ___sent0, int64_t ___received1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounter_t40003A50BBBC1226F3B87591026DB8F41094FBCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SentCounter.Sample(sent);
		RuntimeObject* L_0 = __this->get_m_SentCounter_0();
		int64_t L_1 = ___sent0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter::Sample(System.Int64) */, ICounter_t40003A50BBBC1226F3B87591026DB8F41094FBCE_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ReceivedCounter.Sample(received);
		RuntimeObject* L_2 = __this->get_m_ReceivedCounter_1();
		int64_t L_3 = ___received1;
		NullCheck(L_2);
		InterfaceActionInvoker1< int64_t >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter::Sample(System.Int64) */, ICounter_t40003A50BBBC1226F3B87591026DB8F41094FBCE_il2cpp_TypeInfo_var, L_2, L_3);
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCounters__ctor_m9088DA4045F6C5C79E1969EBF6AA48E1C44404B1 (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * __this, String_t* ___displayName0, RuntimeObject* ___byteCounterFactory1, RuntimeObject* ___eventCounterFactory2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricCounters(
		//     string displayName,
		//     ICounterFactory byteCounterFactory,
		//     ICounterFactory eventCounterFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Bytes = new MetricByteCounters(displayName, byteCounterFactory);
		String_t* L_0 = ___displayName0;
		RuntimeObject* L_1 = ___byteCounterFactory1;
		MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * L_2 = (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 *)il2cpp_codegen_object_new(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014_il2cpp_TypeInfo_var);
		MetricByteCounters__ctor_mBD52A145EAFDD445667CE160199EF877B963E15A(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->set_Bytes_0(L_2);
		// Events = new MetricEventCounters(displayName, eventCounterFactory);
		String_t* L_3 = ___displayName0;
		RuntimeObject* L_4 = ___eventCounterFactory2;
		MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * L_5 = (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 *)il2cpp_codegen_object_new(MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1_il2cpp_TypeInfo_var);
		MetricEventCounters__ctor_m8BCA72023B4C37D1693B4B266480367DF81C0098(L_5, L_3, L_4, /*hidden argument*/NULL);
		__this->set_Events_1(L_5);
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
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Sent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m76CE98C552034F86E1579C869F711302E0936E8D (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::get_Received()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_mE700A1AF08C6E0581A6CFFB0A41BEFB730D8EB7A (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricEventCounters::.ctor(System.String,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricEventCounters__ctor_m8BCA72023B4C37D1693B4B266480367DF81C0098 (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, String_t* ___displayName0, RuntimeObject* ___counterFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1538A07424430301B159B5CE5821E6993791EE42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MetricEventCounters(string displayName, ICounterFactory counterFactory)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Sent = $"{displayName} Sent";
		String_t* L_0 = ___displayName0;
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral1538A07424430301B159B5CE5821E6993791EE42, /*hidden argument*/NULL);
		__this->set_U3CSentU3Ek__BackingField_0(L_1);
		// Received = $"{displayName} Received";
		String_t* L_2 = ___displayName0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_2, _stringLiteralDF6F7FF07E4FC2B4634134C15CFB28E58F405274, /*hidden argument*/NULL);
		__this->set_U3CReceivedU3Ek__BackingField_2(L_3);
		// m_SentCounter = counterFactory.Construct(Sent);
		RuntimeObject* L_4 = ___counterFactory1;
		String_t* L_5;
		L_5 = MetricEventCounters_get_Sent_m76CE98C552034F86E1579C869F711302E0936E8D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var, L_4, L_5);
		__this->set_m_SentCounter_1(L_6);
		// m_ReceivedCounter = counterFactory.Construct(Received);
		RuntimeObject* L_7 = ___counterFactory1;
		String_t* L_8;
		L_8 = MetricEventCounters_get_Received_mE700A1AF08C6E0581A6CFFB0A41BEFB730D8EB7A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounter Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory::Construct(System.String) */, ICounterFactory_tA6F6A889B545F00C77284397C589DF38B6E704F1_il2cpp_TypeInfo_var, L_7, L_8);
		__this->set_m_ReceivedCounter_3(L_9);
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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * ProfilerCounters_get_Instance_m8673AE6525547EE0E661061BABE4D928313D5E26 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * G_B2_0 = NULL;
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * G_B1_0 = NULL;
	{
		// public static ProfilerCounters Instance => s_Singleton ??= new ProfilerCounters();
		ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * L_0 = ((ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_il2cpp_TypeInfo_var))->get_s_Singleton_0();
		ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * L_2 = (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 *)il2cpp_codegen_object_new(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_il2cpp_TypeInfo_var);
		ProfilerCounters__ctor_m6B223024FCA0A956345742577C5B3E27DFE3C016(L_2, (RuntimeObject*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * L_3 = L_2;
		((ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_StaticFields*)il2cpp_codegen_static_fields_for(ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2_il2cpp_TypeInfo_var))->set_s_Singleton_0(L_3);
		G_B2_0 = L_3;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::.ctor(Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory,Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ICounterFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters__ctor_m6B223024FCA0A956345742577C5B3E27DFE3C016 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, RuntimeObject* ___byteCounterFactory0, RuntimeObject* ___eventCounterFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * G_B1_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * G_B3_1 = NULL;
	{
		// public ProfilerCounters(
		//     ICounterFactory byteCounterFactory = null,
		//     ICounterFactory eventCounterFactory = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_ByteCounterFactory = byteCounterFactory ?? new ByteCounterFactory();
		RuntimeObject* L_0 = ___byteCounterFactory0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510 * L_2 = (ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510 *)il2cpp_codegen_object_new(ByteCounterFactory_t455959C6E1366F296BD9ED55C09E305F9254A510_il2cpp_TypeInfo_var);
		ByteCounterFactory__ctor_m33B85B8A48DCB78B24F5A380099C6347B07C13D2(L_2, /*hidden argument*/NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_m_ByteCounterFactory_13(G_B2_0);
		// m_EventCounterFactory = eventCounterFactory ?? new EventCounterFactory();
		RuntimeObject* L_3 = ___eventCounterFactory1;
		RuntimeObject* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = __this;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = __this;
			goto IL_0021;
		}
	}
	{
		EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41 * L_5 = (EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41 *)il2cpp_codegen_object_new(EventCounterFactory_t905525D83A6C33AD7D8FAC74C326873AC35EAA41_il2cpp_TypeInfo_var);
		EventCounterFactory__ctor_m0B5E8B725B4471D13FAD6306AAC7B4569D6E3D0C(L_5, /*hidden argument*/NULL);
		G_B4_0 = ((RuntimeObject*)(L_5));
		G_B4_1 = G_B3_1;
	}

IL_0021:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_m_EventCounterFactory_14(G_B4_0);
		// totalBytes = ConstructMetricByteCounters("Total");
		MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * L_6;
		L_6 = ProfilerCounters_ConstructMetricByteCounters_m7ACEB03549A085B41B61CB34643172F9252A68D7(__this, _stringLiteral44EE6C16B361AF984DE871897FDED43002CA0C67, /*hidden argument*/NULL);
		__this->set_totalBytes_1(L_6);
		// rpc = ConstructMetricCounters(MetricType.Rpc);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_7;
		L_7 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, 2, /*hidden argument*/NULL);
		__this->set_rpc_2(L_7);
		// namedMessage = ConstructMetricCounters(MetricType.NamedMessage);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_8;
		L_8 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, 3, /*hidden argument*/NULL);
		__this->set_namedMessage_3(L_8);
		// unnamedMessage = ConstructMetricCounters(MetricType.UnnamedMessage);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_9;
		L_9 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, 4, /*hidden argument*/NULL);
		__this->set_unnamedMessage_4(L_9);
		// networkVariableDelta = ConstructMetricCounters("Network Variable");
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_10;
		L_10 = ProfilerCounters_ConstructMetricCounters_mFA1EFC81BC2F090654D5E327A2600E3CA5219409(__this, _stringLiteralBEFA0761F62E788ABF8AA2FED23A4C073F0BFAC8, /*hidden argument*/NULL);
		__this->set_networkVariableDelta_5(L_10);
		// objectSpawned = ConstructMetricCounters(MetricType.ObjectSpawned);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_11;
		L_11 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, 6, /*hidden argument*/NULL);
		__this->set_objectSpawned_6(L_11);
		// objectDestroyed = ConstructMetricCounters(MetricType.ObjectDestroyed);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_12;
		L_12 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, 7, /*hidden argument*/NULL);
		__this->set_objectDestroyed_7(L_12);
		// serverLog = ConstructMetricCounters(MetricType.ServerLog);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_13;
		L_13 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_serverLog_8(L_13);
		// sceneEvent = ConstructMetricCounters(MetricType.SceneEvent);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_14;
		L_14 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_sceneEvent_9(L_14);
		// ownershipChange = ConstructMetricCounters(MetricType.OwnershipChange);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_15;
		L_15 = ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78(__this, 8, /*hidden argument*/NULL);
		__this->set_ownershipChange_10(L_15);
		// customMessage = ConstructMetricCounters("Custom");
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_16;
		L_16 = ProfilerCounters_ConstructMetricCounters_mFA1EFC81BC2F090654D5E327A2600E3CA5219409(__this, _stringLiteral2732277E9D8A4846B7023B9ABCA3C260EFCD3ABA, /*hidden argument*/NULL);
		__this->set_customMessage_11(L_16);
		// networkMessage = ConstructMetricCounters("Network Messages");
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_17;
		L_17 = ProfilerCounters_ConstructMetricCounters_mFA1EFC81BC2F090654D5E327A2600E3CA5219409(__this, _stringLiteralF7B4990D9AE3010693EE63F2E120DFD72243DFDC, /*hidden argument*/NULL);
		__this->set_networkMessage_12(L_17);
		// }
		return;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricByteCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricByteCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * ProfilerCounters_ConstructMetricByteCounters_m7ACEB03549A085B41B61CB34643172F9252A68D7 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new MetricByteCounters(
		//     name,
		//     m_ByteCounterFactory);
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->get_m_ByteCounterFactory_13();
		MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * L_2 = (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 *)il2cpp_codegen_object_new(MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014_il2cpp_TypeInfo_var);
		MetricByteCounters__ctor_mBD52A145EAFDD445667CE160199EF877B963E15A(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(Unity.Multiplayer.Tools.MetricTypes.MetricType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ProfilerCounters_ConstructMetricCounters_mDAF196195F638357170C348565343A64A6FC8C78 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, int32_t ___metricType0, const RuntimeMethod* method)
{
	{
		// => ConstructMetricCounters(metricType.GetDisplayNameString());
		int32_t L_0 = ___metricType0;
		String_t* L_1;
		L_1 = MetricTypeExtensions_GetDisplayNameString_m60710E3D5615A89A9D831E8D45DBCF177EAD2A7B(L_0, /*hidden argument*/NULL);
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_2;
		L_2 = ProfilerCounters_ConstructMetricCounters_mFA1EFC81BC2F090654D5E327A2600E3CA5219409(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.MetricCounters Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::ConstructMetricCounters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * ProfilerCounters_ConstructMetricCounters_mFA1EFC81BC2F090654D5E327A2600E3CA5219409 (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new MetricCounters(name, m_ByteCounterFactory, m_EventCounterFactory);
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = __this->get_m_ByteCounterFactory_13();
		RuntimeObject* L_2 = __this->get_m_EventCounterFactory_14();
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_3 = (MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 *)il2cpp_codegen_object_new(MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5_il2cpp_TypeInfo_var);
		MetricCounters__ctor_m9088DA4045F6C5C79E1969EBF6AA48E1C44404B1(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerCounters::UpdateFromMetrics(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerCounters_UpdateFromMetrics_mE5CBC173C33DC451432BE9659C27A71A3AE9802F (ProfilerCounters_t45155F865D643CC504629D190350F725A141C3D2 * __this, MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetric_1_t0DDA0A8AEAD59BE891B208AD63F7F464266D9FA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * G_B2_0 = NULL;
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * G_B1_0 = NULL;
	int64_t G_B3_0 = 0;
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * G_B3_1 = NULL;
	int64_t G_B5_0 = 0;
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * G_B5_1 = NULL;
	int64_t G_B4_0 = 0;
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * G_B4_1 = NULL;
	int64_t G_B6_0 = 0;
	int64_t G_B6_1 = 0;
	MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * G_B6_2 = NULL;
	{
		// totalBytes.Sample(
		//     collection.TryGetCounter(NetworkMetricTypes.TotalBytesSent.Id, out var bytesSent)
		//         ? bytesSent.Value
		//         : 0L,
		//     collection.TryGetCounter(NetworkMetricTypes.TotalBytesReceived.Id, out var bytesReceived)
		//         ? bytesReceived.Value
		//         : 0L);
		MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * L_0 = __this->get_totalBytes_1();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_1 = ___collection0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_TotalBytesSent_2()), /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = MetricCollection_TryGetCounter_m689B688768F14B9F093EE28C0E4DC7A8FCC6A40D(L_1, L_2, (RuntimeObject**)(&V_0), /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001e:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>::get_Value() */, IMetric_1_t0DDA0A8AEAD59BE891B208AD63F7F464266D9FA2_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_6 = ___collection0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_TotalBytesReceived_3()), /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8;
		L_8 = MetricCollection_TryGetCounter_m689B688768F14B9F093EE28C0E4DC7A8FCC6A40D(L_6, L_7, (RuntimeObject**)(&V_1), /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_8)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = ((int64_t)((int64_t)0));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0042;
	}

IL_003c:
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>::get_Value() */, IMetric_1_t0DDA0A8AEAD59BE891B208AD63F7F464266D9FA2_il2cpp_TypeInfo_var, L_9);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0042:
	{
		NullCheck(G_B6_2);
		MetricByteCounters_Sample_mD6093F83156F77C1A8D44A87D9D8B17FA1B295A4(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// rpc.Sample(
		//     collection.GetEventValues<RpcEvent>(NetworkMetricTypes.RpcSent.Id),
		//     collection.GetEventValues<RpcEvent>(NetworkMetricTypes.RpcReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_11 = __this->get_rpc_2();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_12 = ___collection0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_RpcSent_4()), /*hidden argument*/NULL);
		RuntimeObject* L_14;
		L_14 = MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7(L_12, L_13, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_15 = ___collection0;
		String_t* L_16;
		L_16 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_RpcReceived_5()), /*hidden argument*/NULL);
		RuntimeObject* L_17;
		L_17 = MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7(L_15, L_16, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_m6B50C2D9EBF25835F032966B8B7B9AC3386E32F7_RuntimeMethod_var);
		NullCheck(L_11);
		MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16(L_11, L_14, L_17, /*hidden argument*/MetricCounters_Sample_TisRpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_mFE0E813BC66211740053D143B72834DFC2FECD16_RuntimeMethod_var);
		// namedMessage.Sample(
		//     collection.GetEventValues<NamedMessageEvent>(NetworkMetricTypes.NamedMessageSent.Id),
		//     collection.GetEventValues<NamedMessageEvent>(NetworkMetricTypes.NamedMessageReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_18 = __this->get_namedMessage_3();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_19 = ___collection0;
		String_t* L_20;
		L_20 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NamedMessageSent_6()), /*hidden argument*/NULL);
		RuntimeObject* L_21;
		L_21 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4(L_19, L_20, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_22 = ___collection0;
		String_t* L_23;
		L_23 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NamedMessageReceived_7()), /*hidden argument*/NULL);
		RuntimeObject* L_24;
		L_24 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4(L_22, L_23, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_RuntimeMethod_var);
		NullCheck(L_18);
		MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295(L_18, L_21, L_24, /*hidden argument*/MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295_RuntimeMethod_var);
		// unnamedMessage.Sample(
		//     collection.GetEventValues<UnnamedMessageEvent>(NetworkMetricTypes.UnnamedMessageSent.Id),
		//     collection.GetEventValues<UnnamedMessageEvent>(NetworkMetricTypes.UnnamedMessageReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_25 = __this->get_unnamedMessage_4();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_26 = ___collection0;
		String_t* L_27;
		L_27 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_UnnamedMessageSent_8()), /*hidden argument*/NULL);
		RuntimeObject* L_28;
		L_28 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708(L_26, L_27, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_29 = ___collection0;
		String_t* L_30;
		L_30 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_UnnamedMessageReceived_9()), /*hidden argument*/NULL);
		RuntimeObject* L_31;
		L_31 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708(L_29, L_30, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_RuntimeMethod_var);
		NullCheck(L_25);
		MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4(L_25, L_28, L_31, /*hidden argument*/MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4_RuntimeMethod_var);
		// customMessage.Sample(
		//     collection.GetEventValues<NamedMessageEvent>(NetworkMetricTypes.NamedMessageSent.Id),
		//     collection.GetEventValues<NamedMessageEvent>(NetworkMetricTypes.NamedMessageReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_32 = __this->get_customMessage_11();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_33 = ___collection0;
		String_t* L_34;
		L_34 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NamedMessageSent_6()), /*hidden argument*/NULL);
		RuntimeObject* L_35;
		L_35 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4(L_33, L_34, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_36 = ___collection0;
		String_t* L_37;
		L_37 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NamedMessageReceived_7()), /*hidden argument*/NULL);
		RuntimeObject* L_38;
		L_38 = MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4(L_36, L_37, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m95D61A41AB649CEDA3752B7859843B2E28FB7AD4_RuntimeMethod_var);
		NullCheck(L_32);
		MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295(L_32, L_35, L_38, /*hidden argument*/MetricCounters_Sample_TisNamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_m3BCF4A74F78EC173828F1A526FEE87018972D295_RuntimeMethod_var);
		// customMessage.Sample(
		//     collection.GetEventValues<UnnamedMessageEvent>(NetworkMetricTypes.UnnamedMessageSent.Id),
		//     collection.GetEventValues<UnnamedMessageEvent>(NetworkMetricTypes.UnnamedMessageReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_39 = __this->get_customMessage_11();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_40 = ___collection0;
		String_t* L_41;
		L_41 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_UnnamedMessageSent_8()), /*hidden argument*/NULL);
		RuntimeObject* L_42;
		L_42 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708(L_40, L_41, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_43 = ___collection0;
		String_t* L_44;
		L_44 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_UnnamedMessageReceived_9()), /*hidden argument*/NULL);
		RuntimeObject* L_45;
		L_45 = MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708(L_43, L_44, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m0661D5C7FDBB8FA702CC0DA2FE634E25E4465708_RuntimeMethod_var);
		NullCheck(L_39);
		MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4(L_39, L_42, L_45, /*hidden argument*/MetricCounters_Sample_TisUnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_m87E8378D7F96A94BC94CB18F5E51E1CAB19566E4_RuntimeMethod_var);
		// networkVariableDelta.Sample(
		//     collection.GetEventValues<NetworkVariableEvent>(NetworkMetricTypes.NetworkVariableDeltaSent.Id),
		//     collection.GetEventValues<NetworkVariableEvent>(NetworkMetricTypes.NetworkVariableDeltaReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_46 = __this->get_networkVariableDelta_5();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_47 = ___collection0;
		String_t* L_48;
		L_48 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NetworkVariableDeltaSent_10()), /*hidden argument*/NULL);
		RuntimeObject* L_49;
		L_49 = MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92(L_47, L_48, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_50 = ___collection0;
		String_t* L_51;
		L_51 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NetworkVariableDeltaReceived_11()), /*hidden argument*/NULL);
		RuntimeObject* L_52;
		L_52 = MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92(L_50, L_51, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_mEBF68342FBF3F470B0A66802295A3EE507BC7A92_RuntimeMethod_var);
		NullCheck(L_46);
		MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A(L_46, L_49, L_52, /*hidden argument*/MetricCounters_Sample_TisNetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_m21B653C495317B592DF2041D036C6FECBF87B88A_RuntimeMethod_var);
		// objectSpawned.Sample(
		//     collection.GetEventValues<ObjectSpawnedEvent>(NetworkMetricTypes.ObjectSpawnedSent.Id),
		//     collection.GetEventValues<ObjectSpawnedEvent>(NetworkMetricTypes.ObjectSpawnedReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_53 = __this->get_objectSpawned_6();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_54 = ___collection0;
		String_t* L_55;
		L_55 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_ObjectSpawnedSent_12()), /*hidden argument*/NULL);
		RuntimeObject* L_56;
		L_56 = MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6(L_54, L_55, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_57 = ___collection0;
		String_t* L_58;
		L_58 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_ObjectSpawnedReceived_13()), /*hidden argument*/NULL);
		RuntimeObject* L_59;
		L_59 = MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6(L_57, L_58, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m83E4D661616AA960DA0F6DF84F8357BB40D3B5B6_RuntimeMethod_var);
		NullCheck(L_53);
		MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427(L_53, L_56, L_59, /*hidden argument*/MetricCounters_Sample_TisObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_m265E442259B498AFA2EECA6516F3ECA3ACB5A427_RuntimeMethod_var);
		// objectDestroyed.Sample(
		//     collection.GetEventValues<ObjectDestroyedEvent>(NetworkMetricTypes.ObjectDestroyedSent.Id),
		//     collection.GetEventValues<ObjectDestroyedEvent>(NetworkMetricTypes.ObjectDestroyedReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_60 = __this->get_objectDestroyed_7();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_61 = ___collection0;
		String_t* L_62;
		L_62 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_ObjectDestroyedSent_14()), /*hidden argument*/NULL);
		RuntimeObject* L_63;
		L_63 = MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C(L_61, L_62, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_64 = ___collection0;
		String_t* L_65;
		L_65 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_ObjectDestroyedReceived_15()), /*hidden argument*/NULL);
		RuntimeObject* L_66;
		L_66 = MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C(L_64, L_65, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m5FA7093287A91BB22EA30E76282C7F7C289C2F3C_RuntimeMethod_var);
		NullCheck(L_60);
		MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9(L_60, L_63, L_66, /*hidden argument*/MetricCounters_Sample_TisObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_m9C69C1A59F8D8F845C76CB0A76CBFF27950B6FC9_RuntimeMethod_var);
		// serverLog.Sample(
		//     collection.GetEventValues<ServerLogEvent>(NetworkMetricTypes.ServerLogSent.Id),
		//     collection.GetEventValues<ServerLogEvent>(NetworkMetricTypes.ServerLogReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_67 = __this->get_serverLog_8();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_68 = ___collection0;
		String_t* L_69;
		L_69 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_ServerLogSent_18()), /*hidden argument*/NULL);
		RuntimeObject* L_70;
		L_70 = MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967(L_68, L_69, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_71 = ___collection0;
		String_t* L_72;
		L_72 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_ServerLogReceived_19()), /*hidden argument*/NULL);
		RuntimeObject* L_73;
		L_73 = MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967(L_71, L_72, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m49DF9B03CC0D05320BED243DB950E62EB50F9967_RuntimeMethod_var);
		NullCheck(L_67);
		MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1(L_67, L_70, L_73, /*hidden argument*/MetricCounters_Sample_TisServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_m5140A3EC307ADF11C29F8D7AB59C015509C52FC1_RuntimeMethod_var);
		// sceneEvent.Sample(
		//     collection.GetEventValues<SceneEventMetric>(NetworkMetricTypes.SceneEventSent.Id),
		//     collection.GetEventValues<SceneEventMetric>(NetworkMetricTypes.SceneEventReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_74 = __this->get_sceneEvent_9();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_75 = ___collection0;
		String_t* L_76;
		L_76 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_SceneEventSent_20()), /*hidden argument*/NULL);
		RuntimeObject* L_77;
		L_77 = MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE(L_75, L_76, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_78 = ___collection0;
		String_t* L_79;
		L_79 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_SceneEventReceived_21()), /*hidden argument*/NULL);
		RuntimeObject* L_80;
		L_80 = MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE(L_78, L_79, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_mBDBCD40D10E246B7513061B84CC6E077571CC7DE_RuntimeMethod_var);
		NullCheck(L_74);
		MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0(L_74, L_77, L_80, /*hidden argument*/MetricCounters_Sample_TisSceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_m9CB6075E5B994F5D3BCA657B894FD3C1BEA34AD0_RuntimeMethod_var);
		// ownershipChange.Sample(
		//     collection.GetEventValues<OwnershipChangeEvent>(NetworkMetricTypes.OwnershipChangeSent.Id),
		//     collection.GetEventValues<OwnershipChangeEvent>(NetworkMetricTypes.OwnershipChangeReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_81 = __this->get_ownershipChange_10();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_82 = ___collection0;
		String_t* L_83;
		L_83 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_OwnershipChangeSent_16()), /*hidden argument*/NULL);
		RuntimeObject* L_84;
		L_84 = MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9(L_82, L_83, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_85 = ___collection0;
		String_t* L_86;
		L_86 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_OwnershipChangeReceived_17()), /*hidden argument*/NULL);
		RuntimeObject* L_87;
		L_87 = MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9(L_85, L_86, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_m997719DEF54878EA0630F5A485D0F4A7AA29B0D9_RuntimeMethod_var);
		NullCheck(L_81);
		MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F(L_81, L_84, L_87, /*hidden argument*/MetricCounters_Sample_TisOwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_mAC55E584DEB8866BC2E09979AAE3FDE51679ED7F_RuntimeMethod_var);
		// networkMessage.Sample(
		//     collection.GetEventValues<NetworkMessageEvent>(NetworkMetricTypes.NetworkMessageSent.Id),
		//     collection.GetEventValues<NetworkMessageEvent>(NetworkMetricTypes.NetworkMessageReceived.Id));
		MetricCounters_tC78BDB1D16EB2895A4447B221E37B9113415E0F5 * L_88 = __this->get_networkMessage_12();
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_89 = ___collection0;
		String_t* L_90;
		L_90 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NetworkMessageSent_0()), /*hidden argument*/NULL);
		RuntimeObject* L_91;
		L_91 = MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5(L_89, L_90, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_92 = ___collection0;
		String_t* L_93;
		L_93 = DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline((DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 *)(((NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_StaticFields*)il2cpp_codegen_static_fields_for(NetworkMetricTypes_t3D629A4F7D7F9FAAB0DD9F25A64B4EE99A342CAE_il2cpp_TypeInfo_var))->get_address_of_NetworkMessageReceived_1()), /*hidden argument*/NULL);
		RuntimeObject* L_94;
		L_94 = MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5(L_92, L_93, /*hidden argument*/MetricsCollectionExtensions_GetEventValues_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_mBBA95A627165CF49038093A38827529F451B12A5_RuntimeMethod_var);
		NullCheck(L_88);
		MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20(L_88, L_91, L_94, /*hidden argument*/MetricCounters_Sample_TisNetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_m0217D6379A61FA245DFEDA17973B869AE817EC20_RuntimeMethod_var);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_m3FF8A611DDD04596D8800E94123C7652CB8164FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LegacyProfilerMetricObserver();
		LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B * L_0 = (LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B *)il2cpp_codegen_object_new(LegacyProfilerMetricObserver_tA4440506F0FC29739401C0D197A57F751D90C53B_il2cpp_TypeInfo_var);
		LegacyProfilerMetricObserver__ctor_m9682A8C66E39AE197C9B7ACBF133E5F4CC4D2A70(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Sent_mDA992918D4712C8280CD8A46858E16060C18756D_inline (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricByteCounters_get_Received_m2BB9E0A482914A76F83E2BF986D334421528A3EA_inline (MetricByteCounters_tB792CC54C5365A0498216DB5EDB96590F510C014 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Sent_m76CE98C552034F86E1579C869F711302E0936E8D_inline (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, const RuntimeMethod* method)
{
	{
		// public string Sent { get; }
		String_t* L_0 = __this->get_U3CSentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetricEventCounters_get_Received_mE700A1AF08C6E0581A6CFFB0A41BEFB730D8EB7A_inline (MetricEventCounters_tA47D21688D0ACEC074A762A42CA34D316D5DF0B1 * __this, const RuntimeMethod* method)
{
	{
		// public string Received { get; }
		String_t* L_0 = __this->get_U3CReceivedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02_inline (DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79 * __this, const RuntimeMethod* method)
{
	{
		// internal string Id { get; }
		String_t* L_0 = __this->get_U3CIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerCounter_1__ctor_m0FA0916EFFBDBC5C162A441664D8010BDEC4803E_gshared_inline (ProfilerCounter_1_t9A2E6B09FDB388F9BFAB6BD7B67E2CF98207FC1D * __this, ProfilerCategory_tBC416DA42A24064627D360E2B1ADD463EB314544  ___category0, String_t* ___name1, uint8_t ___dataUnit2, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
