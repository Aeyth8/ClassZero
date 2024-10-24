#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCT_accessoriesAnimBp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SCT_accessoriesAnimBp.SCT_accessoriesAnimBp_C
// 0x0210 (0x04D0 - 0x02C0)
class USCT_accessoriesAnimBp_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x02F8(0x01D8)(ContainsInstancedReference)

public:
	void ExecuteUbergraph_SCT_accessoriesAnimBp(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SCT_accessoriesAnimBp_C">();
	}
	static class USCT_accessoriesAnimBp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCT_accessoriesAnimBp_C>();
	}
};
static_assert(alignof(USCT_accessoriesAnimBp_C) == 0x000010, "Wrong alignment on USCT_accessoriesAnimBp_C");
static_assert(sizeof(USCT_accessoriesAnimBp_C) == 0x0004D0, "Wrong size on USCT_accessoriesAnimBp_C");
static_assert(offsetof(USCT_accessoriesAnimBp_C, UberGraphFrame) == 0x0002C0, "Member 'USCT_accessoriesAnimBp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USCT_accessoriesAnimBp_C, AnimGraphNode_Root) == 0x0002C8, "Member 'USCT_accessoriesAnimBp_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(USCT_accessoriesAnimBp_C, AnimGraphNode_CopyPoseFromMesh) == 0x0002F8, "Member 'USCT_accessoriesAnimBp_C::AnimGraphNode_CopyPoseFromMesh' has a wrong offset!");

}

