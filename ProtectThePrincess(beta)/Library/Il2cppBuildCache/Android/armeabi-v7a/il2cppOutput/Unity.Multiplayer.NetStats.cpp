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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tC51B0D1CF3D0A1E45BBD8B79324FE5CEA1C1CB72;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct IDictionary_2_t9F755B304785A4736CBC965C608A6AE319EE5D96;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IDictionary_2_t4D76F69698D5B21AEC7AE4BE034BDB89A22C7105;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IDictionary_2_t49BA1D35BCF00B395A8DE166E9DA0FB712B3C41E;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IDictionary_2_tF24FC80DCA36D900E12D03CF2ADBF10509B600E6;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IDictionary_2_t4038618B26746813025028A47BD86E8C50017FBE;
// System.Collections.Generic.IEnumerable`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IEnumerable_1_tD43371A47B4E3B5954CFC73E291BD0A3C78AA86A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct IList_1_tB8F05FBD6F395D2022822D71B42F6C5523B56072;
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
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct IReadOnlyList_1_tD0292CBC32000A164B32FF52992C6C3995097A0C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct KeyCollection_t5E92C190820BC4F78E8D2C5D7909A9EAE314DB74;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct KeyCollection_t72E2924E56A78734B1D418A8B950F1ACD65A0845;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct KeyCollection_t60451F276BAD1D4BCC8898822D3CEB9307440DBE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct KeyCollection_t73CBC85D28765810143A694FA50131CA75E929B6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct KeyCollection_tE77B410C83B411F3FBC02C448AE6DACD3B660B2F;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601;
// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_t6971AA4CC282F5EBC6FFB5DD3ED9175AD20CD377;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct ValueCollection_t67467EAB5CB8613F45E928011F32AB26C3C85B17;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct ValueCollection_t8A39AFA704CC16F7A5F54ABDA003D49B7F655001;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ValueCollection_tFA037DF9DD26CE889E93389B65957AC755AD009E;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ValueCollection_tF2AEF8EA4C85D03632D8B18879E77FE63E3F303F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ValueCollection_tC3F6B800F303A32CEC123C783065413BF0FB4983;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ValueCollection_tA06F65DCFE7AE972D7EE33672E7B9245B037632E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ValueCollection_t3BBB1AF11A96F1E9B06AE4253BBDAD9799F55AB9;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ValueCollection_t1B52A9302ABF769FEE92FA2A15497C7552140FE1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ValueCollection_tDCE3DAB18DE53F385568C7BB3D095A3BFBE3BDB1;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ValueCollection_t62777862270DEB3BCA6303BEDCD30F26CF76BE06;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>[]
struct EntryU5BU5D_t40101AFBBBCFA64B20F400D405717B59804E99BA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>[]
struct EntryU5BU5D_t4EEB7F4FF447721FE61958FBA387394084913511;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>[]
struct EntryU5BU5D_t146ACD28644A2D174E886CB5D7E71BCB807823D3;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>[]
struct EntryU5BU5D_t2E67062A22618541D8D4D8B6117FE059BDAE00EE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>[]
struct EntryU5BU5D_t2CB5BE54B86DF6AE664C386A5E52889278741D05;
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2;
// Unity.Multiplayer.Tools.NetStats.IMetric[]
struct IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver[]
struct IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B;
// Unity.Multiplayer.Tools.NetStats.IResettable[]
struct IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418;
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher
struct IMetricDispatcher_t9BB86AA5BE261D325CEE863A9151EB3E5D5AD96D;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t4716A81723F434E843EBFE819DD7B636CF5634CB;
// Unity.Multiplayer.Tools.NetStats.IResettable
struct IResettable_t361599A90D4B8F551E355B3B8482B8E0478E47E2;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcher
struct MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4;
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t0F3CC897AE1B4E94C833A4DF70AD8F723333016F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t49BA1D35BCF00B395A8DE166E9DA0FB712B3C41E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tB8F05FBD6F395D2022822D71B42F6C5523B56072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricObserver_t4716A81723F434E843EBFE819DD7B636CF5634CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tF260036AADBE5A42B7F91CD4B3718C2FDABA56BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t30EBA9652B196FAAE321FC222C1C24B4A06F6021_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t43B25F355A712257BBF0E9639E750FB11560C040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tA75D8A1CCCED438757E8AFF779867FEE712E24E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tB4240C7C8DB52DC96B5782ECFB81FDB6D65D51F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tDA8FF1BFA5BDDD63DEC28482B6836AC6A9F9DE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_tD0292CBC32000A164B32FF52992C6C3995097A0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResettable_t361599A90D4B8F551E355B3B8482B8E0478E47E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1FA59E7664518C64A43A8148AD769AF8CD3D56CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5D183909D5E1A4297625878EEDEBFDC9FEDC6930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9BD7CA1FD06F9AC72ACB258DD51C516E5073C999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF816EC09227AF63F93D79373C068EE9D9021FB3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF8AC241570335B9FE175A53566ACDF91BE62DAE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_m4C44BCE712C7B591698755225C491E040C66CD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA7E35D951CD81FB9D4BD44E1A2B5828FFD8D1557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9DD17D7B74DACC710BF442CB320E9EE26290E81F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE52F09090D2A9BE32BA8C18980D0EDC3CD38CA78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m24A4D449DE581887F8F2D64D45C0D552B0268B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m4F53CD8CAD47F52F870B2BA1F4C99FA9DB9212CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m5A3E20F75B31DC0A679C63FD466791C211808703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m876A23F22A9C1C3ACE9FC3078BC0989ADC9FA0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_mFB983A7C85644E0EB3101CE49AE98CDEB637CC4D_RuntimeMethod_var;

