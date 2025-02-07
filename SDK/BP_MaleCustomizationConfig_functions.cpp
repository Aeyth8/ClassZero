#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MaleCustomizationConfig

#include "Basic.hpp"

#include "BP_MaleCustomizationConfig_classes.hpp"
#include "BP_MaleCustomizationConfig_parameters.hpp"


namespace SDK
{

// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.ExecuteUbergraph_BP_MaleCustomizationConfig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MaleCustomizationConfig_C::ExecuteUbergraph_BP_MaleCustomizationConfig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "ExecuteUbergraph_BP_MaleCustomizationConfig");

	Params::BP_MaleCustomizationConfig_C_ExecuteUbergraph_BP_MaleCustomizationConfig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.OnSuccess_C021A2EE445CC72F7830FCB715D9D09C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccelByteModelsEntitlementPagingSlicedResultEntitlements                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MaleCustomizationConfig_C::OnSuccess_C021A2EE445CC72F7830FCB715D9D09C(const struct FAccelByteModelsEntitlementPagingSlicedResult& Entitlements, int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "OnSuccess_C021A2EE445CC72F7830FCB715D9D09C");

	Params::BP_MaleCustomizationConfig_C_OnSuccess_C021A2EE445CC72F7830FCB715D9D09C Parms{};

	Parms.Entitlements = std::move(Entitlements);
	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.OnFail_C021A2EE445CC72F7830FCB715D9D09C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MaleCustomizationConfig_C::OnFail_C021A2EE445CC72F7830FCB715D9D09C(int32 Code, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "OnFail_C021A2EE445CC72F7830FCB715D9D09C");

	Params::BP_MaleCustomizationConfig_C_OnFail_C021A2EE445CC72F7830FCB715D9D09C Parms{};

	Parms.Code = Code;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MaleCustomizationConfig_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetHeadItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetHeadItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetHeadItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetHeadItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetBodyItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetBodyItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetBodyItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetBodyItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetLegsItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetLegsItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetLegsItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetLegsItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetFeetItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetFeetItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetFeetItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetFeetItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.Get Category DTRow Names
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerCustomizationType                Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     RowNames                                               (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::Get_Category_DTRow_Names(EPlayerCustomizationType Type, TArray<class FName>* RowNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "Get Category DTRow Names");

	Params::BP_MaleCustomizationConfig_C_Get_Category_DTRow_Names Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (RowNames != nullptr)
		*RowNames = std::move(Parms.RowNames);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetSkinColorFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationColorMaterialOutRow                                                 (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetSkinColorFromDT(const class FString& RowName, struct FPlayerCustomizationColorMaterial* OutRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetSkinColorFromDT");

	Params::BP_MaleCustomizationConfig_C_GetSkinColorFromDT Parms{};

	Parms.RowName = std::move(RowName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetPresetFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationPreset       OutRow                                                 (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetPresetFromDT(const class FString& RowName, struct FPlayerCustomizationPreset* OutRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetPresetFromDT");

	Params::BP_MaleCustomizationConfig_C_GetPresetFromDT Parms{};

	Parms.RowName = std::move(RowName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetAccessoryItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetAccessoryItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetAccessoryItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetAccessoryItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetEyewearItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetEyewearItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetEyewearItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetEyewearItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetFacialHairItemFromDT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           TableKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FPlayerCustomizationItemTableRow Item                                                   (Parm, OutParm)

void ABP_MaleCustomizationConfig_C::GetFacialHairItemFromDT(const class FString& TableKey, struct FPlayerCustomizationItemTableRow* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetFacialHairItemFromDT");

	Params::BP_MaleCustomizationConfig_C_GetFacialHairItemFromDT Parms{};

	Parms.TableKey = std::move(TableKey);

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = std::move(Parms.Item);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetSkinColorInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     OutRowNames                                            (Parm, OutParm)
// class UDataTable*                       DataTable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Selected                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MaleCustomizationConfig_C::GetSkinColorInfo(TArray<class FName>* OutRowNames, class UDataTable** DataTable, class FString* Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetSkinColorInfo");

	Params::BP_MaleCustomizationConfig_C_GetSkinColorInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRowNames != nullptr)
		*OutRowNames = std::move(Parms.OutRowNames);

	if (DataTable != nullptr)
		*DataTable = Parms.DataTable;

	if (Selected != nullptr)
		*Selected = std::move(Parms.Selected);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetPresetInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     OutRowNames                                            (Parm, OutParm)
// class UDataTable*                       DataTable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Selected                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_MaleCustomizationConfig_C::GetPresetInfo(TArray<class FName>* OutRowNames, class UDataTable** DataTable, class FString* Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetPresetInfo");

	Params::BP_MaleCustomizationConfig_C_GetPresetInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutRowNames != nullptr)
		*OutRowNames = std::move(Parms.OutRowNames);

	if (DataTable != nullptr)
		*DataTable = Parms.DataTable;

	if (Selected != nullptr)
		*Selected = std::move(Parms.Selected);
}


// Function BP_MaleCustomizationConfig.BP_MaleCustomizationConfig_C.GetGender
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPlayerCustomizationGender              Gender                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MaleCustomizationConfig_C::GetGender(EPlayerCustomizationGender* Gender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MaleCustomizationConfig_C", "GetGender");

	Params::BP_MaleCustomizationConfig_C_GetGender Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gender != nullptr)
		*Gender = Parms.Gender;
}

}

