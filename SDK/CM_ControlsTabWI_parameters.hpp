#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_ControlsTabWI

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function CM_ControlsTabWI.CM_ControlsTabWI_C.ExecuteUbergraph_CM_ControlsTabWI
// 0x0070 (0x0070 - 0x0000)
struct CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserSettingsGIS*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USettingsKeybindingWI_Toggle_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          Temp_bool_Variable_2;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USettingsKeybindingWI_Toggle_C*         CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGamepadActive_Value;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLanguage_ReturnValue;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI) == 0x000008, "Wrong alignment on CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI");
static_assert(sizeof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI) == 0x000070, "Wrong size on CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, EntryPoint) == 0x000000, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_IsConsolePlatform_ReturnValue) == 0x000004, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_byte_Variable) == 0x000005, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_bool_Variable) == 0x000006, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_byte_Variable_1) == 0x000007, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_byte_Variable_2) == 0x000008, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_bool_Variable_1) == 0x000009, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_float_Variable) == 0x00000C, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_float_Variable_1) == 0x000010, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_GetGameUserSettings_ReturnValue) == 0x000020, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_byte_Variable_3) == 0x000029, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000030, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, Temp_bool_Variable_2) == 0x000040, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_Array_Get_Item) == 0x000048, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_IsGamepadActive_Value) == 0x000050, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_IsGamepadActive_Value' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, K2Node_Select_Default) == 0x000051, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, K2Node_Select_Default_1) == 0x000054, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_BooleanOR_ReturnValue) == 0x000058, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, K2Node_Select_Default_2) == 0x000059, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI, CallFunc_GetCurrentLanguage_ReturnValue) == 0x000060, "Member 'CM_ControlsTabWI_C_ExecuteUbergraph_CM_ControlsTabWI::CallFunc_GetCurrentLanguage_ReturnValue' has a wrong offset!");

// Function CM_ControlsTabWI.CM_ControlsTabWI_C.EnableUsedController
// 0x0028 (0x0028 - 0x0000)
struct CM_ControlsTabWI_C_EnableUsedController final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsingPlaystationController_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPS5Platform_ReturnValue;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default_2;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CM_ControlsTabWI_C_EnableUsedController) == 0x000008, "Wrong alignment on CM_ControlsTabWI_C_EnableUsedController");
static_assert(sizeof(CM_ControlsTabWI_C_EnableUsedController) == 0x000028, "Wrong size on CM_ControlsTabWI_C_EnableUsedController");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_bool_Variable) == 0x000000, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_byte_Variable) == 0x000001, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_byte_Variable_1) == 0x000002, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_bool_Variable_1) == 0x000003, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_byte_Variable_2) == 0x000004, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_byte_Variable_3) == 0x000005, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_bool_Variable_2) == 0x000006, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_object_Variable) == 0x000008, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, Temp_object_Variable_1) == 0x000010, "Member 'CM_ControlsTabWI_C_EnableUsedController::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, CallFunc_IsUsingPlaystationController_ReturnValue) == 0x000018, "Member 'CM_ControlsTabWI_C_EnableUsedController::CallFunc_IsUsingPlaystationController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, K2Node_Select_Default) == 0x000019, "Member 'CM_ControlsTabWI_C_EnableUsedController::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, K2Node_Select_Default_1) == 0x00001A, "Member 'CM_ControlsTabWI_C_EnableUsedController::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, CallFunc_IsPS5Platform_ReturnValue) == 0x00001B, "Member 'CM_ControlsTabWI_C_EnableUsedController::CallFunc_IsPS5Platform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_EnableUsedController, K2Node_Select_Default_2) == 0x000020, "Member 'CM_ControlsTabWI_C_EnableUsedController::K2Node_Select_Default_2' has a wrong offset!");

