#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TextChatComponent

#include "Basic.hpp"

#include "TextChatComponent_classes.hpp"
#include "TextChatComponent_parameters.hpp"


namespace SDK
{

// Function TextChatComponent.TextChatComponent_C.ExecuteUbergraph_TextChatComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextChatComponent_C::ExecuteUbergraph_TextChatComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "ExecuteUbergraph_TextChatComponent");

	Params::TextChatComponent_C_ExecuteUbergraph_TextChatComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.ReceiveMessageMulticast
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCTPlayerState*                  Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTextChatComponent_C::ReceiveMessageMulticast(uint8 Channel, class ASCTPlayerState* Player_State, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "ReceiveMessageMulticast");

	Params::TextChatComponent_C_ReceiveMessageMulticast Parms{};

	Parms.Channel = Channel;
	Parms.Player_State = Player_State;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.SendMessageServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UTextChatComponent_C::SendMessageServer(class APlayerController* Controller, uint8 Channel, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "SendMessageServer");

	Params::TextChatComponent_C_SendMessageServer Parms{};

	Parms.Controller = Controller;
	Parms.Channel = Channel;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.Start Typing In All Chat
// (Public, BlueprintCallable, BlueprintEvent)

void UTextChatComponent_C::Start_Typing_In_All_Chat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "Start Typing In All Chat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextChatComponent.TextChatComponent_C.Start Typing In Personoid Chat
// (Public, BlueprintCallable, BlueprintEvent)

void UTextChatComponent_C::Start_Typing_In_Personoid_Chat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "Start Typing In Personoid Chat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextChatComponent.TextChatComponent_C.EndTyping
// (Public, BlueprintCallable, BlueprintEvent)

void UTextChatComponent_C::EndTyping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "EndTyping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextChatComponent.TextChatComponent_C.Try All Message
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextChatWindowWI_C*              ChatWidget_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCTPlayerState*                  Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             TextMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextChatComponent_C::Try_All_Message(class UTextChatWindowWI_C* ChatWidget_0, class ASCTPlayerState* Player_State, const class FText& TextMessage, uint8 Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "Try All Message");

	Params::TextChatComponent_C_Try_All_Message Parms{};

	Parms.ChatWidget_0 = ChatWidget_0;
	Parms.Player_State = Player_State;
	Parms.TextMessage = std::move(TextMessage);
	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.TryPersonoidMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextChatWindowWI_C*              ChatWidget_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCTPlayerState*                  Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             TextMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextChatComponent_C::TryPersonoidMessage(class UTextChatWindowWI_C* ChatWidget_0, class ASCTPlayerState* Player_State, const class FText& TextMessage, uint8 Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "TryPersonoidMessage");

	Params::TextChatComponent_C_TryPersonoidMessage Parms{};

	Parms.ChatWidget_0 = ChatWidget_0;
	Parms.Player_State = Player_State;
	Parms.TextMessage = std::move(TextMessage);
	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.TryRoombaMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextChatWindowWI_C*              ChatWidget_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCTPlayerState*                  Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             TextMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextChatComponent_C::TryRoombaMessage(class UTextChatWindowWI_C* ChatWidget_0, class ASCTPlayerState* Player_State, const class FText& TextMessage, uint8 Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "TryRoombaMessage");

	Params::TextChatComponent_C_TryRoombaMessage Parms{};

	Parms.ChatWidget_0 = ChatWidget_0;
	Parms.Player_State = Player_State;
	Parms.TextMessage = std::move(TextMessage);
	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.TryEndgameMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextChatWindowWI_C*              ChatWidget_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCTPlayerState*                  Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             TextMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTextChatComponent_C::TryEndgameMessage(class UTextChatWindowWI_C* ChatWidget_0, class ASCTPlayerState* Player_State, const class FText& TextMessage, uint8 Channel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "TryEndgameMessage");

	Params::TextChatComponent_C_TryEndgameMessage Parms{};

	Parms.ChatWidget_0 = ChatWidget_0;
	Parms.Player_State = Player_State;
	Parms.TextMessage = std::move(TextMessage);
	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TextChatComponent.TextChatComponent_C.AddTextChatWindowWidgetToUI
// (Public, BlueprintCallable, BlueprintEvent)

void UTextChatComponent_C::AddTextChatWindowWidgetToUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "AddTextChatWindowWidgetToUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextChatComponent.TextChatComponent_C.CreateTextChatWindowIfNoneExists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTextChatComponent_C::CreateTextChatWindowIfNoneExists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "CreateTextChatWindowIfNoneExists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TextChatComponent.TextChatComponent_C.IsPlayerWithinTextingRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerState*                     Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextChatComponent_C::IsPlayerWithinTextingRange(class APlayerState* Player_State) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "IsPlayerWithinTextingRange");

	Params::TextChatComponent_C_IsPlayerWithinTextingRange Parms{};

	Parms.Player_State = Player_State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TextChatComponent.TextChatComponent_C.IsPlayerAlive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ASCTPlayerState*                  PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTextChatComponent_C::IsPlayerAlive(class ASCTPlayerState* PlayerState) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "IsPlayerAlive");

	Params::TextChatComponent_C_IsPlayerAlive Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TextChatComponent.TextChatComponent_C.Construct Text Message
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             MessageText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// uint8                                   Channel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UTextChatComponent_C::Construct_Text_Message(class APlayerState* PlayerState, const class FText& MessageText, uint8 Channel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextChatComponent_C", "Construct Text Message");

	Params::TextChatComponent_C_Construct_Text_Message Parms{};

	Parms.PlayerState = PlayerState;
	Parms.MessageText = std::move(MessageText);
	Parms.Channel = Channel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

