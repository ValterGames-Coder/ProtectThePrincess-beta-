#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE_RuntimeMethod_var;
extern const RuntimeMethod* RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var;
extern const RuntimeMethod* xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0_RuntimeMethod_var;
extern const RuntimeMethod* xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43 (void);
// 0x00000003 Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager::AllocateBlock(T&,System.Int32,System.Int32,System.Int32)
// 0x00000004 System.Void* Unity.Collections.AllocatorManager::Allocate(T&,System.Int32,System.Int32,System.Int32)
// 0x00000005 U* Unity.Collections.AllocatorManager::Allocate(T&,U,System.Int32)
// 0x00000006 System.Void Unity.Collections.AllocatorManager::FreeBlock(T&,Unity.Collections.AllocatorManager/Block&)
// 0x00000007 System.Void Unity.Collections.AllocatorManager::Free(T&,System.Void*,System.Int32,System.Int32,System.Int32)
// 0x00000008 System.Void Unity.Collections.AllocatorManager::Free(T&,U*,System.Int32)
// 0x00000009 System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
// 0x0000000A System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
extern void AllocatorManager_CheckDelegate_m2034F06B2464A4A27E2B24F536B2F2244CFDC603 (void);
// 0x0000000B System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
extern void AllocatorManager_UseDelegate_m502251BCD61C58A4C55C3B51DC6DBC56B2F86981 (void);
// 0x0000000C System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_allocate_block_mF37B0FD92BC1BF98C2A5C765E4F2AB9532300EE7 (void);
// 0x0000000D System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
extern void AllocatorManager_forward_mono_allocate_block_m490B419D75E5521086A86698341989DD47CBD8B6 (void);
// 0x0000000E Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_LegacyOf_m9F8300F5AEED87F3B9FCD28C81A52B53D58B697B (void);
// 0x0000000F System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_TryLegacy_m7086EEBC033BDCAB24CAC49D695180EF1BA46895 (void);
// 0x00000010 System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_Try_m67E1175F6B4340CF45D552DDC90CDFE0DA1912E3 (void);
// 0x00000011 System.Void Unity.Collections.AllocatorManager::Unregister(T&)
// 0x00000012 System.Void Unity.Collections.AllocatorManager::.cctor()
extern void AllocatorManager__cctor_m704686DC15590B3752449701AC79493E5DBB4681 (void);
// 0x00000013 System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
extern void TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0 (void);
// 0x00000014 System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE (void);
// 0x00000015 System.IAsyncResult Unity.Collections.AllocatorManager/TryFunction::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2 (void);
// 0x00000016 System.Int32 Unity.Collections.AllocatorManager/TryFunction::EndInvoke(Unity.Collections.AllocatorManager/Block&,System.IAsyncResult)
extern void TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44 (void);
// 0x00000017 Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
extern void AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D (void);
// 0x00000018 System.Boolean Unity.Collections.AllocatorManager/AllocatorHandle::get_IsInstalled()
extern void AllocatorHandle_get_IsInstalled_m614267C7F347245EDED2CA4339DCFF3D59AF9067 (void);
// 0x00000019 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
extern void AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060 (void);
// 0x0000001A System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Install(Unity.Collections.AllocatorManager/TableEntry)
extern void AllocatorHandle_Install_m10DEDB2F19D24ACD24342A148D7F11DDBD3A5E59 (void);
// 0x0000001B Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
extern void AllocatorHandle_op_Implicit_m63D8E96033A00071E8FDEC80D6956ADBE627067C (void);
// 0x0000001C System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
extern void AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B (void);
// 0x0000001D System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148 (void);
// 0x0000001E Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
extern void AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E (void);
// 0x0000001F Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
extern void AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF (void);
// 0x00000020 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
extern void AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1 (void);
// 0x00000021 System.Void Unity.Collections.AllocatorManager/Range::Dispose()
extern void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42 (void);
// 0x00000022 System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
extern void Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA (void);
// 0x00000023 System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
extern void Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907 (void);
// 0x00000024 System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
extern void Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF (void);
// 0x00000025 System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
extern void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730 (void);
// 0x00000026 System.Void Unity.Collections.AllocatorManager/Block::Dispose()
extern void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9 (void);
// 0x00000027 System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
extern void Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1 (void);
// 0x00000028 System.Int32 Unity.Collections.AllocatorManager/IAllocator::Try(Unity.Collections.AllocatorManager/Block&)
// 0x00000029 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/IAllocator::get_Handle()
// 0x0000002A Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
extern void StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED (void);
// 0x0000002B System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D (void);
// 0x0000002C System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B (void);
// 0x0000002D System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
extern void StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678 (void);
// 0x0000002E System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B (void);
// 0x0000002F System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_00000950U24PostfixBurstDelegate__ctor_m8C0C2CEDEEDB1A7A4448DFF101F63CF49211F186 (void);
// 0x00000030 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000950U24PostfixBurstDelegate_Invoke_m6C0B8C4A675B01483EA6017E9E9EE6B21ECD5119 (void);
// 0x00000031 System.IAsyncResult Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_00000950U24PostfixBurstDelegate_BeginInvoke_m2FCB9BC9A377700545ADFE530FCDBD466D569CD0 (void);
// 0x00000032 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_00000950U24PostfixBurstDelegate_EndInvoke_m5205CFF30C35480EA48C36337E428AF9F3254B39 (void);
// 0x00000033 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_00000950U24BurstDirectCall_GetFunctionPointerDiscard_m26164E8CD38C03EBB96D176AF5343CD24CAAF9AC (void);
// 0x00000034 System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$BurstDirectCall::GetFunctionPointer()
extern void Try_00000950U24BurstDirectCall_GetFunctionPointer_mB61AAB13D941DBABBF47FF00EC04713101313BB0 (void);
// 0x00000035 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$BurstDirectCall::Constructor()
extern void Try_00000950U24BurstDirectCall_Constructor_mE4EC78195556855F04949818442A537659995313 (void);
// 0x00000036 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$BurstDirectCall::Initialize()
extern void Try_00000950U24BurstDirectCall_Initialize_mC1607B4D3A8E9FA35C37D6910CCF8D145E8210E2 (void);
// 0x00000037 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$BurstDirectCall::.cctor()
extern void Try_00000950U24BurstDirectCall__cctor_m5648334A5FA1BD5C88EFEE6DC39543915D06AFF5 (void);
// 0x00000038 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000950$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000950U24BurstDirectCall_Invoke_m56B22C93E3FD8EC5AD42845472CB49E5AC59CEE8 (void);
// 0x00000039 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
extern void SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7 (void);
// 0x0000003A System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
extern void SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685 (void);
// 0x0000003B System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3 (void);
// 0x0000003C System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8 (void);
// 0x0000003D System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
extern void SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F (void);
// 0x0000003E System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5 (void);
// 0x0000003F System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_0000095EU24PostfixBurstDelegate__ctor_m4E71F58FD3014C0244E34828B6FE6DA5670DC958 (void);
// 0x00000040 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000095EU24PostfixBurstDelegate_Invoke_m73F582CE6F7F2513B0C2EDA5813D824985883869 (void);
// 0x00000041 System.IAsyncResult Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_0000095EU24PostfixBurstDelegate_BeginInvoke_m13DDF275655ACE29E939AB3A35DA2250B6588ACD (void);
// 0x00000042 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_0000095EU24PostfixBurstDelegate_EndInvoke_m4A79661CDC255C416829B87A7C4645D717140A82 (void);
// 0x00000043 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_0000095EU24BurstDirectCall_GetFunctionPointerDiscard_m0942701E668409B55EB895FF33D9418FCB791593 (void);
// 0x00000044 System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$BurstDirectCall::GetFunctionPointer()
extern void Try_0000095EU24BurstDirectCall_GetFunctionPointer_m7890C42DD60BE1D3C040B196B4CB587E137668B4 (void);
// 0x00000045 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$BurstDirectCall::Constructor()
extern void Try_0000095EU24BurstDirectCall_Constructor_m801DBF56062BFC041C5F93976797C0D2CD5D8F3F (void);
// 0x00000046 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$BurstDirectCall::Initialize()
extern void Try_0000095EU24BurstDirectCall_Initialize_mFEAB93D424A5D1C39E5A3A2D90494A408CCDAA0E (void);
// 0x00000047 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$BurstDirectCall::.cctor()
extern void Try_0000095EU24BurstDirectCall__cctor_m5083735065E7DCC062EF2E2F80AD1222721E57D4 (void);
// 0x00000048 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_0000095E$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_0000095EU24BurstDirectCall_Invoke_m81B0098A66BFB061A08FF3CFA437E4306E834401 (void);
// 0x00000049 T& Unity.Collections.AllocatorManager/Array32768`1::ElementAt(System.Int32)
// 0x0000004A System.Void Unity.Collections.AllocatorManager/SharedStatics/IsInstalled::.cctor()
extern void IsInstalled__cctor_m1C0C23DD867044EE37E347050B5446763BF073D8 (void);
// 0x0000004B System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
extern void TableEntry__cctor_m4E930B1CD3F5349C2EE468379393D62B7F40908F (void);
// 0x0000004C System.Void Unity.Collections.AllocatorManager/Managed::UnregisterDelegate(System.Int32)
extern void Managed_UnregisterDelegate_mC81E228F103DA1D4A5A4B9867DDCA3EB3FC79F90 (void);
// 0x0000004D System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
extern void Managed__cctor_mDB5004E87DDAA2A1039890601B936875DECCD4EE (void);
// 0x0000004E System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
extern void CreatePropertyAttribute__ctor_mE5AD2035801359532F3ABA06B2E67CB664930A68 (void);
// 0x0000004F System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
extern void BurstCompatibleAttribute_set_GenericTypeArguments_mEEF019AFEFB1DCC2C6DC2E33C7BE33DECCD8DD5A (void);
// 0x00000050 System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
extern void BurstCompatibleAttribute__ctor_m5D7D5245014D5EF879BB02B137717AADED72CA4C (void);
// 0x00000051 System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
extern void NotBurstCompatibleAttribute__ctor_m1A03DFE74AB05DBB234C15F707ABD0AC4C91ED63 (void);
// 0x00000052 System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
extern void CollectionHelper_Hash_m8132774EA770BB87BF148F3B4900F64CCA47F576 (void);
// 0x00000053 System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void CollectionHelper_ShouldDeallocate_m41C16802B8B5846A4C78633AA05B2FF04D733234 (void);
// 0x00000054 System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
extern void CollectionHelper_AssumePositive_mD8785D4C9E69993993EA9982A5F6F2ADAFE5B110 (void);
// 0x00000055 System.Int64& Unity.Collections.Long1024::ElementAt(System.Int32)
extern void Long1024_ElementAt_m210AE22A8E84AD841395C742F0E22587F691E5E2 (void);
// 0x00000056 System.Int64 Unity.Collections.ConcurrentMask::MakeMask(System.Int32,System.Int32)
extern void ConcurrentMask_MakeMask_mF41E8A9C863F360AEE38F231020DCF13BBEC85D5 (void);
// 0x00000057 System.Int32 Unity.Collections.ConcurrentMask::TryFree(System.Int64&,System.Int32,System.Int32)
extern void ConcurrentMask_TryFree_mEF29FEC81FAAA021A4428C139B65C1C9E0753BC8 (void);
// 0x00000058 System.Int32 Unity.Collections.ConcurrentMask::TryFree(T&,System.Int32,System.Int32)
// 0x00000059 System.Int32 Unity.Collections.FixedList::PaddingBytes()
// 0x0000005A System.Int32 Unity.Collections.FixedList32Bytes`1::get_Length()
// 0x0000005B System.Int32 Unity.Collections.FixedList32Bytes`1::get_LengthInBytes()
// 0x0000005C System.Byte* Unity.Collections.FixedList32Bytes`1::get_Buffer()
// 0x0000005D T& Unity.Collections.FixedList32Bytes`1::ElementAt(System.Int32)
// 0x0000005E System.Int32 Unity.Collections.FixedList32Bytes`1::GetHashCode()
// 0x0000005F System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000060 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000061 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000062 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000063 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000064 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000065 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000066 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000067 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000068 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000069 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(System.Object)
// 0x0000006A System.Collections.IEnumerator Unity.Collections.FixedList32Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006B System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList32Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006C System.Int32 Unity.Collections.FixedList64Bytes`1::get_Length()
// 0x0000006D System.Int32 Unity.Collections.FixedList64Bytes`1::get_LengthInBytes()
// 0x0000006E System.Byte* Unity.Collections.FixedList64Bytes`1::get_Buffer()
// 0x0000006F T& Unity.Collections.FixedList64Bytes`1::ElementAt(System.Int32)
// 0x00000070 System.Int32 Unity.Collections.FixedList64Bytes`1::GetHashCode()
// 0x00000071 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000072 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000073 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000074 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000075 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000076 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000077 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000078 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000079 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000007A System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000007B System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(System.Object)
// 0x0000007C System.Collections.IEnumerator Unity.Collections.FixedList64Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList64Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000007E System.Int32 Unity.Collections.FixedList128Bytes`1::get_Length()
// 0x0000007F System.Int32 Unity.Collections.FixedList128Bytes`1::get_LengthInBytes()
// 0x00000080 System.Byte* Unity.Collections.FixedList128Bytes`1::get_Buffer()
// 0x00000081 T& Unity.Collections.FixedList128Bytes`1::ElementAt(System.Int32)
// 0x00000082 System.Int32 Unity.Collections.FixedList128Bytes`1::GetHashCode()
// 0x00000083 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000084 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000085 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000086 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000087 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000088 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000089 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000008A System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000008B System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000008C System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000008D System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(System.Object)
// 0x0000008E System.Collections.IEnumerator Unity.Collections.FixedList128Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList128Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000090 System.Int32 Unity.Collections.FixedList512Bytes`1::get_Length()
// 0x00000091 System.Int32 Unity.Collections.FixedList512Bytes`1::get_LengthInBytes()
// 0x00000092 System.Byte* Unity.Collections.FixedList512Bytes`1::get_Buffer()
// 0x00000093 T& Unity.Collections.FixedList512Bytes`1::ElementAt(System.Int32)
// 0x00000094 System.Int32 Unity.Collections.FixedList512Bytes`1::GetHashCode()
// 0x00000095 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000096 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000097 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000098 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000099 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000009A System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000009B System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000009C System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000009D System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000009E System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000009F System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(System.Object)
// 0x000000A0 System.Collections.IEnumerator Unity.Collections.FixedList512Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A1 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList512Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A2 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Length()
// 0x000000A3 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_LengthInBytes()
// 0x000000A4 System.Byte* Unity.Collections.FixedList4096Bytes`1::get_Buffer()
// 0x000000A5 T Unity.Collections.FixedList4096Bytes`1::get_Item(System.Int32)
// 0x000000A6 System.Void Unity.Collections.FixedList4096Bytes`1::set_Item(System.Int32,T)
// 0x000000A7 T& Unity.Collections.FixedList4096Bytes`1::ElementAt(System.Int32)
// 0x000000A8 System.Int32 Unity.Collections.FixedList4096Bytes`1::GetHashCode()
// 0x000000A9 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000AA System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x000000AB System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000AC System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x000000AD System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000AE System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x000000AF System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000B0 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x000000B1 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000B2 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x000000B3 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(System.Object)
// 0x000000B4 System.Collections.IEnumerator Unity.Collections.FixedList4096Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B5 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList4096Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B6 System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Allocate_mE42F0479C571BE76773614A408329CFCB51FB7F5 (void);
// 0x000000B7 System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Free_mE141FBBD8FC68C23121409BD2187EDDAB7849045 (void);
// 0x000000B8 System.Void Unity.Collections.Memory/Unmanaged::Free(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000B9 System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Array_IsCustom_m5553247492EBFB5ECECF39E326F1EC5C3F7FA892 (void);
// 0x000000BA System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_CustomResize_mD9B4173A8E9495BECF4359DE1B09E72428F2C521 (void);
// 0x000000BB System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_Resize_m7334DEAC65445477E1D278AC2DFEBD53C06C2C1B (void);
// 0x000000BC T* Unity.Collections.Memory/Unmanaged/Array::Resize(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000BD T& Unity.Collections.IIndexable`1::ElementAt(System.Int32)
// 0x000000BE System.Void Unity.Collections.NativeList`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000BF System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000C0 System.Void Unity.Collections.NativeList`1::Initialize(System.Int32,U&,System.Int32)
// 0x000000C1 System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x000000C2 T Unity.Collections.NativeList`1::get_Item(System.Int32)
// 0x000000C3 T& Unity.Collections.NativeList`1::ElementAt(System.Int32)
// 0x000000C4 System.Int32 Unity.Collections.NativeList`1::get_Length()
// 0x000000C5 System.Void Unity.Collections.NativeList`1::set_Length(System.Int32)
// 0x000000C6 Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::GetUnsafeList()
// 0x000000C7 System.Void Unity.Collections.NativeList`1::Add(T&)
// 0x000000C8 System.Void Unity.Collections.NativeList`1::Dispose()
// 0x000000C9 System.Void Unity.Collections.NativeList`1::Clear()
// 0x000000CA Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::AsArray()
// 0x000000CB Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1::GetEnumerator()
// 0x000000CC System.Collections.IEnumerator Unity.Collections.NativeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000CD System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000CE System.Void Unity.Collections.Spinner::Lock()
extern void Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1 (void);
// 0x000000CF System.Void Unity.Collections.Spinner::Unlock()
extern void Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32 (void);
// 0x000000D0 System.Void Unity.Collections.UnmanagedArray`1::Dispose()
// 0x000000D1 T& Unity.Collections.UnmanagedArray`1::get_Item(System.Int32)
// 0x000000D2 System.Void Unity.Collections.RewindableAllocator::Rewind()
extern void RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580 (void);
// 0x000000D3 System.Void Unity.Collections.RewindableAllocator::Dispose()
extern void RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678 (void);
// 0x000000D4 System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE (void);
// 0x000000D5 System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066 (void);
// 0x000000D6 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
extern void RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F (void);
// 0x000000D7 System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE (void);
// 0x000000D8 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
extern void MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3 (void);
// 0x000000D9 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
extern void MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958 (void);
// 0x000000DA System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
extern void MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF (void);
// 0x000000DB System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
extern void MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F (void);
// 0x000000DC System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_000006A4U24PostfixBurstDelegate__ctor_mFAB7E0950CF5ED026FFBDCEF42BDFB2E368CEA61 (void);
// 0x000000DD System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006A4U24PostfixBurstDelegate_Invoke_m091D2D37CBF3FADF29408F45269C3043BF7AE4A7 (void);
// 0x000000DE System.IAsyncResult Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
extern void Try_000006A4U24PostfixBurstDelegate_BeginInvoke_m278FE6FB7AECEC9310E5378FE9B019B834E9338E (void);
// 0x000000DF System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void Try_000006A4U24PostfixBurstDelegate_EndInvoke_m4A59329493C3FF784E42A7BB1BCAFE60D233D9F7 (void);
// 0x000000E0 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_000006A4U24BurstDirectCall_GetFunctionPointerDiscard_m4FC8A2F4754E815F1763EAED8618CBFCBBD824CF (void);
// 0x000000E1 System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$BurstDirectCall::GetFunctionPointer()
extern void Try_000006A4U24BurstDirectCall_GetFunctionPointer_m2AD7C827F7F9E387186E21773566F6AAF9018D30 (void);
// 0x000000E2 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$BurstDirectCall::Constructor()
extern void Try_000006A4U24BurstDirectCall_Constructor_mA852F200595C122E15C5281860DE6104E977515B (void);
// 0x000000E3 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$BurstDirectCall::Initialize()
extern void Try_000006A4U24BurstDirectCall_Initialize_m2AEECAFC6C4E43939FBC529A32DDE8FF6DC89771 (void);
// 0x000000E4 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$BurstDirectCall::.cctor()
extern void Try_000006A4U24BurstDirectCall__cctor_mE9EF1AC416D6A7C86CE23C238D963D5F99E1C2B9 (void);
// 0x000000E5 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_000006A4$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_000006A4U24BurstDirectCall_Invoke_m3DA6EF94022D144C736E12409205A57E31A42227 (void);
// 0x000000E6 System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_Avx2HashLongInternalLoop_mCCB0DF801328F7B4907CCD550BA0E9C2A971E4AF (void);
// 0x000000E7 System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_Avx2ScrambleAcc_mA6DBBF7E016635A901F80FC07FF1851618D6C3D5 (void);
// 0x000000E8 System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B (void);
// 0x000000E9 System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
extern void xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7 (void);
// 0x000000EA Unity.Mathematics.uint2 Unity.Collections.xxHash3::Hash64(System.Void*,System.Int64)
extern void xxHash3_Hash64_m2B7DD16AD851D3DDB52BF0B26B439A207C6132D4 (void);
// 0x000000EB Unity.Mathematics.uint2 Unity.Collections.xxHash3::Hash64(T&)
// 0x000000EC Unity.Mathematics.uint2 Unity.Collections.xxHash3::Hash64(System.Void*,System.Int64,System.UInt64)
extern void xxHash3_Hash64_m9172B73D6D1E203A06C0F60A29EE3922C44A177B (void);
// 0x000000ED Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128(System.Void*,System.Int64)
extern void xxHash3_Hash128_mD19F1B719EF787B10D2733D8B3A4C749A3F3565B (void);
// 0x000000EE Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128(T&)
// 0x000000EF Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128(System.Void*,System.Void*,System.Int64)
extern void xxHash3_Hash128_m441A2B793C55DFDBB8F00EDBEAE57A1F9AD456BD (void);
// 0x000000F0 Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128(System.Void*,System.Int64,System.UInt64)
extern void xxHash3_Hash128_m0D895106B7A5F113DD61B16BD04D2F9783D6ADF1 (void);
// 0x000000F1 Unity.Mathematics.uint4 Unity.Collections.xxHash3::Hash128(System.Void*,System.Void*,System.Int64,System.UInt64)
extern void xxHash3_Hash128_m250E86154FEEEC1D72F79099DFCD20D04368083F (void);
// 0x000000F2 System.Void Unity.Collections.xxHash3::CheckMono(System.Boolean&)
extern void xxHash3_CheckMono_m4074263955EBB954EA4B06245B8A89607A599259 (void);
// 0x000000F3 System.Boolean Unity.Collections.xxHash3::IsMono()
extern void xxHash3_IsMono_mE5E37209181A4CB4D7B249AAA5E332CCEB365452 (void);
// 0x000000F4 System.Void Unity.Collections.xxHash3::Initialize()
extern void xxHash3_Initialize_m9F669EE0FDE89D882984BD65FCB99FBDFE590B7D (void);
// 0x000000F5 System.Void Unity.Collections.xxHash3::_mono_to_burst_Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102 (void);
// 0x000000F6 System.Void Unity.Collections.xxHash3::_forward_mono_Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void xxHash3__forward_mono_Hash64Long_mE21461D8C0848980789DE01C36D44F178D598869 (void);
// 0x000000F7 System.Void Unity.Collections.xxHash3::_mono_to_burst_Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0 (void);
// 0x000000F8 System.Void Unity.Collections.xxHash3::_forward_mono_Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3__forward_mono_Hash128Long_mBA23BD1CAD44024E3A57AE3F4101AEA7F0EB16F6 (void);
// 0x000000F9 System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64Long_mEEEA1DD334FF23CABC570F75866691BF29CA0CD7 (void);
// 0x000000FA System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Long_m869E4682C4C9265FCFB625F57197A9B48B11675D (void);
// 0x000000FB System.UInt64 Unity.Collections.xxHash3::Hash64Internal(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Internal_m15730141148DD965001B2653D8B8A518D14C7678 (void);
// 0x000000FC System.Void Unity.Collections.xxHash3::Hash128Internal(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Internal_m6FEBA26116BD2F23C31AC09416FE022BCAB2A990 (void);
// 0x000000FD System.UInt64 Unity.Collections.xxHash3::Hash64Len1To3(System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Len1To3_m6BDBB0BB41ECE4FE19EF44C0FE45808D22F3F1E8 (void);
// 0x000000FE System.UInt64 Unity.Collections.xxHash3::Hash64Len4To8(System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Len4To8_m0D5C65C113092B6F4164E3E6A45267777131D6D6 (void);
// 0x000000FF System.UInt64 Unity.Collections.xxHash3::Hash64Len9To16(System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Len9To16_m430BECF353C34241BC5587268BE414B3D21E70EA (void);
// 0x00000100 System.UInt64 Unity.Collections.xxHash3::Hash64Len0To16(System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Len0To16_mE8DA500A9F7B2EC9D41A2E1E2E5D3577D1A72F40 (void);
// 0x00000101 System.UInt64 Unity.Collections.xxHash3::Hash64Len17To128(System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Len17To128_m2A640B53BA84AF49A114B094D03DCA98E17688C3 (void);
// 0x00000102 System.UInt64 Unity.Collections.xxHash3::Hash64Len129To240(System.Byte*,System.Int64,System.Byte*,System.UInt64)
extern void xxHash3_Hash64Len129To240_m66F1DF63AF5A50BF10298CC00C13439D26A1EA5C (void);
// 0x00000103 System.Void Unity.Collections.xxHash3::_Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void xxHash3__Hash64Long_mFD366A8CD7B43D58B3304AB7041504CB6C603A9C (void);
// 0x00000104 System.Void Unity.Collections.xxHash3::Hash128Len1To3(System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Len1To3_mF410585125AFCAE2DC1F848A2631234756DFC143 (void);
// 0x00000105 System.Void Unity.Collections.xxHash3::Hash128Len4To8(System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Len4To8_mCF2E4D3C3BE87151523EB007C358679A72963E42 (void);
// 0x00000106 System.Void Unity.Collections.xxHash3::Hash128Len9To16(System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Len9To16_mA528BC6B22872A476E53E7CAD4E1385EB15D8C93 (void);
// 0x00000107 System.Void Unity.Collections.xxHash3::Hash128Len0To16(System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Len0To16_m4F9C977809444A9BB8A468794D3328BA2629E014 (void);
// 0x00000108 System.Void Unity.Collections.xxHash3::Hash128Len17To128(System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Len17To128_m571AF04C8BCFB5AD1082E75AF10747EC0F9215BA (void);
// 0x00000109 System.Void Unity.Collections.xxHash3::Hash128Len129To240(System.Byte*,System.Int64,System.Byte*,System.UInt64,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Len129To240_m54B6C34228DCE3FF1B5E340DBB7053D871B2E4C9 (void);
// 0x0000010A System.Void Unity.Collections.xxHash3::_Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3__Hash128Long_mD0F28BAE0AC3732B7F54185516FB6ADAC2946601 (void);
// 0x0000010B Unity.Mathematics.uint2 Unity.Collections.xxHash3::ToUint2(System.UInt64)
extern void xxHash3_ToUint2_m50ADF44553921AB859DA8C8C88407A7EF55FD5CF (void);
// 0x0000010C Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
extern void xxHash3_ToUint4_m8417C90298E7430A8DCD51069984F8AE71C9FB56 (void);
// 0x0000010D System.Void Unity.Collections.xxHash3::EncodeSecretKey(System.Byte*,System.Byte*,System.UInt64)
extern void xxHash3_EncodeSecretKey_m913ED3B42A3A75702BD385E7B0C229B09B278DF5 (void);
// 0x0000010E System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
extern void xxHash3_Read64LE_m215CF04016BB327534223E32E2D4B451DDA1AACC (void);
// 0x0000010F System.UInt32 Unity.Collections.xxHash3::Read32LE(System.Void*)
extern void xxHash3_Read32LE_m59BFA29B9AADC6A5B8C10BE95CC0A5C6BE4C08C1 (void);
// 0x00000110 System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
extern void xxHash3_Write64LE_mA44006BF77A500B0ADF6E3B2FC4CF238E7939E5D (void);
// 0x00000111 System.Void Unity.Collections.xxHash3::Read32LE(System.Void*,System.UInt32)
extern void xxHash3_Read32LE_m5EA627D04BCBCCD21A77321C8384B7CE344CA780 (void);
// 0x00000112 System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
extern void xxHash3_Mul32To64_m8E59492BD1C7B9C66F5F907D165C27255EFC5A8F (void);
// 0x00000113 System.UInt64 Unity.Collections.xxHash3::Swap64(System.UInt64)
extern void xxHash3_Swap64_m1DE54EB183CD03828352C1331D83FA87F3EF1096 (void);
// 0x00000114 System.UInt32 Unity.Collections.xxHash3::Swap32(System.UInt32)
extern void xxHash3_Swap32_m5C584B00321D3AEF1692FB0E9C1A3FBB7401777B (void);
// 0x00000115 System.UInt32 Unity.Collections.xxHash3::RotL32(System.UInt32,System.Int32)
extern void xxHash3_RotL32_mF9E1B2B697AD7B132577FA989C2C6708796ED791 (void);
// 0x00000116 System.UInt64 Unity.Collections.xxHash3::RotL64(System.UInt64,System.Int32)
extern void xxHash3_RotL64_m5D6B9131E4C133E79AC874A31EB6A84FDA2ED29C (void);
// 0x00000117 System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
extern void xxHash3_XorShift64_m14CFB98B253542B96241F24A1BAA59BC660F10C2 (void);
// 0x00000118 System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
extern void xxHash3_Mul128Fold64_mE4D677D2E0DACC2DAB3E33B876928A61E4E66036 (void);
// 0x00000119 System.UInt64 Unity.Collections.xxHash3::Mix16(System.Byte*,System.Byte*,System.UInt64)
extern void xxHash3_Mix16_m66B2276A9641DEBD6D6FDD6009EBD190DC59102F (void);
// 0x0000011A Unity.Collections.xxHash3/ulong2 Unity.Collections.xxHash3::Mix32(Unity.Collections.xxHash3/ulong2,System.Byte*,System.Byte*,System.Byte*,System.UInt64)
extern void xxHash3_Mix32_mD1DB38B488929149D555AD9FA75F1EA953359BE0 (void);
// 0x0000011B System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
extern void xxHash3_Avalanche_m8AB7E61594297A37DDBEB74555B9B6E937CD91B9 (void);
// 0x0000011C System.UInt64 Unity.Collections.xxHash3::AvalancheH64(System.UInt64)
extern void xxHash3_AvalancheH64_m41A6AD68CEBE48FFD1B817843B5025616B08E0D8 (void);
// 0x0000011D System.UInt64 Unity.Collections.xxHash3::rrmxmx(System.UInt64,System.UInt64)
extern void xxHash3_rrmxmx_m2D7FE35812468525543E8EF5A8CD7553C369A297 (void);
// 0x0000011E System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
extern void xxHash3_Mix2Acc_mCC33F3919D7C753AC9997592EA6D6F95D35D72C3 (void);
// 0x0000011F System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
extern void xxHash3_MergeAcc_mF5CA25B12DC5478CDA428FDDD8EDEA7B070B1CDD (void);
// 0x00000120 System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_DefaultHashLongInternalLoop_m25D46D5E62D5A75BF6B18D459552A4F639D7B070 (void);
// 0x00000121 System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9 (void);
// 0x00000122 System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
extern void xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253 (void);
// 0x00000123 System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_DefaultScrambleAcc_m5F9168BDE58B95E6C98B107B341D0D822AAAEC37 (void);
// 0x00000124 System.Void Unity.Collections.xxHash3::.cctor()
extern void xxHash3__cctor_mA0B63A037F973A6F068985CA2FC3211DFBF7D443 (void);
// 0x00000125 System.Void Unity.Collections.xxHash3::_mono_to_burst_Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96 (void);
// 0x00000126 System.Void Unity.Collections.xxHash3::_mono_to_burst_Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902 (void);
// 0x00000127 System.Void Unity.Collections.xxHash3/ulong2::.ctor(System.UInt64,System.UInt64)
extern void ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB (void);
// 0x00000128 System.Void Unity.Collections.xxHash3/_dlg_Hash64Long::.ctor(System.Object,System.IntPtr)
extern void _dlg_Hash64Long__ctor_mDC504F2C8145376139E58547908104ADD8FD52D0 (void);
// 0x00000129 System.Void Unity.Collections.xxHash3/_dlg_Hash64Long::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void _dlg_Hash64Long_Invoke_m837626A81F14C216D3128975C0B2978D3C5E7C6E (void);
// 0x0000012A System.IAsyncResult Unity.Collections.xxHash3/_dlg_Hash64Long::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&,System.AsyncCallback,System.Object)
extern void _dlg_Hash64Long_BeginInvoke_mA1FEF3E5124CD1D026F5FA45A9970A42302B0313 (void);
// 0x0000012B System.Void Unity.Collections.xxHash3/_dlg_Hash64Long::EndInvoke(System.UInt64&,System.IAsyncResult)
extern void _dlg_Hash64Long_EndInvoke_mA841A6743B6E3EBFE983436CB6BBF27031023D32 (void);
// 0x0000012C System.Void Unity.Collections.xxHash3/_dlg_Hash128Long::.ctor(System.Object,System.IntPtr)
extern void _dlg_Hash128Long__ctor_mFF3199FFAE2727F28F530B3F7533903F070DB04F (void);
// 0x0000012D System.Void Unity.Collections.xxHash3/_dlg_Hash128Long::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void _dlg_Hash128Long_Invoke_m317D69E443C63FC934B1F13A6858AB921B8C1CC2 (void);
// 0x0000012E System.IAsyncResult Unity.Collections.xxHash3/_dlg_Hash128Long::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&,System.AsyncCallback,System.Object)
extern void _dlg_Hash128Long_BeginInvoke_mBD97066942246582A5DC7A71B02554F289A99F19 (void);
// 0x0000012F System.Void Unity.Collections.xxHash3/_dlg_Hash128Long::EndInvoke(Unity.Mathematics.uint4&,System.IAsyncResult)
extern void _dlg_Hash128Long_EndInvoke_m148E384C9A2B432008485B44B01677ADA88F06DC (void);
// 0x00000130 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void _mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate__ctor_mC4CEFEF25527F4763BFA96816D111D98B92310DC (void);
// 0x00000131 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void _mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate_Invoke_mF163DD67EFA71F0FE32BCCC3B5FBD086FDA4CC07 (void);
// 0x00000132 System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&,System.AsyncCallback,System.Object)
extern void _mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate_BeginInvoke_m72F1C59AC0E40CF6C8E848898CEE2B5759546304 (void);
// 0x00000133 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void _mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate_EndInvoke_m5E062E663A642913958E3D1A4919CE5EF263957C (void);
// 0x00000134 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void _mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_GetFunctionPointerDiscard_m7144DD953FD85615D12B2EDCDE7AB9954D38025C (void);
// 0x00000135 System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$BurstDirectCall::GetFunctionPointer()
extern void _mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_GetFunctionPointer_mC7E4C26BA892971547C98194040253C15EEE35EC (void);
// 0x00000136 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$BurstDirectCall::Constructor()
extern void _mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_Constructor_m6507D143324ECBCD2FE616013ADA67337C94155E (void);
// 0x00000137 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$BurstDirectCall::Initialize()
extern void _mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_Initialize_mA66A7767F0AAC12F42BD2C9B39613EA2D82A42C0 (void);
// 0x00000138 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$BurstDirectCall::.cctor()
extern void _mono_to_burst_Hash64Long_000006D2U24BurstDirectCall__cctor_m13AC75AEBC2FD031A952DB950F4C027FFC6B5E70 (void);
// 0x00000139 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_000006D2$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
extern void _mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_Invoke_mC87E460FA345CACCF85CD86EA13CEBD930B55BD1 (void);
// 0x0000013A System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void _mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate__ctor_m86354F7FEAAF492AFAC923D0CE23499E9ED6E704 (void);
// 0x0000013B System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void _mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate_Invoke_m40642680ECC0193A68B034A68FBFBE97E8AF4751 (void);
// 0x0000013C System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&,System.AsyncCallback,System.Object)
extern void _mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate_BeginInvoke_mF53A28897F3FC0BDD0326B55F483DA8397192DEC (void);
// 0x0000013D System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
extern void _mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate_EndInvoke_mC7319275D25A36863F42D6428CAAAF11F44A91F2 (void);
// 0x0000013E System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void _mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_GetFunctionPointerDiscard_mC108448D3160787CF77AB5D6E10377642EC583B7 (void);
// 0x0000013F System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$BurstDirectCall::GetFunctionPointer()
extern void _mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_GetFunctionPointer_mF583489C4BD6846B5EEF49B97FCE5E84430F5B8A (void);
// 0x00000140 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$BurstDirectCall::Constructor()
extern void _mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_Constructor_mC87D814FD0AB3519B1056DD73821B04BD03E6352 (void);
// 0x00000141 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$BurstDirectCall::Initialize()
extern void _mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_Initialize_m4E9209DA82CF3DC562043652ED1F379285C1CB44 (void);
// 0x00000142 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$BurstDirectCall::.cctor()
extern void _mono_to_burst_Hash128Long_000006D4U24BurstDirectCall__cctor_mC6909FB5B7505177AEF40C613A9F6BC40FCD36BF (void);
// 0x00000143 System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_000006D4$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void _mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_Invoke_mFBB174E281E0DF7263578F017D2E52573543CE83 (void);
// 0x00000144 System.Void Unity.Collections.xxHashDefaultKey::.cctor()
extern void xxHashDefaultKey__cctor_m3D6151FBA2140AD3B8CFCBB25B0E0725F60D611D (void);
// 0x00000145 System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr(Unity.Collections.NativeList`1<T>)
// 0x00000146 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Length()
// 0x00000147 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Capacity()
// 0x00000148 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Capacity(System.Int32)
// 0x00000149 T& Unity.Collections.LowLevel.Unsafe.UnsafeList`1::ElementAt(System.Int32)
// 0x0000014A Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Create(System.Int32,U&,Unity.Collections.NativeArrayOptions)
// 0x0000014B System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Destroy(Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>*)
// 0x0000014C System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Dispose()
// 0x0000014D System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Clear()
// 0x0000014E System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x0000014F System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Realloc(U&,System.Int32)
// 0x00000150 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Realloc(System.Int32)
// 0x00000151 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(U&,System.Int32)
// 0x00000152 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(System.Int32)
// 0x00000153 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Add(T&)
// 0x00000154 System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000155 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000156 System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtilityExtensions::AddressOf(T&)
static Il2CppMethodPointer s_methodPointers[342] = 
{
	EmbeddedAttribute__ctor_mE19BFF00D03833D46FC6E6B83A9C5E708E7E665D,
	IsUnmanagedAttribute__ctor_m05BDDBB49F005C47C815CD32668381083A1F5C43,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AllocatorManager_CheckDelegate_m2034F06B2464A4A27E2B24F536B2F2244CFDC603,
	AllocatorManager_UseDelegate_m502251BCD61C58A4C55C3B51DC6DBC56B2F86981,
	AllocatorManager_allocate_block_mF37B0FD92BC1BF98C2A5C765E4F2AB9532300EE7,
	AllocatorManager_forward_mono_allocate_block_m490B419D75E5521086A86698341989DD47CBD8B6,
	AllocatorManager_LegacyOf_m9F8300F5AEED87F3B9FCD28C81A52B53D58B697B,
	AllocatorManager_TryLegacy_m7086EEBC033BDCAB24CAC49D695180EF1BA46895,
	AllocatorManager_Try_m67E1175F6B4340CF45D552DDC90CDFE0DA1912E3,
	NULL,
	AllocatorManager__cctor_m704686DC15590B3752449701AC79493E5DBB4681,
	TryFunction__ctor_m61B0A7506F9D0C752E09C91E3E3CC16034A41AA0,
	TryFunction_Invoke_m62DB13101BCEC040485DBD4F68E9B4B9406368DE,
	TryFunction_BeginInvoke_mDB5760D98471188127E578B6598BBD7D498ACCF2,
	TryFunction_EndInvoke_m26A14616127F9673336FE6BB8C1202F6A7F27C44,
	AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D,
	AllocatorHandle_get_IsInstalled_m614267C7F347245EDED2CA4339DCFF3D59AF9067,
	AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060,
	AllocatorHandle_Install_m10DEDB2F19D24ACD24342A148D7F11DDBD3A5E59,
	AllocatorHandle_op_Implicit_m63D8E96033A00071E8FDEC80D6956ADBE627067C,
	AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B,
	AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148,
	AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E,
	AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF,
	AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1,
	Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42,
	Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA,
	Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907,
	Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF,
	Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730,
	Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9,
	Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1,
	NULL,
	NULL,
	StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED,
	StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D,
	StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B,
	StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678,
	StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B,
	Try_00000950U24PostfixBurstDelegate__ctor_m8C0C2CEDEEDB1A7A4448DFF101F63CF49211F186,
	Try_00000950U24PostfixBurstDelegate_Invoke_m6C0B8C4A675B01483EA6017E9E9EE6B21ECD5119,
	Try_00000950U24PostfixBurstDelegate_BeginInvoke_m2FCB9BC9A377700545ADFE530FCDBD466D569CD0,
	Try_00000950U24PostfixBurstDelegate_EndInvoke_m5205CFF30C35480EA48C36337E428AF9F3254B39,
	Try_00000950U24BurstDirectCall_GetFunctionPointerDiscard_m26164E8CD38C03EBB96D176AF5343CD24CAAF9AC,
	Try_00000950U24BurstDirectCall_GetFunctionPointer_mB61AAB13D941DBABBF47FF00EC04713101313BB0,
	Try_00000950U24BurstDirectCall_Constructor_mE4EC78195556855F04949818442A537659995313,
	Try_00000950U24BurstDirectCall_Initialize_mC1607B4D3A8E9FA35C37D6910CCF8D145E8210E2,
	Try_00000950U24BurstDirectCall__cctor_m5648334A5FA1BD5C88EFEE6DC39543915D06AFF5,
	Try_00000950U24BurstDirectCall_Invoke_m56B22C93E3FD8EC5AD42845472CB49E5AC59CEE8,
	SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7,
	SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685,
	SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3,
	SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8,
	SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F,
	SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5,
	Try_0000095EU24PostfixBurstDelegate__ctor_m4E71F58FD3014C0244E34828B6FE6DA5670DC958,
	Try_0000095EU24PostfixBurstDelegate_Invoke_m73F582CE6F7F2513B0C2EDA5813D824985883869,
	Try_0000095EU24PostfixBurstDelegate_BeginInvoke_m13DDF275655ACE29E939AB3A35DA2250B6588ACD,
	Try_0000095EU24PostfixBurstDelegate_EndInvoke_m4A79661CDC255C416829B87A7C4645D717140A82,
	Try_0000095EU24BurstDirectCall_GetFunctionPointerDiscard_m0942701E668409B55EB895FF33D9418FCB791593,
	Try_0000095EU24BurstDirectCall_GetFunctionPointer_m7890C42DD60BE1D3C040B196B4CB587E137668B4,
	Try_0000095EU24BurstDirectCall_Constructor_m801DBF56062BFC041C5F93976797C0D2CD5D8F3F,
	Try_0000095EU24BurstDirectCall_Initialize_mFEAB93D424A5D1C39E5A3A2D90494A408CCDAA0E,
	Try_0000095EU24BurstDirectCall__cctor_m5083735065E7DCC062EF2E2F80AD1222721E57D4,
	Try_0000095EU24BurstDirectCall_Invoke_m81B0098A66BFB061A08FF3CFA437E4306E834401,
	NULL,
	IsInstalled__cctor_m1C0C23DD867044EE37E347050B5446763BF073D8,
	TableEntry__cctor_m4E930B1CD3F5349C2EE468379393D62B7F40908F,
	Managed_UnregisterDelegate_mC81E228F103DA1D4A5A4B9867DDCA3EB3FC79F90,
	Managed__cctor_mDB5004E87DDAA2A1039890601B936875DECCD4EE,
	CreatePropertyAttribute__ctor_mE5AD2035801359532F3ABA06B2E67CB664930A68,
	BurstCompatibleAttribute_set_GenericTypeArguments_mEEF019AFEFB1DCC2C6DC2E33C7BE33DECCD8DD5A,
	BurstCompatibleAttribute__ctor_m5D7D5245014D5EF879BB02B137717AADED72CA4C,
	NotBurstCompatibleAttribute__ctor_m1A03DFE74AB05DBB234C15F707ABD0AC4C91ED63,
	CollectionHelper_Hash_m8132774EA770BB87BF148F3B4900F64CCA47F576,
	CollectionHelper_ShouldDeallocate_m41C16802B8B5846A4C78633AA05B2FF04D733234,
	CollectionHelper_AssumePositive_mD8785D4C9E69993993EA9982A5F6F2ADAFE5B110,
	Long1024_ElementAt_m210AE22A8E84AD841395C742F0E22587F691E5E2,
	ConcurrentMask_MakeMask_mF41E8A9C863F360AEE38F231020DCF13BBEC85D5,
	ConcurrentMask_TryFree_mEF29FEC81FAAA021A4428C139B65C1C9E0753BC8,
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
	Unmanaged_Allocate_mE42F0479C571BE76773614A408329CFCB51FB7F5,
	Unmanaged_Free_mE141FBBD8FC68C23121409BD2187EDDAB7849045,
	NULL,
	Array_IsCustom_m5553247492EBFB5ECECF39E326F1EC5C3F7FA892,
	Array_CustomResize_mD9B4173A8E9495BECF4359DE1B09E72428F2C521,
	Array_Resize_m7334DEAC65445477E1D278AC2DFEBD53C06C2C1B,
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
	Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1,
	Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32,
	NULL,
	NULL,
	RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580,
	RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678,
	RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE,
	RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066,
	RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F,
	RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE,
	MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3,
	MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958,
	MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF,
	MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F,
	Try_000006A4U24PostfixBurstDelegate__ctor_mFAB7E0950CF5ED026FFBDCEF42BDFB2E368CEA61,
	Try_000006A4U24PostfixBurstDelegate_Invoke_m091D2D37CBF3FADF29408F45269C3043BF7AE4A7,
	Try_000006A4U24PostfixBurstDelegate_BeginInvoke_m278FE6FB7AECEC9310E5378FE9B019B834E9338E,
	Try_000006A4U24PostfixBurstDelegate_EndInvoke_m4A59329493C3FF784E42A7BB1BCAFE60D233D9F7,
	Try_000006A4U24BurstDirectCall_GetFunctionPointerDiscard_m4FC8A2F4754E815F1763EAED8618CBFCBBD824CF,
	Try_000006A4U24BurstDirectCall_GetFunctionPointer_m2AD7C827F7F9E387186E21773566F6AAF9018D30,
	Try_000006A4U24BurstDirectCall_Constructor_mA852F200595C122E15C5281860DE6104E977515B,
	Try_000006A4U24BurstDirectCall_Initialize_m2AEECAFC6C4E43939FBC529A32DDE8FF6DC89771,
	Try_000006A4U24BurstDirectCall__cctor_mE9EF1AC416D6A7C86CE23C238D963D5F99E1C2B9,
	Try_000006A4U24BurstDirectCall_Invoke_m3DA6EF94022D144C736E12409205A57E31A42227,
	xxHash3_Avx2HashLongInternalLoop_mCCB0DF801328F7B4907CCD550BA0E9C2A971E4AF,
	xxHash3_Avx2ScrambleAcc_mA6DBBF7E016635A901F80FC07FF1851618D6C3D5,
	xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B,
	xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7,
	xxHash3_Hash64_m2B7DD16AD851D3DDB52BF0B26B439A207C6132D4,
	NULL,
	xxHash3_Hash64_m9172B73D6D1E203A06C0F60A29EE3922C44A177B,
	xxHash3_Hash128_mD19F1B719EF787B10D2733D8B3A4C749A3F3565B,
	NULL,
	xxHash3_Hash128_m441A2B793C55DFDBB8F00EDBEAE57A1F9AD456BD,
	xxHash3_Hash128_m0D895106B7A5F113DD61B16BD04D2F9783D6ADF1,
	xxHash3_Hash128_m250E86154FEEEC1D72F79099DFCD20D04368083F,
	xxHash3_CheckMono_m4074263955EBB954EA4B06245B8A89607A599259,
	xxHash3_IsMono_mE5E37209181A4CB4D7B249AAA5E332CCEB365452,
	xxHash3_Initialize_m9F669EE0FDE89D882984BD65FCB99FBDFE590B7D,
	xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102,
	xxHash3__forward_mono_Hash64Long_mE21461D8C0848980789DE01C36D44F178D598869,
	xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0,
	xxHash3__forward_mono_Hash128Long_mBA23BD1CAD44024E3A57AE3F4101AEA7F0EB16F6,
	xxHash3_Hash64Long_mEEEA1DD334FF23CABC570F75866691BF29CA0CD7,
	xxHash3_Hash128Long_m869E4682C4C9265FCFB625F57197A9B48B11675D,
	xxHash3_Hash64Internal_m15730141148DD965001B2653D8B8A518D14C7678,
	xxHash3_Hash128Internal_m6FEBA26116BD2F23C31AC09416FE022BCAB2A990,
	xxHash3_Hash64Len1To3_m6BDBB0BB41ECE4FE19EF44C0FE45808D22F3F1E8,
	xxHash3_Hash64Len4To8_m0D5C65C113092B6F4164E3E6A45267777131D6D6,
	xxHash3_Hash64Len9To16_m430BECF353C34241BC5587268BE414B3D21E70EA,
	xxHash3_Hash64Len0To16_mE8DA500A9F7B2EC9D41A2E1E2E5D3577D1A72F40,
	xxHash3_Hash64Len17To128_m2A640B53BA84AF49A114B094D03DCA98E17688C3,
	xxHash3_Hash64Len129To240_m66F1DF63AF5A50BF10298CC00C13439D26A1EA5C,
	xxHash3__Hash64Long_mFD366A8CD7B43D58B3304AB7041504CB6C603A9C,
	xxHash3_Hash128Len1To3_mF410585125AFCAE2DC1F848A2631234756DFC143,
	xxHash3_Hash128Len4To8_mCF2E4D3C3BE87151523EB007C358679A72963E42,
	xxHash3_Hash128Len9To16_mA528BC6B22872A476E53E7CAD4E1385EB15D8C93,
	xxHash3_Hash128Len0To16_m4F9C977809444A9BB8A468794D3328BA2629E014,
	xxHash3_Hash128Len17To128_m571AF04C8BCFB5AD1082E75AF10747EC0F9215BA,
	xxHash3_Hash128Len129To240_m54B6C34228DCE3FF1B5E340DBB7053D871B2E4C9,
	xxHash3__Hash128Long_mD0F28BAE0AC3732B7F54185516FB6ADAC2946601,
	xxHash3_ToUint2_m50ADF44553921AB859DA8C8C88407A7EF55FD5CF,
	xxHash3_ToUint4_m8417C90298E7430A8DCD51069984F8AE71C9FB56,
	xxHash3_EncodeSecretKey_m913ED3B42A3A75702BD385E7B0C229B09B278DF5,
	xxHash3_Read64LE_m215CF04016BB327534223E32E2D4B451DDA1AACC,
	xxHash3_Read32LE_m59BFA29B9AADC6A5B8C10BE95CC0A5C6BE4C08C1,
	xxHash3_Write64LE_mA44006BF77A500B0ADF6E3B2FC4CF238E7939E5D,
	xxHash3_Read32LE_m5EA627D04BCBCCD21A77321C8384B7CE344CA780,
	xxHash3_Mul32To64_m8E59492BD1C7B9C66F5F907D165C27255EFC5A8F,
	xxHash3_Swap64_m1DE54EB183CD03828352C1331D83FA87F3EF1096,
	xxHash3_Swap32_m5C584B00321D3AEF1692FB0E9C1A3FBB7401777B,
	xxHash3_RotL32_mF9E1B2B697AD7B132577FA989C2C6708796ED791,
	xxHash3_RotL64_m5D6B9131E4C133E79AC874A31EB6A84FDA2ED29C,
	xxHash3_XorShift64_m14CFB98B253542B96241F24A1BAA59BC660F10C2,
	xxHash3_Mul128Fold64_mE4D677D2E0DACC2DAB3E33B876928A61E4E66036,
	xxHash3_Mix16_m66B2276A9641DEBD6D6FDD6009EBD190DC59102F,
	xxHash3_Mix32_mD1DB38B488929149D555AD9FA75F1EA953359BE0,
	xxHash3_Avalanche_m8AB7E61594297A37DDBEB74555B9B6E937CD91B9,
	xxHash3_AvalancheH64_m41A6AD68CEBE48FFD1B817843B5025616B08E0D8,
	xxHash3_rrmxmx_m2D7FE35812468525543E8EF5A8CD7553C369A297,
	xxHash3_Mix2Acc_mCC33F3919D7C753AC9997592EA6D6F95D35D72C3,
	xxHash3_MergeAcc_mF5CA25B12DC5478CDA428FDDD8EDEA7B070B1CDD,
	xxHash3_DefaultHashLongInternalLoop_m25D46D5E62D5A75BF6B18D459552A4F639D7B070,
	xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9,
	xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253,
	xxHash3_DefaultScrambleAcc_m5F9168BDE58B95E6C98B107B341D0D822AAAEC37,
	xxHash3__cctor_mA0B63A037F973A6F068985CA2FC3211DFBF7D443,
	xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96,
	xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902,
	ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB,
	_dlg_Hash64Long__ctor_mDC504F2C8145376139E58547908104ADD8FD52D0,
	_dlg_Hash64Long_Invoke_m837626A81F14C216D3128975C0B2978D3C5E7C6E,
	_dlg_Hash64Long_BeginInvoke_mA1FEF3E5124CD1D026F5FA45A9970A42302B0313,
	_dlg_Hash64Long_EndInvoke_mA841A6743B6E3EBFE983436CB6BBF27031023D32,
	_dlg_Hash128Long__ctor_mFF3199FFAE2727F28F530B3F7533903F070DB04F,
	_dlg_Hash128Long_Invoke_m317D69E443C63FC934B1F13A6858AB921B8C1CC2,
	_dlg_Hash128Long_BeginInvoke_mBD97066942246582A5DC7A71B02554F289A99F19,
	_dlg_Hash128Long_EndInvoke_m148E384C9A2B432008485B44B01677ADA88F06DC,
	_mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate__ctor_mC4CEFEF25527F4763BFA96816D111D98B92310DC,
	_mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate_Invoke_mF163DD67EFA71F0FE32BCCC3B5FBD086FDA4CC07,
	_mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate_BeginInvoke_m72F1C59AC0E40CF6C8E848898CEE2B5759546304,
	_mono_to_burst_Hash64Long_000006D2U24PostfixBurstDelegate_EndInvoke_m5E062E663A642913958E3D1A4919CE5EF263957C,
	_mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_GetFunctionPointerDiscard_m7144DD953FD85615D12B2EDCDE7AB9954D38025C,
	_mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_GetFunctionPointer_mC7E4C26BA892971547C98194040253C15EEE35EC,
	_mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_Constructor_m6507D143324ECBCD2FE616013ADA67337C94155E,
	_mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_Initialize_mA66A7767F0AAC12F42BD2C9B39613EA2D82A42C0,
	_mono_to_burst_Hash64Long_000006D2U24BurstDirectCall__cctor_m13AC75AEBC2FD031A952DB950F4C027FFC6B5E70,
	_mono_to_burst_Hash64Long_000006D2U24BurstDirectCall_Invoke_mC87E460FA345CACCF85CD86EA13CEBD930B55BD1,
	_mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate__ctor_m86354F7FEAAF492AFAC923D0CE23499E9ED6E704,
	_mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate_Invoke_m40642680ECC0193A68B034A68FBFBE97E8AF4751,
	_mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate_BeginInvoke_mF53A28897F3FC0BDD0326B55F483DA8397192DEC,
	_mono_to_burst_Hash128Long_000006D4U24PostfixBurstDelegate_EndInvoke_mC7319275D25A36863F42D6428CAAAF11F44A91F2,
	_mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_GetFunctionPointerDiscard_mC108448D3160787CF77AB5D6E10377642EC583B7,
	_mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_GetFunctionPointer_mF583489C4BD6846B5EEF49B97FCE5E84430F5B8A,
	_mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_Constructor_mC87D814FD0AB3519B1056DD73821B04BD03E6352,
	_mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_Initialize_m4E9209DA82CF3DC562043652ED1F379285C1CB44,
	_mono_to_burst_Hash128Long_000006D4U24BurstDirectCall__cctor_mC6909FB5B7505177AEF40C613A9F6BC40FCD36BF,
	_mono_to_burst_Hash128Long_000006D4U24BurstDirectCall_Invoke_mFBB174E281E0DF7263578F017D2E52573543CE83,
	xxHashDefaultKey__cctor_m3D6151FBA2140AD3B8CFCBB25B0E0725F60D611D,
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
extern void AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D_AdjustorThunk (void);
extern void AllocatorHandle_get_IsInstalled_m614267C7F347245EDED2CA4339DCFF3D59AF9067_AdjustorThunk (void);
extern void AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060_AdjustorThunk (void);
extern void AllocatorHandle_Install_m10DEDB2F19D24ACD24342A148D7F11DDBD3A5E59_AdjustorThunk (void);
extern void AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B_AdjustorThunk (void);
extern void AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148_AdjustorThunk (void);
extern void AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E_AdjustorThunk (void);
extern void AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF_AdjustorThunk (void);
extern void AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1_AdjustorThunk (void);
extern void Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk (void);
extern void Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk (void);
extern void Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907_AdjustorThunk (void);
extern void Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk (void);
extern void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk (void);
extern void Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk (void);
extern void Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk (void);
extern void StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED_AdjustorThunk (void);
extern void StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D_AdjustorThunk (void);
extern void StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678_AdjustorThunk (void);
extern void SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7_AdjustorThunk (void);
extern void SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685_AdjustorThunk (void);
extern void SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3_AdjustorThunk (void);
extern void SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F_AdjustorThunk (void);
extern void Long1024_ElementAt_m210AE22A8E84AD841395C742F0E22587F691E5E2_AdjustorThunk (void);
extern void Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1_AdjustorThunk (void);
extern void Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32_AdjustorThunk (void);
extern void RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580_AdjustorThunk (void);
extern void RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678_AdjustorThunk (void);
extern void RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE_AdjustorThunk (void);
extern void RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F_AdjustorThunk (void);
extern void MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3_AdjustorThunk (void);
extern void MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958_AdjustorThunk (void);
extern void MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF_AdjustorThunk (void);
extern void MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F_AdjustorThunk (void);
extern void ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[35] = 
{
	{ 0x06000017, AllocatorHandle_get_TableEntry_mF3BC93F69AA3E1764A9770FEE595E263239B703D_AdjustorThunk },
	{ 0x06000018, AllocatorHandle_get_IsInstalled_m614267C7F347245EDED2CA4339DCFF3D59AF9067_AdjustorThunk },
	{ 0x06000019, AllocatorHandle_Rewind_mDBC3DC2236265F7F712121F0F3683F73B8609060_AdjustorThunk },
	{ 0x0600001A, AllocatorHandle_Install_m10DEDB2F19D24ACD24342A148D7F11DDBD3A5E59_AdjustorThunk },
	{ 0x0600001C, AllocatorHandle_get_Value_m5F4A923E36A6E1C8983F187DFF73AA659350790B_AdjustorThunk },
	{ 0x0600001D, AllocatorHandle_Try_m2F88758592B176EF3A7CFDCB93599C0CE6A97148_AdjustorThunk },
	{ 0x0600001E, AllocatorHandle_get_Handle_m9CBE1298F12DFCBD71E6DBE77B08E5D0FD2F4A5E_AdjustorThunk },
	{ 0x0600001F, AllocatorHandle_get_ToAllocator_mC2F7F3B23A30D63C2A14984F5D25DDF117C5FEFF_AdjustorThunk },
	{ 0x06000020, AllocatorHandle_Dispose_m21567B9257F67FFE3EA2A5C44BE860BE641B0FA1_AdjustorThunk },
	{ 0x06000021, Range_Dispose_m466C86ACD4956014EE550CEC4245993E10629D42_AdjustorThunk },
	{ 0x06000022, Block_get_Bytes_m64C2E4525C2C3D7BE7B397B6492567A36E01A0DA_AdjustorThunk },
	{ 0x06000023, Block_get_AllocatedBytes_mC7DC93B1995B6837136BE97871E344CFDD32B907_AdjustorThunk },
	{ 0x06000024, Block_get_Alignment_m4EC57A8787D59AADAD695E0AFACF6346B05738FF_AdjustorThunk },
	{ 0x06000025, Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730_AdjustorThunk },
	{ 0x06000026, Block_Dispose_mE083CE7318FC04B02E006375040E0389B72148A9_AdjustorThunk },
	{ 0x06000027, Block_TryFree_mA87B5FC0C11DE355D660CFA5C698DCF77182E0C1_AdjustorThunk },
	{ 0x0600002A, StackAllocator_get_Handle_m22001B4045E018527C5B35D6715B550B6002C7ED_AdjustorThunk },
	{ 0x0600002B, StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D_AdjustorThunk },
	{ 0x0600002D, StackAllocator_Dispose_m121AA556092D97A553B56BE62D67332183F4F678_AdjustorThunk },
	{ 0x06000039, SlabAllocator_get_Handle_m1BAE636499EF06990B084B49FF05100F4D70C6D7_AdjustorThunk },
	{ 0x0600003A, SlabAllocator_get_SlabSizeInBytes_m09758AFE572F9BA8007BB7ED308086BA629DE685_AdjustorThunk },
	{ 0x0600003B, SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3_AdjustorThunk },
	{ 0x0600003D, SlabAllocator_Dispose_m5FD3C0E10FE09952A8F99656821B2D7F3B3E578F_AdjustorThunk },
	{ 0x06000055, Long1024_ElementAt_m210AE22A8E84AD841395C742F0E22587F691E5E2_AdjustorThunk },
	{ 0x060000CE, Spinner_Lock_m455E583C6650190C9F5D9211C134A8D7898006D1_AdjustorThunk },
	{ 0x060000CF, Spinner_Unlock_m1A26CB58AE3E733421698B9F8750D882C649EE32_AdjustorThunk },
	{ 0x060000D2, RewindableAllocator_Rewind_mCE9856063EE3638DC82C4CF8605DBEBEBF130580_AdjustorThunk },
	{ 0x060000D3, RewindableAllocator_Dispose_m9938A91127A11581DA09794A2C5E8DF6283F2678_AdjustorThunk },
	{ 0x060000D4, RewindableAllocator_Try_m1C0B2B6033081280DA48B6475F2A0B764E4F57BE_AdjustorThunk },
	{ 0x060000D6, RewindableAllocator_get_Handle_m056BEDCB4F2BEA70D8DB4B91FAE1C9B7A44D174F_AdjustorThunk },
	{ 0x060000D8, MemoryBlock__ctor_mE607093E03F964839EE507282CED5F6ACB9E64D3_AdjustorThunk },
	{ 0x060000D9, MemoryBlock_Rewind_mD4E938ABCCD22E3430DEDEA620DFEF56E7542958_AdjustorThunk },
	{ 0x060000DA, MemoryBlock_Dispose_m8B9123CC2024106EE5104952C15DA2E4902033EF_AdjustorThunk },
	{ 0x060000DB, MemoryBlock_TryAllocate_m3B55864CA6A89C02E25B9C7B49E2652B66FE3A7F_AdjustorThunk },
	{ 0x06000127, ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[342] = 
{
	3263,
	3263,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4838,
	4910,
	4665,
	4489,
	4683,
	4665,
	4665,
	-1,
	4924,
	1549,
	1066,
	445,
	1050,
	3128,
	3228,
	3263,
	2744,
	4860,
	3172,
	1885,
	3270,
	3172,
	3263,
	3263,
	3173,
	3173,
	3172,
	2652,
	3263,
	3172,
	1885,
	3270,
	3270,
	1885,
	4265,
	3263,
	4265,
	1549,
	1066,
	445,
	1929,
	4838,
	4892,
	4924,
	4924,
	4924,
	4265,
	3270,
	3172,
	1885,
	4265,
	3263,
	4265,
	1549,
	1066,
	445,
	1929,
	4838,
	4892,
	4924,
	4924,
	4924,
	4265,
	-1,
	4924,
	4924,
	4842,
	4924,
	3263,
	2668,
	3263,
	3263,
	4255,
	4801,
	4671,
	1720,
	4281,
	3930,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3905,
	4498,
	-1,
	4801,
	3393,
	3393,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3263,
	3263,
	-1,
	-1,
	3263,
	3263,
	1885,
	4265,
	3270,
	4265,
	2653,
	3263,
	3263,
	1885,
	1549,
	1066,
	445,
	1929,
	4838,
	4892,
	4924,
	4924,
	4924,
	4265,
	3440,
	4489,
	3439,
	3827,
	4545,
	-1,
	4187,
	4548,
	-1,
	4188,
	4189,
	3873,
	4838,
	4910,
	4924,
	3602,
	3602,
	3602,
	3602,
	3719,
	3602,
	3536,
	3442,
	3721,
	3721,
	3721,
	3721,
	3721,
	3721,
	3602,
	3605,
	3605,
	3605,
	3605,
	3605,
	3605,
	3602,
	4857,
	4549,
	4095,
	4684,
	4665,
	4492,
	4491,
	4281,
	4690,
	4671,
	4262,
	4282,
	4282,
	4283,
	3955,
	3633,
	4690,
	4690,
	4283,
	3960,
	3955,
	3440,
	3439,
	3600,
	4489,
	4924,
	3602,
	3602,
	1524,
	1549,
	257,
	71,
	1283,
	1549,
	257,
	71,
	1283,
	1549,
	257,
	71,
	2668,
	4838,
	4892,
	4924,
	4924,
	4924,
	3602,
	1549,
	257,
	71,
	2668,
	4838,
	4892,
	4924,
	4924,
	4924,
	3602,
	4924,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
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
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[8] = 
{
	{ 0x0600002C, 13,  (void**)&StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var, 0 },
	{ 0x0600002E, 14,  (void**)&StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var, 0 },
	{ 0x0600003C, 11,  (void**)&SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var, 0 },
	{ 0x0600003E, 12,  (void**)&SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var, 0 },
	{ 0x060000D5, 3,  (void**)&RewindableAllocator_Try_m6FA51FA56FBBAE6EB3C69E5E5DA79BE120712066_RuntimeMethod_var, 0 },
	{ 0x060000D7, 4,  (void**)&RewindableAllocator_TryU24BurstManaged_mFB5F38A7CBB467085EAFAB9430D4D4FFFB7C9AEE_RuntimeMethod_var, 0 },
	{ 0x060000F5, 10,  (void**)&xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102_RuntimeMethod_var, 0 },
	{ 0x060000F7, 9,  (void**)&xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[28] = 
{
	{ 0x02000014, { 12, 2 } },
	{ 0x02000023, { 16, 26 } },
	{ 0x02000025, { 42, 26 } },
	{ 0x02000027, { 68, 26 } },
	{ 0x02000029, { 94, 26 } },
	{ 0x0200002B, { 120, 28 } },
	{ 0x02000037, { 151, 14 } },
	{ 0x0200003A, { 167, 2 } },
	{ 0x02000049, { 173, 13 } },
	{ 0x06000003, { 0, 1 } },
	{ 0x06000004, { 1, 1 } },
	{ 0x06000005, { 2, 3 } },
	{ 0x06000006, { 5, 1 } },
	{ 0x06000007, { 6, 1 } },
	{ 0x06000008, { 7, 3 } },
	{ 0x06000009, { 10, 1 } },
	{ 0x06000011, { 11, 1 } },
	{ 0x06000058, { 14, 1 } },
	{ 0x06000059, { 15, 1 } },
	{ 0x060000B8, { 148, 1 } },
	{ 0x060000BC, { 149, 2 } },
	{ 0x060000C0, { 165, 2 } },
	{ 0x060000EB, { 169, 2 } },
	{ 0x060000EE, { 171, 2 } },
	{ 0x0600014A, { 186, 3 } },
	{ 0x0600014F, { 189, 2 } },
	{ 0x06000151, { 191, 1 } },
	{ 0x06000156, { 192, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[193] = 
{
	{ (Il2CppRGCTXDataType)2, 6 },
	{ (Il2CppRGCTXDataType)3, 21623 },
	{ (Il2CppRGCTXDataType)3, 25771 },
	{ (Il2CppRGCTXDataType)3, 25696 },
	{ (Il2CppRGCTXDataType)3, 21621 },
	{ (Il2CppRGCTXDataType)2, 3 },
	{ (Il2CppRGCTXDataType)3, 21655 },
	{ (Il2CppRGCTXDataType)3, 25770 },
	{ (Il2CppRGCTXDataType)3, 25695 },
	{ (Il2CppRGCTXDataType)3, 21653 },
	{ (Il2CppRGCTXDataType)3, 21640 },
	{ (Il2CppRGCTXDataType)2, 4 },
	{ (Il2CppRGCTXDataType)2, 594 },
	{ (Il2CppRGCTXDataType)3, 25730 },
	{ (Il2CppRGCTXDataType)2, 105 },
	{ (Il2CppRGCTXDataType)3, 25756 },
	{ (Il2CppRGCTXDataType)3, 8495 },
	{ (Il2CppRGCTXDataType)3, 25763 },
	{ (Il2CppRGCTXDataType)3, 24933 },
	{ (Il2CppRGCTXDataType)3, 8494 },
	{ (Il2CppRGCTXDataType)3, 25718 },
	{ (Il2CppRGCTXDataType)3, 8496 },
	{ (Il2CppRGCTXDataType)2, 458 },
	{ (Il2CppRGCTXDataType)3, 8485 },
	{ (Il2CppRGCTXDataType)3, 8591 },
	{ (Il2CppRGCTXDataType)3, 8488 },
	{ (Il2CppRGCTXDataType)3, 8461 },
	{ (Il2CppRGCTXDataType)3, 8484 },
	{ (Il2CppRGCTXDataType)3, 8556 },
	{ (Il2CppRGCTXDataType)3, 8487 },
	{ (Il2CppRGCTXDataType)3, 8519 },
	{ (Il2CppRGCTXDataType)3, 8486 },
	{ (Il2CppRGCTXDataType)2, 1840 },
	{ (Il2CppRGCTXDataType)3, 8490 },
	{ (Il2CppRGCTXDataType)2, 1856 },
	{ (Il2CppRGCTXDataType)3, 8493 },
	{ (Il2CppRGCTXDataType)2, 1835 },
	{ (Il2CppRGCTXDataType)3, 8489 },
	{ (Il2CppRGCTXDataType)2, 1851 },
	{ (Il2CppRGCTXDataType)3, 8492 },
	{ (Il2CppRGCTXDataType)2, 1845 },
	{ (Il2CppRGCTXDataType)3, 8491 },
	{ (Il2CppRGCTXDataType)3, 8605 },
	{ (Il2CppRGCTXDataType)3, 25766 },
	{ (Il2CppRGCTXDataType)3, 24936 },
	{ (Il2CppRGCTXDataType)3, 8604 },
	{ (Il2CppRGCTXDataType)3, 25721 },
	{ (Il2CppRGCTXDataType)3, 8606 },
	{ (Il2CppRGCTXDataType)3, 8499 },
	{ (Il2CppRGCTXDataType)2, 461 },
	{ (Il2CppRGCTXDataType)3, 8595 },
	{ (Il2CppRGCTXDataType)3, 8598 },
	{ (Il2CppRGCTXDataType)3, 8464 },
	{ (Il2CppRGCTXDataType)3, 8594 },
	{ (Il2CppRGCTXDataType)3, 8571 },
	{ (Il2CppRGCTXDataType)3, 8597 },
	{ (Il2CppRGCTXDataType)3, 8534 },
	{ (Il2CppRGCTXDataType)3, 8596 },
	{ (Il2CppRGCTXDataType)2, 1843 },
	{ (Il2CppRGCTXDataType)3, 8600 },
	{ (Il2CppRGCTXDataType)2, 1859 },
	{ (Il2CppRGCTXDataType)3, 8603 },
	{ (Il2CppRGCTXDataType)2, 1838 },
	{ (Il2CppRGCTXDataType)3, 8599 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)3, 8602 },
	{ (Il2CppRGCTXDataType)2, 1848 },
	{ (Il2CppRGCTXDataType)3, 8601 },
	{ (Il2CppRGCTXDataType)3, 8459 },
	{ (Il2CppRGCTXDataType)3, 25762 },
	{ (Il2CppRGCTXDataType)3, 24932 },
	{ (Il2CppRGCTXDataType)3, 8458 },
	{ (Il2CppRGCTXDataType)3, 25717 },
	{ (Il2CppRGCTXDataType)3, 8460 },
	{ (Il2CppRGCTXDataType)3, 8483 },
	{ (Il2CppRGCTXDataType)2, 457 },
	{ (Il2CppRGCTXDataType)3, 8449 },
	{ (Il2CppRGCTXDataType)3, 8590 },
	{ (Il2CppRGCTXDataType)3, 8452 },
	{ (Il2CppRGCTXDataType)3, 8448 },
	{ (Il2CppRGCTXDataType)3, 8555 },
	{ (Il2CppRGCTXDataType)3, 8451 },
	{ (Il2CppRGCTXDataType)3, 8518 },
	{ (Il2CppRGCTXDataType)3, 8450 },
	{ (Il2CppRGCTXDataType)2, 1839 },
	{ (Il2CppRGCTXDataType)3, 8454 },
	{ (Il2CppRGCTXDataType)2, 1855 },
	{ (Il2CppRGCTXDataType)3, 8457 },
	{ (Il2CppRGCTXDataType)2, 1834 },
	{ (Il2CppRGCTXDataType)3, 8453 },
	{ (Il2CppRGCTXDataType)2, 1850 },
	{ (Il2CppRGCTXDataType)3, 8456 },
	{ (Il2CppRGCTXDataType)2, 1844 },
	{ (Il2CppRGCTXDataType)3, 8455 },
	{ (Il2CppRGCTXDataType)3, 8569 },
	{ (Il2CppRGCTXDataType)3, 25765 },
	{ (Il2CppRGCTXDataType)3, 24935 },
	{ (Il2CppRGCTXDataType)3, 8568 },
	{ (Il2CppRGCTXDataType)3, 25720 },
	{ (Il2CppRGCTXDataType)3, 8570 },
	{ (Il2CppRGCTXDataType)3, 8498 },
	{ (Il2CppRGCTXDataType)2, 460 },
	{ (Il2CppRGCTXDataType)3, 8559 },
	{ (Il2CppRGCTXDataType)3, 8593 },
	{ (Il2CppRGCTXDataType)3, 8562 },
	{ (Il2CppRGCTXDataType)3, 8463 },
	{ (Il2CppRGCTXDataType)3, 8558 },
	{ (Il2CppRGCTXDataType)3, 8561 },
	{ (Il2CppRGCTXDataType)3, 8533 },
	{ (Il2CppRGCTXDataType)3, 8560 },
	{ (Il2CppRGCTXDataType)2, 1842 },
	{ (Il2CppRGCTXDataType)3, 8564 },
	{ (Il2CppRGCTXDataType)2, 1858 },
	{ (Il2CppRGCTXDataType)3, 8567 },
	{ (Il2CppRGCTXDataType)2, 1837 },
	{ (Il2CppRGCTXDataType)3, 8563 },
	{ (Il2CppRGCTXDataType)2, 1853 },
	{ (Il2CppRGCTXDataType)3, 8566 },
	{ (Il2CppRGCTXDataType)2, 1847 },
	{ (Il2CppRGCTXDataType)3, 8565 },
	{ (Il2CppRGCTXDataType)3, 8531 },
	{ (Il2CppRGCTXDataType)3, 25764 },
	{ (Il2CppRGCTXDataType)3, 24934 },
	{ (Il2CppRGCTXDataType)3, 8530 },
	{ (Il2CppRGCTXDataType)3, 25737 },
	{ (Il2CppRGCTXDataType)3, 25818 },
	{ (Il2CppRGCTXDataType)3, 25719 },
	{ (Il2CppRGCTXDataType)3, 8532 },
	{ (Il2CppRGCTXDataType)3, 8497 },
	{ (Il2CppRGCTXDataType)2, 459 },
	{ (Il2CppRGCTXDataType)3, 8521 },
	{ (Il2CppRGCTXDataType)3, 8592 },
	{ (Il2CppRGCTXDataType)3, 8524 },
	{ (Il2CppRGCTXDataType)3, 8462 },
	{ (Il2CppRGCTXDataType)3, 8520 },
	{ (Il2CppRGCTXDataType)3, 8557 },
	{ (Il2CppRGCTXDataType)3, 8523 },
	{ (Il2CppRGCTXDataType)3, 8522 },
	{ (Il2CppRGCTXDataType)2, 1841 },
	{ (Il2CppRGCTXDataType)3, 8526 },
	{ (Il2CppRGCTXDataType)2, 1857 },
	{ (Il2CppRGCTXDataType)3, 8529 },
	{ (Il2CppRGCTXDataType)2, 1836 },
	{ (Il2CppRGCTXDataType)3, 8525 },
	{ (Il2CppRGCTXDataType)2, 1852 },
	{ (Il2CppRGCTXDataType)3, 8528 },
	{ (Il2CppRGCTXDataType)2, 1846 },
	{ (Il2CppRGCTXDataType)3, 8527 },
	{ (Il2CppRGCTXDataType)3, 25930 },
	{ (Il2CppRGCTXDataType)3, 25760 },
	{ (Il2CppRGCTXDataType)3, 25692 },
	{ (Il2CppRGCTXDataType)3, 15948 },
	{ (Il2CppRGCTXDataType)2, 3834 },
	{ (Il2CppRGCTXDataType)3, 15947 },
	{ (Il2CppRGCTXDataType)3, 25739 },
	{ (Il2CppRGCTXDataType)3, 25722 },
	{ (Il2CppRGCTXDataType)3, 20600 },
	{ (Il2CppRGCTXDataType)3, 20599 },
	{ (Il2CppRGCTXDataType)3, 20596 },
	{ (Il2CppRGCTXDataType)3, 20598 },
	{ (Il2CppRGCTXDataType)3, 20597 },
	{ (Il2CppRGCTXDataType)3, 25278 },
	{ (Il2CppRGCTXDataType)3, 15949 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)3, 6110 },
	{ (Il2CppRGCTXDataType)3, 20595 },
	{ (Il2CppRGCTXDataType)2, 236 },
	{ (Il2CppRGCTXDataType)3, 25927 },
	{ (Il2CppRGCTXDataType)2, 578 },
	{ (Il2CppRGCTXDataType)3, 25835 },
	{ (Il2CppRGCTXDataType)3, 25758 },
	{ (Il2CppRGCTXDataType)3, 25836 },
	{ (Il2CppRGCTXDataType)3, 25759 },
	{ (Il2CppRGCTXDataType)2, 580 },
	{ (Il2CppRGCTXDataType)2, 3835 },
	{ (Il2CppRGCTXDataType)3, 20608 },
	{ (Il2CppRGCTXDataType)3, 20604 },
	{ (Il2CppRGCTXDataType)3, 21626 },
	{ (Il2CppRGCTXDataType)3, 21625 },
	{ (Il2CppRGCTXDataType)3, 20609 },
	{ (Il2CppRGCTXDataType)3, 20607 },
	{ (Il2CppRGCTXDataType)3, 25694 },
	{ (Il2CppRGCTXDataType)3, 20602 },
	{ (Il2CppRGCTXDataType)3, 20605 },
	{ (Il2CppRGCTXDataType)3, 20606 },
	{ (Il2CppRGCTXDataType)3, 25820 },
	{ (Il2CppRGCTXDataType)3, 21613 },
	{ (Il2CppRGCTXDataType)2, 338 },
	{ (Il2CppRGCTXDataType)3, 20603 },
	{ (Il2CppRGCTXDataType)3, 21620 },
	{ (Il2CppRGCTXDataType)3, 21639 },
	{ (Il2CppRGCTXDataType)3, 20601 },
	{ (Il2CppRGCTXDataType)3, 25059 },
};
extern const CustomAttributesCacheGenerator g_Unity_Collections_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule = 
{
	"Unity.Collections.dll",
	342,
	s_methodPointers,
	35,
	s_adjustorThunks,
	s_InvokerIndices,
	8,
	s_reversePInvokeIndices,
	28,
	s_rgctxIndices,
	193,
	s_rgctxValues,
	NULL,
	g_Unity_Collections_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
