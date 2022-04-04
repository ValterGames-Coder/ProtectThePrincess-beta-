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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.SocialPlatforms.Impl.Score>
struct IEnumerable_1_t6FA2175D27C4417DBAAAAC92F9986E45F4678773;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337;
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.SocialPlatforms.Impl.Leaderboard[]
struct LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_tC996640E43BF8EF5AA958F3BD43113D5A732B99B;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27;
// UnityEngine.SocialPlatforms.IScore
struct IScore_tE3BDDCDC8FB888BD6AF13EE00EF6AE225DDF2B3B;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tBE239C94BA41C72261407718E0EA66072945F54C;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D;
// UnityEngine.SocialPlatforms.Local
struct Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfile_tBE239C94BA41C72261407718E0EA66072945F54C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral410946CD131353B68F194902EF06C27382525682;
IL2CPP_EXTERN_C String_t* _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral63B825085580CF7F50B31C8CDA66E3F2A35C0676;
IL2CPP_EXTERN_C String_t* _stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral845EF7CD27CFDE3879715C752B9AC572A7344CA2;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteralA044D2F85FD5FF824C3333F12B39198EBA6BFA6E;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241;
IL2CPP_EXTERN_C String_t* _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE683D1BF66632478E016CECBA9DE67A6523204E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6F43DC6496E1A16C8D71A400F2345FDBACF2D994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA235F5FEB0F3FB4ADA4BF5F8C11DFEC3E514C53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m73D0B18595A79C3E0B8A377E182DB4B841001A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5E430FCD3EBEAAB9B20B83544D5A2D6D58A7AA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m978051D2F62F4077F74494C7EB0D273C45151C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m08EB19BF948771D0C4E805EB4556E734972548CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m09656E4E518CDDF0AB847DD67064784A0B6CA430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m77C3532492EDC96FEF202F0F7AA698D41D01C075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC2DAC65911DFE14C3276E6778D7338C6F5FCB85_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A;
struct IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E;
struct ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFAA9E074DCFFF466D21223A3D56A3524B4C3F69C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C, ____items_1)); }
	inline AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* get__items_1() const { return ____items_1; }
	inline AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C_StaticFields, ____emptyArray_5)); }
	inline AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AchievementU5BU5D_tCBFC160A3B2C7C045CB620E9C7234269217245F8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4, ____items_1)); }
	inline AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* get__items_1() const { return ____items_1; }
	inline AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4_StaticFields, ____emptyArray_5)); }
	inline AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AchievementDescriptionU5BU5D_t954BACD501480D95EDB68166CB1F6DD9F07EB8D2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99, ____items_1)); }
	inline LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900* get__items_1() const { return ____items_1; }
	inline LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99_StaticFields, ____emptyArray_5)); }
	inline LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LeaderboardU5BU5D_t35987A1348DD338059EF122BF63D2D6790D50900* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0, ____items_1)); }
	inline ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* get__items_1() const { return ____items_1; }
	inline ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0_StaticFields, ____emptyArray_5)); }
	inline ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337, ____items_1)); }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* get__items_1() const { return ____items_1; }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337_StaticFields, ____emptyArray_5)); }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t43EB1469B011ADDEF59B6CB30044B878770D3565  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t6C56CB1D0F1F374C45EC0F65D5F1192C170B6506  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SocialPlatforms.ActivePlatform
struct ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08  : public RuntimeObject
{
public:

public:
};

struct ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::_active
	RuntimeObject* ____active_0;

