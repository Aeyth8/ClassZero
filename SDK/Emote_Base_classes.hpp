#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Emote_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Emote_Base.Emote_Base_C
// 0x0020 (0x00D0 - 0x00B0)
class UEmote_Base_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ACharacterSCTBP_C*                      CharacterSCTBP;                                    // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimBpSCT_C*                           AnimBpSCT;                                         // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USCT_AnimBpSCT_C*                       SCT_Anim_BPSCT;                                    // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Emote_Base(int32 EntryPoint);
	void ReceiveBeginPlay();
	void On_Removed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Emote_Base_C">();
	}
	static class UEmote_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmote_Base_C>();
	}
};
static_assert(alignof(UEmote_Base_C) == 0x000008, "Wrong alignment on UEmote_Base_C");
static_assert(sizeof(UEmote_Base_C) == 0x0000D0, "Wrong size on UEmote_Base_C");
static_assert(offsetof(UEmote_Base_C, UberGraphFrame) == 0x0000B0, "Member 'UEmote_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmote_Base_C, CharacterSCTBP) == 0x0000B8, "Member 'UEmote_Base_C::CharacterSCTBP' has a wrong offset!");
static_assert(offsetof(UEmote_Base_C, AnimBpSCT) == 0x0000C0, "Member 'UEmote_Base_C::AnimBpSCT' has a wrong offset!");
static_assert(offsetof(UEmote_Base_C, SCT_Anim_BPSCT) == 0x0000C8, "Member 'UEmote_Base_C::SCT_Anim_BPSCT' has a wrong offset!");

}
