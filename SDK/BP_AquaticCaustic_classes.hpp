#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AquaticCaustic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AquaticCaustic.BP_AquaticCaustic_C
// 0x0070 (0x0298 - 0x0228)
class ABP_AquaticCaustic_C final : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                        SunDirection;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimationFrame;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADirectionalLight*                      LightSource;                                       // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     AnimationFrames;                                   // 0x0260(0x0010)(Edit, BlueprintVisible)
	float                                         AnimationSpeed;                                    // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     DynamicMaterial;                                   // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              UVScale;                                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              UVMove;                                            // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AquaticCaustic(int32 EntryPoint);
	void CausticTimer();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetParameters();
	void SetInteraction(class UTexture* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AquaticCaustic_C">();
	}
	static class ABP_AquaticCaustic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AquaticCaustic_C>();
	}
};
static_assert(alignof(ABP_AquaticCaustic_C) == 0x000008, "Wrong alignment on ABP_AquaticCaustic_C");
static_assert(sizeof(ABP_AquaticCaustic_C) == 0x000298, "Wrong size on ABP_AquaticCaustic_C");
static_assert(offsetof(ABP_AquaticCaustic_C, UberGraphFrame) == 0x000228, "Member 'ABP_AquaticCaustic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, StaticMesh) == 0x000230, "Member 'ABP_AquaticCaustic_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, Plane) == 0x000238, "Member 'ABP_AquaticCaustic_C::Plane' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, SunDirection) == 0x000240, "Member 'ABP_AquaticCaustic_C::SunDirection' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, MaterialInstance) == 0x000248, "Member 'ABP_AquaticCaustic_C::MaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, AnimationFrame) == 0x000250, "Member 'ABP_AquaticCaustic_C::AnimationFrame' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, LightSource) == 0x000258, "Member 'ABP_AquaticCaustic_C::LightSource' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, AnimationFrames) == 0x000260, "Member 'ABP_AquaticCaustic_C::AnimationFrames' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, AnimationSpeed) == 0x000270, "Member 'ABP_AquaticCaustic_C::AnimationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, DynamicMaterial) == 0x000278, "Member 'ABP_AquaticCaustic_C::DynamicMaterial' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, UVScale) == 0x000280, "Member 'ABP_AquaticCaustic_C::UVScale' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, UVMove) == 0x000288, "Member 'ABP_AquaticCaustic_C::UVMove' has a wrong offset!");
static_assert(offsetof(ABP_AquaticCaustic_C, Timer) == 0x000290, "Member 'ABP_AquaticCaustic_C::Timer' has a wrong offset!");

}