struct CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF6D7D6DFA2ABD188AA01EB44ECA7319D6210F7DD 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t40101AFBBBCFA64B20F400D405717B59804E99BA* ___entries_1;
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
	KeyCollection_t5E92C190820BC4F78E8D2C5D7909A9EAE314DB74 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t67467EAB5CB8613F45E928011F32AB26C3C85B17 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___entries_1)); }
	inline EntryU5BU5D_t40101AFBBBCFA64B20F400D405717B59804E99BA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t40101AFBBBCFA64B20F400D405717B59804E99BA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t40101AFBBBCFA64B20F400D405717B59804E99BA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___keys_7)); }
	inline KeyCollection_t5E92C190820BC4F78E8D2C5D7909A9EAE314DB74 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5E92C190820BC4F78E8D2C5D7909A9EAE314DB74 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5E92C190820BC4F78E8D2C5D7909A9EAE314DB74 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ___values_8)); }
	inline ValueCollection_t67467EAB5CB8613F45E928011F32AB26C3C85B17 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t67467EAB5CB8613F45E928011F32AB26C3C85B17 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t67467EAB5CB8613F45E928011F32AB26C3C85B17 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4EEB7F4FF447721FE61958FBA387394084913511* ___entries_1;
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
	KeyCollection_t72E2924E56A78734B1D418A8B950F1ACD65A0845 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFA037DF9DD26CE889E93389B65957AC755AD009E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___entries_1)); }
	inline EntryU5BU5D_t4EEB7F4FF447721FE61958FBA387394084913511* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4EEB7F4FF447721FE61958FBA387394084913511** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4EEB7F4FF447721FE61958FBA387394084913511* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___keys_7)); }
	inline KeyCollection_t72E2924E56A78734B1D418A8B950F1ACD65A0845 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t72E2924E56A78734B1D418A8B950F1ACD65A0845 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t72E2924E56A78734B1D418A8B950F1ACD65A0845 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ___values_8)); }
	inline ValueCollection_tFA037DF9DD26CE889E93389B65957AC755AD009E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFA037DF9DD26CE889E93389B65957AC755AD009E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFA037DF9DD26CE889E93389B65957AC755AD009E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t146ACD28644A2D174E886CB5D7E71BCB807823D3* ___entries_1;
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
	KeyCollection_t60451F276BAD1D4BCC8898822D3CEB9307440DBE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC3F6B800F303A32CEC123C783065413BF0FB4983 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___entries_1)); }
	inline EntryU5BU5D_t146ACD28644A2D174E886CB5D7E71BCB807823D3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t146ACD28644A2D174E886CB5D7E71BCB807823D3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t146ACD28644A2D174E886CB5D7E71BCB807823D3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___keys_7)); }
	inline KeyCollection_t60451F276BAD1D4BCC8898822D3CEB9307440DBE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t60451F276BAD1D4BCC8898822D3CEB9307440DBE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t60451F276BAD1D4BCC8898822D3CEB9307440DBE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ___values_8)); }
	inline ValueCollection_tC3F6B800F303A32CEC123C783065413BF0FB4983 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC3F6B800F303A32CEC123C783065413BF0FB4983 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC3F6B800F303A32CEC123C783065413BF0FB4983 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2E67062A22618541D8D4D8B6117FE059BDAE00EE* ___entries_1;
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
	KeyCollection_t73CBC85D28765810143A694FA50131CA75E929B6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3BBB1AF11A96F1E9B06AE4253BBDAD9799F55AB9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___entries_1)); }
	inline EntryU5BU5D_t2E67062A22618541D8D4D8B6117FE059BDAE00EE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2E67062A22618541D8D4D8B6117FE059BDAE00EE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2E67062A22618541D8D4D8B6117FE059BDAE00EE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___keys_7)); }
	inline KeyCollection_t73CBC85D28765810143A694FA50131CA75E929B6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t73CBC85D28765810143A694FA50131CA75E929B6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t73CBC85D28765810143A694FA50131CA75E929B6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ___values_8)); }
	inline ValueCollection_t3BBB1AF11A96F1E9B06AE4253BBDAD9799F55AB9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3BBB1AF11A96F1E9B06AE4253BBDAD9799F55AB9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3BBB1AF11A96F1E9B06AE4253BBDAD9799F55AB9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2CB5BE54B86DF6AE664C386A5E52889278741D05* ___entries_1;
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
	KeyCollection_tE77B410C83B411F3FBC02C448AE6DACD3B660B2F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDCE3DAB18DE53F385568C7BB3D095A3BFBE3BDB1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___entries_1)); }
	inline EntryU5BU5D_t2CB5BE54B86DF6AE664C386A5E52889278741D05* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2CB5BE54B86DF6AE664C386A5E52889278741D05** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2CB5BE54B86DF6AE664C386A5E52889278741D05* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___keys_7)); }
	inline KeyCollection_tE77B410C83B411F3FBC02C448AE6DACD3B660B2F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE77B410C83B411F3FBC02C448AE6DACD3B660B2F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE77B410C83B411F3FBC02C448AE6DACD3B660B2F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ___values_8)); }
	inline ValueCollection_tDCE3DAB18DE53F385568C7BB3D095A3BFBE3BDB1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDCE3DAB18DE53F385568C7BB3D095A3BFBE3BDB1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDCE3DAB18DE53F385568C7BB3D095A3BFBE3BDB1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86, ____items_1)); }
	inline IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D* get__items_1() const { return ____items_1; }
	inline IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86_StaticFields, ____emptyArray_5)); }
	inline IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMetricU5BU5D_t7A1B3A90F5050FBCAFC2F578EA9B9C9284DC6F6D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>
struct List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601, ____items_1)); }
	inline IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B* get__items_1() const { return ____items_1; }
	inline IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601_StaticFields, ____emptyArray_5)); }
	inline IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IMetricObserverU5BU5D_t4D7B1807456B4D91FFAA7429D80299C8B2F9196B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>
