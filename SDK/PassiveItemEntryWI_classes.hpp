#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PassiveItemEntryWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PassiveItemEntryWI.PassiveItemEntryWI_C
// 0x0020 (0x0280 - 0x0260)
class UPassiveItemEntryWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 Img_SkillIcon;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             StackCount;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItem*                                  Item;                                              // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PassiveItemEntryWI(int32 EntryPoint);
	void Construct();
	void UpdateStackText();
	void Update_Content();
	void Initialize(class UItem* Item_0);
	void UpdateIcon();

	void GetItemCurrentStackSize(int32* CurrentStackCount) const;
	void GetItemMaxStacks(int32* Maximum_Stack_Count) const;
	void GetFormattedStackText(class FText* NewParam) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PassiveItemEntryWI_C">();
	}
	static class UPassiveItemEntryWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassiveItemEntryWI_C>();
	}
};
static_assert(alignof(UPassiveItemEntryWI_C) == 0x000008, "Wrong alignment on UPassiveItemEntryWI_C");
static_assert(sizeof(UPassiveItemEntryWI_C) == 0x000280, "Wrong size on UPassiveItemEntryWI_C");
static_assert(offsetof(UPassiveItemEntryWI_C, UberGraphFrame) == 0x000260, "Member 'UPassiveItemEntryWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPassiveItemEntryWI_C, Img_SkillIcon) == 0x000268, "Member 'UPassiveItemEntryWI_C::Img_SkillIcon' has a wrong offset!");
static_assert(offsetof(UPassiveItemEntryWI_C, StackCount) == 0x000270, "Member 'UPassiveItemEntryWI_C::StackCount' has a wrong offset!");
static_assert(offsetof(UPassiveItemEntryWI_C, Item) == 0x000278, "Member 'UPassiveItemEntryWI_C::Item' has a wrong offset!");

}

