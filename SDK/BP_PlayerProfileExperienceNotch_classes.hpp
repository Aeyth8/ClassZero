#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerProfileExperienceNotch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_PlayerProfileExperienceNotch.BP_PlayerProfileExperienceNotch_C
// 0x0020 (0x0280 - 0x0260)
class UBP_PlayerProfileExperienceNotch_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 NotchImage;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                NotchSpacer;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         NotchWidth;                                        // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Spacing;                                           // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerProfileExperienceNotch(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerProfileExperienceNotch_C">();
	}
	static class UBP_PlayerProfileExperienceNotch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerProfileExperienceNotch_C>();
	}
};
static_assert(alignof(UBP_PlayerProfileExperienceNotch_C) == 0x000008, "Wrong alignment on UBP_PlayerProfileExperienceNotch_C");
static_assert(sizeof(UBP_PlayerProfileExperienceNotch_C) == 0x000280, "Wrong size on UBP_PlayerProfileExperienceNotch_C");
static_assert(offsetof(UBP_PlayerProfileExperienceNotch_C, UberGraphFrame) == 0x000260, "Member 'UBP_PlayerProfileExperienceNotch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerProfileExperienceNotch_C, NotchImage) == 0x000268, "Member 'UBP_PlayerProfileExperienceNotch_C::NotchImage' has a wrong offset!");
static_assert(offsetof(UBP_PlayerProfileExperienceNotch_C, NotchSpacer) == 0x000270, "Member 'UBP_PlayerProfileExperienceNotch_C::NotchSpacer' has a wrong offset!");
static_assert(offsetof(UBP_PlayerProfileExperienceNotch_C, NotchWidth) == 0x000278, "Member 'UBP_PlayerProfileExperienceNotch_C::NotchWidth' has a wrong offset!");
static_assert(offsetof(UBP_PlayerProfileExperienceNotch_C, Spacing) == 0x00027C, "Member 'UBP_PlayerProfileExperienceNotch_C::Spacing' has a wrong offset!");

}
