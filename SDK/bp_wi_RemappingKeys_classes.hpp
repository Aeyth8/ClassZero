#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_wi_RemappingKeys

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Slate_structs.hpp"
#include "SCT_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass bp_wi_RemappingKeys.bp_wi_RemappingKeys_C
// 0x00D8 (0x0338 - 0x0260)
class Ubp_wi_RemappingKeys_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamepadIcon;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFCTInputKeySelector*                   GamepadKeyRemapper;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HotkeyText;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFCTInputKeySelector*                   KeyboardKeyRemapper;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Hotkey;                                            // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                   ActionMapping;                                     // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         OptionalAxisValue;                                 // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class Ubp_wi_RemappingKeys_C*>         OtherRemappers;                                    // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FInputChord                            InitialKeyLeft;                                    // 0x02C8(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputChord                            InitialKeyRight;                                   // 0x02E8(0x0020)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FInputChord                            DeafultKey;                                        // 0x0308(0x0020)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UControllerIconData*                    ControllerIconData;                                // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowGamepadRemapping;                             // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_bp_wi_RemappingKeys(int32 EntryPoint);
	void BndEvt__bp_wi_RemappingKeys_GamepadKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void BndEvt__KeyboardKeyRemapper2_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void PreConstruct(bool IsDesignTime);
	void KeyRemapping(const struct FInputChord& InputChord, class FName ActionName, float AxisValue);
	void RemoveSelectedKey(const struct FInputChord& SelectedKey);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void UpdateGamepadIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_wi_RemappingKeys_C">();
	}
	static class Ubp_wi_RemappingKeys_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubp_wi_RemappingKeys_C>();
	}
};
static_assert(alignof(Ubp_wi_RemappingKeys_C) == 0x000008, "Wrong alignment on Ubp_wi_RemappingKeys_C");
static_assert(sizeof(Ubp_wi_RemappingKeys_C) == 0x000338, "Wrong size on Ubp_wi_RemappingKeys_C");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, UberGraphFrame) == 0x000260, "Member 'Ubp_wi_RemappingKeys_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, CanvasPanel_0) == 0x000268, "Member 'Ubp_wi_RemappingKeys_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, GamepadIcon) == 0x000270, "Member 'Ubp_wi_RemappingKeys_C::GamepadIcon' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, GamepadKeyRemapper) == 0x000278, "Member 'Ubp_wi_RemappingKeys_C::GamepadKeyRemapper' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, HotkeyText) == 0x000280, "Member 'Ubp_wi_RemappingKeys_C::HotkeyText' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, KeyboardKeyRemapper) == 0x000288, "Member 'Ubp_wi_RemappingKeys_C::KeyboardKeyRemapper' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, Hotkey) == 0x000290, "Member 'Ubp_wi_RemappingKeys_C::Hotkey' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, ActionMapping) == 0x0002A8, "Member 'Ubp_wi_RemappingKeys_C::ActionMapping' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, OptionalAxisValue) == 0x0002B0, "Member 'Ubp_wi_RemappingKeys_C::OptionalAxisValue' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, OtherRemappers) == 0x0002B8, "Member 'Ubp_wi_RemappingKeys_C::OtherRemappers' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, InitialKeyLeft) == 0x0002C8, "Member 'Ubp_wi_RemappingKeys_C::InitialKeyLeft' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, InitialKeyRight) == 0x0002E8, "Member 'Ubp_wi_RemappingKeys_C::InitialKeyRight' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, DeafultKey) == 0x000308, "Member 'Ubp_wi_RemappingKeys_C::DeafultKey' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, ControllerIconData) == 0x000328, "Member 'Ubp_wi_RemappingKeys_C::ControllerIconData' has a wrong offset!");
static_assert(offsetof(Ubp_wi_RemappingKeys_C, AllowGamepadRemapping) == 0x000330, "Member 'Ubp_wi_RemappingKeys_C::AllowGamepadRemapping' has a wrong offset!");

}

