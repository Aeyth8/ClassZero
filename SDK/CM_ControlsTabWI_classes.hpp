#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_ControlsTabWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SCT_structs.hpp"
#include "CM_SettingsTab_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CM_ControlsTabWI.CM_ControlsTabWI_C
// 0x0078 (0x02E0 - 0x0268)
class UCM_ControlsTabWI_C final : public UCM_SettingsTab_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CM_ControlsTabWI_C;                 // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UMenuButton*                            ApplyButton;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ApplyRevert;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelController;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_GamepadOverviewWI_C*                CM_GamepadOverviewWI;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_ClickableSubTitleWI_C*              CM_ResetButton;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_TabTitle_C*                         CM_TabTitle;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCM_XboxGamepadOverviewWI_C*            CM_XboxGamepadOverviewWI;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadScrollUtilityWI_C*              GamepadScrollUtilityWI;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_203;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsInputViewBP_C*                 InputView;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Controls;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuButton*                            RevertButton;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ControlsTab;                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ControlTab;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CM_ControlsTabWI(int32 EntryPoint);
	void BndEvt__CM_ControlsTabWI_CM_ClickableSubTitleWI_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void Set_Gamepad_Focus();
	void BndEvt__CM_ControlsTabWI_ApplyButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void EnableUsedController();

	void IsGamepadActive(bool* Value) const;
	void IsLastControllerTypeGamepad(bool* Value) const;
	bool IsUsingPlaystationController() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_ControlsTabWI_C">();
	}
	static class UCM_ControlsTabWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_ControlsTabWI_C>();
	}
};
static_assert(alignof(UCM_ControlsTabWI_C) == 0x000008, "Wrong alignment on UCM_ControlsTabWI_C");
static_assert(sizeof(UCM_ControlsTabWI_C) == 0x0002E0, "Wrong size on UCM_ControlsTabWI_C");
static_assert(offsetof(UCM_ControlsTabWI_C, UberGraphFrame_CM_ControlsTabWI_C) == 0x000268, "Member 'UCM_ControlsTabWI_C::UberGraphFrame_CM_ControlsTabWI_C' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, ApplyButton) == 0x000270, "Member 'UCM_ControlsTabWI_C::ApplyButton' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, ApplyRevert) == 0x000278, "Member 'UCM_ControlsTabWI_C::ApplyRevert' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, CanvasPanelController) == 0x000280, "Member 'UCM_ControlsTabWI_C::CanvasPanelController' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, CM_GamepadOverviewWI) == 0x000288, "Member 'UCM_ControlsTabWI_C::CM_GamepadOverviewWI' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, CM_ResetButton) == 0x000290, "Member 'UCM_ControlsTabWI_C::CM_ResetButton' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, CM_TabTitle) == 0x000298, "Member 'UCM_ControlsTabWI_C::CM_TabTitle' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, CM_XboxGamepadOverviewWI) == 0x0002A0, "Member 'UCM_ControlsTabWI_C::CM_XboxGamepadOverviewWI' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, GamepadScrollUtilityWI) == 0x0002A8, "Member 'UCM_ControlsTabWI_C::GamepadScrollUtilityWI' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, Image_203) == 0x0002B0, "Member 'UCM_ControlsTabWI_C::Image_203' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, InputView) == 0x0002B8, "Member 'UCM_ControlsTabWI_C::InputView' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, Overlay_Controls) == 0x0002C0, "Member 'UCM_ControlsTabWI_C::Overlay_Controls' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, RevertButton) == 0x0002C8, "Member 'UCM_ControlsTabWI_C::RevertButton' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, VerticalBox_ControlsTab) == 0x0002D0, "Member 'UCM_ControlsTabWI_C::VerticalBox_ControlsTab' has a wrong offset!");
static_assert(offsetof(UCM_ControlsTabWI_C, VerticalBox_ControlTab) == 0x0002D8, "Member 'UCM_ControlsTabWI_C::VerticalBox_ControlTab' has a wrong offset!");

}
