#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimPropBpSCT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AnimPropBpSCT.AnimPropBpSCT_C.ExecuteUbergraph_AnimPropBpSCT
// 0x0004 (0x0004 - 0x0000)
struct AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT) == 0x000004, "Wrong alignment on AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT");
static_assert(sizeof(AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT) == 0x000004, "Wrong size on AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT");
static_assert(offsetof(AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT, EntryPoint) == 0x000000, "Member 'AnimPropBpSCT_C_ExecuteUbergraph_AnimPropBpSCT::EntryPoint' has a wrong offset!");

// Function AnimPropBpSCT.AnimPropBpSCT_C.UserConstructionScript
// 0x0100 (0x0100 - 0x0000)
struct AnimPropBpSCT_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_ComposeTransforms_ReturnValue;            // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0070(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimPropBpSCT_C_UserConstructionScript) == 0x000010, "Wrong alignment on AnimPropBpSCT_C_UserConstructionScript");
static_assert(sizeof(AnimPropBpSCT_C_UserConstructionScript) == 0x000100, "Wrong size on AnimPropBpSCT_C_UserConstructionScript");
static_assert(offsetof(AnimPropBpSCT_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'AnimPropBpSCT_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimPropBpSCT_C_UserConstructionScript, CallFunc_GetSocketTransform_ReturnValue) == 0x000010, "Member 'AnimPropBpSCT_C_UserConstructionScript::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimPropBpSCT_C_UserConstructionScript, CallFunc_ComposeTransforms_ReturnValue) == 0x000040, "Member 'AnimPropBpSCT_C_UserConstructionScript::CallFunc_ComposeTransforms_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimPropBpSCT_C_UserConstructionScript, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000070, "Member 'AnimPropBpSCT_C_UserConstructionScript::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(AnimPropBpSCT_C_UserConstructionScript, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0000FC, "Member 'AnimPropBpSCT_C_UserConstructionScript::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

}
