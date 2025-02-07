#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FadeToBlackCollider

#include "Basic.hpp"


namespace SDK::Params
{

// Function FadeToBlackCollider.FadeToBlackCollider_C.ExecuteUbergraph_FadeToBlackCollider
// 0x0048 (0x0048 - 0x0000)
struct FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterSCTBP_C*                      K2Node_Event_Character;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterWI_C*                         CallFunc_GetSCT_CharacterWidget_CharacterWI;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPower*                                 CallFunc_TryGetPowerFromType_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASCTPlayerController_MatchBP_C*         K2Node_DynamicCast_AsSCTPlayer_Controller_Match_BP; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider) == 0x000008, "Wrong alignment on FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider");
static_assert(sizeof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider) == 0x000048, "Wrong size on FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, EntryPoint) == 0x000000, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::EntryPoint' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, K2Node_Event_Character) == 0x000008, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::K2Node_Event_Character' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, CallFunc_GetSCT_CharacterWidget_CharacterWI) == 0x000010, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::CallFunc_GetSCT_CharacterWidget_CharacterWI' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, CallFunc_TryGetPowerFromType_ReturnValue) == 0x000018, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::CallFunc_TryGetPowerFromType_ReturnValue' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, CallFunc_IsLocallyControlled_ReturnValue) == 0x000029, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, CallFunc_GetController_ReturnValue) == 0x000030, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, K2Node_DynamicCast_AsSCTPlayer_Controller_Match_BP) == 0x000038, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::K2Node_DynamicCast_AsSCTPlayer_Controller_Match_BP' has a wrong offset!");
static_assert(offsetof(FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'FadeToBlackCollider_C_ExecuteUbergraph_FadeToBlackCollider::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function FadeToBlackCollider.FadeToBlackCollider_C.Character Entered
// 0x0008 (0x0008 - 0x0000)
struct FadeToBlackCollider_C_Character_Entered final
{
public:
	class ACharacterSCTBP_C*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FadeToBlackCollider_C_Character_Entered) == 0x000008, "Wrong alignment on FadeToBlackCollider_C_Character_Entered");
static_assert(sizeof(FadeToBlackCollider_C_Character_Entered) == 0x000008, "Wrong size on FadeToBlackCollider_C_Character_Entered");
static_assert(offsetof(FadeToBlackCollider_C_Character_Entered, Character) == 0x000000, "Member 'FadeToBlackCollider_C_Character_Entered::Character' has a wrong offset!");

}

