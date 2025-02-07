#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuCamController

#include "Basic.hpp"

#include "E_StartScreenTabs_structs.hpp"
#include "SCT_structs.hpp"
#include "CM_E_MenuAreas_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function MenuCamController.MenuCamController_C.ExecuteUbergraph_MenuCamController
// 0x0078 (0x0078 - 0x0000)
struct MenuCamController_C_ExecuteUbergraph_MenuCamController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerCustomizationGender                    K2Node_CustomEvent_CustomizationGender_1;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationGender                    K2Node_CustomEvent_CustomizationGender;            // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationType                      K2Node_CustomEvent_CustomizationOption;            // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_ZoomInOnCharacter_ReturnValue;            // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_SpawnAkComponentAtLocation_ReturnValue;   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_StartScreenTabs                             K2Node_CustomEvent_TABS_1;                         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0058(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerCustomizationGender                    K2Node_CustomEvent_CurrentCustomization;           // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECM_E_MenuAreas                               K2Node_CustomEvent_TABS;                           // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MenuCamController_C_ExecuteUbergraph_MenuCamController) == 0x000008, "Wrong alignment on MenuCamController_C_ExecuteUbergraph_MenuCamController");
static_assert(sizeof(MenuCamController_C_ExecuteUbergraph_MenuCamController) == 0x000078, "Wrong size on MenuCamController_C_ExecuteUbergraph_MenuCamController");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, EntryPoint) == 0x000000, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::EntryPoint' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_GetAllActorsWithTag_OutActors) == 0x000008, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, Temp_delegate_Variable) == 0x000018, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_Array_Get_Item) == 0x000028, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000030, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_CustomEvent_CustomizationGender_1) == 0x000031, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_CustomEvent_CustomizationGender_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_CustomEvent_CustomizationGender) == 0x000032, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_CustomEvent_CustomizationGender' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_CustomEvent_CustomizationOption) == 0x000033, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_CustomEvent_CustomizationOption' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_ZoomInOnCharacter_ReturnValue) == 0x000034, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_ZoomInOnCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_SpawnAkComponentAtLocation_ReturnValue) == 0x000040, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_SpawnAkComponentAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_CustomEvent_TABS_1) == 0x000050, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_CustomEvent_TABS_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_SwitchEnum_CmpSuccess) == 0x000051, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, Temp_struct_Variable) == 0x000058, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_PostAkEvent_ReturnValue) == 0x000068, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006C, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_IsValid_ReturnValue) == 0x00006D, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00006E, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_CustomEvent_CurrentCustomization) == 0x00006F, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_CustomEvent_CurrentCustomization' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_SwitchEnum_CmpSuccess_1) == 0x000070, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_CustomEvent_TABS) == 0x000071, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_CustomEvent_TABS' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ExecuteUbergraph_MenuCamController, K2Node_SwitchEnum_CmpSuccess_2) == 0x000072, "Member 'MenuCamController_C_ExecuteUbergraph_MenuCamController::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.ChangeMainMenuTab
// 0x0001 (0x0001 - 0x0000)
struct MenuCamController_C_ChangeMainMenuTab final
{
public:
	ECM_E_MenuAreas                               Tabs;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_ChangeMainMenuTab) == 0x000001, "Wrong alignment on MenuCamController_C_ChangeMainMenuTab");
static_assert(sizeof(MenuCamController_C_ChangeMainMenuTab) == 0x000001, "Wrong size on MenuCamController_C_ChangeMainMenuTab");
static_assert(offsetof(MenuCamController_C_ChangeMainMenuTab, Tabs) == 0x000000, "Member 'MenuCamController_C_ChangeMainMenuTab::Tabs' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.SetCurrentCustomizationCamera
// 0x0001 (0x0001 - 0x0000)
struct MenuCamController_C_SetCurrentCustomizationCamera final
{
public:
	EPlayerCustomizationGender                    CurrentCustomization;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_SetCurrentCustomizationCamera) == 0x000001, "Wrong alignment on MenuCamController_C_SetCurrentCustomizationCamera");
