#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Interactable

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function I_Interactable.I_Interactable_C.InteractPressed
// 0x00A0 (0x00A0 - 0x0000)
struct I_Interactable_C_InteractPressed final
{
public:
	bool                                          InteractingActorIsCharacter;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InteractingActor;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             InteractedHitResult;                               // 0x0010(0x008C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Success;                                           // 0x009C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(I_Interactable_C_InteractPressed) == 0x000008, "Wrong alignment on I_Interactable_C_InteractPressed");
static_assert(sizeof(I_Interactable_C_InteractPressed) == 0x0000A0, "Wrong size on I_Interactable_C_InteractPressed");
static_assert(offsetof(I_Interactable_C_InteractPressed, InteractingActorIsCharacter) == 0x000000, "Member 'I_Interactable_C_InteractPressed::InteractingActorIsCharacter' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_InteractPressed, InteractingActor) == 0x000008, "Member 'I_Interactable_C_InteractPressed::InteractingActor' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_InteractPressed, InteractedHitResult) == 0x000010, "Member 'I_Interactable_C_InteractPressed::InteractedHitResult' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_InteractPressed, Success) == 0x00009C, "Member 'I_Interactable_C_InteractPressed::Success' has a wrong offset!");

// Function I_Interactable.I_Interactable_C.GetCanInteract
// 0x0018 (0x0018 - 0x0000)
struct I_Interactable_C_GetCanInteract final
{
public:
	bool                                          IsSimulated;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InteractingActorIsCharacter;                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InteractingActor;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanInteract;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(I_Interactable_C_GetCanInteract) == 0x000008, "Wrong alignment on I_Interactable_C_GetCanInteract");
static_assert(sizeof(I_Interactable_C_GetCanInteract) == 0x000018, "Wrong size on I_Interactable_C_GetCanInteract");
static_assert(offsetof(I_Interactable_C_GetCanInteract, IsSimulated) == 0x000000, "Member 'I_Interactable_C_GetCanInteract::IsSimulated' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_GetCanInteract, InteractingActorIsCharacter) == 0x000001, "Member 'I_Interactable_C_GetCanInteract::InteractingActorIsCharacter' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_GetCanInteract, InteractingActor) == 0x000008, "Member 'I_Interactable_C_GetCanInteract::InteractingActor' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_GetCanInteract, CanInteract) == 0x000010, "Member 'I_Interactable_C_GetCanInteract::CanInteract' has a wrong offset!");

// Function I_Interactable.I_Interactable_C.InteractReleased
// 0x0018 (0x0018 - 0x0000)
struct I_Interactable_C_InteractReleased final
{
public:
	bool                                          InteractingActorIsCharacter;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InteractingActor;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Void;                                              // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(I_Interactable_C_InteractReleased) == 0x000008, "Wrong alignment on I_Interactable_C_InteractReleased");
static_assert(sizeof(I_Interactable_C_InteractReleased) == 0x000018, "Wrong size on I_Interactable_C_InteractReleased");
static_assert(offsetof(I_Interactable_C_InteractReleased, InteractingActorIsCharacter) == 0x000000, "Member 'I_Interactable_C_InteractReleased::InteractingActorIsCharacter' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_InteractReleased, InteractingActor) == 0x000008, "Member 'I_Interactable_C_InteractReleased::InteractingActor' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_InteractReleased, Void) == 0x000010, "Member 'I_Interactable_C_InteractReleased::Void' has a wrong offset!");

// Function I_Interactable.I_Interactable_C.Server_LatentInteractionSuccess
// 0x0020 (0x0020 - 0x0000)
struct I_Interactable_C_Server_LatentInteractionSuccess final
{
public:
	bool                                          InteractingActorIsCharacter;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 InteractingInstigator;                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InteractionFacilitator;                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Void;                                              // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(I_Interactable_C_Server_LatentInteractionSuccess) == 0x000008, "Wrong alignment on I_Interactable_C_Server_LatentInteractionSuccess");
static_assert(sizeof(I_Interactable_C_Server_LatentInteractionSuccess) == 0x000020, "Wrong size on I_Interactable_C_Server_LatentInteractionSuccess");
static_assert(offsetof(I_Interactable_C_Server_LatentInteractionSuccess, InteractingActorIsCharacter) == 0x000000, "Member 'I_Interactable_C_Server_LatentInteractionSuccess::InteractingActorIsCharacter' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_Server_LatentInteractionSuccess, InteractingInstigator) == 0x000008, "Member 'I_Interactable_C_Server_LatentInteractionSuccess::InteractingInstigator' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_Server_LatentInteractionSuccess, InteractionFacilitator) == 0x000010, "Member 'I_Interactable_C_Server_LatentInteractionSuccess::InteractionFacilitator' has a wrong offset!");
static_assert(offsetof(I_Interactable_C_Server_LatentInteractionSuccess, Void) == 0x000018, "Member 'I_Interactable_C_Server_LatentInteractionSuccess::Void' has a wrong offset!");

}
