#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Emote_PickUpDrink

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Emote_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Emote_PickUpDrink.Emote_PickUpDrink_C
// 0x0010 (0x00E0 - 0x00D0)
class UEmote_PickUpDrink_C final : public UEmote_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Emote_PickUpDrink_C;                // 0x00D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAnimMontage*                           AnimMontage;                                       // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Emote_PickUpDrink(int32 EntryPoint);
	void On_Removed();
	void ReceiveBeginPlay();
	void OnCompleted_2349577148DEA1D619D0FDAD2F45AA39(class FName NotifyName);
	void OnBlendOut_2349577148DEA1D619D0FDAD2F45AA39(class FName NotifyName);
	void OnInterrupted_2349577148DEA1D619D0FDAD2F45AA39(class FName NotifyName);
	void OnNotifyBegin_2349577148DEA1D619D0FDAD2F45AA39(class FName NotifyName);
	void OnNotifyEnd_2349577148DEA1D619D0FDAD2F45AA39(class FName NotifyName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Emote_PickUpDrink_C">();
	}
	static class UEmote_PickUpDrink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmote_PickUpDrink_C>();
	}
};
static_assert(alignof(UEmote_PickUpDrink_C) == 0x000008, "Wrong alignment on UEmote_PickUpDrink_C");
static_assert(sizeof(UEmote_PickUpDrink_C) == 0x0000E0, "Wrong size on UEmote_PickUpDrink_C");
static_assert(offsetof(UEmote_PickUpDrink_C, UberGraphFrame_Emote_PickUpDrink_C) == 0x0000D0, "Member 'UEmote_PickUpDrink_C::UberGraphFrame_Emote_PickUpDrink_C' has a wrong offset!");
static_assert(offsetof(UEmote_PickUpDrink_C, AnimMontage) == 0x0000D8, "Member 'UEmote_PickUpDrink_C::AnimMontage' has a wrong offset!");

}
