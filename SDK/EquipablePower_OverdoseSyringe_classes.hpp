#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_OverdoseSyringe

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EquipablePower_OverdoseSyringe.EquipablePower_OverdoseSyringe_C
// 0x0020 (0x0258 - 0x0238)
class AEquipablePower_OverdoseSyringe_C final : public AEquipablePower
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UControllerHapticsComponent*            ControllerHaptics;                                 // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EquipablePower_OverdoseSyringe(int32 EntryPoint);
	void OnUnequip();
	void OnEquip();
	void Initialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipablePower_OverdoseSyringe_C">();
	}
	static class AEquipablePower_OverdoseSyringe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEquipablePower_OverdoseSyringe_C>();
	}
};
static_assert(alignof(AEquipablePower_OverdoseSyringe_C) == 0x000008, "Wrong alignment on AEquipablePower_OverdoseSyringe_C");
static_assert(sizeof(AEquipablePower_OverdoseSyringe_C) == 0x000258, "Wrong size on AEquipablePower_OverdoseSyringe_C");
static_assert(offsetof(AEquipablePower_OverdoseSyringe_C, UberGraphFrame) == 0x000238, "Member 'AEquipablePower_OverdoseSyringe_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEquipablePower_OverdoseSyringe_C, ControllerHaptics) == 0x000240, "Member 'AEquipablePower_OverdoseSyringe_C::ControllerHaptics' has a wrong offset!");
static_assert(offsetof(AEquipablePower_OverdoseSyringe_C, StaticMesh) == 0x000248, "Member 'AEquipablePower_OverdoseSyringe_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AEquipablePower_OverdoseSyringe_C, Ak) == 0x000250, "Member 'AEquipablePower_OverdoseSyringe_C::Ak' has a wrong offset!");

}
