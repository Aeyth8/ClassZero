#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WallTeleporterSCTBP

#include "Basic.hpp"

#include "WallTeleporterSCTBP_classes.hpp"
#include "WallTeleporterSCTBP_parameters.hpp"


namespace SDK
{

// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.ExecuteUbergraph_WallTeleporterSCTBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallTeleporterSCTBP_C::ExecuteUbergraph_WallTeleporterSCTBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "ExecuteUbergraph_WallTeleporterSCTBP");

	Params::WallTeleporterSCTBP_C_ExecuteUbergraph_WallTeleporterSCTBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_6_InteractionSuccessfulDelegate__DelegateSignature
// (BlueprintEvent)

void AWallTeleporterSCTBP_C::BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_6_InteractionSuccessfulDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_6_InteractionSuccessfulDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionEndedDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                                    WasCancelled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWallTeleporterSCTBP_C::BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionEndedDelegate__DelegateSignature(const struct FInteractionPayload& Payload, bool WasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionEndedDelegate__DelegateSignature");

	Params::WallTeleporterSCTBP_C_BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_2_InteractionEndedDelegate__DelegateSignature Parms{};

	Parms.Payload = std::move(Payload);
	Parms.WasCancelled = WasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void AWallTeleporterSCTBP_C::BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionDelegate__DelegateSignature(const struct FInteractionPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionDelegate__DelegateSignature");

	Params::WallTeleporterSCTBP_C_BndEvt__WallTeleporterSCTBP_ShortcutKeyInteractionComponent_K2Node_ComponentBoundEvent_0_InteractionDelegate__DelegateSignature Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.EndFade
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::EndFade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "EndFade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.StartFade
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::StartFade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "StartFade");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Audio Stop Hold
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::Audio_Stop_Hold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Audio Stop Hold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Play Animation Server
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_interactionAnim                       Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_interactionAnimState                  State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallTeleporterSCTBP_C::Play_Animation_Server(class AActor* Actor, E_interactionAnim Animation, E_interactionAnimState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Play Animation Server");

	Params::WallTeleporterSCTBP_C_Play_Animation_Server Parms{};

	Parms.Actor = Actor;
	Parms.Animation = Animation;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWallTeleporterSCTBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Audio Start Hold
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::Audio_Start_Hold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Audio Start Hold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Audio Camera Disabled
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::Audio_Camera_Disabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Audio Camera Disabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Audio Camera Enabled
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::Audio_Camera_Enabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Audio Camera Enabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.InteractionCompleted
// (BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::InteractionCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "InteractionCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallTeleporterSCTBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "ReceiveTick");

	Params::WallTeleporterSCTBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.BndEvt__CharacterOverlapper_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallTeleporterSCTBP_C::BndEvt__CharacterOverlapper_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "BndEvt__CharacterOverlapper_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::WallTeleporterSCTBP_C_BndEvt__CharacterOverlapper_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_1_InteractionDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FInteractionPayload              Payload                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

void AWallTeleporterSCTBP_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_1_InteractionDelegate__DelegateSignature(const struct FInteractionPayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "BndEvt__Interaction_K2Node_ComponentBoundEvent_1_InteractionDelegate__DelegateSignature");

	Params::WallTeleporterSCTBP_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_1_InteractionDelegate__DelegateSignature Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Play Audio on Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallTeleporterSCTBP_C::Play_Audio_on_Actor(class AActor* Actor, class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Play Audio on Actor");

	Params::WallTeleporterSCTBP_C_Play_Audio_on_Actor Parms{};

	Parms.Actor = Actor;
	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Commit Destination Cooldown
// (Public, BlueprintCallable, BlueprintEvent)

void AWallTeleporterSCTBP_C::Commit_Destination_Cooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Commit Destination Cooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Get Destination Location and Rotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue_Yaw                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AWallTeleporterSCTBP_C::Get_Destination_Location_and_Rotation(float* ReturnValue_Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Get Destination Location and Rotation");

	Params::WallTeleporterSCTBP_C_Get_Destination_Location_and_Rotation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue_Yaw != nullptr)
		*ReturnValue_Yaw = Parms.ReturnValue_Yaw;

	return Parms.ReturnValue;
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.Toggle Destination Camera UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWallTeleporterSCTBP_C::Toggle_Destination_Camera_UI(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "Toggle Destination Camera UI");

	Params::WallTeleporterSCTBP_C_Toggle_Destination_Camera_UI Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.RenderXray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWallTeleporterSCTBP_C::RenderXray(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "RenderXray");

	Params::WallTeleporterSCTBP_C_RenderXray Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WallTeleporterSCTBP.WallTeleporterSCTBP_C.GetOutlineMeshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPrimitiveComponent*>      ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UPrimitiveComponent*> AWallTeleporterSCTBP_C::GetOutlineMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WallTeleporterSCTBP_C", "GetOutlineMeshes");

	Params::WallTeleporterSCTBP_C_GetOutlineMeshes Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

