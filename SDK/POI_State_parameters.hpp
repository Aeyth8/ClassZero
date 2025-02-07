#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POI_State

#include "Basic.hpp"


namespace SDK::Params
{

// Function POI_State.POI_State_C.SetIsVisible
// 0x0001 (0x0001 - 0x0000)
struct POI_State_C_SetIsVisible final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(POI_State_C_SetIsVisible) == 0x000001, "Wrong alignment on POI_State_C_SetIsVisible");
static_assert(sizeof(POI_State_C_SetIsVisible) == 0x000001, "Wrong size on POI_State_C_SetIsVisible");
static_assert(offsetof(POI_State_C_SetIsVisible, IsVisible) == 0x000000, "Member 'POI_State_C_SetIsVisible::IsVisible' has a wrong offset!");

// Function POI_State.POI_State_C.GetIsVisible
// 0x0001 (0x0001 - 0x0000)
struct POI_State_C_GetIsVisible final
{
public:
	bool                                          Visible_0;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(POI_State_C_GetIsVisible) == 0x000001, "Wrong alignment on POI_State_C_GetIsVisible");
static_assert(sizeof(POI_State_C_GetIsVisible) == 0x000001, "Wrong size on POI_State_C_GetIsVisible");
static_assert(offsetof(POI_State_C_GetIsVisible, Visible_0) == 0x000000, "Member 'POI_State_C_GetIsVisible::Visible_0' has a wrong offset!");

}

