#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsKeybindingWI

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.SetKeyboardKey__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature");
static_assert(sizeof(SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature) == 0x000020, "Wrong size on SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature");
static_assert(offsetof(SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature, Chord) == 0x000000, "Member 'SettingsKeybindingWI_C_SetKeyboardKey__DelegateSignature::Chord' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.ExecuteUbergraph_SettingsKeybindingWI
// 0x0070 (0x0070 - 0x0000)
struct SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputChord                            K2Node_ComponentBoundEvent_SelectedKey;            // 0x0008(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_CanBind_Value;                            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserSettingsGIS*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputChord                            K2Node_ComponentBoundEvent_SelectedKey_1;          // 0x0048(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_CanBind_Value_1;                          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsGamepadRebindingEnabled_ReturnValue; // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI");
static_assert(sizeof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI) == 0x000070, "Wrong size on SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, EntryPoint) == 0x000000, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, K2Node_ComponentBoundEvent_SelectedKey) == 0x000008, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::K2Node_ComponentBoundEvent_SelectedKey' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_CanBind_Value) == 0x000028, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_CanBind_Value' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_IsConsolePlatform_ReturnValue) == 0x000029, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_GetGameUserSettings_ReturnValue) == 0x000030, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000038, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, K2Node_ComponentBoundEvent_SelectedKey_1) == 0x000048, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::K2Node_ComponentBoundEvent_SelectedKey_1' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_CanBind_Value_1) == 0x000068, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_CanBind_Value_1' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_GetIsGamepadRebindingEnabled_ReturnValue) == 0x000069, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_GetIsGamepadRebindingEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI, CallFunc_Not_PreBool_ReturnValue) == 0x00006A, "Member 'SettingsKeybindingWI_C_ExecuteUbergraph_SettingsKeybindingWI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature final
{
public:
	struct FInputChord                            SelectedKey;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");
static_assert(sizeof(SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature) == 0x000020, "Wrong size on SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature");
static_assert(offsetof(SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature, SelectedKey) == 0x000000, "Member 'SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_GamepadKeyRemapper_K2Node_ComponentBoundEvent_2_OnKeySelected__DelegateSignature::SelectedKey' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature final
{
public:
	struct FInputChord                            SelectedKey;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");
static_assert(sizeof(SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature) == 0x000020, "Wrong size on SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");
static_assert(offsetof(SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature, SelectedKey) == 0x000000, "Member 'SettingsKeybindingWI_C_BndEvt__SettingsKeybindingWI_KeyboardKeyRemapper_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature::SelectedKey' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.GetSettings
// 0x0028 (0x0028 - 0x0000)
struct SettingsKeybindingWI_C_GetSettings final
{
public:
	class UUserInputSettingsBP_C*                 AsUser_Input_Settings_BP;                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUserSettingsGIS*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USettingsObject*                        CallFunc_GetSetting_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserInputSettingsBP_C*                 K2Node_DynamicCast_AsUser_Input_Settings_BP;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_C_GetSettings) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_GetSettings");
static_assert(sizeof(SettingsKeybindingWI_C_GetSettings) == 0x000028, "Wrong size on SettingsKeybindingWI_C_GetSettings");
static_assert(offsetof(SettingsKeybindingWI_C_GetSettings, AsUser_Input_Settings_BP) == 0x000000, "Member 'SettingsKeybindingWI_C_GetSettings::AsUser_Input_Settings_BP' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_GetSettings, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'SettingsKeybindingWI_C_GetSettings::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_GetSettings, CallFunc_GetSetting_ReturnValue) == 0x000010, "Member 'SettingsKeybindingWI_C_GetSettings::CallFunc_GetSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_GetSettings, K2Node_DynamicCast_AsUser_Input_Settings_BP) == 0x000018, "Member 'SettingsKeybindingWI_C_GetSettings::K2Node_DynamicCast_AsUser_Input_Settings_BP' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_GetSettings, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SettingsKeybindingWI_C_GetSettings::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.SetDisplayName
// 0x0018 (0x0018 - 0x0000)
struct SettingsKeybindingWI_C_SetDisplayName final
{
public:
	class FText                                   DisplayName_0;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SettingsKeybindingWI_C_SetDisplayName) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_SetDisplayName");
static_assert(sizeof(SettingsKeybindingWI_C_SetDisplayName) == 0x000018, "Wrong size on SettingsKeybindingWI_C_SetDisplayName");
static_assert(offsetof(SettingsKeybindingWI_C_SetDisplayName, DisplayName_0) == 0x000000, "Member 'SettingsKeybindingWI_C_SetDisplayName::DisplayName_0' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.Set Action Button Key
// 0x0050 (0x0050 - 0x0000)
struct SettingsKeybindingWI_C_Set_Action_Button_Key final
{
public:
	class USCTKeySelector*                        UIElement;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                 Key;                                               // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0030(0x0020)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_Set_Action_Button_Key) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_Set_Action_Button_Key");
static_assert(sizeof(SettingsKeybindingWI_C_Set_Action_Button_Key) == 0x000050, "Wrong size on SettingsKeybindingWI_C_Set_Action_Button_Key");
static_assert(offsetof(SettingsKeybindingWI_C_Set_Action_Button_Key, UIElement) == 0x000000, "Member 'SettingsKeybindingWI_C_Set_Action_Button_Key::UIElement' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_Set_Action_Button_Key, Key) == 0x000008, "Member 'SettingsKeybindingWI_C_Set_Action_Button_Key::Key' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_Set_Action_Button_Key, K2Node_MakeStruct_InputChord) == 0x000030, "Member 'SettingsKeybindingWI_C_Set_Action_Button_Key::K2Node_MakeStruct_InputChord' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.OnSetGamepadKey
// 0x0020 (0x0020 - 0x0000)
struct SettingsKeybindingWI_C_OnSetGamepadKey final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_OnSetGamepadKey) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_OnSetGamepadKey");
static_assert(sizeof(SettingsKeybindingWI_C_OnSetGamepadKey) == 0x000020, "Wrong size on SettingsKeybindingWI_C_OnSetGamepadKey");
static_assert(offsetof(SettingsKeybindingWI_C_OnSetGamepadKey, Chord) == 0x000000, "Member 'SettingsKeybindingWI_C_OnSetGamepadKey::Chord' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.OnSetKeyboardKey
// 0x0020 (0x0020 - 0x0000)
struct SettingsKeybindingWI_C_OnSetKeyboardKey final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_OnSetKeyboardKey) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_OnSetKeyboardKey");
static_assert(sizeof(SettingsKeybindingWI_C_OnSetKeyboardKey) == 0x000020, "Wrong size on SettingsKeybindingWI_C_OnSetKeyboardKey");
static_assert(offsetof(SettingsKeybindingWI_C_OnSetKeyboardKey, Chord) == 0x000000, "Member 'SettingsKeybindingWI_C_OnSetKeyboardKey::Chord' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.Set Axis Button Key
// 0x0050 (0x0050 - 0x0000)
struct SettingsKeybindingWI_C_Set_Axis_Button_Key final
{
public:
	class USCTKeySelector*                        UIElement;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                   Key;                                               // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputChord                            K2Node_MakeStruct_InputChord;                      // 0x0030(0x0020)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_C_Set_Axis_Button_Key) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_Set_Axis_Button_Key");
static_assert(sizeof(SettingsKeybindingWI_C_Set_Axis_Button_Key) == 0x000050, "Wrong size on SettingsKeybindingWI_C_Set_Axis_Button_Key");
static_assert(offsetof(SettingsKeybindingWI_C_Set_Axis_Button_Key, UIElement) == 0x000000, "Member 'SettingsKeybindingWI_C_Set_Axis_Button_Key::UIElement' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_Set_Axis_Button_Key, Key) == 0x000008, "Member 'SettingsKeybindingWI_C_Set_Axis_Button_Key::Key' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_Set_Axis_Button_Key, K2Node_MakeStruct_InputChord) == 0x000030, "Member 'SettingsKeybindingWI_C_Set_Axis_Button_Key::K2Node_MakeStruct_InputChord' has a wrong offset!");

// Function SettingsKeybindingWI.SettingsKeybindingWI_C.CanBind
// 0x0028 (0x0028 - 0x0000)
struct SettingsKeybindingWI_C_CanBind final
{
public:
	struct FInputChord                            Chord;                                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_C_CanBind) == 0x000008, "Wrong alignment on SettingsKeybindingWI_C_CanBind");
static_assert(sizeof(SettingsKeybindingWI_C_CanBind) == 0x000028, "Wrong size on SettingsKeybindingWI_C_CanBind");
static_assert(offsetof(SettingsKeybindingWI_C_CanBind, Chord) == 0x000000, "Member 'SettingsKeybindingWI_C_CanBind::Chord' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_C_CanBind, Value) == 0x000020, "Member 'SettingsKeybindingWI_C_CanBind::Value' has a wrong offset!");

}

