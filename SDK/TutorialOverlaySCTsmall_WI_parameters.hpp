#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialOverlaySCTsmall_WI

#include "Basic.hpp"

#include "SCT_structs.hpp"
#include "S_TutorialContent_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function TutorialOverlaySCTsmall_WI.TutorialOverlaySCTsmall_WI_C.ExecuteUbergraph_TutorialOverlaySCTsmall_WI
// 0x0118 (0x0118 - 0x0000)
struct TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_1;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0038(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(class UPower* PowerChanged, EInventorySlotID SlotId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT;  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      CallFunc_GetSCT_Player_Character_AsCharacter_SCT_1; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                             CallFunc_GetSCT_Player_Character_CharacterInventory_1; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      K2Node_DynamicCast_AsCharacter_SCTBP;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPower*                                 K2Node_CustomEvent_PowerChanged;                   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventorySlotID                              K2Node_CustomEvent_SlotID;                         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_TutorialContent                     CallFunc_GetTutorialDataFromRowName_Out_Row;       // 0x00C8(0x0050)(ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI) == 0x000008, "Wrong alignment on TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI");
static_assert(sizeof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI) == 0x000118, "Wrong size on TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, EntryPoint) == 0x000000, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::EntryPoint' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, Temp_struct_Variable) == 0x000008, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, Temp_delegate_Variable) == 0x000018, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, Temp_struct_Variable_1) == 0x000028, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, Temp_delegate_Variable_1) == 0x000038, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_PlayAnimationForward_ReturnValue) == 0x000068, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000070, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_GetSCT_Player_Character_AsCharacter_SCT) == 0x000078, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_GetSCT_Player_Character_AsCharacter_SCT' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_GetSCT_Player_Character_CharacterInventory) == 0x000080, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_GetSCT_Player_Character_CharacterInventory' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_GetSCT_Player_Character_AsCharacter_SCT_1) == 0x000088, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_GetSCT_Player_Character_AsCharacter_SCT_1' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_GetSCT_Player_Character_CharacterInventory_1) == 0x000090, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_GetSCT_Player_Character_CharacterInventory_1' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_PostAkEvent_ReturnValue) == 0x000098, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_PostAkEvent_ReturnValue_1) == 0x00009C, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000A0, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, K2Node_DynamicCast_AsCharacter_SCTBP) == 0x0000A8, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::K2Node_DynamicCast_AsCharacter_SCTBP' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, K2Node_CustomEvent_PowerChanged) == 0x0000B8, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::K2Node_CustomEvent_PowerChanged' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, K2Node_CustomEvent_SlotID) == 0x0000C0, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::K2Node_CustomEvent_SlotID' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI, CallFunc_GetTutorialDataFromRowName_Out_Row) == 0x0000C8, "Member 'TutorialOverlaySCTsmall_WI_C_ExecuteUbergraph_TutorialOverlaySCTsmall_WI::CallFunc_GetTutorialDataFromRowName_Out_Row' has a wrong offset!");

// Function TutorialOverlaySCTsmall_WI.TutorialOverlaySCTsmall_WI_C.RemoveEquipmentTutorial
// 0x0010 (0x0010 - 0x0000)
struct TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial final
{
public:
	class UPower*                                 PowerChanged;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventorySlotID                              SlotId;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial) == 0x000008, "Wrong alignment on TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial");
static_assert(sizeof(TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial) == 0x000010, "Wrong size on TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial, PowerChanged) == 0x000000, "Member 'TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial::PowerChanged' has a wrong offset!");
static_assert(offsetof(TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial, SlotId) == 0x000008, "Member 'TutorialOverlaySCTsmall_WI_C_RemoveEquipmentTutorial::SlotId' has a wrong offset!");

}