struct List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68, ____items_1)); }
	inline IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307* get__items_1() const { return ____items_1; }
	inline IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68_StaticFields, ____emptyArray_5)); }
	inline IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IResettableU5BU5D_tFCC8DA0E6D97949C6592C60EEDC58DA24F4E7307* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>
struct Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3  : public RuntimeObject
{
public:
	// System.String Unity.Multiplayer.Tools.NetStats.Metric`1::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// TValue Unity.Multiplayer.Tools.NetStats.Metric`1::<DefaultValue>k__BackingField
	int64_t ___U3CDefaultValueU3Ek__BackingField_2;
	// System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::<ShouldResetOnDispatch>k__BackingField
	bool ___U3CShouldResetOnDispatchU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3, ___U3CValueU3Ek__BackingField_1)); }
	inline int64_t get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(int64_t value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3, ___U3CDefaultValueU3Ek__BackingField_2)); }
	inline int64_t get_U3CDefaultValueU3Ek__BackingField_2() const { return ___U3CDefaultValueU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CDefaultValueU3Ek__BackingField_2() { return &___U3CDefaultValueU3Ek__BackingField_2; }
	inline void set_U3CDefaultValueU3Ek__BackingField_2(int64_t value)
	{
		___U3CDefaultValueU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CShouldResetOnDispatchU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3, ___U3CShouldResetOnDispatchU3Ek__BackingField_3)); }
	inline bool get_U3CShouldResetOnDispatchU3Ek__BackingField_3() const { return ___U3CShouldResetOnDispatchU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CShouldResetOnDispatchU3Ek__BackingField_3() { return &___U3CShouldResetOnDispatchU3Ek__BackingField_3; }
	inline void set_U3CShouldResetOnDispatchU3Ek__BackingField_3(bool value)
	{
		___U3CShouldResetOnDispatchU3Ek__BackingField_3 = value;
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>
struct ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t8A39AFA704CC16F7A5F54ABDA003D49B7F655001 * ___m_values_1;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3, ___m_values_1)); }
	inline ValueCollection_t8A39AFA704CC16F7A5F54ABDA003D49B7F655001 * get_m_values_1() const { return ___m_values_1; }
	inline ValueCollection_t8A39AFA704CC16F7A5F54ABDA003D49B7F655001 ** get_address_of_m_values_1() { return &___m_values_1; }
	inline void set_m_values_1(ValueCollection_t8A39AFA704CC16F7A5F54ABDA003D49B7F655001 * value)
	{
		___m_values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tF2AEF8EA4C85D03632D8B18879E77FE63E3F303F * ___m_values_1;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3, ___m_values_1)); }
	inline ValueCollection_tF2AEF8EA4C85D03632D8B18879E77FE63E3F303F * get_m_values_1() const { return ___m_values_1; }
	inline ValueCollection_tF2AEF8EA4C85D03632D8B18879E77FE63E3F303F ** get_address_of_m_values_1() { return &___m_values_1; }
	inline void set_m_values_1(ValueCollection_tF2AEF8EA4C85D03632D8B18879E77FE63E3F303F * value)
	{
		___m_values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tA06F65DCFE7AE972D7EE33672E7B9245B037632E * ___m_values_1;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3, ___m_values_1)); }
	inline ValueCollection_tA06F65DCFE7AE972D7EE33672E7B9245B037632E * get_m_values_1() const { return ___m_values_1; }
	inline ValueCollection_tA06F65DCFE7AE972D7EE33672E7B9245B037632E ** get_address_of_m_values_1() { return &___m_values_1; }
	inline void set_m_values_1(ValueCollection_tA06F65DCFE7AE972D7EE33672E7B9245B037632E * value)
	{
		___m_values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1B52A9302ABF769FEE92FA2A15497C7552140FE1 * ___m_values_1;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F, ___m_values_1)); }
	inline ValueCollection_t1B52A9302ABF769FEE92FA2A15497C7552140FE1 * get_m_values_1() const { return ___m_values_1; }
	inline ValueCollection_t1B52A9302ABF769FEE92FA2A15497C7552140FE1 ** get_address_of_m_values_1() { return &___m_values_1; }
	inline void set_m_values_1(ValueCollection_t1B52A9302ABF769FEE92FA2A15497C7552140FE1 * value)
	{
		___m_values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t62777862270DEB3BCA6303BEDCD30F26CF76BE06 * ___m_values_1;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357, ___m_values_1)); }
	inline ValueCollection_t62777862270DEB3BCA6303BEDCD30F26CF76BE06 * get_m_values_1() const { return ___m_values_1; }
	inline ValueCollection_t62777862270DEB3BCA6303BEDCD30F26CF76BE06 ** get_address_of_m_values_1() { return &___m_values_1; }
	inline void set_m_values_1(ValueCollection_t62777862270DEB3BCA6303BEDCD30F26CF76BE06 * value)
	{
		___m_values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// Unity.Multiplayer.Tools.NetStats.MetricDispatcher
struct MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4  : public RuntimeObject
{
public:
	// Unity.Multiplayer.Tools.NetStats.MetricCollection Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Collection
	MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___m_Collection_0;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Resettables
	RuntimeObject* ___m_Resettables_1;
	// System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver> Unity.Multiplayer.Tools.NetStats.MetricDispatcher::m_Observers
	RuntimeObject* ___m_Observers_2;

public:
	inline static int32_t get_offset_of_m_Collection_0() { return static_cast<int32_t>(offsetof(MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4, ___m_Collection_0)); }
	inline MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * get_m_Collection_0() const { return ___m_Collection_0; }
	inline MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 ** get_address_of_m_Collection_0() { return &___m_Collection_0; }
	inline void set_m_Collection_0(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * value)
	{
		___m_Collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resettables_1() { return static_cast<int32_t>(offsetof(MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4, ___m_Resettables_1)); }
	inline RuntimeObject* get_m_Resettables_1() const { return ___m_Resettables_1; }
	inline RuntimeObject** get_address_of_m_Resettables_1() { return &___m_Resettables_1; }
	inline void set_m_Resettables_1(RuntimeObject* value)
	{
		___m_Resettables_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resettables_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_2() { return static_cast<int32_t>(offsetof(MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4, ___m_Observers_2)); }
	inline RuntimeObject* get_m_Observers_2() const { return ___m_Observers_2; }
	inline RuntimeObject** get_address_of_m_Observers_2() { return &___m_Observers_2; }
	inline void set_m_Observers_2(RuntimeObject* value)
	{
		___m_Observers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_2), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder
struct MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Events
	RuntimeObject* ___m_Events_3;
	// System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_4;
	// System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable> Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::m_Resettables
	List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * ___m_Resettables_5;

public:
	inline static int32_t get_offset_of_m_Counters_0() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF, ___m_Counters_0)); }
	inline RuntimeObject* get_m_Counters_0() const { return ___m_Counters_0; }
	inline RuntimeObject** get_address_of_m_Counters_0() { return &___m_Counters_0; }
	inline void set_m_Counters_0(RuntimeObject* value)
	{
		___m_Counters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Counters_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Gauges_1() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF, ___m_Gauges_1)); }
	inline RuntimeObject* get_m_Gauges_1() const { return ___m_Gauges_1; }
	inline RuntimeObject** get_address_of_m_Gauges_1() { return &___m_Gauges_1; }
	inline void set_m_Gauges_1(RuntimeObject* value)
	{
		___m_Gauges_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Gauges_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Timers_2() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF, ___m_Timers_2)); }
	inline RuntimeObject* get_m_Timers_2() const { return ___m_Timers_2; }
	inline RuntimeObject** get_address_of_m_Timers_2() { return &___m_Timers_2; }
	inline void set_m_Timers_2(RuntimeObject* value)
	{
		___m_Timers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Timers_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Events_3() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF, ___m_Events_3)); }
	inline RuntimeObject* get_m_Events_3() const { return ___m_Events_3; }
	inline RuntimeObject** get_address_of_m_Events_3() { return &___m_Events_3; }
	inline void set_m_Events_3(RuntimeObject* value)
	{
		___m_Events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Events_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_PayloadEvents_4() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF, ___m_PayloadEvents_4)); }
	inline RuntimeObject* get_m_PayloadEvents_4() const { return ___m_PayloadEvents_4; }
	inline RuntimeObject** get_address_of_m_PayloadEvents_4() { return &___m_PayloadEvents_4; }
	inline void set_m_PayloadEvents_4(RuntimeObject* value)
	{
		___m_PayloadEvents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PayloadEvents_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resettables_5() { return static_cast<int32_t>(offsetof(MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF, ___m_Resettables_5)); }
	inline List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * get_m_Resettables_5() const { return ___m_Resettables_5; }
	inline List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 ** get_address_of_m_Resettables_5() { return &___m_Resettables_5; }
	inline void set_m_Resettables_5(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * value)
	{
		___m_Resettables_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resettables_5), (void*)value);
	}
};


