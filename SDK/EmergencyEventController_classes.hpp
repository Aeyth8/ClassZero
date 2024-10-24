#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmergencyEventController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EmergencyEventController.EmergencyEventController_C
// 0x0050 (0x0270 - 0x0220)
class AEmergencyEventController_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAkComponent*                           Ak;                                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AEmergencyEvent_Base_C*                 HullBreach1;                                       // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmergencyEvent_Base_C*                 HullBreach2;                                       // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEmergencyEventWI_C*                    EmergencyWI;                                       // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0258(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EmergencyActive;                                   // 0x025C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          AComplete;                                         // 0x025D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          BComplete;                                         // 0x025E(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          WasCancelled;                                      // 0x025F(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Failed;                                            // 0x0260(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AChameleon_C*                           Chameleon;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EmergencyEventController(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Remote_Call_Attempt_Start();
	void Alarm_Visuals_Off();
	void Alarm_Visuals_On();
	void Audio_Alarm_Start();
	void Multi_Audio_Part_Succes();
	void Audio_End();
	void Cancel_Emergency_Event();
	void Attempt_Start_Emergency_Event();
	void Message_Players(const class FText& Text);
	void Remove_Emergency_Death_Timer();
	void Show_Emergency_Death_Timer(float Duration_0);
	void Complete_B(class AEmergencyEvent_Base_C* EmergencyBase);
	void Complete_A(class AEmergencyEvent_Base_C* EmergencyBase);
	void Fail_Emergency_Task();
	void Complete_Emergency_Task();
	void Start_Emergency();
	void Get2RandomBases(class AEmergencyEvent_Base_C** A, class AEmergencyEvent_Base_C** B);
	void OnRep_EmergencyActive();
	void OnRep_AComplete();
	void OnRep_BComplete();
	bool GetCanStart();
	void RandomChance(int32 Succes__, bool* Succes);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmergencyEventController_C">();
	}
	static class AEmergencyEventController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEmergencyEventController_C>();
	}
};
static_assert(alignof(AEmergencyEventController_C) == 0x000008, "Wrong alignment on AEmergencyEventController_C");
static_assert(sizeof(AEmergencyEventController_C) == 0x000270, "Wrong size on AEmergencyEventController_C");
static_assert(offsetof(AEmergencyEventController_C, UberGraphFrame) == 0x000220, "Member 'AEmergencyEventController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, Ak) == 0x000228, "Member 'AEmergencyEventController_C::Ak' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, Billboard) == 0x000230, "Member 'AEmergencyEventController_C::Billboard' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, DefaultSceneRoot) == 0x000238, "Member 'AEmergencyEventController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, HullBreach1) == 0x000240, "Member 'AEmergencyEventController_C::HullBreach1' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, HullBreach2) == 0x000248, "Member 'AEmergencyEventController_C::HullBreach2' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, EmergencyWI) == 0x000250, "Member 'AEmergencyEventController_C::EmergencyWI' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, Duration) == 0x000258, "Member 'AEmergencyEventController_C::Duration' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, EmergencyActive) == 0x00025C, "Member 'AEmergencyEventController_C::EmergencyActive' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, AComplete) == 0x00025D, "Member 'AEmergencyEventController_C::AComplete' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, BComplete) == 0x00025E, "Member 'AEmergencyEventController_C::BComplete' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, WasCancelled) == 0x00025F, "Member 'AEmergencyEventController_C::WasCancelled' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, Failed) == 0x000260, "Member 'AEmergencyEventController_C::Failed' has a wrong offset!");
static_assert(offsetof(AEmergencyEventController_C, Chameleon) == 0x000268, "Member 'AEmergencyEventController_C::Chameleon' has a wrong offset!");

}

