#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DrowningCollider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CharacterColliderBP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DrowningCollider.DrowningCollider_C
// 0x0050 (0x02B0 - 0x0260)
class ADrowningCollider_C final : public ACharacterColliderBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_DrowningCollider_C;                 // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class ACharacterSCTBP_C*>              DrowningCharacters;                                // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             On_SomeoneIsDrowning;                              // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSuperDrown;                                      // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_289[0x3];                                      // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            GEHandle;                                          // 0x028C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterSCTBP_C*                      NewVar_0;                                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ItemSpawnLocation;                                 // 0x02A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void On_SomeoneIsDrowning__DelegateSignature();
	void ExecuteUbergraph_DrowningCollider(int32 EntryPoint);
	void Spawn_Item(class AActor* Actor);
	void Character_Entered(class ACharacterSCTBP_C* Character);

	void GetDrowningLevel(class ACharacterSCT* Character, float* Level) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DrowningCollider_C">();
	}
	static class ADrowningCollider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADrowningCollider_C>();
	}
};
static_assert(alignof(ADrowningCollider_C) == 0x000008, "Wrong alignment on ADrowningCollider_C");
static_assert(sizeof(ADrowningCollider_C) == 0x0002B0, "Wrong size on ADrowningCollider_C");
static_assert(offsetof(ADrowningCollider_C, UberGraphFrame_DrowningCollider_C) == 0x000260, "Member 'ADrowningCollider_C::UberGraphFrame_DrowningCollider_C' has a wrong offset!");
static_assert(offsetof(ADrowningCollider_C, DrowningCharacters) == 0x000268, "Member 'ADrowningCollider_C::DrowningCharacters' has a wrong offset!");
static_assert(offsetof(ADrowningCollider_C, On_SomeoneIsDrowning) == 0x000278, "Member 'ADrowningCollider_C::On_SomeoneIsDrowning' has a wrong offset!");
static_assert(offsetof(ADrowningCollider_C, IsSuperDrown) == 0x000288, "Member 'ADrowningCollider_C::IsSuperDrown' has a wrong offset!");
static_assert(offsetof(ADrowningCollider_C, GEHandle) == 0x00028C, "Member 'ADrowningCollider_C::GEHandle' has a wrong offset!");
static_assert(offsetof(ADrowningCollider_C, NewVar_0) == 0x000298, "Member 'ADrowningCollider_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ADrowningCollider_C, ItemSpawnLocation) == 0x0002A0, "Member 'ADrowningCollider_C::ItemSpawnLocation' has a wrong offset!");

}

