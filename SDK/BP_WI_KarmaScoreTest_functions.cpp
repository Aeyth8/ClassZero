#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WI_KarmaScoreTest

#include "Basic.hpp"

#include "BP_WI_KarmaScoreTest_classes.hpp"
#include "BP_WI_KarmaScoreTest_parameters.hpp"


namespace SDK
{

// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.ExecuteUbergraph_BP_WI_KarmaScoreTest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WI_KarmaScoreTest_C::ExecuteUbergraph_BP_WI_KarmaScoreTest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WI_KarmaScoreTest_C", "ExecuteUbergraph_BP_WI_KarmaScoreTest");

	Params::BP_WI_KarmaScoreTest_C_ExecuteUbergraph_BP_WI_KarmaScoreTest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.SetKarmaScoreText
// (BlueprintCallable, BlueprintEvent)

void UBP_WI_KarmaScoreTest_C::SetKarmaScoreText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WI_KarmaScoreTest_C", "SetKarmaScoreText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.OnSuccess_ED2387DE46E803F30FF010B4A832CEF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentKarma                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_WI_KarmaScoreTest_C::OnSuccess_ED2387DE46E803F30FF010B4A832CEF9(int32 CurrentKarma, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WI_KarmaScoreTest_C", "OnSuccess_ED2387DE46E803F30FF010B4A832CEF9");

	Params::BP_WI_KarmaScoreTest_C_OnSuccess_ED2387DE46E803F30FF010B4A832CEF9 Parms{};

	Parms.CurrentKarma = CurrentKarma;
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.OnError_ED2387DE46E803F30FF010B4A832CEF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentKarma                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_WI_KarmaScoreTest_C::OnError_ED2387DE46E803F30FF010B4A832CEF9(int32 CurrentKarma, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WI_KarmaScoreTest_C", "OnError_ED2387DE46E803F30FF010B4A832CEF9");

	Params::BP_WI_KarmaScoreTest_C_OnError_ED2387DE46E803F30FF010B4A832CEF9 Parms{};

	Parms.CurrentKarma = CurrentKarma;
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WI_KarmaScoreTest.BP_WI_KarmaScoreTest_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_WI_KarmaScoreTest_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WI_KarmaScoreTest_C", "GetText_0");

	Params::BP_WI_KarmaScoreTest_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