public:
	inline static int32_t get_offset_of__active_0() { return static_cast<int32_t>(offsetof(ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_StaticFields, ____active_0)); }
	inline RuntimeObject* get__active_0() const { return ____active_0; }
	inline RuntimeObject** get_address_of__active_0() { return &____active_0; }
	inline void set__active_0(RuntimeObject* value)
	{
		____active_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____active_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.SocialPlatforms.Local
struct Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Friends
	List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * ___m_Friends_1;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Users
	List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * ___m_Users_2;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription> UnityEngine.SocialPlatforms.Local::m_AchievementDescriptions
	List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 * ___m_AchievementDescriptions_3;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement> UnityEngine.SocialPlatforms.Local::m_Achievements
	List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C * ___m_Achievements_4;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard> UnityEngine.SocialPlatforms.Local::m_Leaderboards
	List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * ___m_Leaderboards_5;

public:
	inline static int32_t get_offset_of_m_Friends_1() { return static_cast<int32_t>(offsetof(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE, ___m_Friends_1)); }
	inline List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * get_m_Friends_1() const { return ___m_Friends_1; }
	inline List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 ** get_address_of_m_Friends_1() { return &___m_Friends_1; }
	inline void set_m_Friends_1(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * value)
	{
		___m_Friends_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Friends_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Users_2() { return static_cast<int32_t>(offsetof(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE, ___m_Users_2)); }
	inline List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * get_m_Users_2() const { return ___m_Users_2; }
	inline List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 ** get_address_of_m_Users_2() { return &___m_Users_2; }
	inline void set_m_Users_2(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * value)
	{
		___m_Users_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Users_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AchievementDescriptions_3() { return static_cast<int32_t>(offsetof(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE, ___m_AchievementDescriptions_3)); }
	inline List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 * get_m_AchievementDescriptions_3() const { return ___m_AchievementDescriptions_3; }
	inline List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 ** get_address_of_m_AchievementDescriptions_3() { return &___m_AchievementDescriptions_3; }
	inline void set_m_AchievementDescriptions_3(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 * value)
	{
		___m_AchievementDescriptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AchievementDescriptions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Achievements_4() { return static_cast<int32_t>(offsetof(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE, ___m_Achievements_4)); }
	inline List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C * get_m_Achievements_4() const { return ___m_Achievements_4; }
	inline List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C ** get_address_of_m_Achievements_4() { return &___m_Achievements_4; }
	inline void set_m_Achievements_4(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C * value)
	{
		___m_Achievements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Achievements_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Leaderboards_5() { return static_cast<int32_t>(offsetof(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE, ___m_Leaderboards_5)); }
	inline List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * get_m_Leaderboards_5() const { return ___m_Leaderboards_5; }
	inline List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 ** get_address_of_m_Leaderboards_5() { return &___m_Leaderboards_5; }
	inline void set_m_Leaderboards_5(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * value)
	{
		___m_Leaderboards_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Leaderboards_5), (void*)value);
	}
};

struct Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.Local::m_LocalUser
	LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * ___m_LocalUser_0;

public:
	inline static int32_t get_offset_of_m_LocalUser_0() { return static_cast<int32_t>(offsetof(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_StaticFields, ___m_LocalUser_0)); }
	inline LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * get_m_LocalUser_0() const { return ___m_LocalUser_0; }
	inline LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D ** get_address_of_m_LocalUser_0() { return &___m_LocalUser_0; }
	inline void set_m_LocalUser_0(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * value)
	{
		___m_LocalUser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocalUser_0), (void*)value);
	}
};


// UnityEngine.Social
struct Social_t190E57B06E9148270A54C79CD20B0BDA297BE05F  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656, ___list_0)); }
	inline List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * get_list_0() const { return ___list_0; }
	inline List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656, ___current_3)); }
	inline Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * get_current_3() const { return ___current_3; }
	inline Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// UnityEngine.SocialPlatforms.Range
