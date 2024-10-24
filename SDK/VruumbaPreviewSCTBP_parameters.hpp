#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaPreviewSCTBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ExecuteUbergraph_VruumbaPreviewSCTBP
// 0x0090 (0x0090 - 0x0000)
struct VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_NewController;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_PlayerAccelByteID;                    // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVruumbaPreviewerAnimationTrackSCTBP_C* CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP) == 0x000010, "Wrong alignment on VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP");
static_assert(sizeof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP) == 0x000090, "Wrong size on VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, EntryPoint) == 0x000000, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000004, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_ComposeRotators_ReturnValue) == 0x000010, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_IsDedicatedServer_ReturnValue) == 0x00001C, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, K2Node_Event_NewController) == 0x000028, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::K2Node_Event_NewController' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, K2Node_Event_PlayerAccelByteID) == 0x000030, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::K2Node_Event_PlayerAccelByteID' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'VruumbaPreviewSCTBP_C_ExecuteUbergraph_VruumbaPreviewSCTBP::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.K2_OnSetCustomization
// 0x0010 (0x0010 - 0x0000)
struct VruumbaPreviewSCTBP_C_K2_OnSetCustomization final
{
public:
	class FString                                 PlayerAccelByteID;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaPreviewSCTBP_C_K2_OnSetCustomization) == 0x000008, "Wrong alignment on VruumbaPreviewSCTBP_C_K2_OnSetCustomization");
static_assert(sizeof(VruumbaPreviewSCTBP_C_K2_OnSetCustomization) == 0x000010, "Wrong size on VruumbaPreviewSCTBP_C_K2_OnSetCustomization");
static_assert(offsetof(VruumbaPreviewSCTBP_C_K2_OnSetCustomization, PlayerAccelByteID) == 0x000000, "Member 'VruumbaPreviewSCTBP_C_K2_OnSetCustomization::PlayerAccelByteID' has a wrong offset!");

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.StartHover
// 0x0001 (0x0001 - 0x0000)
struct VruumbaPreviewSCTBP_C_StartHover final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaPreviewSCTBP_C_StartHover) == 0x000001, "Wrong alignment on VruumbaPreviewSCTBP_C_StartHover");
static_assert(sizeof(VruumbaPreviewSCTBP_C_StartHover) == 0x000001, "Wrong size on VruumbaPreviewSCTBP_C_StartHover");
static_assert(offsetof(VruumbaPreviewSCTBP_C_StartHover, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'VruumbaPreviewSCTBP_C_StartHover::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.StopHover
// 0x0001 (0x0001 - 0x0000)
struct VruumbaPreviewSCTBP_C_StopHover final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VruumbaPreviewSCTBP_C_StopHover) == 0x000001, "Wrong alignment on VruumbaPreviewSCTBP_C_StopHover");
static_assert(sizeof(VruumbaPreviewSCTBP_C_StopHover) == 0x000001, "Wrong size on VruumbaPreviewSCTBP_C_StopHover");
static_assert(offsetof(VruumbaPreviewSCTBP_C_StopHover, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'VruumbaPreviewSCTBP_C_StopHover::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ReceivePossessed
// 0x0008 (0x0008 - 0x0000)
struct VruumbaPreviewSCTBP_C_ReceivePossessed final
{
public:
	class AController*                            NewController;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaPreviewSCTBP_C_ReceivePossessed) == 0x000008, "Wrong alignment on VruumbaPreviewSCTBP_C_ReceivePossessed");
static_assert(sizeof(VruumbaPreviewSCTBP_C_ReceivePossessed) == 0x000008, "Wrong size on VruumbaPreviewSCTBP_C_ReceivePossessed");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ReceivePossessed, NewController) == 0x000000, "Member 'VruumbaPreviewSCTBP_C_ReceivePossessed::NewController' has a wrong offset!");

// Function VruumbaPreviewSCTBP.VruumbaPreviewSCTBP_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct VruumbaPreviewSCTBP_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VruumbaPreviewSCTBP_C_ReceiveTick) == 0x000004, "Wrong alignment on VruumbaPreviewSCTBP_C_ReceiveTick");
static_assert(sizeof(VruumbaPreviewSCTBP_C_ReceiveTick) == 0x000004, "Wrong size on VruumbaPreviewSCTBP_C_ReceiveTick");
static_assert(offsetof(VruumbaPreviewSCTBP_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'VruumbaPreviewSCTBP_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

