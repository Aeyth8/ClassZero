#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OxygenKitHolder_Remaints

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function OxygenKitHolder_Remaints.OxygenKitHolder_Remaints_C.ExecuteUbergraph_OxygenKitHolder_Remaints
// 0x00C8 (0x00C8 - 0x0000)
struct OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0024(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0038(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints) == 0x000008, "Wrong alignment on OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints");
static_assert(sizeof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints) == 0x0000C8, "Wrong size on OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, EntryPoint) == 0x000000, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::EntryPoint' has a wrong offset!");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, CallFunc_Lerp_ReturnValue) == 0x000004, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, Temp_struct_Variable) == 0x000008, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, Temp_delegate_Variable) == 0x000024, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, CallFunc_PostAkEvent_ReturnValue) == 0x000034, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000038, "Member 'OxygenKitHolder_Remaints_C_ExecuteUbergraph_OxygenKitHolder_Remaints::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

