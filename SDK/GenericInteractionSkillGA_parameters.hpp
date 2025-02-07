#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericInteractionSkillGA

#include "Basic.hpp"

#include "SCT_structs.hpp"


namespace SDK::Params
{

// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.ExecuteUbergraph_GenericInteractionSkillGA
// 0x0038 (0x0038 - 0x0000)
struct GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      K2Node_DynamicCast_AsCharacter_SCTBP;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacterSCTBP_C*                      K2Node_DynamicCast_AsCharacter_SCTBP_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA) == 0x000008, "Wrong alignment on GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA");
static_assert(sizeof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA) == 0x000038, "Wrong size on GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, EntryPoint) == 0x000000, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::EntryPoint' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, CallFunc_GetOwningActorFromActorInfo_ReturnValue_1) == 0x000010, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::CallFunc_GetOwningActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, K2Node_DynamicCast_AsCharacter_SCTBP) == 0x000018, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::K2Node_DynamicCast_AsCharacter_SCTBP' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, K2Node_DynamicCast_AsCharacter_SCTBP_1) == 0x000028, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::K2Node_DynamicCast_AsCharacter_SCTBP_1' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA, K2Node_Event_bWasCancelled) == 0x000031, "Member 'GenericInteractionSkillGA_C_ExecuteUbergraph_GenericInteractionSkillGA::K2Node_Event_bWasCancelled' has a wrong offset!");

// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GenericInteractionSkillGA_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericInteractionSkillGA_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GenericInteractionSkillGA_C_K2_OnEndAbility");
static_assert(sizeof(GenericInteractionSkillGA_C_K2_OnEndAbility) == 0x000001, "Wrong size on GenericInteractionSkillGA_C_K2_OnEndAbility");
static_assert(offsetof(GenericInteractionSkillGA_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GenericInteractionSkillGA_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.GetOwenerSCTAnimBP
// 0x0038 (0x0038 - 0x0000)
struct GenericInteractionSkillGA_C_GetOwenerSCTAnimBP final
{
public:
	class UAnimBpSCT_C*                           AsAnim_Bp_SCT;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimBpSCT_C*                           K2Node_DynamicCast_AsAnim_Bp_SCT;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP) == 0x000008, "Wrong alignment on GenericInteractionSkillGA_C_GetOwenerSCTAnimBP");
static_assert(sizeof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP) == 0x000038, "Wrong size on GenericInteractionSkillGA_C_GetOwenerSCTAnimBP");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, AsAnim_Bp_SCT) == 0x000000, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::AsAnim_Bp_SCT' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, K2Node_DynamicCast_AsCharacter) == 0x000010, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, CallFunc_GetAnimInstance_ReturnValue) == 0x000020, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, K2Node_DynamicCast_AsAnim_Bp_SCT) == 0x000028, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::K2Node_DynamicCast_AsAnim_Bp_SCT' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetOwenerSCTAnimBP, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'GenericInteractionSkillGA_C_GetOwenerSCTAnimBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.GetContextDescription
// 0x0030 (0x0030 - 0x0000)
struct GenericInteractionSkillGA_C_GetContextDescription final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_GetContextDescription_ReturnValue;        // 0x0018(0x0018)()
};
static_assert(alignof(GenericInteractionSkillGA_C_GetContextDescription) == 0x000008, "Wrong alignment on GenericInteractionSkillGA_C_GetContextDescription");
static_assert(sizeof(GenericInteractionSkillGA_C_GetContextDescription) == 0x000030, "Wrong size on GenericInteractionSkillGA_C_GetContextDescription");
static_assert(offsetof(GenericInteractionSkillGA_C_GetContextDescription, ReturnValue) == 0x000000, "Member 'GenericInteractionSkillGA_C_GetContextDescription::ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_GetContextDescription, CallFunc_GetContextDescription_ReturnValue) == 0x000018, "Member 'GenericInteractionSkillGA_C_GetContextDescription::CallFunc_GetContextDescription_ReturnValue' has a wrong offset!");

// Function GenericInteractionSkillGA.GenericInteractionSkillGA_C.K2_CanUseContextSpec
// 0x00C8 (0x00C8 - 0x0000)
struct GenericInteractionSkillGA_C_K2_CanUseContextSpec final
{
public:
	struct FContextSpec                           Spec;                                              // 0x0000(0x00C0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasValidInteractionComponent_ReturnValue; // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GenericInteractionSkillGA_C_K2_CanUseContextSpec) == 0x000008, "Wrong alignment on GenericInteractionSkillGA_C_K2_CanUseContextSpec");
static_assert(sizeof(GenericInteractionSkillGA_C_K2_CanUseContextSpec) == 0x0000C8, "Wrong size on GenericInteractionSkillGA_C_K2_CanUseContextSpec");
static_assert(offsetof(GenericInteractionSkillGA_C_K2_CanUseContextSpec, Spec) == 0x000000, "Member 'GenericInteractionSkillGA_C_K2_CanUseContextSpec::Spec' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_K2_CanUseContextSpec, ReturnValue) == 0x0000C0, "Member 'GenericInteractionSkillGA_C_K2_CanUseContextSpec::ReturnValue' has a wrong offset!");
static_assert(offsetof(GenericInteractionSkillGA_C_K2_CanUseContextSpec, CallFunc_HasValidInteractionComponent_ReturnValue) == 0x0000C1, "Member 'GenericInteractionSkillGA_C_K2_CanUseContextSpec::CallFunc_HasValidInteractionComponent_ReturnValue' has a wrong offset!");

}

