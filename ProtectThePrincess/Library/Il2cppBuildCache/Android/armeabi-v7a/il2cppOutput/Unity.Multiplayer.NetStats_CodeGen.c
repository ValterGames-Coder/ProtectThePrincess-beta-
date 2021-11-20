#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
// 0x00000002 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::SetConnectionId(System.UInt64)
// 0x00000003 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::Dispatch()
// 0x00000004 System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
// 0x00000005 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricCollection__ctor_m5705BAE6E330A5B2123202ADDDC2B3663DF37EF5 (void);
// 0x00000006 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
extern void MetricCollection_set_ConnectionId_mD28DD66B7CAC76807DD221426F10214CA29AEDC0 (void);
// 0x00000007 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
extern void MetricCollection_TryGetCounter_m689B688768F14B9F093EE28C0E4DC7A8FCC6A40D (void);
// 0x00000008 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetEvent(System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<TEvent>&)
// 0x00000009 System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>)
extern void MetricDispatcher__ctor_m00AD6FF56893AECA9518B00730AA72C0B5337FF0 (void);
// 0x0000000A System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
extern void MetricDispatcher_RegisterObserver_m065198EFB1F337925E71C22953B8FBB40F60E9D5 (void);
// 0x0000000B System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
extern void MetricDispatcher_SetConnectionId_mEC5A31A87D3335EC2BE325B3CF76811F89263E73 (void);
// 0x0000000C System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
extern void MetricDispatcher_Dispatch_mC03CAC3DD8FFFF5B8EA475A304E14E3E250D3452 (void);
// 0x0000000D Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
extern void MetricDispatcherBuilder_WithCounters_m7EEB812FD9D519C10DF60EB421EB1794D56313E2 (void);
// 0x0000000E Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
// 0x0000000F Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
extern void MetricDispatcherBuilder_Build_m78D24216C73421EB01192007FA4C0170441515AB (void);
// 0x00000010 System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
extern void MetricDispatcherBuilder__ctor_mCEE673251C3BB0B8166275696108E87BEF3C372D (void);
// 0x00000011 System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(System.String,System.Int64)
extern void Counter__ctor_m05B6B99CE9F4213E59741480D72DB5B90C696AF1 (void);
// 0x00000012 System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
extern void Counter_Increment_m495CAFB95A9F6735185F02696E4497289F3A7B09 (void);
// 0x00000013 System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::.ctor(System.String)
// 0x00000014 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricBase`1::.ctor(System.String)
// 0x00000015 System.String Unity.Multiplayer.Tools.NetStats.EventMetricBase`1::get_Name()
// 0x00000016 System.Collections.Generic.IReadOnlyList`1<TValue> Unity.Multiplayer.Tools.NetStats.EventMetricBase`1::get_Values()
// 0x00000017 System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricBase`1::get_ShouldResetOnDispatch()
// 0x00000018 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricBase`1::Mark(TValue)
// 0x00000019 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricBase`1::Reset()
// 0x0000001A System.Collections.Generic.IReadOnlyList`1<TValue> Unity.Multiplayer.Tools.NetStats.IEventMetric`1::get_Values()
// 0x0000001B TValue Unity.Multiplayer.Tools.NetStats.IMetric`1::get_Value()
// 0x0000001C System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch()
// 0x0000001D System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset()
// 0x0000001E System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::.ctor(System.String,TValue)
// 0x0000001F System.String Unity.Multiplayer.Tools.NetStats.Metric`1::get_Name()
// 0x00000020 TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_Value()
// 0x00000021 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_Value(TValue)
// 0x00000022 TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_DefaultValue()
// 0x00000023 System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::get_ShouldResetOnDispatch()
// 0x00000024 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_ShouldResetOnDispatch(System.Boolean)
// 0x00000025 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::Reset()
// 0x00000026 System.Collections.Generic.IReadOnlyList`1<TMetric> Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions::GetEventValues(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.String)
static Il2CppMethodPointer s_methodPointers[38] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	MetricCollection__ctor_m5705BAE6E330A5B2123202ADDDC2B3663DF37EF5,
	MetricCollection_set_ConnectionId_mD28DD66B7CAC76807DD221426F10214CA29AEDC0,
	MetricCollection_TryGetCounter_m689B688768F14B9F093EE28C0E4DC7A8FCC6A40D,
	NULL,
	MetricDispatcher__ctor_m00AD6FF56893AECA9518B00730AA72C0B5337FF0,
	MetricDispatcher_RegisterObserver_m065198EFB1F337925E71C22953B8FBB40F60E9D5,
	MetricDispatcher_SetConnectionId_mEC5A31A87D3335EC2BE325B3CF76811F89263E73,
	MetricDispatcher_Dispatch_mC03CAC3DD8FFFF5B8EA475A304E14E3E250D3452,
	MetricDispatcherBuilder_WithCounters_m7EEB812FD9D519C10DF60EB421EB1794D56313E2,
	NULL,
	MetricDispatcherBuilder_Build_m78D24216C73421EB01192007FA4C0170441515AB,
	MetricDispatcherBuilder__ctor_mCEE673251C3BB0B8166275696108E87BEF3C372D,
	Counter__ctor_m05B6B99CE9F4213E59741480D72DB5B90C696AF1,
	Counter_Increment_m495CAFB95A9F6735185F02696E4497289F3A7B09,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[38] = 
{
	2671,
	2656,
	3266,
	2671,
	304,
	2656,
	1213,
	-1,
	1555,
	2671,
	2656,
	3266,
	2066,
	-1,
	3193,
	3266,
	1551,
	2656,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3231,
	3266,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x02000008, { 2, 2 } },
	{ 0x02000009, { 4, 4 } },
	{ 0x0200000F, { 8, 2 } },
	{ 0x06000008, { 0, 1 } },
	{ 0x0600000E, { 1, 1 } },
	{ 0x06000026, { 10, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[13] = 
{
	{ (Il2CppRGCTXDataType)2, 2682 },
	{ (Il2CppRGCTXDataType)3, 8265 },
	{ (Il2CppRGCTXDataType)3, 8266 },
	{ (Il2CppRGCTXDataType)2, 1787 },
	{ (Il2CppRGCTXDataType)2, 2984 },
	{ (Il2CppRGCTXDataType)3, 11993 },
	{ (Il2CppRGCTXDataType)3, 11994 },
	{ (Il2CppRGCTXDataType)3, 11995 },
	{ (Il2CppRGCTXDataType)3, 15815 },
	{ (Il2CppRGCTXDataType)3, 15814 },
	{ (Il2CppRGCTXDataType)3, 25270 },
	{ (Il2CppRGCTXDataType)3, 21895 },
	{ (Il2CppRGCTXDataType)2, 2683 },
};
extern const CustomAttributesCacheGenerator g_Unity_Multiplayer_NetStats_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Multiplayer_NetStats_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Multiplayer_NetStats_CodeGenModule = 
{
	"Unity.Multiplayer.NetStats.dll",
	38,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	6,
	s_rgctxIndices,
	13,
	s_rgctxValues,
	NULL,
	g_Unity_Multiplayer_NetStats_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