// Unity.Multiplayer.Tools.NetStats.MetricsCollectionExtensions
struct MetricsCollectionExtensions_t447585E532CBA608FAAB99415E23EAAC3F611FD5  : public RuntimeObject
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


// Unity.Multiplayer.Tools.NetStats.Counter
struct Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418  : public Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.Multiplayer.Tools.NetStats.Counter[]
struct CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * m_Items[1];

public:
	inline Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::.ctor(System.String,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057_gshared (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, String_t* ___name0, int64_t ___defaultValue1, const RuntimeMethod* method);
// TValue Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_gshared_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_Value(TValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_gshared_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_gshared_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mE21BF762C811C966518F0401838D485BB2DFF22E_gshared (ReadOnlyDictionary_2_t6971AA4CC282F5EBC6FFB5DD3ED9175AD20CD377 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);

// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::.ctor(System.String,TValue)
inline void Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057 (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, String_t* ___name0, int64_t ___defaultValue1, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 *, String_t*, int64_t, const RuntimeMethod*))Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057_gshared)(__this, ___name0, ___defaultValue1, method);
}
// TValue Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Value()
inline int64_t Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 *, const RuntimeMethod*))Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_gshared_inline)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::set_Value(TValue)
inline void Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 *, int64_t, const RuntimeMethod*))Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Concat<Unity.Multiplayer.Tools.NetStats.IMetric>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_mD248DD20C01000944006DA903D282009D2524A9E_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Unity.Multiplayer.Tools.NetStats.IMetric>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86 * Enumerable_ToList_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_m4C44BCE712C7B591698755225C491E040C66CD6E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::.ctor()
inline void List_1__ctor_m9DD17D7B74DACC710BF442CB320E9EE26290E81F (List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_mD28DD66B7CAC76807DD221426F10214CA29AEDC0_inline (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.String Unity.Multiplayer.Tools.NetStats.Metric`1<System.Int64>::get_Name()
inline String_t* Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 *, const RuntimeMethod*))Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>::Add(!0)
inline void List_1_Add_mA7E35D951CD81FB9D4BD44E1A2B5828FFD8D1557 (List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_m5A3E20F75B31DC0A679C63FD466791C211808703 (ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mE21BF762C811C966518F0401838D485BB2DFF22E_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_m24A4D449DE581887F8F2D64D45C0D552B0268B8B (ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mE21BF762C811C966518F0401838D485BB2DFF22E_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_m876A23F22A9C1C3ACE9FC3078BC0989ADC9FA0CF (ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mE21BF762C811C966518F0401838D485BB2DFF22E_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_m4F53CD8CAD47F52F870B2BA1F4C99FA9DB9212CA (ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mE21BF762C811C966518F0401838D485BB2DFF22E_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void ReadOnlyDictionary_2__ctor_mFB983A7C85644E0EB3101CE49AE98CDEB637CC4D (ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mE21BF762C811C966518F0401838D485BB2DFF22E_gshared)(__this, ___dictionary0, method);
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m5705BAE6E330A5B2123202ADDDC2B3663DF37EF5 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, RuntimeObject* ___counters0, RuntimeObject* ___gauges1, RuntimeObject* ___timers2, RuntimeObject* ___events3, RuntimeObject* ___payloadEvents4, const RuntimeMethod* method);
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher__ctor_m00AD6FF56893AECA9518B00730AA72C0B5337FF0 (MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 * __this, MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, RuntimeObject* ___resettables1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::.ctor()
inline void Dictionary_2__ctor_mF816EC09227AF63F93D79373C068EE9D9021FB3F (Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::.ctor()
inline void Dictionary_2__ctor_m1FA59E7664518C64A43A8148AD769AF8CD3D56CC (Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::.ctor()
inline void Dictionary_2__ctor_m5D183909D5E1A4297625878EEDEBFDC9FEDC6930 (Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_mF8AC241570335B9FE175A53566ACDF91BE62DAE3 (Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>::.ctor()
inline void Dictionary_2__ctor_m9BD7CA1FD06F9AC72ACB258DD51C516E5073C999 (Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Multiplayer.Tools.NetStats.IResettable>::.ctor()
inline void List_1__ctor_mE52F09090D2A9BE32BA8C18980D0EDC3CD38CA78 (List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
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
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter__ctor_m05B6B99CE9F4213E59741480D72DB5B90C696AF1 (Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * __this, String_t* ___name0, int64_t ___defaultValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(name, defaultValue)
		String_t* L_0 = ___name0;
		int64_t L_1 = ___defaultValue1;
		Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057(__this, L_0, L_1, /*hidden argument*/Metric_1__ctor_mC1420FF8145AD62B3C9D5013EF813DDE226C8057_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Counter_Increment_m495CAFB95A9F6735185F02696E4497289F3A7B09 (Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * __this, int64_t ___increment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value += increment;
		int64_t L_0;
		L_0 = Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_inline(__this, /*hidden argument*/Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_RuntimeMethod_var);
		int64_t L_1 = ___increment0;
		Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_inline(__this, ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_1)), /*hidden argument*/Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_RuntimeMethod_var);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>,System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection__ctor_m5705BAE6E330A5B2123202ADDDC2B3663DF37EF5 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, RuntimeObject* ___counters0, RuntimeObject* ___gauges1, RuntimeObject* ___timers2, RuntimeObject* ___events3, RuntimeObject* ___payloadEvents4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_m4C44BCE712C7B591698755225C491E040C66CD6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t30EBA9652B196FAAE321FC222C1C24B4A06F6021_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t43B25F355A712257BBF0E9639E750FB11560C040_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tA75D8A1CCCED438757E8AFF779867FEE712E24E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tB4240C7C8DB52DC96B5782ECFB81FDB6D65D51F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tDA8FF1BFA5BDDD63DEC28482B6836AC6A9F9DE93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		__this->set_U3CConnectionIdU3Ek__BackingField_6(((int64_t)((int64_t)(-1))));
		// internal MetricCollection(
		//     IReadOnlyDictionary<string, IMetric<long>> counters,
		//     IReadOnlyDictionary<string, IMetric<double>> gauges,
		//     IReadOnlyDictionary<string, IMetric<TimeSpan>> timers,
		//     IReadOnlyDictionary<string, IEventMetric<string>> events,
		//     IReadOnlyDictionary<string, IEventMetric> payloadEvents)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Counters = counters;
		RuntimeObject* L_0 = ___counters0;
		__this->set_m_Counters_0(L_0);
		// m_Gauges = gauges;
		RuntimeObject* L_1 = ___gauges1;
		__this->set_m_Gauges_1(L_1);
		// m_Timers = timers;
		RuntimeObject* L_2 = ___timers2;
		__this->set_m_Timers_2(L_2);
		// m_Events = events;
		RuntimeObject* L_3 = ___events3;
		__this->set_m_Events_3(L_3);
		// m_PayloadEvents = payloadEvents;
		RuntimeObject* L_4 = ___payloadEvents4;
		__this->set_m_PayloadEvents_4(L_4);
		// Metrics = counters.Values
		//     .Concat<IMetric>(gauges.Values)
		//     .Concat(timers.Values)
		//     .Concat(m_Events.Values)
		//     .Concat(m_PayloadEvents.Values)
		//     .ToList();
		RuntimeObject* L_5 = ___counters0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::get_Values() */, IReadOnlyDictionary_2_t43B25F355A712257BBF0E9639E750FB11560C040_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___gauges1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>::get_Values() */, IReadOnlyDictionary_2_tA75D8A1CCCED438757E8AFF779867FEE712E24E2_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9;
		L_9 = Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1(L_6, L_8, /*hidden argument*/Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1_RuntimeMethod_var);
		RuntimeObject* L_10 = ___timers2;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>::get_Values() */, IReadOnlyDictionary_2_tDA8FF1BFA5BDDD63DEC28482B6836AC6A9F9DE93_il2cpp_TypeInfo_var, L_10);
		RuntimeObject* L_12;
		L_12 = Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1(L_9, L_11, /*hidden argument*/Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1_RuntimeMethod_var);
		RuntimeObject* L_13 = __this->get_m_Events_3();
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric`1<System.String>>::get_Values() */, IReadOnlyDictionary_2_tB4240C7C8DB52DC96B5782ECFB81FDB6D65D51F4_il2cpp_TypeInfo_var, L_13);
		RuntimeObject* L_15;
		L_15 = Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1(L_12, L_14, /*hidden argument*/Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1_RuntimeMethod_var);
		RuntimeObject* L_16 = __this->get_m_PayloadEvents_4();
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IEventMetric>::get_Values() */, IReadOnlyDictionary_2_t30EBA9652B196FAAE321FC222C1C24B4A06F6021_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18;
		L_18 = Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1(L_15, L_17, /*hidden argument*/Enumerable_Concat_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_mD742AE32A7A8084A4D412A46851BF50B474A14A1_RuntimeMethod_var);
		List_1_t3B5D1F2F1D667BDA7066E97CE15170FBF1DF4C86 * L_19;
		L_19 = Enumerable_ToList_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_m4C44BCE712C7B591698755225C491E040C66CD6E(L_18, /*hidden argument*/Enumerable_ToList_TisIMetric_t10939B11F4F71BA7B1024B47C59B4E0BAB8CD7F8_m4C44BCE712C7B591698755225C491E040C66CD6E_RuntimeMethod_var);
		__this->set_U3CMetricsU3Ek__BackingField_5(L_19);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_mD28DD66B7CAC76807DD221426F10214CA29AEDC0 (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Unity.Multiplayer.Tools.NetStats.MetricCollection::TryGetCounter(System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetricCollection_TryGetCounter_m689B688768F14B9F093EE28C0E4DC7A8FCC6A40D (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, String_t* ___name0, RuntimeObject** ___counter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t43B25F355A712257BBF0E9639E750FB11560C040_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Counters.TryGetValue(name, out counter);
		RuntimeObject* L_0 = __this->get_m_Counters_0();
		String_t* L_1 = ___name0;
		RuntimeObject** L_2 = ___counter1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::TryGetValue(!0,!1&) */, IReadOnlyDictionary_2_t43B25F355A712257BBF0E9639E750FB11560C040_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject**)L_2);
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
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher__ctor_m00AD6FF56893AECA9518B00730AA72C0B5337FF0 (MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 * __this, MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * ___collection0, RuntimeObject* ___resettables1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9DD17D7B74DACC710BF442CB320E9EE26290E81F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IList<IMetricObserver> m_Observers = new List<IMetricObserver>();
		List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601 * L_0 = (List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601 *)il2cpp_codegen_object_new(List_1_tF5D8C083C595BBEC3BE26914B3865D022E3FB601_il2cpp_TypeInfo_var);
		List_1__ctor_m9DD17D7B74DACC710BF442CB320E9EE26290E81F(L_0, /*hidden argument*/List_1__ctor_m9DD17D7B74DACC710BF442CB320E9EE26290E81F_RuntimeMethod_var);
		__this->set_m_Observers_2(L_0);
		// internal MetricDispatcher(
		//     MetricCollection collection,
		//     IReadOnlyList<IResettable> resettables)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Collection = collection;
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_1 = ___collection0;
		__this->set_m_Collection_0(L_1);
		// m_Resettables = resettables;
		RuntimeObject* L_2 = ___resettables1;
		__this->set_m_Resettables_1(L_2);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_RegisterObserver_m065198EFB1F337925E71C22953B8FBB40F60E9D5 (MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 * __this, RuntimeObject* ___observer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0F3CC897AE1B4E94C833A4DF70AD8F723333016F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Observers.Add(observer);
		RuntimeObject* L_0 = __this->get_m_Observers_2();
		RuntimeObject* L_1 = ___observer0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::Add(!0) */, ICollection_1_t0F3CC897AE1B4E94C833A4DF70AD8F723333016F_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_SetConnectionId_mEC5A31A87D3335EC2BE325B3CF76811F89263E73 (MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 * __this, uint64_t ___connectionId0, const RuntimeMethod* method)
{
	{
		// m_Collection.ConnectionId = connectionId;
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_0 = __this->get_m_Collection_0();
		uint64_t L_1 = ___connectionId0;
		NullCheck(L_0);
		MetricCollection_set_ConnectionId_mD28DD66B7CAC76807DD221426F10214CA29AEDC0_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcher_Dispatch_mC03CAC3DD8FFFF5B8EA475A304E14E3E250D3452 (MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0F3CC897AE1B4E94C833A4DF70AD8F723333016F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tB8F05FBD6F395D2022822D71B42F6C5523B56072_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricObserver_t4716A81723F434E843EBFE819DD7B636CF5634CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tF260036AADBE5A42B7F91CD4B3718C2FDABA56BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_tD0292CBC32000A164B32FF52992C6C3995097A0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResettable_t361599A90D4B8F551E355B3B8482B8E0478E47E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// for (var i = 0; i < m_Observers.Count; i++)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// var snapshotObserver = m_Observers[i];
		RuntimeObject* L_0 = __this->get_m_Observers_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::get_Item(System.Int32) */, IList_1_tB8F05FBD6F395D2022822D71B42F6C5523B56072_il2cpp_TypeInfo_var, L_0, L_1);
		// snapshotObserver.Observe(m_Collection);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_3 = __this->get_m_Collection_0();
		NullCheck(L_2);
		InterfaceActionInvoker1< MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_t4716A81723F434E843EBFE819DD7B636CF5634CB_il2cpp_TypeInfo_var, L_2, L_3);
		// for (var i = 0; i < m_Observers.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001f:
	{
		// for (var i = 0; i < m_Observers.Count; i++)
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = __this->get_m_Observers_2();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.Multiplayer.Tools.NetStats.IMetricObserver>::get_Count() */, ICollection_1_t0F3CC897AE1B4E94C833A4DF70AD8F723333016F_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		V_1 = 0;
		goto IL_0050;
	}

IL_0031:
	{
		// var resettable = m_Resettables[i];
		RuntimeObject* L_8 = __this->get_m_Resettables_1();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>::get_Item(System.Int32) */, IReadOnlyList_1_tD0292CBC32000A164B32FF52992C6C3995097A0C_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		// if (resettable.ShouldResetOnDispatch)
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch() */, IResettable_t361599A90D4B8F551E355B3B8482B8E0478E47E2_il2cpp_TypeInfo_var, L_11);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		// resettable.Reset();
		RuntimeObject* L_13 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset() */, IResettable_t361599A90D4B8F551E355B3B8482B8E0478E47E2_il2cpp_TypeInfo_var, L_13);
	}

IL_004c:
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		// for (var i = 0; i < m_Resettables.Count; i++)
		int32_t L_15 = V_1;
		RuntimeObject* L_16 = __this->get_m_Resettables_1();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Unity.Multiplayer.Tools.NetStats.IResettable>::get_Count() */, IReadOnlyCollection_1_tF260036AADBE5A42B7F91CD4B3718C2FDABA56BD_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0031;
		}
	}
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
// Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF * MetricDispatcherBuilder_WithCounters_m7EEB812FD9D519C10DF60EB421EB1794D56313E2 (MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF * __this, CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2* ___counters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t49BA1D35BCF00B395A8DE166E9DA0FB712B3C41E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA7E35D951CD81FB9D4BD44E1A2B5828FFD8D1557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2* V_0 = NULL;
	int32_t V_1 = 0;
	Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * V_2 = NULL;
	{
		// foreach (var counter in counters)
		CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2* L_0 = ___counters0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_0006:
	{
		// foreach (var counter in counters)
		CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_Counters[counter.Name] = counter;
		RuntimeObject* L_5 = __this->get_m_Counters_0();
		Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_inline(L_6, /*hidden argument*/Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_RuntimeMethod_var);
		Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * L_8 = V_2;
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>::set_Item(!0,!1) */, IDictionary_2_t49BA1D35BCF00B395A8DE166E9DA0FB712B3C41E_il2cpp_TypeInfo_var, L_5, L_7, L_8);
		// m_Resettables.Add(counter);
		List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * L_9 = __this->get_m_Resettables_5();
		Counter_t7CD7F69C102E967C91487D80DB767D6E118D1418 * L_10 = V_2;
		NullCheck(L_9);
		List_1_Add_mA7E35D951CD81FB9D4BD44E1A2B5828FFD8D1557(L_9, L_10, /*hidden argument*/List_1_Add_mA7E35D951CD81FB9D4BD44E1A2B5828FFD8D1557_RuntimeMethod_var);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// foreach (var counter in counters)
		int32_t L_12 = V_1;
		CounterU5BU5D_t7CA286E2AFD7344F57F8FD9A102BC0ABBB8731C2* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		// return this;
		return __this;
	}
}
// Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricDispatcherBuilder_Build_m78D24216C73421EB01192007FA4C0170441515AB (MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m24A4D449DE581887F8F2D64D45C0D552B0268B8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m4F53CD8CAD47F52F870B2BA1F4C99FA9DB9212CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m5A3E20F75B31DC0A679C63FD466791C211808703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m876A23F22A9C1C3ACE9FC3078BC0989ADC9FA0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_mFB983A7C85644E0EB3101CE49AE98CDEB637CC4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new MetricDispatcher(
		//     new MetricCollection(
		//         new ReadOnlyDictionary<string, IMetric<long>>(m_Counters),
		//         new ReadOnlyDictionary<string, IMetric<double>>(m_Gauges),
		//         new ReadOnlyDictionary<string, IMetric<TimeSpan>>(m_Timers),
		//         new ReadOnlyDictionary<string, IEventMetric<string>>(m_Events),
		//         new ReadOnlyDictionary<string, IEventMetric>(m_PayloadEvents)),
		//     m_Resettables);
		RuntimeObject* L_0 = __this->get_m_Counters_0();
		ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3 * L_1 = (ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3 *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t94A610F831AB38CF38485B8290B71FDF0DD0F8B3_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_m5A3E20F75B31DC0A679C63FD466791C211808703(L_1, L_0, /*hidden argument*/ReadOnlyDictionary_2__ctor_m5A3E20F75B31DC0A679C63FD466791C211808703_RuntimeMethod_var);
		RuntimeObject* L_2 = __this->get_m_Gauges_1();
		ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3 * L_3 = (ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3 *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t893B61AD748CCAF66F97AF0155491AEEEE2D16E3_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_m24A4D449DE581887F8F2D64D45C0D552B0268B8B(L_3, L_2, /*hidden argument*/ReadOnlyDictionary_2__ctor_m24A4D449DE581887F8F2D64D45C0D552B0268B8B_RuntimeMethod_var);
		RuntimeObject* L_4 = __this->get_m_Timers_2();
		ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F * L_5 = (ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t237C7E52467228AAF0978447589B7762D04C445F_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_m876A23F22A9C1C3ACE9FC3078BC0989ADC9FA0CF(L_5, L_4, /*hidden argument*/ReadOnlyDictionary_2__ctor_m876A23F22A9C1C3ACE9FC3078BC0989ADC9FA0CF_RuntimeMethod_var);
		RuntimeObject* L_6 = __this->get_m_Events_3();
		ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3 * L_7 = (ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3 *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t5D81F785E5957DBA4BCD197F98FAA5D817D87EA3_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_m4F53CD8CAD47F52F870B2BA1F4C99FA9DB9212CA(L_7, L_6, /*hidden argument*/ReadOnlyDictionary_2__ctor_m4F53CD8CAD47F52F870B2BA1F4C99FA9DB9212CA_RuntimeMethod_var);
		RuntimeObject* L_8 = __this->get_m_PayloadEvents_4();
		ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357 * L_9 = (ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357 *)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tB5D5B30D17BD9C8BE1FFC1238A98C2876D9DA357_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2__ctor_mFB983A7C85644E0EB3101CE49AE98CDEB637CC4D(L_9, L_8, /*hidden argument*/ReadOnlyDictionary_2__ctor_mFB983A7C85644E0EB3101CE49AE98CDEB637CC4D_RuntimeMethod_var);
		MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * L_10 = (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 *)il2cpp_codegen_object_new(MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31_il2cpp_TypeInfo_var);
		MetricCollection__ctor_m5705BAE6E330A5B2123202ADDDC2B3663DF37EF5(L_10, L_1, L_3, L_5, L_7, L_9, /*hidden argument*/NULL);
		List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * L_11 = __this->get_m_Resettables_5();
		MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 * L_12 = (MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4 *)il2cpp_codegen_object_new(MetricDispatcher_t9C0C99009FD651157045CC8FDC0B646EE14BA3B4_il2cpp_TypeInfo_var);
		MetricDispatcher__ctor_m00AD6FF56893AECA9518B00730AA72C0B5337FF0(L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricDispatcherBuilder__ctor_mCEE673251C3BB0B8166275696108E87BEF3C372D (MetricDispatcherBuilder_t871D9FE41148895CBE15C75CC9E1D0C0E2CD5FEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1FA59E7664518C64A43A8148AD769AF8CD3D56CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5D183909D5E1A4297625878EEDEBFDC9FEDC6930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9BD7CA1FD06F9AC72ACB258DD51C516E5073C999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF816EC09227AF63F93D79373C068EE9D9021FB3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF8AC241570335B9FE175A53566ACDF91BE62DAE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE52F09090D2A9BE32BA8C18980D0EDC3CD38CA78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly IDictionary<string, IMetric<long>> m_Counters = new Dictionary<string, IMetric<long>>();
		Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1 * L_0 = (Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1 *)il2cpp_codegen_object_new(Dictionary_2_tE32B0E359678FFE459A99C9DA9E6004613D75AD1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF816EC09227AF63F93D79373C068EE9D9021FB3F(L_0, /*hidden argument*/Dictionary_2__ctor_mF816EC09227AF63F93D79373C068EE9D9021FB3F_RuntimeMethod_var);
		__this->set_m_Counters_0(L_0);
		// readonly IDictionary<string, IMetric<double>> m_Gauges = new Dictionary<string, IMetric<double>>();
		Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA * L_1 = (Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA *)il2cpp_codegen_object_new(Dictionary_2_tC3443F21D42BB3CE6A755527BFA6A4EBB705EFEA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1FA59E7664518C64A43A8148AD769AF8CD3D56CC(L_1, /*hidden argument*/Dictionary_2__ctor_m1FA59E7664518C64A43A8148AD769AF8CD3D56CC_RuntimeMethod_var);
		__this->set_m_Gauges_1(L_1);
		// readonly IDictionary<string, IMetric<TimeSpan>> m_Timers = new Dictionary<string, IMetric<TimeSpan>>();
		Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411 * L_2 = (Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411 *)il2cpp_codegen_object_new(Dictionary_2_tF211BA4ABE702CF46AA7AAC773AA223156784411_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5D183909D5E1A4297625878EEDEBFDC9FEDC6930(L_2, /*hidden argument*/Dictionary_2__ctor_m5D183909D5E1A4297625878EEDEBFDC9FEDC6930_RuntimeMethod_var);
		__this->set_m_Timers_2(L_2);
		// readonly IDictionary<string, IEventMetric<string>> m_Events = new Dictionary<string, IEventMetric<string>>();
		Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5 * L_3 = (Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5 *)il2cpp_codegen_object_new(Dictionary_2_t24F7364EB4A2BDE4127D773875A2D6376B22C2C5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF8AC241570335B9FE175A53566ACDF91BE62DAE3(L_3, /*hidden argument*/Dictionary_2__ctor_mF8AC241570335B9FE175A53566ACDF91BE62DAE3_RuntimeMethod_var);
		__this->set_m_Events_3(L_3);
		// readonly IDictionary<string, IEventMetric> m_PayloadEvents = new Dictionary<string, IEventMetric>();
		Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3 * L_4 = (Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3 *)il2cpp_codegen_object_new(Dictionary_2_tE3D2BD2934C286C6591B52C0A16C891E7E787EA3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9BD7CA1FD06F9AC72ACB258DD51C516E5073C999(L_4, /*hidden argument*/Dictionary_2__ctor_m9BD7CA1FD06F9AC72ACB258DD51C516E5073C999_RuntimeMethod_var);
		__this->set_m_PayloadEvents_4(L_4);
		// readonly List<IResettable> m_Resettables = new List<IResettable>();
		List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 * L_5 = (List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68 *)il2cpp_codegen_object_new(List_1_t001A12ACDC36B31A819DA685F3FA901FA87ADB68_il2cpp_TypeInfo_var);
		List_1__ctor_mE52F09090D2A9BE32BA8C18980D0EDC3CD38CA78(L_5, /*hidden argument*/List_1__ctor_mE52F09090D2A9BE32BA8C18980D0EDC3CD38CA78_RuntimeMethod_var);
		__this->set_m_Resettables_5(L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetricCollection_set_ConnectionId_mD28DD66B7CAC76807DD221426F10214CA29AEDC0_inline (MetricCollection_t2E1EBC7464320732E0D7B2AD8BF87700C296CE31 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// public ulong ConnectionId { get; set; } = ulong.MaxValue;
		uint64_t L_0 = ___value0;
		__this->set_U3CConnectionIdU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Metric_1_get_Value_mE86910BE327DCF03FB4CD9DDE81D23AA14E28A74_gshared_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, const RuntimeMethod* method)
{
	{
		// public TValue Value { get; protected set; }
		int64_t L_0 = (int64_t)__this->get_U3CValueU3Ek__BackingField_1();
		return (int64_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Metric_1_set_Value_m0549A885AB7024EFB5ED0795DE8509FA8AD16BE9_gshared_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// public TValue Value { get; protected set; }
		int64_t L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Metric_1_get_Name_mD51DEC8497996182DC4905A6AEABA76F97E4C632_gshared_inline (Metric_1_tBD5B4BBCF88A32F3AC79804E1732AA2727A5D8D3 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; }
		String_t* L_0 = (String_t*)__this->get_U3CNameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
