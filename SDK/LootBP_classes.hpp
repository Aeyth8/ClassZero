#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LootBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LootBP.LootBP_C
// 0x0108 (0x0328 - 0x0220)
class ALootBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                   OutlineArea;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractionProgressBarCreator*         InteractionProgressBarCreator;                     // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractionComponent*                  Interaction;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pickup_Placeholder_Hook;                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UContextStaticMeshComponent*            ContextStaticMesh;                                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SmoothInSmoothOut_Amount_03F359594B3E85074060F499B41573F8; // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SmoothInSmoothOut__Direction_03F359594B3E85074060F499B41573F8; // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_26D[0x3];                                      // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SmoothInSmoothOut;                                 // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AudioPressed;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AudioReleased;                                     // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AudioComplete;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InteractionTime;                                   // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpened;                                          // 0x0294(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   Loot_Item;                                         // 0x0298(0x0028)(Edit, BlueprintVisible, Net, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsLootPickedUp;                                    // 0x02C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          AutoLoot;                                          // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C2[0x6];                                      // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APickupActor_C*                         PickupRef;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_SpawnedLoot;                                    // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          Audio_Post_Complete;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterSCTBP_C*                      InteractingCharacter;                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LootToGrant;                                       // 0x02F0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ContainsNoLoot;                                    // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_Collected;                                      // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          AudioIdle;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ScoreVariable;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayPartyPop;                                      // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void On_SpawnedLoot__DelegateSignature();
	void On_Collected__DelegateSignature();
	void ExecuteUbergraph_LootBP(int32 EntryPoint);
	void BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_4_ToggleHighlightEffect__DelegateSignature(bool ShouldShow);
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_0_InteractionSuccessfulDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void Audio_Idle();
	void Confirmed_Empty_Or_Item_Looted();
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_5_InteractionEndedDelegate__DelegateSignature(const struct FInteractionPayload& Payload, bool WasCancelled);
	void Spawn_Loot_And_Save_Power_To_Grant();
	void Attempt_Loot();
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_1_InteractionDelegate__DelegateSignature(const struct FInteractionPayload& Payload);
	void LootPickedUp_Cosmetic();
	void LootPickedupServer(class AActor* DestroyedActor);
	void OpenUpdate_Cosmetic(float Alpha);
	void OpenFinished_Cosmetic();
	void OpenStart_Cosmetic();
	void Audio_OpenStop();
	void Audio_OpenStart();
	void Audio_Released();
	void Audio_Pressed();
	void SmoothInSmoothOut__UpdateFunc();
	void SmoothInSmoothOut__FinishedFunc();
	void UserConstructionScript();
	void OnRep_IsOpened();
	void OnRep_IsLootPickedUp();
	void Spawn_Loot(class APickupActor_C** Spawned_Pickup);
	void GetAutoGrantLoot(TArray<class UClass*>* GetGrantedLoot);
	void AutoGrantLoot(class UInventory* Instigator_Inventory);
	void GetFirstAutoGrantLoot(class UClass** Power);
	void Can_Add_Powers(class UInventory* Inventory, bool* Return);
	void GetIsLootStandAndNotSyringeStand(bool* IsLootStandAndNotSyringeStand);
	void GetOutlineMeshes(TArray<class UPrimitiveComponent*>* Meshes);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LootBP_C">();
	}
	static class ALootBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALootBP_C>();
	}
};
static_assert(alignof(ALootBP_C) == 0x000008, "Wrong alignment on ALootBP_C");
static_assert(sizeof(ALootBP_C) == 0x000328, "Wrong size on ALootBP_C");
static_assert(offsetof(ALootBP_C, UberGraphFrame) == 0x000220, "Member 'ALootBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALootBP_C, OutlineArea) == 0x000228, "Member 'ALootBP_C::OutlineArea' has a wrong offset!");
static_assert(offsetof(ALootBP_C, InteractionProgressBarCreator) == 0x000230, "Member 'ALootBP_C::InteractionProgressBarCreator' has a wrong offset!");
static_assert(offsetof(ALootBP_C, Interaction) == 0x000238, "Member 'ALootBP_C::Interaction' has a wrong offset!");
static_assert(offsetof(ALootBP_C, Ak) == 0x000240, "Member 'ALootBP_C::Ak' has a wrong offset!");
static_assert(offsetof(ALootBP_C, Pickup_Placeholder_Hook) == 0x000248, "Member 'ALootBP_C::Pickup_Placeholder_Hook' has a wrong offset!");
static_assert(offsetof(ALootBP_C, ContextStaticMesh) == 0x000250, "Member 'ALootBP_C::ContextStaticMesh' has a wrong offset!");
static_assert(offsetof(ALootBP_C, StaticMesh) == 0x000258, "Member 'ALootBP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ALootBP_C, Root) == 0x000260, "Member 'ALootBP_C::Root' has a wrong offset!");
static_assert(offsetof(ALootBP_C, SmoothInSmoothOut_Amount_03F359594B3E85074060F499B41573F8) == 0x000268, "Member 'ALootBP_C::SmoothInSmoothOut_Amount_03F359594B3E85074060F499B41573F8' has a wrong offset!");
static_assert(offsetof(ALootBP_C, SmoothInSmoothOut__Direction_03F359594B3E85074060F499B41573F8) == 0x00026C, "Member 'ALootBP_C::SmoothInSmoothOut__Direction_03F359594B3E85074060F499B41573F8' has a wrong offset!");
static_assert(offsetof(ALootBP_C, SmoothInSmoothOut) == 0x000270, "Member 'ALootBP_C::SmoothInSmoothOut' has a wrong offset!");
static_assert(offsetof(ALootBP_C, AudioPressed) == 0x000278, "Member 'ALootBP_C::AudioPressed' has a wrong offset!");
static_assert(offsetof(ALootBP_C, AudioReleased) == 0x000280, "Member 'ALootBP_C::AudioReleased' has a wrong offset!");
static_assert(offsetof(ALootBP_C, AudioComplete) == 0x000288, "Member 'ALootBP_C::AudioComplete' has a wrong offset!");
static_assert(offsetof(ALootBP_C, InteractionTime) == 0x000290, "Member 'ALootBP_C::InteractionTime' has a wrong offset!");
static_assert(offsetof(ALootBP_C, IsOpened) == 0x000294, "Member 'ALootBP_C::IsOpened' has a wrong offset!");
static_assert(offsetof(ALootBP_C, Loot_Item) == 0x000298, "Member 'ALootBP_C::Loot_Item' has a wrong offset!");
static_assert(offsetof(ALootBP_C, IsLootPickedUp) == 0x0002C0, "Member 'ALootBP_C::IsLootPickedUp' has a wrong offset!");
static_assert(offsetof(ALootBP_C, AutoLoot) == 0x0002C1, "Member 'ALootBP_C::AutoLoot' has a wrong offset!");
static_assert(offsetof(ALootBP_C, PickupRef) == 0x0002C8, "Member 'ALootBP_C::PickupRef' has a wrong offset!");
static_assert(offsetof(ALootBP_C, On_SpawnedLoot) == 0x0002D0, "Member 'ALootBP_C::On_SpawnedLoot' has a wrong offset!");
static_assert(offsetof(ALootBP_C, Audio_Post_Complete) == 0x0002E0, "Member 'ALootBP_C::Audio_Post_Complete' has a wrong offset!");
static_assert(offsetof(ALootBP_C, InteractingCharacter) == 0x0002E8, "Member 'ALootBP_C::InteractingCharacter' has a wrong offset!");
static_assert(offsetof(ALootBP_C, LootToGrant) == 0x0002F0, "Member 'ALootBP_C::LootToGrant' has a wrong offset!");
static_assert(offsetof(ALootBP_C, ContainsNoLoot) == 0x0002F8, "Member 'ALootBP_C::ContainsNoLoot' has a wrong offset!");
static_assert(offsetof(ALootBP_C, On_Collected) == 0x000300, "Member 'ALootBP_C::On_Collected' has a wrong offset!");
static_assert(offsetof(ALootBP_C, AudioIdle) == 0x000310, "Member 'ALootBP_C::AudioIdle' has a wrong offset!");
static_assert(offsetof(ALootBP_C, ScoreVariable) == 0x000318, "Member 'ALootBP_C::ScoreVariable' has a wrong offset!");
static_assert(offsetof(ALootBP_C, PlayPartyPop) == 0x000320, "Member 'ALootBP_C::PlayPartyPop' has a wrong offset!");

}
