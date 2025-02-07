#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_Ketcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"
#include "E_ItemAnimation_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EquipablePower_Ketcher.EquipablePower_Ketcher_C
// 0x0050 (0x0288 - 0x0238)
class AEquipablePower_Ketcher_C final : public AEquipablePower
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_swing;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   IntactBottle;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*            AimingReticle;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProjectileGravity;                                 // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             TargetCharacter;                                   // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range;                                             // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             Character_Placeholder;                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EquipablePower_Ketcher(int32 EntryPoint);
	void ItemAnimation(E_ItemAnimation ItemAnimation_0);
	void Initialize();
	void Ketcher_Particle_effect();
	void Audio_Bat_Impact();
	void Audio_Swing_Bat();
	void Impact();
	void CalculateThrowTargets();
	struct FVector GetSpawnPoint();
	struct FVector InterpReticleLocation(const struct FVector& Target);
	void BreakBottle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipablePower_Ketcher_C">();
	}
	static class AEquipablePower_Ketcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEquipablePower_Ketcher_C>();
	}
};
static_assert(alignof(AEquipablePower_Ketcher_C) == 0x000008, "Wrong alignment on AEquipablePower_Ketcher_C");
static_assert(sizeof(AEquipablePower_Ketcher_C) == 0x000288, "Wrong size on AEquipablePower_Ketcher_C");
static_assert(offsetof(AEquipablePower_Ketcher_C, UberGraphFrame) == 0x000238, "Member 'AEquipablePower_Ketcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, P_swing) == 0x000240, "Member 'AEquipablePower_Ketcher_C::P_swing' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, Ak) == 0x000248, "Member 'AEquipablePower_Ketcher_C::Ak' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, IntactBottle) == 0x000250, "Member 'AEquipablePower_Ketcher_C::IntactBottle' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, Scene) == 0x000258, "Member 'AEquipablePower_Ketcher_C::Scene' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, AimingReticle) == 0x000260, "Member 'AEquipablePower_Ketcher_C::AimingReticle' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, ProjectileGravity) == 0x000268, "Member 'AEquipablePower_Ketcher_C::ProjectileGravity' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, TargetCharacter) == 0x000270, "Member 'AEquipablePower_Ketcher_C::TargetCharacter' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, Range) == 0x000278, "Member 'AEquipablePower_Ketcher_C::Range' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Ketcher_C, Character_Placeholder) == 0x000280, "Member 'AEquipablePower_Ketcher_C::Character_Placeholder' has a wrong offset!");

}

