#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_vruumbaAntennaB_ANIMBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SK_vruumbaAntennaB_ANIMBP.SK_vruumbaAntennaB_ANIMBP_C.ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP
// 0x0080 (0x0080 - 0x0000)
struct SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_InverseTransformDirection_ReturnValue;    // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformDirection_ReturnValue;           // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP) == 0x000010, "Wrong alignment on SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP");
static_assert(sizeof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP) == 0x000080, "Wrong size on SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, EntryPoint) == 0x000000, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_GetVelocity_ReturnValue) == 0x000040, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_InverseTransformDirection_ReturnValue) == 0x00004C, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_InverseTransformDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000058, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000060, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP, CallFunc_TransformDirection_ReturnValue) == 0x00006C, "Member 'SK_vruumbaAntennaB_ANIMBP_C_ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP::CallFunc_TransformDirection_ReturnValue' has a wrong offset!");

// Function SK_vruumbaAntennaB_ANIMBP.SK_vruumbaAntennaB_ANIMBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'SK_vruumbaAntennaB_ANIMBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function SK_vruumbaAntennaB_ANIMBP.SK_vruumbaAntennaB_ANIMBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct SK_vruumbaAntennaB_ANIMBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(SK_vruumbaAntennaB_ANIMBP_C_AnimGraph) == 0x000008, "Wrong alignment on SK_vruumbaAntennaB_ANIMBP_C_AnimGraph");
static_assert(sizeof(SK_vruumbaAntennaB_ANIMBP_C_AnimGraph) == 0x000010, "Wrong size on SK_vruumbaAntennaB_ANIMBP_C_AnimGraph");
static_assert(offsetof(SK_vruumbaAntennaB_ANIMBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'SK_vruumbaAntennaB_ANIMBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}
