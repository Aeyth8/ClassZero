#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCTGameMode_MatchBP

#include "Basic.hpp"

#include "SCTGameMode_MatchBP_classes.hpp"
#include "SCTGameMode_MatchBP_parameters.hpp"


namespace SDK
{

// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.EndMatchDispatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndConditions                          End_Condition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::EndMatchDispatch__DelegateSignature(EEndConditions End_Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "EndMatchDispatch__DelegateSignature");

	Params::SCTGameMode_MatchBP_C_EndMatchDispatch__DelegateSignature Parms{};

	Parms.End_Condition = End_Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.ExecuteUbergraph_SCTGameMode_MatchBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::ExecuteUbergraph_SCTGameMode_MatchBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "ExecuteUbergraph_SCTGameMode_MatchBP");

	Params::SCTGameMode_MatchBP_C_ExecuteUbergraph_SCTGameMode_MatchBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.Max Oxygen
// (BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::Max_Oxygen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "Max Oxygen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.Keep Oxygen Maxed
// (BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::Keep_Oxygen_Maxed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "Keep Oxygen Maxed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::K2_OnSetMatchState(class FName NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "K2_OnSetMatchState");

	Params::SCTGameMode_MatchBP_C_K2_OnSetMatchState Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.K2_OnCharacterDestiny
// (Event, Public, BlueprintEvent)
// Parameters:
// class AHumanoidCharacter*               HumanoidCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDestiny                         Destiny                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsPersonoid                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASCTGameMode_MatchBP_C::K2_OnCharacterDestiny(class AHumanoidCharacter* HumanoidCharacter, class AController* Controller, const struct FDestiny& Destiny, bool IsPersonoid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "K2_OnCharacterDestiny");

	Params::SCTGameMode_MatchBP_C_K2_OnCharacterDestiny Parms{};

	Parms.HumanoidCharacter = HumanoidCharacter;
	Parms.Controller = Controller;
	Parms.Destiny = std::move(Destiny);
	Parms.IsPersonoid = IsPersonoid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GiveScore
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             ScoreName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCTPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::GiveScore(class FName ScoreName, class ASCTPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GiveScore");

	Params::SCTGameMode_MatchBP_C_GiveScore Parms{};

	Parms.ScoreName = ScoreName;
	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      ExitingController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::K2_OnLogout(class AController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "K2_OnLogout");

	Params::SCTGameMode_MatchBP_C_K2_OnLogout Parms{};

	Parms.ExitingController = ExitingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASCTGameMode_MatchBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.Do End Match with Condition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndConditions                          End_Condition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::Do_End_Match_with_Condition(EEndConditions End_Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "Do End Match with Condition");

	Params::SCTGameMode_MatchBP_C_Do_End_Match_with_Condition Parms{};

	Parms.End_Condition = End_Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GetOnlyPersonoidsAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASCTGameMode_MatchBP_C::GetOnlyPersonoidsAlive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GetOnlyPersonoidsAlive");

	Params::SCTGameMode_MatchBP_C_GetOnlyPersonoidsAlive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GetOnlyOneResidentAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASCTGameMode_MatchBP_C::GetOnlyOneResidentAlive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GetOnlyOneResidentAlive");

	Params::SCTGameMode_MatchBP_C_GetOnlyOneResidentAlive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.ScoreOnlyPersonoidsRemain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::ScoreOnlyPersonoidsRemain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "ScoreOnlyPersonoidsRemain");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.ScoreCAINShutDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PersonoidPresent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASCTGameMode_MatchBP_C::ScoreCAINShutDown(bool PersonoidPresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "ScoreCAINShutDown");

	Params::SCTGameMode_MatchBP_C_ScoreCAINShutDown Parms{};

	Parms.PersonoidPresent = PersonoidPresent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GiveEndScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndConditions                          Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::GiveEndScores(EEndConditions Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GiveEndScores");

	Params::SCTGameMode_MatchBP_C_GiveEndScores Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.ScoreAllVotesYes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PersonoidPresent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASCTGameMode_MatchBP_C::ScoreAllVotesYes(bool PersonoidPresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "ScoreAllVotesYes");

	Params::SCTGameMode_MatchBP_C_ScoreAllVotesYes Parms{};

	Parms.PersonoidPresent = PersonoidPresent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.ScoreOneResidentRemains
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::ScoreOneResidentRemains()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "ScoreOneResidentRemains");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.UnpossessAll
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::UnpossessAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "UnpossessAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.InactivateAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::InactivateAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "InactivateAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.CallEndGameEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::CallEndGameEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "CallEndGameEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GiveAgendaScores
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::GiveAgendaScores()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GiveAgendaScores");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GiveThumbsVoteScore
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::GiveThumbsVoteScore()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GiveThumbsVoteScore");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.AddScoreBasedOnDownVotes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::AddScoreBasedOnDownVotes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "AddScoreBasedOnDownVotes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.AddScoreBasedOnUpVotes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::AddScoreBasedOnUpVotes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "AddScoreBasedOnUpVotes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.SpawnRoomba
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::SpawnRoomba(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "SpawnRoomba");

	Params::SCTGameMode_MatchBP_C_SpawnRoomba Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GetAliveTemp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ACharacter*>               AlivePlayers                                           (Parm, OutParm)

void ASCTGameMode_MatchBP_C::GetAliveTemp(TArray<class ACharacter*>* AlivePlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GetAliveTemp");

	Params::SCTGameMode_MatchBP_C_GetAliveTemp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AlivePlayers != nullptr)
		*AlivePlayers = std::move(Parms.AlivePlayers);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.UpdateWinStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndConditions                          EndCondition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASCTGameMode_MatchBP_C::UpdateWinStatistics(EEndConditions EndCondition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "UpdateWinStatistics");

	Params::SCTGameMode_MatchBP_C_UpdateWinStatistics Parms{};

	Parms.EndCondition = EndCondition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.GiveRaceScores
// (Public, BlueprintCallable, BlueprintEvent)

void ASCTGameMode_MatchBP_C::GiveRaceScores()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "GiveRaceScores");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SCTGameMode_MatchBP.SCTGameMode_MatchBP_C.AddTroestepraemie
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    GrantToPersonoids                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASCTGameMode_MatchBP_C::AddTroestepraemie(bool GrantToPersonoids)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SCTGameMode_MatchBP_C", "AddTroestepraemie");

	Params::SCTGameMode_MatchBP_C_AddTroestepraemie Parms{};

	Parms.GrantToPersonoids = GrantToPersonoids;

	UObject::ProcessEvent(Func, &Parms);
}

}
