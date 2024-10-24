#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsCheckboxWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsCheckboxWI.OptionsCheckboxWI_C
// 0x0048 (0x02A8 - 0x0260)
class UOptionsCheckboxWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCM_CheckboxWI_C*                       CheckBoxOpt;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCheckStateChanged;                               // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   DescriptorText;                                    // 0x0288(0x0018)(Edit, BlueprintVisible)
	float                                         RightPadding;                                      // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_OptionsCheckboxWI(int32 EntryPoint);
	void BndEvt__OptionsCheckboxWI_CheckBoxOpt_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature(bool IsChecked);
	void PreConstruct(bool IsDesignTime);
	void SetCheckedState(bool InIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsCheckboxWI_C">();
	}
	static class UOptionsCheckboxWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsCheckboxWI_C>();
	}
};
static_assert(alignof(UOptionsCheckboxWI_C) == 0x000008, "Wrong alignment on UOptionsCheckboxWI_C");
static_assert(sizeof(UOptionsCheckboxWI_C) == 0x0002A8, "Wrong size on UOptionsCheckboxWI_C");
static_assert(offsetof(UOptionsCheckboxWI_C, UberGraphFrame) == 0x000260, "Member 'UOptionsCheckboxWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionsCheckboxWI_C, CheckBoxOpt) == 0x000268, "Member 'UOptionsCheckboxWI_C::CheckBoxOpt' has a wrong offset!");
static_assert(offsetof(UOptionsCheckboxWI_C, Text) == 0x000270, "Member 'UOptionsCheckboxWI_C::Text' has a wrong offset!");
static_assert(offsetof(UOptionsCheckboxWI_C, OnCheckStateChanged) == 0x000278, "Member 'UOptionsCheckboxWI_C::OnCheckStateChanged' has a wrong offset!");
static_assert(offsetof(UOptionsCheckboxWI_C, DescriptorText) == 0x000288, "Member 'UOptionsCheckboxWI_C::DescriptorText' has a wrong offset!");
static_assert(offsetof(UOptionsCheckboxWI_C, RightPadding) == 0x0002A0, "Member 'UOptionsCheckboxWI_C::RightPadding' has a wrong offset!");

}

