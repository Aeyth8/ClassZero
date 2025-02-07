#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsKeybindingWI_Toggle

#include "Basic.hpp"

#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function SettingsKeybindingWI_Toggle.SettingsKeybindingWI_Toggle_C.ExecuteUbergraph_SettingsKeybindingWI_Toggle
// 0x0050 (0x0050 - 0x0000)
struct SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsChecked;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserSettingsGIS*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0020(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle) == 0x000008, "Wrong alignment on SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle");
static_assert(sizeof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle) == 0x000050, "Wrong size on SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, EntryPoint) == 0x000000, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::EntryPoint' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, K2Node_ComponentBoundEvent_IsChecked) == 0x000004, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::K2Node_ComponentBoundEvent_IsChecked' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle, K2Node_SwitchString_CmpSuccess) == 0x000048, "Member 'SettingsKeybindingWI_Toggle_C_ExecuteUbergraph_SettingsKeybindingWI_Toggle::K2Node_SwitchString_CmpSuccess' has a wrong offset!");

// Function SettingsKeybindingWI_Toggle.SettingsKeybindingWI_Toggle_C.BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature final
{
public:
	bool                                          IsChecked;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature) == 0x000001, "Wrong alignment on SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature");
static_assert(sizeof(SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature) == 0x000001, "Wrong size on SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature, IsChecked) == 0x000000, "Member 'SettingsKeybindingWI_Toggle_C_BndEvt__SettingsKeybindingWI_Toggle_Checkbox_K2Node_ComponentBoundEvent_1_StateChanged__DelegateSignature::IsChecked' has a wrong offset!");

// Function SettingsKeybindingWI_Toggle.SettingsKeybindingWI_Toggle_C.SetDisplayName
// 0x0018 (0x0018 - 0x0000)
struct SettingsKeybindingWI_Toggle_C_SetDisplayName final
{
public:
	class FText                                   DisplayName_0;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SettingsKeybindingWI_Toggle_C_SetDisplayName) == 0x000008, "Wrong alignment on SettingsKeybindingWI_Toggle_C_SetDisplayName");
static_assert(sizeof(SettingsKeybindingWI_Toggle_C_SetDisplayName) == 0x000018, "Wrong size on SettingsKeybindingWI_Toggle_C_SetDisplayName");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_SetDisplayName, DisplayName_0) == 0x000000, "Member 'SettingsKeybindingWI_Toggle_C_SetDisplayName::DisplayName_0' has a wrong offset!");

// Function SettingsKeybindingWI_Toggle.SettingsKeybindingWI_Toggle_C.SetToggleData
// 0x0001 (0x0001 - 0x0000)
struct SettingsKeybindingWI_Toggle_C_SetToggleData final
{
public:
	bool                                          Is_Checked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_Toggle_C_SetToggleData) == 0x000001, "Wrong alignment on SettingsKeybindingWI_Toggle_C_SetToggleData");
static_assert(sizeof(SettingsKeybindingWI_Toggle_C_SetToggleData) == 0x000001, "Wrong size on SettingsKeybindingWI_Toggle_C_SetToggleData");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_SetToggleData, Is_Checked) == 0x000000, "Member 'SettingsKeybindingWI_Toggle_C_SetToggleData::Is_Checked' has a wrong offset!");

// Function SettingsKeybindingWI_Toggle.SettingsKeybindingWI_Toggle_C.Initialize
// 0x0048 (0x0048 - 0x0000)
struct SettingsKeybindingWI_Toggle_C_Initialize final
{
public:
	struct FInputInformationToggle                Info_0;                                            // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                   SettingsName_0;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettingsToggleSubComponent*       Setting;                                           // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SettingsKeybindingWI_Toggle_C_Initialize) == 0x000008, "Wrong alignment on SettingsKeybindingWI_Toggle_C_Initialize");
static_assert(sizeof(SettingsKeybindingWI_Toggle_C_Initialize) == 0x000048, "Wrong size on SettingsKeybindingWI_Toggle_C_Initialize");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_Initialize, Info_0) == 0x000000, "Member 'SettingsKeybindingWI_Toggle_C_Initialize::Info_0' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_Initialize, SettingsName_0) == 0x000038, "Member 'SettingsKeybindingWI_Toggle_C_Initialize::SettingsName_0' has a wrong offset!");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_Initialize, Setting) == 0x000040, "Member 'SettingsKeybindingWI_Toggle_C_Initialize::Setting' has a wrong offset!");

// Function SettingsKeybindingWI_Toggle.SettingsKeybindingWI_Toggle_C.UpdateUI
// 0x0001 (0x0001 - 0x0000)
struct SettingsKeybindingWI_Toggle_C_UpdateUI final
{
public:
	bool                                          CallFunc_GetToggle_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SettingsKeybindingWI_Toggle_C_UpdateUI) == 0x000001, "Wrong alignment on SettingsKeybindingWI_Toggle_C_UpdateUI");
static_assert(sizeof(SettingsKeybindingWI_Toggle_C_UpdateUI) == 0x000001, "Wrong size on SettingsKeybindingWI_Toggle_C_UpdateUI");
static_assert(offsetof(SettingsKeybindingWI_Toggle_C_UpdateUI, CallFunc_GetToggle_ReturnValue) == 0x000000, "Member 'SettingsKeybindingWI_Toggle_C_UpdateUI::CallFunc_GetToggle_ReturnValue' has a wrong offset!");

}

