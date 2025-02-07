#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NameCanvasRenderTargetXboxOneBP

#include "Basic.hpp"

#include "NameCanvasRenderTargetXboxOneBP_classes.hpp"
#include "NameCanvasRenderTargetXboxOneBP_parameters.hpp"


namespace SDK
{

// Function NameCanvasRenderTargetXboxOneBP.NameCanvasRenderTargetXboxOneBP_C.ExecuteUbergraph_NameCanvasRenderTargetXboxOneBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameCanvasRenderTargetXboxOneBP_C::ExecuteUbergraph_NameCanvasRenderTargetXboxOneBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameCanvasRenderTargetXboxOneBP_C", "ExecuteUbergraph_NameCanvasRenderTargetXboxOneBP");

	Params::NameCanvasRenderTargetXboxOneBP_C_ExecuteUbergraph_NameCanvasRenderTargetXboxOneBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NameCanvasRenderTargetXboxOneBP.NameCanvasRenderTargetXboxOneBP_C.ReceiveUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCanvas*                          Canvas_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNameCanvasRenderTargetXboxOneBP_C::ReceiveUpdate(class UCanvas* Canvas_0, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NameCanvasRenderTargetXboxOneBP_C", "ReceiveUpdate");

	Params::NameCanvasRenderTargetXboxOneBP_C_ReceiveUpdate Parms{};

	Parms.Canvas_0 = Canvas_0;
	Parms.Width = Width;
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);
}

}