// Function CM_ControlsTabWI.CM_ControlsTabWI_C.IsGamepadActive
// 0x0004 (0x0004 - 0x0000)
struct CM_ControlsTabWI_C_IsGamepadActive final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConsolePlatform_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLastControllerTypeGamepad_Value;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_ControlsTabWI_C_IsGamepadActive) == 0x000001, "Wrong alignment on CM_ControlsTabWI_C_IsGamepadActive");
static_assert(sizeof(CM_ControlsTabWI_C_IsGamepadActive) == 0x000004, "Wrong size on CM_ControlsTabWI_C_IsGamepadActive");
static_assert(offsetof(CM_ControlsTabWI_C_IsGamepadActive, Value) == 0x000000, "Member 'CM_ControlsTabWI_C_IsGamepadActive::Value' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsGamepadActive, CallFunc_IsConsolePlatform_ReturnValue) == 0x000001, "Member 'CM_ControlsTabWI_C_IsGamepadActive::CallFunc_IsConsolePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsGamepadActive, CallFunc_IsLastControllerTypeGamepad_Value) == 0x000002, "Member 'CM_ControlsTabWI_C_IsGamepadActive::CallFunc_IsLastControllerTypeGamepad_Value' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsGamepadActive, CallFunc_BooleanOR_ReturnValue) == 0x000003, "Member 'CM_ControlsTabWI_C_IsGamepadActive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function CM_ControlsTabWI.CM_ControlsTabWI_C.IsLastControllerTypeGamepad
// 0x0020 (0x0020 - 0x0000)
struct CM_ControlsTabWI_C_IsLastControllerTypeGamepad final
{
public:
	bool                                          Value;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USCTGameInstance*                       K2Node_DynamicCast_AsSCTGame_Instance;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESCTControllerType                            CallFunc_GetLastControllerType_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad) == 0x000008, "Wrong alignment on CM_ControlsTabWI_C_IsLastControllerTypeGamepad");
static_assert(sizeof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad) == 0x000020, "Wrong size on CM_ControlsTabWI_C_IsLastControllerTypeGamepad");
static_assert(offsetof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad, Value) == 0x000000, "Member 'CM_ControlsTabWI_C_IsLastControllerTypeGamepad::Value' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'CM_ControlsTabWI_C_IsLastControllerTypeGamepad::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad, K2Node_DynamicCast_AsSCTGame_Instance) == 0x000010, "Member 'CM_ControlsTabWI_C_IsLastControllerTypeGamepad::K2Node_DynamicCast_AsSCTGame_Instance' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CM_ControlsTabWI_C_IsLastControllerTypeGamepad::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad, CallFunc_GetLastControllerType_ReturnValue) == 0x000019, "Member 'CM_ControlsTabWI_C_IsLastControllerTypeGamepad::CallFunc_GetLastControllerType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsLastControllerTypeGamepad, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'CM_ControlsTabWI_C_IsLastControllerTypeGamepad::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CM_ControlsTabWI.CM_ControlsTabWI_C.IsUsingPlaystationController
// 0x0020 (0x0020 - 0x0000)
struct CM_ControlsTabWI_C_IsUsingPlaystationController final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USCTGameInstance*                       K2Node_DynamicCast_AsSCTGame_Instance;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESCTControllerType                            CallFunc_GetLastControllerType_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CM_ControlsTabWI_C_IsUsingPlaystationController) == 0x000008, "Wrong alignment on CM_ControlsTabWI_C_IsUsingPlaystationController");
static_assert(sizeof(CM_ControlsTabWI_C_IsUsingPlaystationController) == 0x000020, "Wrong size on CM_ControlsTabWI_C_IsUsingPlaystationController");
static_assert(offsetof(CM_ControlsTabWI_C_IsUsingPlaystationController, ReturnValue) == 0x000000, "Member 'CM_ControlsTabWI_C_IsUsingPlaystationController::ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsUsingPlaystationController, CallFunc_GetGameInstance_ReturnValue) == 0x000008, "Member 'CM_ControlsTabWI_C_IsUsingPlaystationController::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsUsingPlaystationController, K2Node_DynamicCast_AsSCTGame_Instance) == 0x000010, "Member 'CM_ControlsTabWI_C_IsUsingPlaystationController::K2Node_DynamicCast_AsSCTGame_Instance' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsUsingPlaystationController, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'CM_ControlsTabWI_C_IsUsingPlaystationController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsUsingPlaystationController, CallFunc_GetLastControllerType_ReturnValue) == 0x000019, "Member 'CM_ControlsTabWI_C_IsUsingPlaystationController::CallFunc_GetLastControllerType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CM_ControlsTabWI_C_IsUsingPlaystationController, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'CM_ControlsTabWI_C_IsUsingPlaystationController::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}
