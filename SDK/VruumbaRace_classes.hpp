#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VruumbaRace

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VruumbaRace.VruumbaRace_C
// 0x00E0 (0x0300 - 0x0220)
class AVruumbaRace_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPOI_WidgetComponent_VruumbaRace_C*     POI_WidgetComponent_VruumbaRace;                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystemRing;                                // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Trophy;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_RingAnimation_802FCF9045082012B8AFA48FD0DC15DC; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_802FCF9045082012B8AFA48FD0DC15DC; // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_Animation_81619233408FD1BBAEF870BEDE87BB04; // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_81619233408FD1BBAEF870BEDE87BB04; // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Animation_B67EC05A4DA43E47142CD5AFA0E4E2D9; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_B67EC05A4DA43E47142CD5AFA0E4E2D9; // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RaceTime_Gametime_5598AF4043ED371ACD43CC938538F427; // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RaceTime__Direction_5598AF4043ED371ACD43CC938538F427; // 0x0294(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RaceTime;                                          // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVruumbaSCTBP_C*                        VruumbaPlayer;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AVruumbaRaceCheckPoint_C*>       Checkpoints;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         TotalCheckPoints;                                  // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             UpdatedRaceScore;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         BestRaceTime;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             CheckGlobal;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AVruumbaSCTBP_C*                        CurrentLeadingPlayer;                              // 0x02E8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           LeadingVruumbaPlayerState;                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVruumbaRaceCheckPoint_C*               CurrentCheckPoint;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdatedRaceScore__DelegateSignature();
	void CheckGlobal__DelegateSignature();
	void ExecuteUbergraph_VruumbaRace(int32 EntryPoint);
	void ReceiveDestroyed();
	void Stop_Timelines();
	void Start_Timelines();
	void Stop_Spline();
	void Draw_Spline(bool FirstCheckPoint, class AVruumbaRaceCheckPoint_C* NextCheckPoint, class AVruumbaRaceCheckPoint_C* PreviousCheckpoint);
	void Server_Give_Score(class AVruumbaSCTBP_C* Vruumba_Player);
	void POI_visible_first_time();
	void Server_Check_Best_Time(float Time, class AVruumbaSCTBP_C* VruumbaPlayer_0);
	void CheckPoint_Cleared(int32 NextCheckPoint);
	void Widget_Update_Leading_Player(float Time, class AVruumbaSCTBP_C* LeadingVruumbaPlayer);
	void NewLeadingPlayer(class AVruumbaSCTBP_C* LeadingVruumbaPlayer, float Time);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void RaceComplete();
	void Start_Sequence();
	void StopRaceTime();
	void StartRaceTime();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void RaceTime__UpdateFunc();
	void RaceTime__FinishedFunc();
	void ActivateCheckpoint(class AVruumbaRaceCheckPoint_C* NextCheckPoint, bool FirstCheckPoint, bool LastCheckPoint, class AVruumbaRaceCheckPoint_C* PreviousCheckpoint);
	void RaceCheck(int32 Checkpoint, class AVruumbaRaceCheckPoint_C* CheckPointRef);
	void Check_Best_Global_Time(float Time, class AVruumbaSCTBP_C* InVruumbaPlayer);
	void Calculate_Result(class APlayerState** VruumbaPlayerState);
	void Hide_Check_Points();
	void OnRep_BestRaceTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VruumbaRace_C">();
	}
	static class AVruumbaRace_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVruumbaRace_C>();
	}
};
static_assert(alignof(AVruumbaRace_C) == 0x000008, "Wrong alignment on AVruumbaRace_C");
static_assert(sizeof(AVruumbaRace_C) == 0x000300, "Wrong size on AVruumbaRace_C");
static_assert(offsetof(AVruumbaRace_C, UberGraphFrame) == 0x000220, "Member 'AVruumbaRace_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, POI_WidgetComponent_VruumbaRace) == 0x000228, "Member 'AVruumbaRace_C::POI_WidgetComponent_VruumbaRace' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, ParticleSystem) == 0x000230, "Member 'AVruumbaRace_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, ParticleSystemRing) == 0x000238, "Member 'AVruumbaRace_C::ParticleSystemRing' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Box) == 0x000240, "Member 'AVruumbaRace_C::Box' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Trophy) == 0x000248, "Member 'AVruumbaRace_C::Trophy' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Arrow2) == 0x000250, "Member 'AVruumbaRace_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Scene) == 0x000258, "Member 'AVruumbaRace_C::Scene' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_2_RingAnimation_802FCF9045082012B8AFA48FD0DC15DC) == 0x000260, "Member 'AVruumbaRace_C::Timeline_2_RingAnimation_802FCF9045082012B8AFA48FD0DC15DC' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_2__Direction_802FCF9045082012B8AFA48FD0DC15DC) == 0x000264, "Member 'AVruumbaRace_C::Timeline_2__Direction_802FCF9045082012B8AFA48FD0DC15DC' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_2) == 0x000268, "Member 'AVruumbaRace_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_1_Animation_81619233408FD1BBAEF870BEDE87BB04) == 0x000270, "Member 'AVruumbaRace_C::Timeline_1_Animation_81619233408FD1BBAEF870BEDE87BB04' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_1__Direction_81619233408FD1BBAEF870BEDE87BB04) == 0x000274, "Member 'AVruumbaRace_C::Timeline_1__Direction_81619233408FD1BBAEF870BEDE87BB04' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_1) == 0x000278, "Member 'AVruumbaRace_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_0_Animation_B67EC05A4DA43E47142CD5AFA0E4E2D9) == 0x000280, "Member 'AVruumbaRace_C::Timeline_0_Animation_B67EC05A4DA43E47142CD5AFA0E4E2D9' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_0__Direction_B67EC05A4DA43E47142CD5AFA0E4E2D9) == 0x000284, "Member 'AVruumbaRace_C::Timeline_0__Direction_B67EC05A4DA43E47142CD5AFA0E4E2D9' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Timeline_0) == 0x000288, "Member 'AVruumbaRace_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, RaceTime_Gametime_5598AF4043ED371ACD43CC938538F427) == 0x000290, "Member 'AVruumbaRace_C::RaceTime_Gametime_5598AF4043ED371ACD43CC938538F427' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, RaceTime__Direction_5598AF4043ED371ACD43CC938538F427) == 0x000294, "Member 'AVruumbaRace_C::RaceTime__Direction_5598AF4043ED371ACD43CC938538F427' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, RaceTime) == 0x000298, "Member 'AVruumbaRace_C::RaceTime' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, VruumbaPlayer) == 0x0002A0, "Member 'AVruumbaRace_C::VruumbaPlayer' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, Checkpoints) == 0x0002A8, "Member 'AVruumbaRace_C::Checkpoints' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, TotalCheckPoints) == 0x0002B8, "Member 'AVruumbaRace_C::TotalCheckPoints' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, UpdatedRaceScore) == 0x0002C0, "Member 'AVruumbaRace_C::UpdatedRaceScore' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, BestRaceTime) == 0x0002D0, "Member 'AVruumbaRace_C::BestRaceTime' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, CheckGlobal) == 0x0002D8, "Member 'AVruumbaRace_C::CheckGlobal' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, CurrentLeadingPlayer) == 0x0002E8, "Member 'AVruumbaRace_C::CurrentLeadingPlayer' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, LeadingVruumbaPlayerState) == 0x0002F0, "Member 'AVruumbaRace_C::LeadingVruumbaPlayerState' has a wrong offset!");
static_assert(offsetof(AVruumbaRace_C, CurrentCheckPoint) == 0x0002F8, "Member 'AVruumbaRace_C::CurrentCheckPoint' has a wrong offset!");

}
