#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnPOIStateChanged

#include "Basic.hpp"

#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OnPOIStateChanged.OnPOIStateChanged_C
// 0x0000 (0x0040 - 0x0040)
class UOnPOIStateChanged_C final : public UGlobalEventBool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnPOIStateChanged_C">();
	}
	static class UOnPOIStateChanged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnPOIStateChanged_C>();
	}
};
static_assert(alignof(UOnPOIStateChanged_C) == 0x000008, "Wrong alignment on UOnPOIStateChanged_C");
static_assert(sizeof(UOnPOIStateChanged_C) == 0x000040, "Wrong size on UOnPOIStateChanged_C");

}
