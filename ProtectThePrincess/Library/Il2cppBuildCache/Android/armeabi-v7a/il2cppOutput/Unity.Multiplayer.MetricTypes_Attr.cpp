#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC;
// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.FlagsAttribute
struct FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
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


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * __this, const RuntimeMethod* method);
// System.Void System.FlagsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229 (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * __this, const RuntimeMethod* method);
static void Unity_Multiplayer_MetricTypes_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[0];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4D\x75\x6C\x74\x69\x70\x6C\x61\x79\x65\x72\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x50\x72\x6F\x66\x69\x6C\x65\x72\x2E\x52\x75\x6E\x74\x69\x6D\x65"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[1];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4E\x65\x74\x63\x6F\x64\x65\x2E\x45\x64\x69\x74\x6F\x72\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[2];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4E\x65\x74\x63\x6F\x64\x65\x2E\x52\x75\x6E\x74\x69\x6D\x65\x54\x65\x73\x74\x73"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4E\x65\x74\x63\x6F\x64\x65\x2E\x52\x75\x6E\x74\x69\x6D\x65"), NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[4];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[5];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[6];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[7];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[8];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4D\x75\x6C\x74\x69\x70\x6C\x61\x79\x65\x72\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x50\x72\x6F\x66\x69\x6C\x65\x72\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[9];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x4D\x75\x6C\x74\x69\x70\x6C\x61\x79\x65\x72\x2E\x4E\x65\x74\x77\x6F\x72\x6B\x50\x72\x6F\x66\x69\x6C\x65\x72\x2E\x54\x65\x73\x74\x73\x2E\x45\x64\x69\x74\x6F\x72"), NULL);
	}
}
static void ConnectionInfo_tBD412644953FF67077F92663787D32CCA06573DC_CustomAttributesCacheGenerator_U3CIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ConnectionInfo_tBD412644953FF67077F92663787D32CCA06573DC_CustomAttributesCacheGenerator_ConnectionInfo_get_Id_mD132C223E5D243298760CC6D909B7AF47E641FF2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CDirectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CDisplayNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_DirectionalMetricInfo_get_Type_m1A31C2A94D192599C756CED09BFCCC9739460D75(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_DirectionalMetricInfo_get_Direction_m5678D404A2838BF69B3D219746515FD72BDF1D54(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MetricTypeExtensions_tF40BD92840FB75BCA9620E15FE1C2168E88BB34D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void MetricTypeExtensions_tF40BD92840FB75BCA9620E15FE1C2168E88BB34D_CustomAttributesCacheGenerator_MetricTypeExtensions_GetDisplayNameString_m60710E3D5615A89A9D831E8D45DBCF177EAD2A7B(CustomAttributesCache* cache)
{
	{
		ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC * tmp = (ExtensionAttribute_t917F3F92E717DC8B2D7BC03967A9790B1B8EF7CC *)cache->attributes[0];
		ExtensionAttribute__ctor_mB331519C39C4210259A248A4C629DF934937C1FA(tmp, NULL);
	}
}
static void U3CU3Ec_tDD51A4CD7530F5988C02A0D7DEA7F696F7016203_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_NamedMessageEvent_get_BytesCount_mA7E3C7DC600DBD7FF4AB75426E88D5BBA39A36C3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void NetworkDirection_t169FD2B76B417B9D160BC627433A231C7CCFCF58_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 * tmp = (FlagsAttribute_t511C558FACEF1CC64702A8FAB67CAF3CBA65DF36 *)cache->attributes[0];
		FlagsAttribute__ctor_mE8DCBA1BE0E6B0424FEF5E5F249733CF6A0E1229(tmp, NULL);
	}
}
static void NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_NetworkMessageEvent_get_BytesCount_m0E7B552DCEA2011429E8F516E431689BD82E4245(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkObjectIdentifier_t4C2875384AAD7B97AE977B7EF11EE697D8C05725_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkObjectIdentifier_t4C2875384AAD7B97AE977B7EF11EE697D8C05725_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CNetworkBehaviourNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_NetworkVariableEvent_get_BytesCount_mA441F828814F02F0832CA6543BA84F0AAA6752D4(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_ObjectDestroyedEvent_get_BytesCount_mC27C82A66A24FE3B0473449E8BA648D5C9407462(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_ObjectSpawnedEvent_get_BytesCount_mB0602C77561722E2E3954912038FAE1C603BA679(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_OwnershipChangeEvent_get_BytesCount_m64A27B444273C1D6221EB88A7742B8A8C899D608(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CNetworkBehaviourNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_RpcEvent_get_BytesCount_mBF419C618DA5F4FFC06C6BAA2EB7FCA9F3005B75(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CSceneEventTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CSceneNameU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_SceneEventMetric_get_BytesCount_mC948985A8890CC47FFA4DB8F8F5DD348A7A86352(CustomAttributesCache* cache)
{
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[0];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_U3CLogLevelU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_ServerLogEvent_get_BytesCount_mB10C8B1C57D92A1BC29758E9C84E13176F71D851(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
static void UnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void UnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_CustomAttributesCacheGenerator_UnnamedMessageEvent_get_BytesCount_mC8E9280EA08D3190C4B708617511E2FE64341FD6(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 * tmp = (IsReadOnlyAttribute_tB6E31A0106212818B0AB6DC627AA320291BD7566 *)cache->attributes[1];
		IsReadOnlyAttribute__ctor_m02F9F7CD56DE227F7ABDD1E2593D82E6FFA57E9A(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Unity_Multiplayer_MetricTypes_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Unity_Multiplayer_MetricTypes_AttributeGenerators[60] = 
{
	MetricTypeExtensions_tF40BD92840FB75BCA9620E15FE1C2168E88BB34D_CustomAttributesCacheGenerator,
	U3CU3Ec_tDD51A4CD7530F5988C02A0D7DEA7F696F7016203_CustomAttributesCacheGenerator,
	NetworkDirection_t169FD2B76B417B9D160BC627433A231C7CCFCF58_CustomAttributesCacheGenerator,
	ConnectionInfo_tBD412644953FF67077F92663787D32CCA06573DC_CustomAttributesCacheGenerator_U3CIdU3Ek__BackingField,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CTypeU3Ek__BackingField,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CDirectionU3Ek__BackingField,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CIdU3Ek__BackingField,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_U3CDisplayNameU3Ek__BackingField,
	NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	NetworkObjectIdentifier_t4C2875384AAD7B97AE977B7EF11EE697D8C05725_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	NetworkObjectIdentifier_t4C2875384AAD7B97AE977B7EF11EE697D8C05725_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField,
	NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField,
	NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CNetworkBehaviourNameU3Ek__BackingField,
	NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField,
	ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField,
	ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField,
	OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CNetworkIdU3Ek__BackingField,
	RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CNameU3Ek__BackingField,
	RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CNetworkBehaviourNameU3Ek__BackingField,
	RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CSceneEventTypeU3Ek__BackingField,
	SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CSceneNameU3Ek__BackingField,
	SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_U3CLogLevelU3Ek__BackingField,
	ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	UnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_CustomAttributesCacheGenerator_U3CConnectionU3Ek__BackingField,
	UnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_CustomAttributesCacheGenerator_U3CBytesCountU3Ek__BackingField,
	ConnectionInfo_tBD412644953FF67077F92663787D32CCA06573DC_CustomAttributesCacheGenerator_ConnectionInfo_get_Id_mD132C223E5D243298760CC6D909B7AF47E641FF2,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_DirectionalMetricInfo_get_Type_m1A31C2A94D192599C756CED09BFCCC9739460D75,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_DirectionalMetricInfo_get_Direction_m5678D404A2838BF69B3D219746515FD72BDF1D54,
	DirectionalMetricInfo_tA69C9DB7ABBFA0CAFAE5733D7D666150C993DE79_CustomAttributesCacheGenerator_DirectionalMetricInfo_get_Id_m6C52CFD59D6377AC8EC7CDF7C8908C264D8AEF02,
	MetricTypeExtensions_tF40BD92840FB75BCA9620E15FE1C2168E88BB34D_CustomAttributesCacheGenerator_MetricTypeExtensions_GetDisplayNameString_m60710E3D5615A89A9D831E8D45DBCF177EAD2A7B,
	NamedMessageEvent_t5727EAD480B6944C1E0E64721604768F45A6B257_CustomAttributesCacheGenerator_NamedMessageEvent_get_BytesCount_mA7E3C7DC600DBD7FF4AB75426E88D5BBA39A36C3,
	NetworkMessageEvent_t691DD2B9C2E17A5B0497820FB5681F696E704A92_CustomAttributesCacheGenerator_NetworkMessageEvent_get_BytesCount_m0E7B552DCEA2011429E8F516E431689BD82E4245,
	NetworkVariableEvent_tC08B61EFA55F6C82CC51401749E139EF6EFF7E93_CustomAttributesCacheGenerator_NetworkVariableEvent_get_BytesCount_mA441F828814F02F0832CA6543BA84F0AAA6752D4,
	ObjectDestroyedEvent_t8EE3BD6716DBFB53F56EE0EB1EE7EEB3B7638781_CustomAttributesCacheGenerator_ObjectDestroyedEvent_get_BytesCount_mC27C82A66A24FE3B0473449E8BA648D5C9407462,
	ObjectSpawnedEvent_t34FCB041F9A2DB0D6C7EDDEE1298DF96DB8E579C_CustomAttributesCacheGenerator_ObjectSpawnedEvent_get_BytesCount_mB0602C77561722E2E3954912038FAE1C603BA679,
	OwnershipChangeEvent_tF1B6A6E0AFA9CB885883FFA51C5069937978D72E_CustomAttributesCacheGenerator_OwnershipChangeEvent_get_BytesCount_m64A27B444273C1D6221EB88A7742B8A8C899D608,
	RpcEvent_tD66C4891C5DEA84F1BBD94920BC0D48811A9E287_CustomAttributesCacheGenerator_RpcEvent_get_BytesCount_mBF419C618DA5F4FFC06C6BAA2EB7FCA9F3005B75,
	SceneEventMetric_t97601FF3C2B1CD3D04653688E3E5593B09A5E90B_CustomAttributesCacheGenerator_SceneEventMetric_get_BytesCount_mC948985A8890CC47FFA4DB8F8F5DD348A7A86352,
	ServerLogEvent_t6A6D2A1A2919798FB4DE7300FED3BC43B2860D0A_CustomAttributesCacheGenerator_ServerLogEvent_get_BytesCount_mB10C8B1C57D92A1BC29758E9C84E13176F71D851,
	UnnamedMessageEvent_t76E36A459BF3EB2D918881BF80CB97B98C50C8B9_CustomAttributesCacheGenerator_UnnamedMessageEvent_get_BytesCount_mC8E9280EA08D3190C4B708617511E2FE64341FD6,
	Unity_Multiplayer_MetricTypes_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