static_assert(sizeof(MenuCamController_C_SetCurrentCustomizationCamera) == 0x000001, "Wrong size on MenuCamController_C_SetCurrentCustomizationCamera");
static_assert(offsetof(MenuCamController_C_SetCurrentCustomizationCamera, CurrentCustomization) == 0x000000, "Member 'MenuCamController_C_SetCurrentCustomizationCamera::CurrentCustomization' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.HandleTabChange
// 0x0001 (0x0001 - 0x0000)
struct MenuCamController_C_HandleTabChange final
{
public:
	E_StartScreenTabs                             Tabs;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_HandleTabChange) == 0x000001, "Wrong alignment on MenuCamController_C_HandleTabChange");
static_assert(sizeof(MenuCamController_C_HandleTabChange) == 0x000001, "Wrong size on MenuCamController_C_HandleTabChange");
static_assert(offsetof(MenuCamController_C_HandleTabChange, Tabs) == 0x000000, "Member 'MenuCamController_C_HandleTabChange::Tabs' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.HandleZoomInOnCharacter
// 0x0002 (0x0002 - 0x0000)
struct MenuCamController_C_HandleZoomInOnCharacter final
{
public:
	EPlayerCustomizationGender                    CustomizationGender;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationType                      CustomizationOption;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_HandleZoomInOnCharacter) == 0x000001, "Wrong alignment on MenuCamController_C_HandleZoomInOnCharacter");
static_assert(sizeof(MenuCamController_C_HandleZoomInOnCharacter) == 0x000002, "Wrong size on MenuCamController_C_HandleZoomInOnCharacter");
static_assert(offsetof(MenuCamController_C_HandleZoomInOnCharacter, CustomizationGender) == 0x000000, "Member 'MenuCamController_C_HandleZoomInOnCharacter::CustomizationGender' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_HandleZoomInOnCharacter, CustomizationOption) == 0x000001, "Member 'MenuCamController_C_HandleZoomInOnCharacter::CustomizationOption' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.HandleCustomizationGenderChange
// 0x0001 (0x0001 - 0x0000)
struct MenuCamController_C_HandleCustomizationGenderChange final
{
public:
	EPlayerCustomizationGender                    CustomizationGender;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_HandleCustomizationGenderChange) == 0x000001, "Wrong alignment on MenuCamController_C_HandleCustomizationGenderChange");
static_assert(sizeof(MenuCamController_C_HandleCustomizationGenderChange) == 0x000001, "Wrong size on MenuCamController_C_HandleCustomizationGenderChange");
static_assert(offsetof(MenuCamController_C_HandleCustomizationGenderChange, CustomizationGender) == 0x000000, "Member 'MenuCamController_C_HandleCustomizationGenderChange::CustomizationGender' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.InitialBindings_Old
// 0x0048 (0x0048 - 0x0000)
struct MenuCamController_C_InitialBindings_Old final
{
public:
	class Ubp_wi_StartScreen_C*                   StartSCreen;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPlayerCustomizationGender CustomizationGender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EPlayerCustomizationGender CustomizationGender, EPlayerCustomizationType CustomizationCategory)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EPlayerCustomizationGender CustomizationGender)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_StartScreenTabs Tab)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MenuCamController_C_InitialBindings_Old) == 0x000008, "Wrong alignment on MenuCamController_C_InitialBindings_Old");
