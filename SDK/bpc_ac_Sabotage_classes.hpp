#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bpc_ac_Sabotage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass bpc_ac_Sabotage.bpc_ac_Sabotage_C
// 0x0048 (0x00F8 - 0x00B0)
class Ubpc_ac_Sabotage_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                          IsSabotaged;                                       // 0x00B8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSabotageStateChange;                             // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Cooldown;                                          // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSabotageCooldownUpdate;                          // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         CooldownTickRate;                                  // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SabotageCanBeUndone;                               // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CoolDownBeginTimeStamp;                            // 0x00F0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

public:
	void OnSabotageStateChange__DelegateSignature(bool IsSabotaged_0);
	void OnSabotageCooldownUpdate__DelegateSignature(float CooldownLeft);
	void ExecuteUbergraph_bpc_ac_Sabotage(int32 EntryPoint);
	void SabotageServer();
	void CooldownUpdate();
	void SabotageUndoneServer();
	void OnRep_IsSabotaged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bpc_ac_Sabotage_C">();
	}
	static class Ubpc_ac_Sabotage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubpc_ac_Sabotage_C>();
	}
};
static_assert(alignof(Ubpc_ac_Sabotage_C) == 0x000008, "Wrong alignment on Ubpc_ac_Sabotage_C");
static_assert(sizeof(Ubpc_ac_Sabotage_C) == 0x0000F8, "Wrong size on Ubpc_ac_Sabotage_C");
static_assert(offsetof(Ubpc_ac_Sabotage_C, UberGraphFrame) == 0x0000B0, "Member 'Ubpc_ac_Sabotage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, IsSabotaged) == 0x0000B8, "Member 'Ubpc_ac_Sabotage_C::IsSabotaged' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, OnSabotageStateChange) == 0x0000C0, "Member 'Ubpc_ac_Sabotage_C::OnSabotageStateChange' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, Cooldown) == 0x0000D0, "Member 'Ubpc_ac_Sabotage_C::Cooldown' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, OnSabotageCooldownUpdate) == 0x0000D8, "Member 'Ubpc_ac_Sabotage_C::OnSabotageCooldownUpdate' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, CooldownTickRate) == 0x0000E8, "Member 'Ubpc_ac_Sabotage_C::CooldownTickRate' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, SabotageCanBeUndone) == 0x0000EC, "Member 'Ubpc_ac_Sabotage_C::SabotageCanBeUndone' has a wrong offset!");
static_assert(offsetof(Ubpc_ac_Sabotage_C, CoolDownBeginTimeStamp) == 0x0000F0, "Member 'Ubpc_ac_Sabotage_C::CoolDownBeginTimeStamp' has a wrong offset!");

}
