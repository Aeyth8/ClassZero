#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_SprintBoost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EquipablePower_SprintBoost.EquipablePower_SprintBoost_C
// 0x0040 (0x0278 - 0x0238)
class AEquipablePower_SprintBoost_C final : public AEquipablePower
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ParticleSystemCenter;                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem3;                                   // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem2;                                   // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem1;                                   // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EquipablePower_SprintBoost(int32 EntryPoint);
	void Deactivate(bool WasCancelled);
	void PillCosmetics();
	void Activate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipablePower_SprintBoost_C">();
	}
	static class AEquipablePower_SprintBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEquipablePower_SprintBoost_C>();
	}
};
static_assert(alignof(AEquipablePower_SprintBoost_C) == 0x000008, "Wrong alignment on AEquipablePower_SprintBoost_C");
static_assert(sizeof(AEquipablePower_SprintBoost_C) == 0x000278, "Wrong size on AEquipablePower_SprintBoost_C");
static_assert(offsetof(AEquipablePower_SprintBoost_C, UberGraphFrame) == 0x000238, "Member 'AEquipablePower_SprintBoost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, ParticleSystemCenter) == 0x000240, "Member 'AEquipablePower_SprintBoost_C::ParticleSystemCenter' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, ParticleSystem3) == 0x000248, "Member 'AEquipablePower_SprintBoost_C::ParticleSystem3' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, ParticleSystem2) == 0x000250, "Member 'AEquipablePower_SprintBoost_C::ParticleSystem2' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, ParticleSystem1) == 0x000258, "Member 'AEquipablePower_SprintBoost_C::ParticleSystem1' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, ParticleSystem) == 0x000260, "Member 'AEquipablePower_SprintBoost_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, StaticMesh) == 0x000268, "Member 'AEquipablePower_SprintBoost_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AEquipablePower_SprintBoost_C, Ak) == 0x000270, "Member 'AEquipablePower_SprintBoost_C::Ak' has a wrong offset!");

}
