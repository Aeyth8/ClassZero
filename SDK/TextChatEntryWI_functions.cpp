#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextChatEntryWI

#include "Basic.hpp"

#include "TextChatEntryWI_classes.hpp"
#include "TextChatEntryWI_parameters.hpp"


namespace SDK
{

// Function TextChatEntryWI.TextChatEntryWI_C.ExecuteUbergraph_TextChatEntryWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextChatEntryWI_C::ExecuteUbergraph_TextChatEntryWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatEntryWI_C", "ExecuteUbergraph_TextChatEntryWI");

	Params::TextChatEntryWI_C_ExecuteUbergraph_TextChatEntryWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatEntryWI.TextChatEntryWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTextChatEntryWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatEntryWI_C", "PreConstruct");

	Params::TextChatEntryWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatEntryWI.TextChatEntryWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTextChatEntryWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatEntryWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
