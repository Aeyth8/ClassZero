#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OtherPersonoidsEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OtherPersonoidsEntry.OtherPersonoidsEntry_C
// 0x0028 (0x0288 - 0x0260)
class UOtherPersonoidsEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class URichTextBlock*                         CompanionName;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompanionPortrait;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerPortrait_C*                      PlayerPortrait_Companion;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASCTPlayerState*                        PlayerState;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OtherPersonoidsEntry(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OtherPersonoidsEntry_C">();
	}
	static class UOtherPersonoidsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOtherPersonoidsEntry_C>();
	}
};
static_assert(alignof(UOtherPersonoidsEntry_C) == 0x000008, "Wrong alignment on UOtherPersonoidsEntry_C");
static_assert(sizeof(UOtherPersonoidsEntry_C) == 0x000288, "Wrong size on UOtherPersonoidsEntry_C");
static_assert(offsetof(UOtherPersonoidsEntry_C, UberGraphFrame) == 0x000260, "Member 'UOtherPersonoidsEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOtherPersonoidsEntry_C, CompanionName) == 0x000268, "Member 'UOtherPersonoidsEntry_C::CompanionName' has a wrong offset!");
static_assert(offsetof(UOtherPersonoidsEntry_C, CompanionPortrait) == 0x000270, "Member 'UOtherPersonoidsEntry_C::CompanionPortrait' has a wrong offset!");
static_assert(offsetof(UOtherPersonoidsEntry_C, PlayerPortrait_Companion) == 0x000278, "Member 'UOtherPersonoidsEntry_C::PlayerPortrait_Companion' has a wrong offset!");
static_assert(offsetof(UOtherPersonoidsEntry_C, PlayerState) == 0x000280, "Member 'UOtherPersonoidsEntry_C::PlayerState' has a wrong offset!");

}

