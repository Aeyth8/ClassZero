#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseInteractableSCTBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseInteractableSCTBP.BaseInteractableSCTBP_C
// 0x0030 (0x0250 - 0x0220)
class ABaseInteractableSCTBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                   OutlinePostProcessVolume;                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UContextStaticMeshComponent*            ContextStaticMesh;                                 // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UInteractionComponent*                  Interaction;                                       // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BaseInteractableSCTBP(int32 EntryPoint);
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_1_InteractionEndedDelegate__DelegateSignature(const struct FInteractionPayload& Payload, bool WasCancelled);
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_0_InteractionDelegate__DelegateSignature(const struct FInteractionPayload& Payload);
	void BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_3_PriorityDelegate__DelegateSignature();
	void BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_2_PriorityDelegate__DelegateSignature();
	TArray<class UPrimitiveComponent*> GetOutlineMeshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseInteractableSCTBP_C">();
	}
	static class ABaseInteractableSCTBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseInteractableSCTBP_C>();
	}
};
static_assert(alignof(ABaseInteractableSCTBP_C) == 0x000008, "Wrong alignment on ABaseInteractableSCTBP_C");
static_assert(sizeof(ABaseInteractableSCTBP_C) == 0x000250, "Wrong size on ABaseInteractableSCTBP_C");
static_assert(offsetof(ABaseInteractableSCTBP_C, UberGraphFrame) == 0x000220, "Member 'ABaseInteractableSCTBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABaseInteractableSCTBP_C, OutlinePostProcessVolume) == 0x000228, "Member 'ABaseInteractableSCTBP_C::OutlinePostProcessVolume' has a wrong offset!");
static_assert(offsetof(ABaseInteractableSCTBP_C, StaticMeshComponent) == 0x000230, "Member 'ABaseInteractableSCTBP_C::StaticMeshComponent' has a wrong offset!");
static_assert(offsetof(ABaseInteractableSCTBP_C, Root) == 0x000238, "Member 'ABaseInteractableSCTBP_C::Root' has a wrong offset!");
static_assert(offsetof(ABaseInteractableSCTBP_C, ContextStaticMesh) == 0x000240, "Member 'ABaseInteractableSCTBP_C::ContextStaticMesh' has a wrong offset!");
static_assert(offsetof(ABaseInteractableSCTBP_C, Interaction) == 0x000248, "Member 'ABaseInteractableSCTBP_C::Interaction' has a wrong offset!");

}

