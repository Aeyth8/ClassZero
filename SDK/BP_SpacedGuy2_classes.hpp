#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpacedGuy2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpacedGuy2.BP_SpacedGuy2_C
// 0x0120 (0x0340 - 0x0220)
class ABP_SpacedGuy2_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           Ak;                                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         Mover_Lerp_CD63F9CC48B75D3AF0DD26B79950D7A9;       // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Mover__Direction_CD63F9CC48B75D3AF0DD26B79950D7A9; // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Mover;                                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         X;                                                 // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Y;                                                 // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Z;                                                 // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         X_ROT;                                             // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Y_ROT;                                             // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Z_ROT;                                             // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_278[0x8];                                      // 0x0278(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Target;                                            // 0x0280(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             Spawn;                                             // 0x02B0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	float                                         SecondsToMove;                                     // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBetweenRespawn;                               // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAssetData                             AnimationPose;                                     // 0x02E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         FrozenPose;                                        // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomPose_;                                       // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SpacedGuy2(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Mover__UpdateFunc();
	void Mover__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpacedGuy2_C">();
	}
	static class ABP_SpacedGuy2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpacedGuy2_C>();
	}
};
static_assert(alignof(ABP_SpacedGuy2_C) == 0x000010, "Wrong alignment on ABP_SpacedGuy2_C");
static_assert(sizeof(ABP_SpacedGuy2_C) == 0x000340, "Wrong size on ABP_SpacedGuy2_C");
static_assert(offsetof(ABP_SpacedGuy2_C, UberGraphFrame) == 0x000220, "Member 'ABP_SpacedGuy2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Ak) == 0x000228, "Member 'ABP_SpacedGuy2_C::Ak' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, ParticleSystem) == 0x000230, "Member 'ABP_SpacedGuy2_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, SkeletalMesh) == 0x000238, "Member 'ABP_SpacedGuy2_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Scene) == 0x000240, "Member 'ABP_SpacedGuy2_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_SpacedGuy2_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Mover_Lerp_CD63F9CC48B75D3AF0DD26B79950D7A9) == 0x000250, "Member 'ABP_SpacedGuy2_C::Mover_Lerp_CD63F9CC48B75D3AF0DD26B79950D7A9' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Mover__Direction_CD63F9CC48B75D3AF0DD26B79950D7A9) == 0x000254, "Member 'ABP_SpacedGuy2_C::Mover__Direction_CD63F9CC48B75D3AF0DD26B79950D7A9' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Mover) == 0x000258, "Member 'ABP_SpacedGuy2_C::Mover' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, X) == 0x000260, "Member 'ABP_SpacedGuy2_C::X' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Y) == 0x000264, "Member 'ABP_SpacedGuy2_C::Y' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Z) == 0x000268, "Member 'ABP_SpacedGuy2_C::Z' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, X_ROT) == 0x00026C, "Member 'ABP_SpacedGuy2_C::X_ROT' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Y_ROT) == 0x000270, "Member 'ABP_SpacedGuy2_C::Y_ROT' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Z_ROT) == 0x000274, "Member 'ABP_SpacedGuy2_C::Z_ROT' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Target) == 0x000280, "Member 'ABP_SpacedGuy2_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, Spawn) == 0x0002B0, "Member 'ABP_SpacedGuy2_C::Spawn' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, SecondsToMove) == 0x0002E0, "Member 'ABP_SpacedGuy2_C::SecondsToMove' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, DelayBetweenRespawn) == 0x0002E4, "Member 'ABP_SpacedGuy2_C::DelayBetweenRespawn' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, AnimationPose) == 0x0002E8, "Member 'ABP_SpacedGuy2_C::AnimationPose' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, FrozenPose) == 0x000338, "Member 'ABP_SpacedGuy2_C::FrozenPose' has a wrong offset!");
static_assert(offsetof(ABP_SpacedGuy2_C, RandomPose_) == 0x00033C, "Member 'ABP_SpacedGuy2_C::RandomPose_' has a wrong offset!");

}

