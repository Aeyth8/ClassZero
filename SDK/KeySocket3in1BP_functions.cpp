#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeySocket3in1BP

#include "Basic.hpp"

#include "KeySocket3in1BP_classes.hpp"
#include "KeySocket3in1BP_parameters.hpp"


namespace SDK
{

// Function KeySocket3in1BP.KeySocket3in1BP_C.On Recieve Key__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PickupType                            PickUpType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::On_Recieve_Key__DelegateSignature(E_PickupType PickUpType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "On Recieve Key__DelegateSignature");

	Params::KeySocket3in1BP_C_On_Recieve_Key__DelegateSignature Parms{};

	Parms.PickUpType = PickUpType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.ExecuteUbergraph_KeySocket3in1BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::ExecuteUbergraph_KeySocket3in1BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "ExecuteUbergraph_KeySocket3in1BP");

	Params::KeySocket3in1BP_C_ExecuteUbergraph_KeySocket3in1BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_2_PriorityDelegate__DelegateSignature
// (BlueprintEvent)

void AKeySocket3in1BP_C::BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_2_PriorityDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_2_PriorityDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_1_PriorityDelegate__DelegateSignature
// (BlueprintEvent)

void AKeySocket3in1BP_C::BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_1_PriorityDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "BndEvt__ContextStaticMesh_K2Node_ComponentBoundEvent_1_PriorityDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.Server_All Keycards Inserted
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::Server_All_Keycards_Inserted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "Server_All Keycards Inserted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_All Keycards Inserted
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_All_Keycards_Inserted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_All Keycards Inserted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "ReceiveTick");

	Params::KeySocket3in1BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AKeySocket3in1BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.Set Key As Placed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_KeyCardColors                         Colors                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::Set_Key_As_Placed(E_KeyCardColors Colors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "Set Key As Placed");

	Params::KeySocket3in1BP_C_Set_Key_As_Placed Parms{};

	Parms.Colors = Colors;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.ReceiveKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PickupType                            Card                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::ReceiveKey(E_PickupType Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "ReceiveKey");

	Params::KeySocket3in1BP_C_ReceiveKey Parms{};

	Parms.Card = Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSuccessfulDelegate__DelegateSignature
// (BlueprintEvent)

void AKeySocket3in1BP_C::BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSuccessfulDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionSuccessfulDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.Audio_Countdown Begin
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::Audio_Countdown_Begin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "Audio_Countdown Begin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.Audio Keycard Deliver Success
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::Audio_Keycard_Deliver_Success()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "Audio Keycard Deliver Success");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.Audio Deliver Keycard Release
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::Audio_Deliver_Keycard_Release()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "Audio Deliver Keycard Release");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.Audio Deliver Keycard Hold
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::Audio_Deliver_Keycard_Hold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "Audio Deliver Keycard Hold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_3_InteractionEndedDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                                    WasCancelled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKeySocket3in1BP_C::BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_3_InteractionEndedDelegate__DelegateSignature(const struct FInteractionPayload& Payload, bool WasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_3_InteractionEndedDelegate__DelegateSignature");

	Params::KeySocket3in1BP_C_BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_3_InteractionEndedDelegate__DelegateSignature Parms{};

	Parms.Payload = std::move(Payload);
	Parms.WasCancelled = WasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void AKeySocket3in1BP_C::BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature(const struct FInteractionPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature");

	Params::KeySocket3in1BP_C_BndEvt__KeycardInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionDelegate__DelegateSignature Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.EmissiveBootstGlow__UpdateFunc
// (BlueprintEvent)

void AKeySocket3in1BP_C::EmissiveBootstGlow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "EmissiveBootstGlow__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.EmissiveBootstGlow__FinishedFunc
// (BlueprintEvent)

void AKeySocket3in1BP_C::EmissiveBootstGlow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "EmissiveBootstGlow__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.SetColorOfFalseKeyCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PickupType                            PickUpType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::SetColorOfFalseKeyCard(E_PickupType PickUpType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "SetColorOfFalseKeyCard");

	Params::KeySocket3in1BP_C_SetColorOfFalseKeyCard Parms{};

	Parms.PickUpType = PickUpType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.SetNoKeyColorOfSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PickupType                            PickUpType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::SetNoKeyColorOfSocket(E_PickupType PickUpType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "SetNoKeyColorOfSocket");

	Params::KeySocket3in1BP_C_SetNoKeyColorOfSocket Parms{};

	Parms.PickUpType = PickUpType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.SetHasKeyColorOfSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PickupType                            PickUpType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::SetHasKeyColorOfSocket(E_PickupType PickUpType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "SetHasKeyColorOfSocket");

	Params::KeySocket3in1BP_C_SetHasKeyColorOfSocket Parms{};

	Parms.PickUpType = PickUpType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_SocketHasKey
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_SocketHasKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_SocketHasKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_HasRedCard
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_HasRedCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_HasRedCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_HasGreenCard
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_HasGreenCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_HasGreenCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_HasBlueCard
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_HasBlueCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_HasBlueCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_Complete
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_Complete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_Complete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.UpdatePlayerStateForHandin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_KeyCardColors                         Keycard_Color                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKeySocket3in1BP_C::UpdatePlayerStateForHandin(class APlayerState* Player_State, E_KeyCardColors Keycard_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "UpdatePlayerStateForHandin");

	Params::KeySocket3in1BP_C_UpdatePlayerStateForHandin Parms{};

	Parms.Player_State = Player_State;
	Parms.Keycard_Color = Keycard_Color;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeySocket3in1BP.KeySocket3in1BP_C.OnRep_Held
// (BlueprintCallable, BlueprintEvent)

void AKeySocket3in1BP_C::OnRep_Held()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeySocket3in1BP_C", "OnRep_Held");

	UObject::ProcessEvent(Func, nullptr);
}

}
