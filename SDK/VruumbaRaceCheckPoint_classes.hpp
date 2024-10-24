#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaRaceCheckPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VruumbaRaceCheckPoint.VruumbaRaceCheckPoint_C
// 0x0090 (0x02B0 - 0x0220)
class AVruumbaRaceCheckPoint_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UParticleSystemComponent*               SplineParticle1;                                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeSpline2;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               SplineParticle;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CubeSpline;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*               PS_Ring;                                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         RingAnimation_RingAnimation_2B299297444EB7497F347F99F90238A3; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RingAnimation__Direction_2B299297444EB7497F347F99F90238A3; // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RingAnimation;                                     // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckPointNumber;                                  // 0x0290(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CheckPointCleared;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         BoostAmount;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Activated;                                         // 0x02AC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void CheckPointCleared__DelegateSignature(int32 NextCheckPoint);
	void ExecuteUbergraph_VruumbaRaceCheckPoint(int32 EntryPoint);
	void Audio_CheckPoint();
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void RingAnimation__UpdateFunc();
	void RingAnimation__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VruumbaRaceCheckPoint_C">();
	}
	static class AVruumbaRaceCheckPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVruumbaRaceCheckPoint_C>();
	}
};
static_assert(alignof(AVruumbaRaceCheckPoint_C) == 0x000008, "Wrong alignment on AVruumbaRaceCheckPoint_C");
static_assert(sizeof(AVruumbaRaceCheckPoint_C) == 0x0002B0, "Wrong size on AVruumbaRaceCheckPoint_C");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, UberGraphFrame) == 0x000220, "Member 'AVruumbaRaceCheckPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, SplineParticle1) == 0x000228, "Member 'AVruumbaRaceCheckPoint_C::SplineParticle1' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, CubeSpline2) == 0x000230, "Member 'AVruumbaRaceCheckPoint_C::CubeSpline2' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, SplineParticle) == 0x000238, "Member 'AVruumbaRaceCheckPoint_C::SplineParticle' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, CubeSpline) == 0x000240, "Member 'AVruumbaRaceCheckPoint_C::CubeSpline' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, Spline) == 0x000248, "Member 'AVruumbaRaceCheckPoint_C::Spline' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, Ak) == 0x000250, "Member 'AVruumbaRaceCheckPoint_C::Ak' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, ParticleSystem) == 0x000258, "Member 'AVruumbaRaceCheckPoint_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, PS_Ring) == 0x000260, "Member 'AVruumbaRaceCheckPoint_C::PS_Ring' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, Arrow) == 0x000268, "Member 'AVruumbaRaceCheckPoint_C::Arrow' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, Trigger) == 0x000270, "Member 'AVruumbaRaceCheckPoint_C::Trigger' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, Scene) == 0x000278, "Member 'AVruumbaRaceCheckPoint_C::Scene' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, RingAnimation_RingAnimation_2B299297444EB7497F347F99F90238A3) == 0x000280, "Member 'AVruumbaRaceCheckPoint_C::RingAnimation_RingAnimation_2B299297444EB7497F347F99F90238A3' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, RingAnimation__Direction_2B299297444EB7497F347F99F90238A3) == 0x000284, "Member 'AVruumbaRaceCheckPoint_C::RingAnimation__Direction_2B299297444EB7497F347F99F90238A3' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, RingAnimation) == 0x000288, "Member 'AVruumbaRaceCheckPoint_C::RingAnimation' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, CheckPointNumber) == 0x000290, "Member 'AVruumbaRaceCheckPoint_C::CheckPointNumber' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, CheckPointCleared) == 0x000298, "Member 'AVruumbaRaceCheckPoint_C::CheckPointCleared' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, BoostAmount) == 0x0002A8, "Member 'AVruumbaRaceCheckPoint_C::BoostAmount' has a wrong offset!");
static_assert(offsetof(AVruumbaRaceCheckPoint_C, Activated) == 0x0002AC, "Member 'AVruumbaRaceCheckPoint_C::Activated' has a wrong offset!");

}

