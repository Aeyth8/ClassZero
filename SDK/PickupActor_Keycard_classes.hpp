#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickupActor_Keycard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_KeyCardColors_structs.hpp"
#include "PickupActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PickupActor_Keycard.PickupActor_Keycard_C
// 0x0028 (0x02A0 - 0x0278)
class APickupActor_Keycard_C : public APickupActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PickupActor_Keycard_C;              // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextRenderComponent*                   Description;                                       // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	E_KeyCardColors                               YourColor;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PickupActor_Keycard(int32 EntryPoint);
	void ReceiveBeginPlay();
	bool ASC_Has_Tag(class AActor* Actor, const struct FGameplayTagContainer& TagContainer);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickupActor_Keycard_C">();
	}
	static class APickupActor_Keycard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APickupActor_Keycard_C>();
	}
};
static_assert(alignof(APickupActor_Keycard_C) == 0x000008, "Wrong alignment on APickupActor_Keycard_C");
static_assert(sizeof(APickupActor_Keycard_C) == 0x0002A0, "Wrong size on APickupActor_Keycard_C");
static_assert(offsetof(APickupActor_Keycard_C, UberGraphFrame_PickupActor_Keycard_C) == 0x000278, "Member 'APickupActor_Keycard_C::UberGraphFrame_PickupActor_Keycard_C' has a wrong offset!");
static_assert(offsetof(APickupActor_Keycard_C, Description) == 0x000280, "Member 'APickupActor_Keycard_C::Description' has a wrong offset!");
static_assert(offsetof(APickupActor_Keycard_C, ParticleSystem) == 0x000288, "Member 'APickupActor_Keycard_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(APickupActor_Keycard_C, SpringArm) == 0x000290, "Member 'APickupActor_Keycard_C::SpringArm' has a wrong offset!");
static_assert(offsetof(APickupActor_Keycard_C, YourColor) == 0x000298, "Member 'APickupActor_Keycard_C::YourColor' has a wrong offset!");

}
