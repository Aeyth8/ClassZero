#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeycardObjectiveWI

#include "Basic.hpp"

#include "LevelProgressObjectives_structs.hpp"
#include "E_PickupType_structs.hpp"


namespace SDK::Params
{

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.ExecuteUbergraph_KeycardObjectiveWI
// 0x01A0 (0x01A0 - 0x0000)
struct KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_3;                            // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_4;                            // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0050(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_2;                              // 0x0070(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0088(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AKeySocket3in1BP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x00A8(0x0010)(ReferenceParm)
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_5;                            // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKeySocket3in1BP_C*                     CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_PickupType                                  K2Node_CustomEvent_PickUpType;                     // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsShowdown;                     // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Audio;                          // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CE[0x2];                                       // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IICharacterSCT_C>      K2Node_DynamicCast_AsICharacter_SCT;               // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPersonoidBPI_IsPersonoid;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EA[0x6];                                       // 0x00EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_6;                            // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x00F8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0110(0x0018)()
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT;  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory; // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKeycardObjectiveEntryWI_C*             Temp_object_Variable_7;                            // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PickupType                                  Temp_byte_Variable;                                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeycardObjectiveEntryWI_C*             K2Node_Select_Default_2;                           // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_3;                           // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x7];                                      // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APOITriggerSCT_C*>               CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0178(0x0010)(ReferenceParm)
	class APOITriggerSCT_C*                       CallFunc_Array_Get_Item_1;                         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(E_PickupType PickUpType)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0190(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI) == 0x000008, "Wrong alignment on KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI");
static_assert(sizeof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI) == 0x0001A0, "Wrong size on KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, EntryPoint) == 0x000000, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable) == 0x000008, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_1) == 0x000010, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_2) == 0x000018, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_3) == 0x000020, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_4) == 0x000028, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_bool_Variable) == 0x000030, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_text_Variable) == 0x000038, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_text_Variable_1) == 0x000050, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_bool_Variable_1) == 0x000068, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_text_Variable_2) == 0x000070, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_text_Variable_3) == 0x000088, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_bool_Variable_2) == 0x0000A0, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000A8, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_5) == 0x0000B8, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_CustomEvent_PickUpType) == 0x0000C9, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_CustomEvent_PickUpType' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_CustomEvent_IsShowdown) == 0x0000CA, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_CustomEvent_IsShowdown' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_CustomEvent_Audio) == 0x0000CB, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_CustomEvent_Audio' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_Event_IsDesignTime) == 0x0000CC, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_Not_PreBool_ReturnValue) == 0x0000CD, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000D0, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_DynamicCast_AsICharacter_SCT) == 0x0000D8, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_DynamicCast_AsICharacter_SCT' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_IsPersonoidBPI_IsPersonoid) == 0x0000E9, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_IsPersonoidBPI_IsPersonoid' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_6) == 0x0000F0, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_Select_Default) == 0x0000F8, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_Select_Default_1) == 0x000110, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_GetSCT_Player_Character_AsCharacter_SCT) == 0x000128, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_GetSCT_Player_Character_AsCharacter_SCT' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_GetSCT_Player_Character_CharacterInventory) == 0x000130, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_GetSCT_Player_Character_CharacterInventory' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_object_Variable_7) == 0x000138, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, Temp_byte_Variable) == 0x000140, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_Select_Default_2) == 0x000148, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_Select_Default_3) == 0x000150, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000158, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_PlayAnimation_ReturnValue) == 0x000168, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000170, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000178, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI, K2Node_CreateDelegate_OutputDelegate) == 0x000190, "Member 'KeycardObjectiveWI_C_ExecuteUbergraph_KeycardObjectiveWI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KeycardObjectiveWI_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeycardObjectiveWI_C_PreConstruct) == 0x000001, "Wrong alignment on KeycardObjectiveWI_C_PreConstruct");
static_assert(sizeof(KeycardObjectiveWI_C_PreConstruct) == 0x000001, "Wrong size on KeycardObjectiveWI_C_PreConstruct");
static_assert(offsetof(KeycardObjectiveWI_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KeycardObjectiveWI_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.Animate Widget In And Reset
// 0x0002 (0x0002 - 0x0000)
struct KeycardObjectiveWI_C_Animate_Widget_In_And_Reset final
{
public:
	bool                                          IsShowdown;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Audio;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeycardObjectiveWI_C_Animate_Widget_In_And_Reset) == 0x000001, "Wrong alignment on KeycardObjectiveWI_C_Animate_Widget_In_And_Reset");
static_assert(sizeof(KeycardObjectiveWI_C_Animate_Widget_In_And_Reset) == 0x000002, "Wrong size on KeycardObjectiveWI_C_Animate_Widget_In_And_Reset");
static_assert(offsetof(KeycardObjectiveWI_C_Animate_Widget_In_And_Reset, IsShowdown) == 0x000000, "Member 'KeycardObjectiveWI_C_Animate_Widget_In_And_Reset::IsShowdown' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_Animate_Widget_In_And_Reset, Audio) == 0x000001, "Member 'KeycardObjectiveWI_C_Animate_Widget_In_And_Reset::Audio' has a wrong offset!");

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.On Receive Key
// 0x0001 (0x0001 - 0x0000)
struct KeycardObjectiveWI_C_On_Receive_Key final
{
public:
	E_PickupType                                  PickUpType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeycardObjectiveWI_C_On_Receive_Key) == 0x000001, "Wrong alignment on KeycardObjectiveWI_C_On_Receive_Key");
static_assert(sizeof(KeycardObjectiveWI_C_On_Receive_Key) == 0x000001, "Wrong size on KeycardObjectiveWI_C_On_Receive_Key");
static_assert(offsetof(KeycardObjectiveWI_C_On_Receive_Key, PickUpType) == 0x000000, "Member 'KeycardObjectiveWI_C_On_Receive_Key::PickUpType' has a wrong offset!");

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.SetType
// 0x0010 (0x0010 - 0x0000)
struct KeycardObjectiveWI_C_SetType final
{
public:
	bool                                          IsShowdown;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ELevelProgressObjectives                      LevelProgressObjective;                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELevelProgressObjectives                      Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeycardObjectiveWI_C_SetType) == 0x000008, "Wrong alignment on KeycardObjectiveWI_C_SetType");
