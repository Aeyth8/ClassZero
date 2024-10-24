#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControllerIconWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ControllerIconWI.ControllerIconWI_C
// 0x0030 (0x02E0 - 0x02B0)
class UControllerIconWI_C final : public UControllerIconWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 BackgroundImage;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             KeyText;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               KeyTextSizeBox;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MouseIconImage;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ControllerIconWI(int32 EntryPoint);
	void ShowKeyboardDisplay(const class FText& KeyDisplayText);
	void ShowMouseDisplay(class UTexture2D* MouseIcon);
	void ShowGamepadDisplay(class UTexture2D* ButtonIcon);
	void ResetDisplay();
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControllerIconWI_C">();
	}
	static class UControllerIconWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControllerIconWI_C>();
	}
};
static_assert(alignof(UControllerIconWI_C) == 0x000008, "Wrong alignment on UControllerIconWI_C");
static_assert(sizeof(UControllerIconWI_C) == 0x0002E0, "Wrong size on UControllerIconWI_C");
static_assert(offsetof(UControllerIconWI_C, UberGraphFrame) == 0x0002B0, "Member 'UControllerIconWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UControllerIconWI_C, BackgroundImage) == 0x0002B8, "Member 'UControllerIconWI_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UControllerIconWI_C, IconImage) == 0x0002C0, "Member 'UControllerIconWI_C::IconImage' has a wrong offset!");
static_assert(offsetof(UControllerIconWI_C, KeyText) == 0x0002C8, "Member 'UControllerIconWI_C::KeyText' has a wrong offset!");
static_assert(offsetof(UControllerIconWI_C, KeyTextSizeBox) == 0x0002D0, "Member 'UControllerIconWI_C::KeyTextSizeBox' has a wrong offset!");
static_assert(offsetof(UControllerIconWI_C, MouseIconImage) == 0x0002D8, "Member 'UControllerIconWI_C::MouseIconImage' has a wrong offset!");

}

