#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POI_State

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass POI_State.POI_State_C
// 0x0008 (0x0030 - 0x0028)
class UPOI_State_C final : public UObject
{
public:
	bool                                          Visible;                                           // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetIsVisible(bool IsVisible);

	void GetIsVisible(bool* Visible_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"POI_State_C">();
	}
	static class UPOI_State_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPOI_State_C>();
	}
};
static_assert(alignof(UPOI_State_C) == 0x000008, "Wrong alignment on UPOI_State_C");
static_assert(sizeof(UPOI_State_C) == 0x000030, "Wrong size on UPOI_State_C");
static_assert(offsetof(UPOI_State_C, Visible) == 0x000028, "Member 'UPOI_State_C::Visible' has a wrong offset!");

}

