#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RoombaRoamingSCTBP

#include "Basic.hpp"

#include "RoombaRoamingSCTBP_classes.hpp"
#include "RoombaRoamingSCTBP_parameters.hpp"


namespace SDK
{

// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.ExecuteUbergraph_RoombaRoamingSCTBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::ExecuteUbergraph_RoombaRoamingSCTBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "ExecuteUbergraph_RoombaRoamingSCTBP");

	Params::RoombaRoamingSCTBP_C_ExecuteUbergraph_RoombaRoamingSCTBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.OnClientLoggedIn
// (BlueprintCallable, BlueprintEvent)

void ARoombaRoamingSCTBP_C::OnClientLoggedIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "OnClientLoggedIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.EndRotating
// (BlueprintCallable, BlueprintEvent)

void ARoombaRoamingSCTBP_C::EndRotating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "EndRotating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.StartRotating
// (BlueprintCallable, BlueprintEvent)

void ARoombaRoamingSCTBP_C::StartRotating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "StartRotating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARoombaRoamingSCTBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.OnSuccess_711655824DB10DC7EA8A4A94806BFE22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFCTCloudCustomizationVruumba    Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::OnSuccess_711655824DB10DC7EA8A4A94806BFE22(const struct FFCTCloudCustomizationVruumba& Payload, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "OnSuccess_711655824DB10DC7EA8A4A94806BFE22");

	Params::RoombaRoamingSCTBP_C_OnSuccess_711655824DB10DC7EA8A4A94806BFE22 Parms{};

	Parms.Payload = std::move(Payload);
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.OnError_711655824DB10DC7EA8A4A94806BFE22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFCTCloudCustomizationVruumba    Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::OnError_711655824DB10DC7EA8A4A94806BFE22(const struct FFCTCloudCustomizationVruumba& Payload, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "OnError_711655824DB10DC7EA8A4A94806BFE22");

	Params::RoombaRoamingSCTBP_C_OnError_711655824DB10DC7EA8A4A94806BFE22 Parms{};

	Parms.Payload = std::move(Payload);
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.RotationMovement__UpdateFunc
// (BlueprintEvent)

void ARoombaRoamingSCTBP_C::RotationMovement__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "RotationMovement__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.RotationMovement__FinishedFunc
// (BlueprintEvent)

void ARoombaRoamingSCTBP_C::RotationMovement__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "RotationMovement__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.MovementTimeline__UpdateFunc
// (BlueprintEvent)

void ARoombaRoamingSCTBP_C::MovementTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "MovementTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.MovementTimeline__FinishedFunc
// (BlueprintEvent)

void ARoombaRoamingSCTBP_C::MovementTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "MovementTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.UpdateTimelineDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTimelineComponent*               Timeline                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::UpdateTimelineDuration(class UTimelineComponent* Timeline, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "UpdateTimelineDuration");

	Params::RoombaRoamingSCTBP_C_UpdateTimelineDuration Parms{};

	Parms.Timeline = Timeline;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.UpdateTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ARoombaRoamingSCTBP_C::UpdateTargetLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "UpdateTargetLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.UpdateTargetRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ARoombaRoamingSCTBP_C::UpdateTargetRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "UpdateTargetRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.UpdateDestination
// (Public, BlueprintCallable, BlueprintEvent)

void ARoombaRoamingSCTBP_C::UpdateDestination()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "UpdateDestination");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.SetAntenna
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           AntennaName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::SetAntenna(const class FString& AntennaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "SetAntenna");

	Params::RoombaRoamingSCTBP_C_SetAntenna Parms{};

	Parms.AntennaName = std::move(AntennaName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.SetBody
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           BodyName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::SetBody(const class FString& BodyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "SetBody");

	Params::RoombaRoamingSCTBP_C_SetBody Parms{};

	Parms.BodyName = std::move(BodyName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.UpdateVruumbaCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           BodyName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           AntennaName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ARoombaRoamingSCTBP_C::UpdateVruumbaCustomization(const class FString& BodyName, const class FString& AntennaName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "UpdateVruumbaCustomization");

	Params::RoombaRoamingSCTBP_C_UpdateVruumbaCustomization Parms{};

	Parms.BodyName = std::move(BodyName);
	Parms.AntennaName = std::move(AntennaName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RoombaRoamingSCTBP.RoombaRoamingSCTBP_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARoombaRoamingSCTBP_C::SetVisibility(bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RoombaRoamingSCTBP_C", "SetVisibility");

	Params::RoombaRoamingSCTBP_C_SetVisibility Parms{};

	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}
