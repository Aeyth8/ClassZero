#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrophyBaseBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SCT_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TrophyBaseBP.TrophyBaseBP_C
// 0x00B8 (0x02D8 - 0x0220)
class ATrophyBaseBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                   ChildActor;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HighlightParticleSystem;                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractionCollider;                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SparksParticleSystem;                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Ray_Alpha_3EF3C8234102C8EFBBCED9BD6358F9FC;        // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Ray__Direction_3EF3C8234102C8EFBBCED9BD6358F9FC;   // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Ray;                                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWI_TrophyCustomization_C*              TrophyCustomizationWidget;                         // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrophyIndex;                                       // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCloudTrophy                           SelectedTrophy;                                    // 0x0280(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 CameraName;                                        // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ABP_GodRay_C*                           GodRay;                                            // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TrophyBaseBP(int32 EntryPoint);
	void BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_2_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void Audio_Zoom();
	void Audio_Hover_Trophy();
	void Audio_Change_Trophy();
	void BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed);
	void ReceiveBeginPlay();
	void BndEvt__InteractionCollider_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
	void Ray__UpdateFunc();
	void Ray__FinishedFunc();
	bool DidOneSecondPass();
	void SetTrophy(int32 InTrophyIndex, const struct FCloudTrophy& SelectedTrophy_0);
	void Initialize(class UWI_TrophyCustomization_C* InCustomizationWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrophyBaseBP_C">();
	}
	static class ATrophyBaseBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrophyBaseBP_C>();
	}
};
static_assert(alignof(ATrophyBaseBP_C) == 0x000008, "Wrong alignment on ATrophyBaseBP_C");
static_assert(sizeof(ATrophyBaseBP_C) == 0x0002D8, "Wrong size on ATrophyBaseBP_C");
static_assert(offsetof(ATrophyBaseBP_C, UberGraphFrame) == 0x000220, "Member 'ATrophyBaseBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, ChildActor) == 0x000228, "Member 'ATrophyBaseBP_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, HighlightParticleSystem) == 0x000230, "Member 'ATrophyBaseBP_C::HighlightParticleSystem' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, InteractionCollider) == 0x000238, "Member 'ATrophyBaseBP_C::InteractionCollider' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, Ak) == 0x000240, "Member 'ATrophyBaseBP_C::Ak' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, SparksParticleSystem) == 0x000248, "Member 'ATrophyBaseBP_C::SparksParticleSystem' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, StaticMesh) == 0x000250, "Member 'ATrophyBaseBP_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, DefaultSceneRoot) == 0x000258, "Member 'ATrophyBaseBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, Ray_Alpha_3EF3C8234102C8EFBBCED9BD6358F9FC) == 0x000260, "Member 'ATrophyBaseBP_C::Ray_Alpha_3EF3C8234102C8EFBBCED9BD6358F9FC' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, Ray__Direction_3EF3C8234102C8EFBBCED9BD6358F9FC) == 0x000264, "Member 'ATrophyBaseBP_C::Ray__Direction_3EF3C8234102C8EFBBCED9BD6358F9FC' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, Ray) == 0x000268, "Member 'ATrophyBaseBP_C::Ray' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, TrophyCustomizationWidget) == 0x000270, "Member 'ATrophyBaseBP_C::TrophyCustomizationWidget' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, TrophyIndex) == 0x000278, "Member 'ATrophyBaseBP_C::TrophyIndex' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, SelectedTrophy) == 0x000280, "Member 'ATrophyBaseBP_C::SelectedTrophy' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, CameraName) == 0x0002C0, "Member 'ATrophyBaseBP_C::CameraName' has a wrong offset!");
static_assert(offsetof(ATrophyBaseBP_C, GodRay) == 0x0002D0, "Member 'ATrophyBaseBP_C::GodRay' has a wrong offset!");

}