static_assert(sizeof(KeycardObjectiveWI_C_SetType) == 0x000010, "Wrong size on KeycardObjectiveWI_C_SetType");
static_assert(offsetof(KeycardObjectiveWI_C_SetType, IsShowdown) == 0x000000, "Member 'KeycardObjectiveWI_C_SetType::IsShowdown' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_SetType, LevelProgressObjective) == 0x000001, "Member 'KeycardObjectiveWI_C_SetType::LevelProgressObjective' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_SetType, Temp_byte_Variable) == 0x000002, "Member 'KeycardObjectiveWI_C_SetType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_SetType, K2Node_Select_Default) == 0x000008, "Member 'KeycardObjectiveWI_C_SetType::K2Node_Select_Default' has a wrong offset!");

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.SetHandedInKeycardColors
// 0x0020 (0x0020 - 0x0000)
struct KeycardObjectiveWI_C_SetHandedInKeycardColors final
{
public:
	TArray<class AKeySocket3in1BP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0000(0x0010)(ReferenceParm)
	class AKeySocket3in1BP_C*                     CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeycardObjectiveWI_C_SetHandedInKeycardColors) == 0x000008, "Wrong alignment on KeycardObjectiveWI_C_SetHandedInKeycardColors");
static_assert(sizeof(KeycardObjectiveWI_C_SetHandedInKeycardColors) == 0x000020, "Wrong size on KeycardObjectiveWI_C_SetHandedInKeycardColors");
static_assert(offsetof(KeycardObjectiveWI_C_SetHandedInKeycardColors, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'KeycardObjectiveWI_C_SetHandedInKeycardColors::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_SetHandedInKeycardColors, CallFunc_Array_Get_Item) == 0x000010, "Member 'KeycardObjectiveWI_C_SetHandedInKeycardColors::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_SetHandedInKeycardColors, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'KeycardObjectiveWI_C_SetHandedInKeycardColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function KeycardObjectiveWI.KeycardObjectiveWI_C.RemoveAllKeycradObjectivesIfNotSelf
// 0x0068 (0x0068 - 0x0000)
struct KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AKeySocket3in1BP_C*>             CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class AKeySocket3in1BP_C*                     CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UKeycardObjectiveWI_C*>          CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKeycardObjectiveWI_C*                  CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf) == 0x000008, "Wrong alignment on KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf");
static_assert(sizeof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf) == 0x000068, "Wrong size on KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, Temp_int_Array_Index_Variable) == 0x000008, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Array_Get_Item) == 0x000028, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000040, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_Less_IntInt_ReturnValue_1) == 0x000060, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000061, "Member 'KeycardObjectiveWI_C_RemoveAllKeycradObjectivesIfNotSelf::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}
