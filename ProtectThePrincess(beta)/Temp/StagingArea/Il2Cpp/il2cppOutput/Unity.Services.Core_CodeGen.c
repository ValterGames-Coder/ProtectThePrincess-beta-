#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Unity.Services.Core.InitializationOptions Unity.Services.Core.IUnityServices::get_Options()
// 0x00000002 System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Unity.Services.Core.InitializationOptions::get_Values()
extern void InitializationOptions_get_Values_m271DC6F423A1C5EE25EA4F0B6ED27EF1965BC18D (void);
// 0x00000003 System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
extern void ServicesInitializationException__ctor_m0AEEA3462F9CDB75941615F596738DED9A9FC01E (void);
// 0x00000004 System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String,System.Exception)
extern void ServicesInitializationException__ctor_mDB62E664CCAE4AF4458273E554D2F89253EABDFA (void);
// 0x00000005 Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
extern void UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC (void);
// 0x00000006 System.Void Unity.Services.Core.UnityServices::set_Instance(Unity.Services.Core.IUnityServices)
extern void UnityServices_set_Instance_m39A45BA6CA2C6A05AE326D5D702B5C9C3B10CE90 (void);
// 0x00000007 System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
extern void UnityServices_get_InstantiationCompletion_m59DE03F61C3C54AA331F4338E5683613392D8E71 (void);
// 0x00000008 System.Void Unity.Services.Core.MainThreadUtils::SetMainThreadId()
extern void MainThreadUtils_SetMainThreadId_m2AB19FE5A662625ACA6B5254B33EA55F6C4ACA85 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	NULL,
	InitializationOptions_get_Values_m271DC6F423A1C5EE25EA4F0B6ED27EF1965BC18D,
	ServicesInitializationException__ctor_m0AEEA3462F9CDB75941615F596738DED9A9FC01E,
	ServicesInitializationException__ctor_mDB62E664CCAE4AF4458273E554D2F89253EABDFA,
	UnityServices_get_Instance_m11D20930B5F8F7422CAE8104CF76AB99E8C9A1FC,
	UnityServices_set_Instance_m39A45BA6CA2C6A05AE326D5D702B5C9C3B10CE90,
	UnityServices_get_InstantiationCompletion_m59DE03F61C3C54AA331F4338E5683613392D8E71,
	MainThreadUtils_SetMainThreadId_m2AB19FE5A662625ACA6B5254B33EA55F6C4ACA85,
};
static const int32_t s_InvokerIndices[8] = 
{
	3190,
	3190,
	3263,
	1552,
	4896,
	4845,
	4896,
	4924,
};
extern const CustomAttributesCacheGenerator g_Unity_Services_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Services_Core_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Services_Core_CodeGenModule = 
{
	"Unity.Services.Core.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_Services_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