struct Range_t70C133E51417BC822E878050C90A577A69B671DC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t70C133E51417BC822E878050C90A577A69B671DC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
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

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_Date_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FormattedValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserID_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleaderboardIDU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t0FDB33C00FF0784F8194FEF48B2BD78C0F9A7759, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserScope
struct UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t7EB5D79B9892B749665A462B4832F78C3F57A4C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserState
struct UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D  : public RuntimeObject
{
public:
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___m_Scores_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_1;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_2;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t70C133E51417BC822E878050C90A577A69B671DC  ___U3CrangeU3Ek__BackingField_3;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Scores_0() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___m_Scores_0)); }
	inline IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* get_m_Scores_0() const { return ___m_Scores_0; }
	inline IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A** get_address_of_m_Scores_0() { return &___m_Scores_0; }
	inline void set_m_Scores_0(IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* value)
	{
		___m_Scores_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CidU3Ek__BackingField_1)); }
	inline String_t* get_U3CidU3Ek__BackingField_1() const { return ___U3CidU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_1() { return &___U3CidU3Ek__BackingField_1; }
	inline void set_U3CidU3Ek__BackingField_1(String_t* value)
	{
		___U3CidU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CuserScopeU3Ek__BackingField_2)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_2() const { return ___U3CuserScopeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_2() { return &___U3CuserScopeU3Ek__BackingField_2; }
	inline void set_U3CuserScopeU3Ek__BackingField_2(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CrangeU3Ek__BackingField_3)); }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC  get_U3CrangeU3Ek__BackingField_3() const { return ___U3CrangeU3Ek__BackingField_3; }
	inline Range_t70C133E51417BC822E878050C90A577A69B671DC * get_address_of_U3CrangeU3Ek__BackingField_3() { return &___U3CrangeU3Ek__BackingField_3; }
	inline void set_U3CrangeU3Ek__BackingField_3(Range_t70C133E51417BC822E878050C90A577A69B671DC  value)
	{
		___U3CrangeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D, ___U3CtimeScopeU3Ek__BackingField_4)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_4() const { return ___U3CtimeScopeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_4() { return &___U3CtimeScopeU3Ek__BackingField_4; }
	inline void set_U3CtimeScopeU3Ek__BackingField_4(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_4 = value;
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

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_legacyID
	String_t* ___m_legacyID_2;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_3;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_4;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Image_5;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UserName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ID_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_legacyID_2() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_legacyID_2)); }
	inline String_t* get_m_legacyID_2() const { return ___m_legacyID_2; }
	inline String_t** get_address_of_m_legacyID_2() { return &___m_legacyID_2; }
	inline void set_m_legacyID_2(String_t* value)
	{
		___m_legacyID_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_legacyID_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsFriend_3() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_IsFriend_3)); }
	inline bool get_m_IsFriend_3() const { return ___m_IsFriend_3; }
	inline bool* get_address_of_m_IsFriend_3() { return &___m_IsFriend_3; }
	inline void set_m_IsFriend_3(bool value)
	{
		___m_IsFriend_3 = value;
	}

	inline static int32_t get_offset_of_m_State_4() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_State_4)); }
	inline int32_t get_m_State_4() const { return ___m_State_4; }
	inline int32_t* get_address_of_m_State_4() { return &___m_State_4; }
	inline void set_m_State_4(int32_t value)
	{
		___m_State_4 = value;
	}

	inline static int32_t get_offset_of_m_Image_5() { return static_cast<int32_t>(offsetof(UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537, ___m_Image_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Image_5() const { return ___m_Image_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Image_5() { return &___m_Image_5; }
	inline void set_m_Image_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Image_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_5), (void*)value);
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D  : public UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* ___m_Friends_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_7;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_8;

public:
	inline static int32_t get_offset_of_m_Friends_6() { return static_cast<int32_t>(offsetof(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D, ___m_Friends_6)); }
	inline IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* get_m_Friends_6() const { return ___m_Friends_6; }
	inline IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E** get_address_of_m_Friends_6() { return &___m_Friends_6; }
	inline void set_m_Friends_6(IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* value)
	{
		___m_Friends_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Friends_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Authenticated_7() { return static_cast<int32_t>(offsetof(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D, ___m_Authenticated_7)); }
	inline bool get_m_Authenticated_7() const { return ___m_Authenticated_7; }
	inline bool* get_address_of_m_Authenticated_7() { return &___m_Authenticated_7; }
	inline void set_m_Authenticated_7(bool value)
	{
		___m_Authenticated_7 = value;
	}

	inline static int32_t get_offset_of_m_Underage_8() { return static_cast<int32_t>(offsetof(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D, ___m_Underage_8)); }
	inline bool get_m_Underage_8() const { return ___m_Underage_8; }
	inline bool* get_address_of_m_Underage_8() { return &___m_Underage_8; }
	inline void set_m_Underage_8(bool value)
	{
		___m_Underage_8 = value;
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * m_Items[1];

public:
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * m_Items[1];

public:
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_mA92EB9D7D4AD4D2009750EDA6DEA17C304D4480E (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__ctor_mFD403BE76E647B8E7261B5C3479F5E7673CB9F05 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_m5FB1343B475512D548FE04A7C2BC3DCCAF694AA9 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Local::VerifyUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_VerifyUser_mCDE924381D08F6A3CF15EE8A5EB2EEAED43159D1 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::GetEnumerator()
inline Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656  List_1_GetEnumerator_m5E430FCD3EBEAAB9B20B83544D5A2D6D58A7AA81 (List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656  (*) (List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>::get_Current()
inline Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * Enumerator_get_Current_mAA235F5FEB0F3FB4ADA4BF5F8C11DFEC3E514C53_inline (Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 * __this, const RuntimeMethod* method)
{
	return ((  Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * (*) (Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::get_scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* Leaderboard_get_scores_m11FC708301EB87BDCF7ADC6EB0CBE0187499DD2D (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mDC2DAC65911DFE14C3276E6778D7338C6F5FCB85 (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m28A33DACA9EA63D30308B52B6F48D68D27484FF5 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::Add(!0)
inline void List_1_Add_m73D0B18595A79C3E0B8A377E182DB4B841001A07 (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * __this, Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 *, Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::ToArray()
inline ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* List_1_ToArray_m978051D2F62F4077F74494C7EB0D273C45151C15 (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * __this, const RuntimeMethod* method)
{
	return ((  ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* (*) (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m2DB8C9FB943AD849B23FCEB56D76FAE4E11C2084 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___scores0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>::MoveNext()
inline bool Enumerator_MoveNext_m6F43DC6496E1A16C8D71A400F2345FDBACF2D994 (Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Leaderboard>::Dispose()
inline void Enumerator_Dispose_mE683D1BF66632478E016CECBA9DE67A6523204E4 (Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::get_loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_get_loading_m7E20F3B94746139EEAD198C212B546ABA62B8947 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::.ctor()
inline void List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5 (List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::.ctor()
inline void List_1__ctor_m77C3532492EDC96FEF202F0F7AA698D41D01C075 (List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::.ctor()
inline void List_1__ctor_m08EB19BF948771D0C4E805EB4556E734972548CD (List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::.ctor()
inline void List_1__ctor_m09656E4E518CDDF0AB847DD67064784A0B6CA430 (List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.ActivePlatform::set_Instance(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivePlatform_set_Instance_m8EDD4EF14772DF9002481FC7E9302E6EA8866F2E (RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m74A08BB58636C0AC5934CAB46856765A271F842D (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mB127337E5455C94299C39FB66C2965FF3421142E (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m7ACC8963AD01FB384D215AF8C215DD93CB5322EA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF93F969F5923A0A3528923E5A452138D00D4E248 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method);
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
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_m5FB1343B475512D548FE04A7C2BC3DCCAF694AA9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var))->get__active_0();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ActivePlatform_SelectSocialPlatform_mA92EB9D7D4AD4D2009750EDA6DEA17C304D4480E(/*hidden argument*/NULL);
		((ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var))->set__active_0(L_2);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ((ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var))->get__active_0();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.ActivePlatform::set_Instance(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivePlatform_set_Instance_m8EDD4EF14772DF9002481FC7E9302E6EA8866F2E (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		((ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t827D4935C03048855D838445AD80543779EA6C08_il2cpp_TypeInfo_var))->set__active_0(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_mA92EB9D7D4AD4D2009750EDA6DEA17C304D4480E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * L_0 = (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE *)il2cpp_codegen_object_new(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		Local__ctor_mFD403BE76E647B8E7261B5C3479F5E7673CB9F05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
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
// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::get_loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Leaderboard_get_loading_m7E20F3B94746139EEAD198C212B546ABA62B8947 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0;
		L_0 = ActivePlatform_get_Instance_m5FB1343B475512D548FE04A7C2BC3DCCAF694AA9(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ISocialPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard) */, ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var, L_0, __this);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m2DB8C9FB943AD849B23FCEB56D76FAE4E11C2084 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_0 = ___scores0;
		__this->set_m_Scores_0(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_1();
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m8304E736582482D0E5705C109D95F0CEDF2EE54C (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_2();
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_t70C133E51417BC822E878050C90A577A69B671DC  Leaderboard_get_range_mB9C6C91869423F791E017B71FCDB17A354585519 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		Range_t70C133E51417BC822E878050C90A577A69B671DC  L_0 = __this->get_U3CrangeU3Ek__BackingField_3();
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mE1F4CBEBE4B2E1E6BD245E3BE518680F13BBF276 (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_4();
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::get_scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* Leaderboard_get_scores_m11FC708301EB87BDCF7ADC6EB0CBE0187499DD2D (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* V_0 = NULL;
	{
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_0 = __this->get_m_Scores_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_1 = V_0;
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
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m28A33DACA9EA63D30308B52B6F48D68D27484FF5 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_0 = ((Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_StaticFields*)il2cpp_codegen_static_fields_for(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var))->get_m_LocalUser_0();
		V_0 = (bool)((((RuntimeObject*)(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_2 = (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D *)il2cpp_codegen_object_new(LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D_il2cpp_TypeInfo_var);
		LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		((Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_StaticFields*)il2cpp_codegen_static_fields_for(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var))->set_m_LocalUser_0(L_2);
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * L_3 = ((Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_StaticFields*)il2cpp_codegen_static_fields_for(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var))->get_m_LocalUser_0();
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_ReportScore_m90CAB1AF5068A4E89BB48F3B8188C3F40C4E40AF (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, int64_t ___score0, String_t* ___board1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE683D1BF66632478E016CECBA9DE67A6523204E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6F43DC6496E1A16C8D71A400F2345FDBACF2D994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAA235F5FEB0F3FB4ADA4BF5F8C11DFEC3E514C53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserProfile_tBE239C94BA41C72261407718E0EA66072945F54C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m73D0B18595A79C3E0B8A377E182DB4B841001A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5E430FCD3EBEAAB9B20B83544D5A2D6D58A7AA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m978051D2F62F4077F74494C7EB0D273C45151C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC2DAC65911DFE14C3276E6778D7338C6F5FCB85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845EF7CD27CFDE3879715C752B9AC572A7344CA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA044D2F85FD5FF824C3333F12B39198EBA6BFA6E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * V_2 = NULL;
	bool V_3 = false;
	List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * V_4 = NULL;
	IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		bool L_0;
		L_0 = Local_VerifyUser_mCDE924381D08F6A3CF15EE8A5EB2EEAED43159D1(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00e3;
	}

IL_0013:
	{
		List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * L_2 = __this->get_m_Leaderboards_5();
		NullCheck(L_2);
		Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656  L_3;
		L_3 = List_1_GetEnumerator_m5E430FCD3EBEAAB9B20B83544D5A2D6D58A7AA81(L_2, /*hidden argument*/List_1_GetEnumerator_m5E430FCD3EBEAAB9B20B83544D5A2D6D58A7AA81_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a9;
		}

IL_0025:
		{
			Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_4;
			L_4 = Enumerator_get_Current_mAA235F5FEB0F3FB4ADA4BF5F8C11DFEC3E514C53_inline((Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mAA235F5FEB0F3FB4ADA4BF5F8C11DFEC3E514C53_RuntimeMethod_var);
			V_2 = L_4;
			Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_5 = V_2;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6_inline(L_5, /*hidden argument*/NULL);
			String_t* L_7 = ___board1;
			bool L_8;
			L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_00a8;
			}
		}

IL_003e:
		{
			Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_10 = V_2;
			NullCheck(L_10);
			IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_11;
			L_11 = Leaderboard_get_scores_m11FC708301EB87BDCF7ADC6EB0CBE0187499DD2D(L_10, /*hidden argument*/NULL);
			List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * L_12 = (List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 *)il2cpp_codegen_object_new(List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0_il2cpp_TypeInfo_var);
			List_1__ctor_mDC2DAC65911DFE14C3276E6778D7338C6F5FCB85(L_12, (RuntimeObject*)(RuntimeObject*)((ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127*)Castclass((RuntimeObject*)L_11, ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127_il2cpp_TypeInfo_var)), /*hidden argument*/List_1__ctor_mDC2DAC65911DFE14C3276E6778D7338C6F5FCB85_RuntimeMethod_var);
			V_4 = L_12;
			List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * L_13 = V_4;
			String_t* L_14 = ___board1;
			int64_t L_15 = ___score0;
			RuntimeObject* L_16;
			L_16 = Local_get_localUser_m28A33DACA9EA63D30308B52B6F48D68D27484FF5(__this, /*hidden argument*/NULL);
			NullCheck(L_16);
			String_t* L_17;
			L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_tBE239C94BA41C72261407718E0EA66072945F54C_il2cpp_TypeInfo_var, L_16);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_18;
			L_18 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
			String_t* L_19;
			L_19 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&___score0), /*hidden argument*/NULL);
			String_t* L_20;
			L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_19, _stringLiteralA044D2F85FD5FF824C3333F12B39198EBA6BFA6E, /*hidden argument*/NULL);
			Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * L_21 = (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 *)il2cpp_codegen_object_new(Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119_il2cpp_TypeInfo_var);
			Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3(L_21, L_14, L_15, L_17, L_18, L_20, 0, /*hidden argument*/NULL);
			NullCheck(L_13);
			List_1_Add_m73D0B18595A79C3E0B8A377E182DB4B841001A07(L_13, L_21, /*hidden argument*/List_1_Add_m73D0B18595A79C3E0B8A377E182DB4B841001A07_RuntimeMethod_var);
			Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * L_22 = V_2;
			List_1_tF018209A343DC5BFDC02B77C7655559E8ABA10B0 * L_23 = V_4;
			NullCheck(L_23);
			ScoreU5BU5D_t9262DBDF2A24DE1477F0AC5F217933ABDD6E3127* L_24;
			L_24 = List_1_ToArray_m978051D2F62F4077F74494C7EB0D273C45151C15(L_23, /*hidden argument*/List_1_ToArray_m978051D2F62F4077F74494C7EB0D273C45151C15_RuntimeMethod_var);
			V_5 = (IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A*)L_24;
			IScoreU5BU5D_t9FEEC91A3D90CD5770DA4EFB8DFCF5340A279C5A* L_25 = V_5;
			NullCheck(L_22);
			Leaderboard_SetScores_m2DB8C9FB943AD849B23FCEB56D76FAE4E11C2084(L_22, L_25, /*hidden argument*/NULL);
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_26 = ___callback2;
			V_6 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_26) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_27 = V_6;
			if (!L_27)
			{
				goto IL_00a6;
			}
		}

IL_009e:
		{
			Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_28 = ___callback2;
			NullCheck(L_28);
			Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_28, (bool)1, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xE3, FINALLY_00b7);
		}

IL_00a8:
		{
		}

IL_00a9:
		{
			bool L_29;
			L_29 = Enumerator_MoveNext_m6F43DC6496E1A16C8D71A400F2345FDBACF2D994((Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m6F43DC6496E1A16C8D71A400F2345FDBACF2D994_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_0025;
			}
		}

IL_00b5:
		{
			IL2CPP_LEAVE(0xC6, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE683D1BF66632478E016CECBA9DE67A6523204E4((Enumerator_tB8EEF98F6BBE98145D832FBC2A01965D20640656 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mE683D1BF66632478E016CECBA9DE67A6523204E4_RuntimeMethod_var);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE3, IL_00e3)
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
	}

IL_00c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral845EF7CD27CFDE3879715C752B9AC572A7344CA2, /*hidden argument*/NULL);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_30 = ___callback2;
		V_7 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_30) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_32 = ___callback2;
		NullCheck(L_32);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_32, (bool)0, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_00e3:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Local::UnityEngine.SocialPlatforms.ISocialPlatform.GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_UnityEngine_SocialPlatforms_ISocialPlatform_GetLoading_m7F5147EC7D59ED9D3445A3FDF30D086CF0EDF5D5 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = Local_VerifyUser_mCDE924381D08F6A3CF15EE8A5EB2EEAED43159D1(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0020;
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___board0;
		NullCheck(((Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)CastclassClass((RuntimeObject*)L_2, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var)));
		bool L_3;
		L_3 = Leaderboard_get_loading_m7E20F3B94746139EEAD198C212B546ABA62B8947(((Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D *)CastclassClass((RuntimeObject*)L_2, Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_ShowLeaderboardUI_m0AD9E483514F7525F60CC444AA76FF75311FBC10 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63B825085580CF7F50B31C8CDA66E3F2A35C0676);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral63B825085580CF7F50B31C8CDA66E3F2A35C0676, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Local::VerifyUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_VerifyUser_mCDE924381D08F6A3CF15EE8A5EB2EEAED43159D1 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = Local_get_localUser_m28A33DACA9EA63D30308B52B6F48D68D27484FF5(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t835F1CCDE2ED60F6D514522949B6402B7D871F27_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_0023:
	{
		V_1 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__ctor_mFD403BE76E647B8E7261B5C3479F5E7673CB9F05 (Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m08EB19BF948771D0C4E805EB4556E734972548CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m09656E4E518CDDF0AB847DD67064784A0B6CA430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m77C3532492EDC96FEF202F0F7AA698D41D01C075_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * L_0 = (List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 *)il2cpp_codegen_object_new(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337_il2cpp_TypeInfo_var);
		List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5(L_0, /*hidden argument*/List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5_RuntimeMethod_var);
		__this->set_m_Friends_1(L_0);
		List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 * L_1 = (List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337 *)il2cpp_codegen_object_new(List_1_tB7018744A54D29D3B0B91BA27EA91214F2BA6337_il2cpp_TypeInfo_var);
		List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5(L_1, /*hidden argument*/List_1__ctor_m520AFF824A81389D64CE94D8C15FE4794BA815B5_RuntimeMethod_var);
		__this->set_m_Users_2(L_1);
		List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 * L_2 = (List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4 *)il2cpp_codegen_object_new(List_1_tC5D2AD040DF9C9E9D24F033FF8593E6B2E2C56C4_il2cpp_TypeInfo_var);
		List_1__ctor_m77C3532492EDC96FEF202F0F7AA698D41D01C075(L_2, /*hidden argument*/List_1__ctor_m77C3532492EDC96FEF202F0F7AA698D41D01C075_RuntimeMethod_var);
		__this->set_m_AchievementDescriptions_3(L_2);
		List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C * L_3 = (List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C *)il2cpp_codegen_object_new(List_1_t99975D9478952C4DFC78FB5A51E954A6EE7B942C_il2cpp_TypeInfo_var);
		List_1__ctor_m08EB19BF948771D0C4E805EB4556E734972548CD(L_3, /*hidden argument*/List_1__ctor_m08EB19BF948771D0C4E805EB4556E734972548CD_RuntimeMethod_var);
		__this->set_m_Achievements_4(L_3);
		List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 * L_4 = (List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99 *)il2cpp_codegen_object_new(List_1_tEF76E8F4BFFFD60F27F15BB025A8BA3A83124C99_il2cpp_TypeInfo_var);
		List_1__ctor_m09656E4E518CDDF0AB847DD67064784A0B6CA430(L_4, /*hidden argument*/List_1__ctor_m09656E4E518CDDF0AB847DD67064784A0B6CA430_RuntimeMethod_var);
		__this->set_m_Leaderboards_5(L_4);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__cctor_m196557F27F297DECA3AA9A99822342CB2B13AB86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_StaticFields*)il2cpp_codegen_static_fields_for(Local_tC01F8D60BCDBAE27341421C85B095483AD1FE9BE_il2cpp_TypeInfo_var))->set_m_LocalUser_0((LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D *)NULL);
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
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_mE1D89C27BD5A6DAE982610A87A472E736644605A (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* V_0 = NULL;
	{
		UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA(__this, /*hidden argument*/NULL);
		UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769* L_0 = (UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769*)SZArrayNew(UserProfileU5BU5D_tAED4B41D0866F8A4C6D403C2074ACEC812A78769_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E*)L_0;
		IUserProfileU5BU5D_t4B36B0CF06DE6A00F5D6D0A015DC3E99B02FC65E* L_1 = V_0;
		__this->set_m_Friends_6(L_1);
		__this->set_m_Authenticated_7((bool)0);
		__this->set_m_Underage_8((bool)0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalUser_get_authenticated_m7D219E0639A779F4527590E43E66F31C2A482BD1 (LocalUser_t1719BEA57FDD71F6C7B280049E94071CD22D985D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Authenticated_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m94026C33B1E9EE0F31614511DB8F512E8A7A4FE3 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65_inline(__this, L_0, /*hidden argument*/NULL);
		int64_t L_1 = ___value1;
		Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___userID2;
		__this->set_m_UserID_2(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = ___date3;
		__this->set_m_Date_0(L_3);
		String_t* L_4 = ___formattedValue4;
		__this->set_m_FormattedValue_1(L_4);
		int32_t L_5 = ___rank5;
		__this->set_m_Rank_3(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_ToString_mBE1B8E8846C633AAA58A0680C888F21915454FC4 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410946CD131353B68F194902EF06C27382525682);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral410946CD131353B68F194902EF06C27382525682);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral410946CD131353B68F194902EF06C27382525682);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		int32_t* L_3 = __this->get_address_of_m_Rank_3();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		int64_t L_7;
		L_7 = Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		String_t* L_11;
		L_11 = Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		String_t* L_14 = __this->get_m_UserID_2();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_13;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_17 = __this->get_address_of_m_Date_0();
		String_t* L_18;
		L_18 = DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		V_1 = L_19;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4 (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
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
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m74A08BB58636C0AC5934CAB46856765A271F842D (const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ActivePlatform_get_Instance_m5FB1343B475512D548FE04A7C2BC3DCCAF694AA9(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Social::set_Active(UnityEngine.SocialPlatforms.ISocialPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_set_Active_m390E0A36A42F10746E992BCD8E6C26DCA53568BE (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		ActivePlatform_set_Instance_m8EDD4EF14772DF9002481FC7E9302E6EA8866F2E(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportScore_m9D47693DE21BDF21D8933E2B039A96D7E579EE13 (int64_t ___score0, String_t* ___board1, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m74A08BB58636C0AC5934CAB46856765A271F842D(/*hidden argument*/NULL);
		int64_t L_1 = ___score0;
		String_t* L_2 = ___board1;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___callback2;
		NullCheck(L_0);
		InterfaceActionInvoker3< int64_t, String_t*, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(0 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>) */, ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ShowLeaderboardUI_mDD136D499783509D4BB9D9DE756FC68295160EAA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m74A08BB58636C0AC5934CAB46856765A271F842D(/*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ShowLeaderboardUI() */, ISocialPlatform_t1C068CBA4F0B5F2B2EBC76E64A1DEC7CBFBED92D_il2cpp_TypeInfo_var, L_0);
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
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m65DBFCC8D74A39E029B7EEBF5B24A8790C3668AA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_m_UserName_0(_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		__this->set_m_ID_1(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->set_m_legacyID_2(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->set_m_IsFriend_3((bool)0);
		__this->set_m_State_4(3);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_Image_5(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_mE86E8A99DF0EE73C93A55624E890806213567924 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2;
		L_2 = UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5;
		L_5 = UserProfile_get_userName_mB127337E5455C94299C39FB66C2965FF3421142E(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		bool L_8;
		L_8 = UserProfile_get_isFriend_m7ACC8963AD01FB384D215AF8C215DD93CB5322EA(__this, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		int32_t L_12;
		L_12 = UserProfile_get_state_mF93F969F5923A0A3528923E5A452138D00D4E248(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		RuntimeObject * L_13 = Box(UserState_t9DD84F7007E65F0FF4D7FF0414BACE5E24D0EA08_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_1 = *(int32_t*)UnBox(L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_11, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0061;
	}

IL_0061:
	{
		String_t* L_16 = V_2;
		return L_16;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mB127337E5455C94299C39FB66C2965FF3421142E (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserName_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m2C9612A3B81A7F76F86C4FE87AD4D3FADEF3E385 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ID_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m7ACC8963AD01FB384D215AF8C215DD93CB5322EA (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsFriend_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF93F969F5923A0A3528923E5A452138D00D4E248 (UserProfile_tDA4AC2655C2C32774702DDA257938A108AB4C537 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_State_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4A262BB19BCACE6C9B19874F5D68C777846C6CD6_inline (Leaderboard_tD587FC5E62BF8F6CC6AC0DF1ABB55D57A60CBE2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m05255F12ADDC2FC6D7E9646CBAE68D2924E66F65_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_mFECF5E9D1928EEAE7E46F497CDA159549EEB74C4_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m750646EDC0619A11179177F597C21374F13FCB9E_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m079BDC75AED9D8C06DC36F78AC233171F023FB4F_inline (Score_tD70993CC66CCC9CDE0DAB2917533D8094F1E4119 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