static_assert(sizeof(MenuCamController_C_InitialBindings_Old) == 0x000048, "Wrong size on MenuCamController_C_InitialBindings_Old");
static_assert(offsetof(MenuCamController_C_InitialBindings_Old, StartSCreen) == 0x000000, "Member 'MenuCamController_C_InitialBindings_Old::StartSCreen' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialBindings_Old, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MenuCamController_C_InitialBindings_Old::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialBindings_Old, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'MenuCamController_C_InitialBindings_Old::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialBindings_Old, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'MenuCamController_C_InitialBindings_Old::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialBindings_Old, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'MenuCamController_C_InitialBindings_Old::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.Change Camera
// 0x0030 (0x0030 - 0x0000)
struct MenuCamController_C_Change_Camera final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;            // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_Change_Camera) == 0x000008, "Wrong alignment on MenuCamController_C_Change_Camera");
static_assert(sizeof(MenuCamController_C_Change_Camera) == 0x000030, "Wrong size on MenuCamController_C_Change_Camera");
static_assert(offsetof(MenuCamController_C_Change_Camera, Tag) == 0x000000, "Member 'MenuCamController_C_Change_Camera::Tag' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_Change_Camera, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'MenuCamController_C_Change_Camera::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_Change_Camera, CallFunc_GetAllActorsWithTag_OutActors) == 0x000010, "Member 'MenuCamController_C_Change_Camera::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_Change_Camera, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000020, "Member 'MenuCamController_C_Change_Camera::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_Change_Camera, CallFunc_Array_Get_Item) == 0x000028, "Member 'MenuCamController_C_Change_Camera::CallFunc_Array_Get_Item' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.ZoomInOnCharacter
// 0x0068 (0x0068 - 0x0000)
struct MenuCamController_C_ZoomInOnCharacter final
{
public:
	EPlayerCustomizationGender                    CustomizationGender;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCustomizationType                      CustomizationOption;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ReturnValue;                                       // 0x0004(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CameraTag;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MenuCamController_C_ZoomInOnCharacter) == 0x000008, "Wrong alignment on MenuCamController_C_ZoomInOnCharacter");
static_assert(sizeof(MenuCamController_C_ZoomInOnCharacter) == 0x000068, "Wrong size on MenuCamController_C_ZoomInOnCharacter");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CustomizationGender) == 0x000000, "Member 'MenuCamController_C_ZoomInOnCharacter::CustomizationGender' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CustomizationOption) == 0x000001, "Member 'MenuCamController_C_ZoomInOnCharacter::CustomizationOption' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, ReturnValue) == 0x000004, "Member 'MenuCamController_C_ZoomInOnCharacter::ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CameraTag) == 0x000010, "Member 'MenuCamController_C_ZoomInOnCharacter::CameraTag' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'MenuCamController_C_ZoomInOnCharacter::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000030, "Member 'MenuCamController_C_ZoomInOnCharacter::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'MenuCamController_C_ZoomInOnCharacter::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000050, "Member 'MenuCamController_C_ZoomInOnCharacter::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_ZoomInOnCharacter, CallFunc_Conv_StringToName_ReturnValue) == 0x000060, "Member 'MenuCamController_C_ZoomInOnCharacter::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function MenuCamController.MenuCamController_C.InitialiBindings
// 0x0068 (0x0068 - 0x0000)
struct MenuCamController_C_InitialiBindings final
{
public:
	class UCM_MainMenuWI_C*                       MainMenu;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EPlayerCustomizationGender CustomizationGender)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EPlayerCustomizationGender CustomizationGender, EPlayerCustomizationType CustomizationCategory)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EPlayerCustomizationGender CustomizationGender)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(MenuCamController_C_InitialiBindings) == 0x000008, "Wrong alignment on MenuCamController_C_InitialiBindings");
static_assert(sizeof(MenuCamController_C_InitialiBindings) == 0x000068, "Wrong size on MenuCamController_C_InitialiBindings");
static_assert(offsetof(MenuCamController_C_InitialiBindings, MainMenu) == 0x000000, "Member 'MenuCamController_C_InitialiBindings::MainMenu' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialiBindings, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MenuCamController_C_InitialiBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialiBindings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'MenuCamController_C_InitialiBindings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialiBindings, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'MenuCamController_C_InitialiBindings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialiBindings, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'MenuCamController_C_InitialiBindings::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialiBindings, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'MenuCamController_C_InitialiBindings::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MenuCamController_C_InitialiBindings, K2Node_CreateDelegate_OutputDelegate_5) == 0x000058, "Member 'MenuCamController_C_InitialiBindings::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

}

