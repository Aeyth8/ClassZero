#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AirlockVendelboSCT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PassengerLogFactType_structs.hpp"
#include "SCT_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AirlockVendelboSCT.AirlockVendelboSCT_C
// 0x0290 (0x04B0 - 0x0220)
class AAirlockVendelboSCT_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      PlayerDestination1;                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Frame;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Hatch_EscapeEmergency_Door_04;                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Hatch_EscapeEmergency_Door_02;                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Hatch_EscapeEmergency_Frame_02;                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Flush_small;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PlayerDestination6;                                // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WarningPlane;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PlayerDestination3;                                // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PlayerDestination4;                                // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PlayerDestination2;                                // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FlushDoor;                                         // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Camera;                                            // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      PlayerDestination5;                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow5;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow4;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow3;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow2;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OpenFlushDoor_NewTrack_0_26BEDC55497F5980A0138E85DA928310; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ETimelineDirection                            OpenFlushDoor__Direction_26BEDC55497F5980A0138E85DA928310; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OpenFlushDoor;                                     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                 DoorToOpen;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayersAllowedThrough;                             // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Counter;                                           // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CharacterVotes;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACharacter*>                     CharactersVoted;                                   // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharacter*>                     DoomedCharacters;                                  // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          TrustVoteFailed;                                   // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitialTransform;                                  // 0x0330(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         InterviewRound;                                    // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACharacter*>                     InterviewCharacters;                               // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          LastVoteWasDeadlocked;                             // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_379[0x3];                                      // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TimeToRunDeathvote;                                // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PassengerLogStageInProgress;                       // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DeathVoteInProgress;                               // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TrustVoteInProgress;                               // 0x0382(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_383[0x1];                                      // 0x0383(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoFlushDelay;                                    // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutomationTesting;                                 // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACharacter*>                     CurrentVotePlayers;                                // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharacter*>                     CharactersWhoHaveVoted;                            // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         PassengerLogStageDuration;                         // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PassengerLogDisplayDuration;                       // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EliminationStageDuration;                          // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IndividualInterviewDuration;                       // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrustStageDuration;                                // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InfoStageDuration;                                 // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipAirlock;                                       // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C9[0x3];                                      // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartDelay;                                        // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugPrints;                                       // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           SomeoneHasToDie;                                   // 0x03D8(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           MoreNeedToBeEliminated;                            // 0x03E8(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           PlayerWasVoteEliminated;                           // 0x03F8(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           PlayerEliminatedAtRandom;                          // 0x0408(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           InterviewPlayers;                                  // 0x0418(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           RevealOnlyPassengerLog;                            // 0x0428(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           SeveralPassengerLogsAvailable;                     // 0x0438(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           PassengerLogRevealed;                              // 0x0448(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           MentionDoomedBeforeTrust;                          // 0x0458(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           TrustVoteFail;                                     // 0x0468(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           TrustVoteSucceded;                                 // 0x0478(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           AirlockWillBeSkipped;                              // 0x0488(0x0010)(Edit, BlueprintVisible)
	TArray<class FText>                           NoOneHasToDieTrust;                                // 0x0498(0x0010)(Edit, BlueprintVisible)
	bool                                          SomeoneDisconnected;                               // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisconnectSimulation;                              // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InProgress;                                        // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          StopAirlock;                                       // 0x04AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AirlockVendelboSCT(int32 EntryPoint);
	void MatchEnded(EEndConditions End_Condition);
	void Audio_Countdown_Stop();
	void Audio_Countdown_Start();
	void ClearInterviewTimer();
	void LogOutBPI();
	void AllPlayersPresent();
	void InfoStageAll(uint8 StatementType, const TArray<class ACharacter*>& Characters);
	void VoteGivenMulticast();
	void CloseDoor();
	void AirlockFinishedServer();
	void StartAirlock();
	void OpenDoorMulticast();
	void FlushDoomed();
	void SkipAirlockStage();
	void ReceiveBeginPlay();
	void TrustVoteExpired();
	void ClearTrustVoteTimer();
	void TrustVote(bool Yes, const class ACharacter*& VotingCharacter);
	void SetupTrustVoteParameters();
	void AirlockVote(const class ACharacter*& Character, const class ACharacter*& VotingCharacter);
	void DeathVoteExpired();
	void ClearDeathVoteTimer();
	void SetupDeathVoteParameters();
	void ClearPassengerLogVoteTimer();
	void PassengerLogVoteExpiration();
	void SetupPassengerLogVoteParameters();
	void PassengerLogVote(class ACharacter* TargetCharacter, const class ACharacter*& VotingCharacter);
	void InterviewStageFinished(const TArray<class ACharacter*>& CharactersInterviewed);
	void InterviewTimer();
	void InterviewFinishedMulticast();
	void InitiateInterviewStage(const TArray<class ACharacter*>& Characters);
	void InterviewPlayerMulticast(const class ACharacter* CharacterForInterview);
	void PassengerLogVoteStageFinished();
	void InitiateDeathVoteStage(const TArray<class ACharacter*>& Players);
	void RevealPassengerLog(class ACharacter* Character);
	void InitiateTrustVoteStage();
	void PassengerLogVoteBPI(class AActor* AirlockTarget, class ACharacter* TargetCharacter, class ACharacter* VotingCharacter);
	void InitiatePassengerLogVoteDisplay(TArray<class ACharacter*>& Characters, const TArray<class ACharacter*>& DoomedCharacters_0, uint8 ExpectedVotes);
	void InitiatePassengerLogStage();
	void DeathVoteStageFinished();
	void TrustVoteBPI(class AActor* TargetAirlock, bool Yes, class ACharacter* VotingCharacter);
	void TrustVoteAll(const TArray<class ACharacter*>& DoomedCharacters_0, uint8 ExpectedVotes);
	void AirlockFinished();
	void EliminationVoteBPI(class AActor* AirlockTarget, class ACharacter* VotedCharacter, class ACharacter* VotingCharacter);
	void InitiateDeathVoteUI(const TArray<class ACharacter*>& PlayersAlive, const TArray<class ACharacter*>& DoomedCharacters_0, uint8 ExpectedVotes);
	void BeginAirlockDeliberations();
	void SetViewTarget();
	void InitiateAirlockSequenceBPI();
	void DisplayAirlockWidgetBPI(bool Show);
	void AddAlcoholBPI(float InputValue, bool Delay);
	void TeleportLocationRotationBPI(const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
	void EnableIK_AimDelayBPI();
	void SetDestinyBPI(EFate Fate, const struct FVector& Impulse);
	void StartElevatorBPI();
	void SetAimingStateBPI(bool Aiming, uint8 AimType);
	void RagdollCharacterBPI(bool ToRagdoll, float Duration, const struct FVector& OptionalImpulse, bool Force);
	void OpenFlushDoor__UpdateFunc();
	void OpenFlushDoor__FinishedFunc();
	void UserConstructionScript();
	void Airlock_Widget_and_Camera();
	void TeleportAllPlayersToAirlock();
	void CheckDeathRequirement(bool* SomeoneShouldDie, int32* HowManyShouldDie);
	void PlayerIDToDestination(int32 Index_0, struct FVector* ReturnLocation, struct FRotator* ReturnRotation);
	void CountVote(const class ACharacter*& Character);
	void FindHighestVote(bool* Deadlock, TArray<class ACharacter*>* DeadlockedCharacters, class ACharacter** CharacterVotedOut);
	void ReturnControlToPlayer();
	void AnyPersonoidsLeft(bool* PersonoidPresent);
	void RemoveFromArray(TArray<class ACharacter*>& InputArray, TArray<class ACharacter*>& ArrayToRemove, TArray<class ACharacter*>* CleanedArray);
	void FindAnyPassengerLogs(bool* PassengerLogPresent, TArray<class ACharacter*>* PassengerLogCandidates);
	void ResetVoting();
	void GetHeadCameraTransform(class ACharacter* Character, float Offset, struct FTransform* NewParam);
	void SetupInterviewWidget(class ACharacter* Character);
	void RemoveSelfFromArray(TArray<class ACharacter*>& InputArray, TArray<class ACharacter*>* OutputArray);
	void SetupTrustVoteFunction();
	void GetAlivePlayersExcludingDoomed(TArray<class ACharacter*>* AlivePlayers);
	void GetPassengerLogsAliveExcludingDoomed(int32* TotalAmountOfLogs, TArray<class ACharacter*>* CharactersWithLogs);
	void ClearAllInProgressStages();
	void SetupDeathVoteFunction(const TArray<class ACharacter*>& PlayersForVote);
	void SetupPassengerLogVoteFunction(const TArray<class ACharacter*>& PlayersForVote);
	float AutomationTestingTimes();
	void AutomaticEliminationVote();
	void AutomaticPassengerLogVote();
	void ServerTimeToOffset(float ServerTime, float* DecimalDelay, int32* Offset);
	void GetFlushLocation(struct FVector* ReturnValue_Location);
	void EnablePlayerMovement();
	void PrintStringDebug(const class FString& InString);
	class FText GetInfoText(uint8 StatementType, TArray<class ACharacter*>& Characters);
	class FText NamesToString(TArray<class ACharacter*>& Characters);
	class FText GetRandomText(const TArray<class FText>& TextArray);
	class FText GetRandomPlayersText(const TArray<class FText>& TextArray, TArray<class ACharacter*>& Characters);
	void SimulateDisconnect();
	void IsAliveBPI(bool* Alive);
	void GetHeldLogInfoBPI(EPassengerLogFactType* FactType, TArray<struct FPlayerData>* Players, bool* HasLog);
	void IsPersonoidBPI(bool* IsPersonoid);
	void GetPlayerNameBPI(class FString* Name_0);
	bool IsFemaleBPI();
	class UAbilitySystemComponent* GetAbilitySystemComponentBPI();
	class UTexture2D* GetPortrait();
	class USceneComponent* GetHomingTargetBPI();
	void IsPlayerBlocked(class APlayerState* Player, bool* bLocked);
	void IsPlayerConsoleCommunicationBlocked(class APlayerState* Player, bool* bLocked);
	void Server_LatentInteractionSuccess(bool InteractingActorIsCharacter, class AActor* InteractingInstigator, class AActor* InteractionFacilitator, bool* Void);
	void InteractReleased(bool InteractingActorIsCharacter, class AActor* InteractingActor, bool* Void);
	void GetCanInteract(bool IsSimulated, bool InteractingActorIsCharacter, class AActor* InteractingActor, bool* CanInteract);
	void InteractPressed(bool InteractingActorIsCharacter, class AActor* InteractingActor, const struct FHitResult& InteractedHitResult, bool* Success);

	bool ShouldDisableAirlock() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AirlockVendelboSCT_C">();
	}
	static class AAirlockVendelboSCT_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAirlockVendelboSCT_C>();
	}
};
static_assert(alignof(AAirlockVendelboSCT_C) == 0x000010, "Wrong alignment on AAirlockVendelboSCT_C");
static_assert(sizeof(AAirlockVendelboSCT_C) == 0x0004B0, "Wrong size on AAirlockVendelboSCT_C");
static_assert(offsetof(AAirlockVendelboSCT_C, UberGraphFrame) == 0x000220, "Member 'AAirlockVendelboSCT_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerDestination1) == 0x000228, "Member 'AAirlockVendelboSCT_C::PlayerDestination1' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Frame) == 0x000230, "Member 'AAirlockVendelboSCT_C::Frame' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Ak) == 0x000238, "Member 'AAirlockVendelboSCT_C::Ak' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SM_Hatch_EscapeEmergency_Door_04) == 0x000240, "Member 'AAirlockVendelboSCT_C::SM_Hatch_EscapeEmergency_Door_04' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SM_Hatch_EscapeEmergency_Door_02) == 0x000248, "Member 'AAirlockVendelboSCT_C::SM_Hatch_EscapeEmergency_Door_02' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SM_Hatch_EscapeEmergency_Frame_02) == 0x000250, "Member 'AAirlockVendelboSCT_C::SM_Hatch_EscapeEmergency_Frame_02' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, P_Flush_small) == 0x000258, "Member 'AAirlockVendelboSCT_C::P_Flush_small' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerDestination6) == 0x000260, "Member 'AAirlockVendelboSCT_C::PlayerDestination6' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, WarningPlane) == 0x000268, "Member 'AAirlockVendelboSCT_C::WarningPlane' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerDestination3) == 0x000270, "Member 'AAirlockVendelboSCT_C::PlayerDestination3' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerDestination4) == 0x000278, "Member 'AAirlockVendelboSCT_C::PlayerDestination4' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerDestination2) == 0x000280, "Member 'AAirlockVendelboSCT_C::PlayerDestination2' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, FlushDoor) == 0x000288, "Member 'AAirlockVendelboSCT_C::FlushDoor' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Camera) == 0x000290, "Member 'AAirlockVendelboSCT_C::Camera' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerDestination5) == 0x000298, "Member 'AAirlockVendelboSCT_C::PlayerDestination5' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Root) == 0x0002A0, "Member 'AAirlockVendelboSCT_C::Root' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Arrow5) == 0x0002A8, "Member 'AAirlockVendelboSCT_C::Arrow5' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Arrow4) == 0x0002B0, "Member 'AAirlockVendelboSCT_C::Arrow4' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Arrow3) == 0x0002B8, "Member 'AAirlockVendelboSCT_C::Arrow3' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Arrow2) == 0x0002C0, "Member 'AAirlockVendelboSCT_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Arrow1) == 0x0002C8, "Member 'AAirlockVendelboSCT_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Arrow) == 0x0002D0, "Member 'AAirlockVendelboSCT_C::Arrow' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, OpenFlushDoor_NewTrack_0_26BEDC55497F5980A0138E85DA928310) == 0x0002D8, "Member 'AAirlockVendelboSCT_C::OpenFlushDoor_NewTrack_0_26BEDC55497F5980A0138E85DA928310' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, OpenFlushDoor__Direction_26BEDC55497F5980A0138E85DA928310) == 0x0002DC, "Member 'AAirlockVendelboSCT_C::OpenFlushDoor__Direction_26BEDC55497F5980A0138E85DA928310' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, OpenFlushDoor) == 0x0002E0, "Member 'AAirlockVendelboSCT_C::OpenFlushDoor' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, DoorToOpen) == 0x0002E8, "Member 'AAirlockVendelboSCT_C::DoorToOpen' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayersAllowedThrough) == 0x0002F0, "Member 'AAirlockVendelboSCT_C::PlayersAllowedThrough' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, Counter) == 0x0002F4, "Member 'AAirlockVendelboSCT_C::Counter' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, CharacterVotes) == 0x0002F8, "Member 'AAirlockVendelboSCT_C::CharacterVotes' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, CharactersVoted) == 0x000308, "Member 'AAirlockVendelboSCT_C::CharactersVoted' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, DoomedCharacters) == 0x000318, "Member 'AAirlockVendelboSCT_C::DoomedCharacters' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, TrustVoteFailed) == 0x000328, "Member 'AAirlockVendelboSCT_C::TrustVoteFailed' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, InitialTransform) == 0x000330, "Member 'AAirlockVendelboSCT_C::InitialTransform' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, InterviewRound) == 0x000360, "Member 'AAirlockVendelboSCT_C::InterviewRound' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, InterviewCharacters) == 0x000368, "Member 'AAirlockVendelboSCT_C::InterviewCharacters' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, LastVoteWasDeadlocked) == 0x000378, "Member 'AAirlockVendelboSCT_C::LastVoteWasDeadlocked' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, TimeToRunDeathvote) == 0x00037C, "Member 'AAirlockVendelboSCT_C::TimeToRunDeathvote' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PassengerLogStageInProgress) == 0x000380, "Member 'AAirlockVendelboSCT_C::PassengerLogStageInProgress' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, DeathVoteInProgress) == 0x000381, "Member 'AAirlockVendelboSCT_C::DeathVoteInProgress' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, TrustVoteInProgress) == 0x000382, "Member 'AAirlockVendelboSCT_C::TrustVoteInProgress' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, AutoFlushDelay) == 0x000384, "Member 'AAirlockVendelboSCT_C::AutoFlushDelay' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, AutomationTesting) == 0x000388, "Member 'AAirlockVendelboSCT_C::AutomationTesting' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, CurrentVotePlayers) == 0x000390, "Member 'AAirlockVendelboSCT_C::CurrentVotePlayers' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, CharactersWhoHaveVoted) == 0x0003A0, "Member 'AAirlockVendelboSCT_C::CharactersWhoHaveVoted' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PassengerLogStageDuration) == 0x0003B0, "Member 'AAirlockVendelboSCT_C::PassengerLogStageDuration' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PassengerLogDisplayDuration) == 0x0003B4, "Member 'AAirlockVendelboSCT_C::PassengerLogDisplayDuration' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, EliminationStageDuration) == 0x0003B8, "Member 'AAirlockVendelboSCT_C::EliminationStageDuration' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, IndividualInterviewDuration) == 0x0003BC, "Member 'AAirlockVendelboSCT_C::IndividualInterviewDuration' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, TrustStageDuration) == 0x0003C0, "Member 'AAirlockVendelboSCT_C::TrustStageDuration' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, InfoStageDuration) == 0x0003C4, "Member 'AAirlockVendelboSCT_C::InfoStageDuration' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SkipAirlock) == 0x0003C8, "Member 'AAirlockVendelboSCT_C::SkipAirlock' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, StartDelay) == 0x0003CC, "Member 'AAirlockVendelboSCT_C::StartDelay' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, DebugPrints) == 0x0003D0, "Member 'AAirlockVendelboSCT_C::DebugPrints' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SomeoneHasToDie) == 0x0003D8, "Member 'AAirlockVendelboSCT_C::SomeoneHasToDie' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, MoreNeedToBeEliminated) == 0x0003E8, "Member 'AAirlockVendelboSCT_C::MoreNeedToBeEliminated' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerWasVoteEliminated) == 0x0003F8, "Member 'AAirlockVendelboSCT_C::PlayerWasVoteEliminated' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PlayerEliminatedAtRandom) == 0x000408, "Member 'AAirlockVendelboSCT_C::PlayerEliminatedAtRandom' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, InterviewPlayers) == 0x000418, "Member 'AAirlockVendelboSCT_C::InterviewPlayers' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, RevealOnlyPassengerLog) == 0x000428, "Member 'AAirlockVendelboSCT_C::RevealOnlyPassengerLog' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SeveralPassengerLogsAvailable) == 0x000438, "Member 'AAirlockVendelboSCT_C::SeveralPassengerLogsAvailable' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, PassengerLogRevealed) == 0x000448, "Member 'AAirlockVendelboSCT_C::PassengerLogRevealed' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, MentionDoomedBeforeTrust) == 0x000458, "Member 'AAirlockVendelboSCT_C::MentionDoomedBeforeTrust' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, TrustVoteFail) == 0x000468, "Member 'AAirlockVendelboSCT_C::TrustVoteFail' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, TrustVoteSucceded) == 0x000478, "Member 'AAirlockVendelboSCT_C::TrustVoteSucceded' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, AirlockWillBeSkipped) == 0x000488, "Member 'AAirlockVendelboSCT_C::AirlockWillBeSkipped' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, NoOneHasToDieTrust) == 0x000498, "Member 'AAirlockVendelboSCT_C::NoOneHasToDieTrust' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, SomeoneDisconnected) == 0x0004A8, "Member 'AAirlockVendelboSCT_C::SomeoneDisconnected' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, DisconnectSimulation) == 0x0004A9, "Member 'AAirlockVendelboSCT_C::DisconnectSimulation' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, InProgress) == 0x0004AA, "Member 'AAirlockVendelboSCT_C::InProgress' has a wrong offset!");
static_assert(offsetof(AAirlockVendelboSCT_C, StopAirlock) == 0x0004AB, "Member 'AAirlockVendelboSCT_C::StopAirlock' has a wrong offset!");

}
