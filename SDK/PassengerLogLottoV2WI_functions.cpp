#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PassengerLogLottoV2WI

#include "Basic.hpp"

#include "PassengerLogLottoV2WI_classes.hpp"
#include "PassengerLogLottoV2WI_parameters.hpp"


namespace SDK
{

// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.ExecuteUbergraph_PassengerLogLottoV2WI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerLogLottoV2WI_C::ExecuteUbergraph_PassengerLogLottoV2WI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "ExecuteUbergraph_PassengerLogLottoV2WI");

	Params::PassengerLogLottoV2WI_C_ExecuteUbergraph_PassengerLogLottoV2WI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPassengerLogLottoV2WI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPassengerLogLottoV2WI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.LogLottoFinished
// (BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::LogLottoFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "LogLottoFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.IntroAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::IntroAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "IntroAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.StartLotto
// (BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::StartLotto()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "StartLotto");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.Start Lotto Animations
// (Public, BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::Start_Lotto_Animations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "Start Lotto Animations");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.SetupLogDisplay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACharacter*>               PlayerEntries_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Seed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPassengerLogInformation         Info_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassengerLogLottoV2WI_C::SetupLogDisplay(TArray<class ACharacter*>& PlayerEntries_0, int32 Target, int32 Seed, const struct FPassengerLogInformation& Info_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "SetupLogDisplay");

	Params::PassengerLogLottoV2WI_C_SetupLogDisplay Parms{};

	Parms.PlayerEntries_0 = std::move(PlayerEntries_0);
	Parms.Target = Target;
	Parms.Seed = Seed;
	Parms.Info_0 = std::move(Info_0);

	UObject::ProcessEvent(Func, &Parms);

	PlayerEntries_0 = std::move(Parms.PlayerEntries_0);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.AddLogEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       WatchedPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerLogLottoV2WI_C::AddLogEntry(class ACharacter* WatchedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "AddLogEntry");

	Params::PassengerLogLottoV2WI_C_AddLogEntry Parms{};

	Parms.WatchedPlayer = WatchedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.ConstructPassengerLogInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassengerLogLottoV2WI_C::ConstructPassengerLogInformation(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "ConstructPassengerLogInformation");

	Params::PassengerLogLottoV2WI_C_ConstructPassengerLogInformation Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_0
// (Public, BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_1
// (Public, BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassengerLogLottoV2WI.PassengerLogLottoV2WI_C.SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_2
// (Public, BlueprintCallable, BlueprintEvent)

void UPassengerLogLottoV2WI_C::SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassengerLogLottoV2WI_C", "SequenceEvent__ENTRYPOINTPassengerLogLottoV2WI_2");

	UObject::ProcessEvent(Func, nullptr);
}

}

