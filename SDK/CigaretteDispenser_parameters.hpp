#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CigaretteDispenser

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SCT_structs.hpp"
#include "AkAudio_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function CigaretteDispenser.CigaretteDispenser_C.ExecuteUbergraph_CigaretteDispenser
// 0x0090 (0x0090 - 0x0000)
struct CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0018(0x0010)(ConstParm, ReferenceParm)
	struct FInteractionPayload                    K2Node_ComponentBoundEvent_payload;                // 0x0028(0x0030)(ConstParm, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IICharacterSCT_C>      K2Node_DynamicCast_AsICharacter_SCT;               // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponentBPI_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser) == 0x000008, "Wrong alignment on CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser");
static_assert(sizeof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser) == 0x000090, "Wrong size on CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, EntryPoint) == 0x000000, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::EntryPoint' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, Temp_delegate_Variable) == 0x000004, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, Temp_struct_Variable) == 0x000018, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, K2Node_ComponentBoundEvent_payload) == 0x000028, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::K2Node_ComponentBoundEvent_payload' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, CallFunc_PostAkEvent_ReturnValue) == 0x000058, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, CallFunc_IsDedicatedServer_ReturnValue) == 0x00005C, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, K2Node_DynamicCast_AsICharacter_SCT) == 0x000060, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::K2Node_DynamicCast_AsICharacter_SCT' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, CallFunc_GetAbilitySystemComponentBPI_ReturnValue) == 0x000078, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::CallFunc_GetAbilitySystemComponentBPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000080, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser, CallFunc_HasAuthority_ReturnValue) == 0x000088, "Member 'CigaretteDispenser_C_ExecuteUbergraph_CigaretteDispenser::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function CigaretteDispenser.CigaretteDispenser_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature final
{
public:
	struct FInteractionPayload                    Payload;                                           // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature) == 0x000008, "Wrong alignment on CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature");
static_assert(sizeof(CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature) == 0x000030, "Wrong size on CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature");
static_assert(offsetof(CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature, Payload) == 0x000000, "Member 'CigaretteDispenser_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_4_InteractionDelegate__DelegateSignature::Payload' has a wrong offset!");

// Function CigaretteDispenser.CigaretteDispenser_C.Spawn and Attach Smoke
// 0x0060 (0x0060 - 0x0000)
struct CigaretteDispenser_C_Spawn_and_Attach_Smoke final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      K2Node_DynamicCast_AsCharacter_SCTBP;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACigarette_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CigaretteDispenser_C_Spawn_and_Attach_Smoke) == 0x000010, "Wrong alignment on CigaretteDispenser_C_Spawn_and_Attach_Smoke");
static_assert(sizeof(CigaretteDispenser_C_Spawn_and_Attach_Smoke) == 0x000060, "Wrong size on CigaretteDispenser_C_Spawn_and_Attach_Smoke");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, Actor) == 0x000000, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::Actor' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, K2Node_DynamicCast_AsCharacter_SCTBP) == 0x000008, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::K2Node_DynamicCast_AsCharacter_SCTBP' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(CigaretteDispenser_C_Spawn_and_Attach_Smoke, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'CigaretteDispenser_C_Spawn_and_Attach_Smoke::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}
