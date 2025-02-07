#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_vruumbaAntennaB_ANIMBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_vruumbaAntennaB_ANIMBP.SK_vruumbaAntennaB_ANIMBP_C
// 0x04D0 (0x0790 - 0x02C0)
class USK_vruumbaAntennaB_ANIMBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose;                         // 0x02F8(0x0010)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0308(0x0020)()
	uint8                                         Pad_328[0x8];                                      // 0x0328(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics;                        // 0x0330(0x0440)()
	struct FVector                                Velocity;                                          // 0x0770(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77C[0x4];                                      // 0x077C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  OwningPawn;                                        // 0x0780(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SK_vruumbaAntennaB_ANIMBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_vruumbaAntennaB_ANIMBP_C">();
	}
	static class USK_vruumbaAntennaB_ANIMBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_vruumbaAntennaB_ANIMBP_C>();
	}
};
static_assert(alignof(USK_vruumbaAntennaB_ANIMBP_C) == 0x000010, "Wrong alignment on USK_vruumbaAntennaB_ANIMBP_C");
static_assert(sizeof(USK_vruumbaAntennaB_ANIMBP_C) == 0x000790, "Wrong size on USK_vruumbaAntennaB_ANIMBP_C");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, UberGraphFrame) == 0x0002C0, "Member 'USK_vruumbaAntennaB_ANIMBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'USK_vruumbaAntennaB_ANIMBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, AnimGraphNode_MeshRefPose) == 0x0002F8, "Member 'USK_vruumbaAntennaB_ANIMBP_C::AnimGraphNode_MeshRefPose' has a wrong offset!");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, AnimGraphNode_ComponentToLocalSpace) == 0x000308, "Member 'USK_vruumbaAntennaB_ANIMBP_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, AnimGraphNode_AnimDynamics) == 0x000330, "Member 'USK_vruumbaAntennaB_ANIMBP_C::AnimGraphNode_AnimDynamics' has a wrong offset!");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, Velocity) == 0x000770, "Member 'USK_vruumbaAntennaB_ANIMBP_C::Velocity' has a wrong offset!");
static_assert(offsetof(USK_vruumbaAntennaB_ANIMBP_C, OwningPawn) == 0x000780, "Member 'USK_vruumbaAntennaB_ANIMBP_C::OwningPawn' has a wrong offset!");

}

