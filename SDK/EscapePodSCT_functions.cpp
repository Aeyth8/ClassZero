#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EscapePodSCT

#include "Basic.hpp"

#include "EscapePodSCT_classes.hpp"
#include "EscapePodSCT_parameters.hpp"


namespace SDK
{

// Function EscapePodSCT.EscapePodSCT_C.ExecuteUbergraph_EscapePodSCT
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapePodSCT_C::ExecuteUbergraph_EscapePodSCT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "ExecuteUbergraph_EscapePodSCT");

	Params::EscapePodSCT_C_ExecuteUbergraph_EscapePodSCT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapePodSCT.EscapePodSCT_C.Launch Visuals
// (BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::Launch_Visuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "Launch Visuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterSCTBP_C*                PressingCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapePodSCT_C::OnButtonPressed(class ACharacterSCTBP_C* PressingCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "OnButtonPressed");

	Params::EscapePodSCT_C_OnButtonPressed Parms{};

	Parms.PressingCharacter = PressingCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapePodSCT.EscapePodSCT_C.Launch
// (BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::Launch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "Launch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.BndEvt__bpc_ac_Opener_K2Node_ComponentBoundEvent_0_OnOpenStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsOpening                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapePodSCT_C::BndEvt__bpc_ac_Opener_K2Node_ComponentBoundEvent_0_OnOpenStateChanged__DelegateSignature(bool IsOpening)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "BndEvt__bpc_ac_Opener_K2Node_ComponentBoundEvent_0_OnOpenStateChanged__DelegateSignature");

	Params::EscapePodSCT_C_BndEvt__bpc_ac_Opener_K2Node_ComponentBoundEvent_0_OnOpenStateChanged__DelegateSignature Parms{};

	Parms.IsOpening = IsOpening;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapePodSCT.EscapePodSCT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEscapePodSCT_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.OnRep_Launched
// (BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::OnRep_Launched()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "OnRep_Launched");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.AddScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Character                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEscapePodSCT_C::AddScore(const class UObject* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "AddScore");

	Params::EscapePodSCT_C_AddScore Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EscapePodSCT.EscapePodSCT_C.DropKeycards
// (Public, BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::DropKeycards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "DropKeycards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.HandleTakeMyChancesInSpaceAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::HandleTakeMyChancesInSpaceAchievement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "HandleTakeMyChancesInSpaceAchievement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.AddKarmaForEscaping
// (Public, BlueprintCallable, BlueprintEvent)

void AEscapePodSCT_C::AddKarmaForEscaping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "AddKarmaForEscaping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EscapePodSCT.EscapePodSCT_C.Server_LatentInteractionSuccess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InteractingActorIsCharacter                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           InteractingInstigator                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InteractionFacilitator                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Void                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapePodSCT_C::Server_LatentInteractionSuccess(bool InteractingActorIsCharacter, class AActor* InteractingInstigator, class AActor* InteractionFacilitator, bool* Void)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "Server_LatentInteractionSuccess");

	Params::EscapePodSCT_C_Server_LatentInteractionSuccess Parms{};

	Parms.InteractingActorIsCharacter = InteractingActorIsCharacter;
	Parms.InteractingInstigator = InteractingInstigator;
	Parms.InteractionFacilitator = InteractionFacilitator;

	UObject::ProcessEvent(Func, &Parms);

	if (Void != nullptr)
		*Void = Parms.Void;
}


// Function EscapePodSCT.EscapePodSCT_C.InteractReleased
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InteractingActorIsCharacter                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Void                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapePodSCT_C::InteractReleased(bool InteractingActorIsCharacter, class AActor* InteractingActor, bool* Void)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "InteractReleased");

	Params::EscapePodSCT_C_InteractReleased Parms{};

	Parms.InteractingActorIsCharacter = InteractingActorIsCharacter;
	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Void != nullptr)
		*Void = Parms.Void;
}


// Function EscapePodSCT.EscapePodSCT_C.GetCanInteract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSimulated                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InteractingActorIsCharacter                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanInteract                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapePodSCT_C::GetCanInteract(bool IsSimulated, bool InteractingActorIsCharacter, class AActor* InteractingActor, bool* CanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "GetCanInteract");

	Params::EscapePodSCT_C_GetCanInteract Parms{};

	Parms.IsSimulated = IsSimulated;
	Parms.InteractingActorIsCharacter = InteractingActorIsCharacter;
	Parms.InteractingActor = InteractingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;
}


// Function EscapePodSCT.EscapePodSCT_C.InteractPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InteractingActorIsCharacter                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       InteractedHitResult                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEscapePodSCT_C::InteractPressed(bool InteractingActorIsCharacter, class AActor* InteractingActor, const struct FHitResult& InteractedHitResult, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EscapePodSCT_C", "InteractPressed");

	Params::EscapePodSCT_C_InteractPressed Parms{};

	Parms.InteractingActorIsCharacter = InteractingActorIsCharacter;
	Parms.InteractingActor = InteractingActor;
	Parms.InteractedHitResult = std::move(InteractedHitResult);

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}
