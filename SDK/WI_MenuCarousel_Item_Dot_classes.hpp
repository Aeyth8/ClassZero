#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_MenuCarousel_Item_Dot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_MenuCarousel_Item_Dot.WI_MenuCarousel_Item_Dot_C
// 0x0030 (0x0290 - 0x0260)
class UWI_MenuCarousel_Item_Dot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                DotButton;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         DotIndex;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ButtonClicked;                                     // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ButtonClicked__DelegateSignature(int32 DotIndex_0);
	void ExecuteUbergraph_WI_MenuCarousel_Item_Dot(int32 EntryPoint);
	void BndEvt__WI_MenuCarousel_Item_Dot_DotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetActive();
	void SetInactive();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_MenuCarousel_Item_Dot_C">();
	}
	static class UWI_MenuCarousel_Item_Dot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_MenuCarousel_Item_Dot_C>();
	}
};
static_assert(alignof(UWI_MenuCarousel_Item_Dot_C) == 0x000008, "Wrong alignment on UWI_MenuCarousel_Item_Dot_C");
static_assert(sizeof(UWI_MenuCarousel_Item_Dot_C) == 0x000290, "Wrong size on UWI_MenuCarousel_Item_Dot_C");
static_assert(offsetof(UWI_MenuCarousel_Item_Dot_C, UberGraphFrame) == 0x000260, "Member 'UWI_MenuCarousel_Item_Dot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_Dot_C, DotButton) == 0x000268, "Member 'UWI_MenuCarousel_Item_Dot_C::DotButton' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_Dot_C, Image_0) == 0x000270, "Member 'UWI_MenuCarousel_Item_Dot_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_Dot_C, DotIndex) == 0x000278, "Member 'UWI_MenuCarousel_Item_Dot_C::DotIndex' has a wrong offset!");
static_assert(offsetof(UWI_MenuCarousel_Item_Dot_C, ButtonClicked) == 0x000280, "Member 'UWI_MenuCarousel_Item_Dot_C::ButtonClicked' has a wrong offset!");

}

