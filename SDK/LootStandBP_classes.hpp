#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootStandBP

#include "Basic.hpp"

#include "LootBP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LootStandBP.LootStandBP_C
// 0x0040 (0x0368 - 0x0328)
class ALootStandBP_C : public ALootBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_LootStandBP_C;                      // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class URectLightComponent*                    RectLight;                                         // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Glass;                                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         Timeline_3_LightIntensity_BDBA819C4D907AB5C589D788428E0BE9; // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_3__Direction_BDBA819C4D907AB5C589D788428E0BE9; // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_345[0x3];                                      // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_3;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OpenLightColor;                                    // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      NotInteractableMaterial;                           // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LootStandBP(int32 EntryPoint);
	void LootPickedUp_Cosmetic();
	void OpenUpdate_Cosmetic(float Alpha);
	void Cosmetic_DestroyLight();
	void Timeline_3__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void SetInteractMaterial();
	void OpenFinished_Cosmetic();
	void OpenStart_Cosmetic();
	void Spawn_Loot(class APickupActor_C** Spawned_Pickup);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LootStandBP_C">();
	}
	static class ALootStandBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALootStandBP_C>();
	}
};
static_assert(alignof(ALootStandBP_C) == 0x000008, "Wrong alignment on ALootStandBP_C");
static_assert(sizeof(ALootStandBP_C) == 0x000368, "Wrong size on ALootStandBP_C");
static_assert(offsetof(ALootStandBP_C, UberGraphFrame_LootStandBP_C) == 0x000328, "Member 'ALootStandBP_C::UberGraphFrame_LootStandBP_C' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, RectLight) == 0x000330, "Member 'ALootStandBP_C::RectLight' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, Glass) == 0x000338, "Member 'ALootStandBP_C::Glass' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, Timeline_3_LightIntensity_BDBA819C4D907AB5C589D788428E0BE9) == 0x000340, "Member 'ALootStandBP_C::Timeline_3_LightIntensity_BDBA819C4D907AB5C589D788428E0BE9' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, Timeline_3__Direction_BDBA819C4D907AB5C589D788428E0BE9) == 0x000344, "Member 'ALootStandBP_C::Timeline_3__Direction_BDBA819C4D907AB5C589D788428E0BE9' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, Timeline_3) == 0x000348, "Member 'ALootStandBP_C::Timeline_3' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, OpenLightColor) == 0x000350, "Member 'ALootStandBP_C::OpenLightColor' has a wrong offset!");
static_assert(offsetof(ALootStandBP_C, NotInteractableMaterial) == 0x000360, "Member 'ALootStandBP_C::NotInteractableMaterial' has a wrong offset!");

}

