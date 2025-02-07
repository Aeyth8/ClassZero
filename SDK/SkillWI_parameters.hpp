#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillWI

#include "Basic.hpp"

#include "SCT_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SkillWI.SkillWI_C.ExecuteUbergraph_SkillWI
// 0x0190 (0x0190 - 0x0000)
struct SkillWI_C_ExecuteUbergraph_SkillWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomGameSettings                    K2Node_CustomEvent_customSettings;                 // 0x0004(0x0034)(ConstParm, NoDestructor)
	class UCustomGameSettingsGIS*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomGameSettingsGIS*                 CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ArePersonoidsHidden_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FCustomGameSettings& CustomSettings)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveChildAt_ReturnValue;                // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSkillDetails>                  CallFunc_GetAllSkills_ReturnValue;                 // 0x0088(0x0010)(ReferenceParm)
	TArray<struct FSkillDetails>                  CallFunc_GetAllSkills_ReturnValue_1;               // 0x0098(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillDetails                          CallFunc_Array_Get_Item;                           // 0x00B0(0x0050)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionKeyMapping                 CallFunc_GetKeyMapping_ReturnValue;                // 0x0108(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Key_GetDisplayName_ReturnValue;           // 0x0138(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkillEntryWI_C*                        CallFunc_Create_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IICharacterSCT_C>      K2Node_DynamicCast_AsICharacter_SCT;               // 0x0178(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPersonoidBPI_IsPersonoid;               // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillWI_C_ExecuteUbergraph_SkillWI) == 0x000008, "Wrong alignment on SkillWI_C_ExecuteUbergraph_SkillWI");
static_assert(sizeof(SkillWI_C_ExecuteUbergraph_SkillWI) == 0x000190, "Wrong size on SkillWI_C_ExecuteUbergraph_SkillWI");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, EntryPoint) == 0x000000, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, K2Node_CustomEvent_customSettings) == 0x000004, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::K2Node_CustomEvent_customSettings' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000038, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x000040, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_ArePersonoidsHidden_ReturnValue) == 0x000048, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_ArePersonoidsHidden_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, Temp_int_Array_Index_Variable) == 0x000064, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, Temp_int_Variable) == 0x000068, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_RemoveChildAt_ReturnValue) == 0x00006C, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_RemoveChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetSCT_Player_Character_AsCharacter_SCT) == 0x000078, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetSCT_Player_Character_AsCharacter_SCT' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetSCT_Player_Character_CharacterInventory) == 0x000080, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetSCT_Player_Character_CharacterInventory' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetAllSkills_ReturnValue) == 0x000088, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetAllSkills_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetAllSkills_ReturnValue_1) == 0x000098, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetAllSkills_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000100, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetKeyMapping_ReturnValue) == 0x000108, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetKeyMapping_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Array_Length_ReturnValue_1) == 0x000130, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Key_GetDisplayName_ReturnValue) == 0x000138, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Key_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetOwningPlayer_ReturnValue) == 0x000158, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_Create_ReturnValue) == 0x000160, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000168, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000170, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, K2Node_DynamicCast_AsICharacter_SCT) == 0x000178, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::K2Node_DynamicCast_AsICharacter_SCT' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_IsPersonoidBPI_IsPersonoid) == 0x000189, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_IsPersonoidBPI_IsPersonoid' has a wrong offset!");
static_assert(offsetof(SkillWI_C_ExecuteUbergraph_SkillWI, CallFunc_BooleanAND_ReturnValue) == 0x00018A, "Member 'SkillWI_C_ExecuteUbergraph_SkillWI::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SkillWI.SkillWI_C.OnCustomSettingsApplied
// 0x0034 (0x0034 - 0x0000)
struct SkillWI_C_OnCustomSettingsApplied final
{
public:
	struct FCustomGameSettings                    CustomSettings;                                    // 0x0000(0x0034)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(SkillWI_C_OnCustomSettingsApplied) == 0x000004, "Wrong alignment on SkillWI_C_OnCustomSettingsApplied");
static_assert(sizeof(SkillWI_C_OnCustomSettingsApplied) == 0x000034, "Wrong size on SkillWI_C_OnCustomSettingsApplied");
static_assert(offsetof(SkillWI_C_OnCustomSettingsApplied, CustomSettings) == 0x000000, "Member 'SkillWI_C_OnCustomSettingsApplied::CustomSettings' has a wrong offset!");

}

