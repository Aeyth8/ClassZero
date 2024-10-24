#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ForceStandUpTimerGE

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ForceStandUpTimerGE.ForceStandUpTimerGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UForceStandUpTimerGE_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ForceStandUpTimerGE_C">();
	}
	static class UForceStandUpTimerGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForceStandUpTimerGE_C>();
	}
};
static_assert(alignof(UForceStandUpTimerGE_C) == 0x000008, "Wrong alignment on UForceStandUpTimerGE_C");
static_assert(sizeof(UForceStandUpTimerGE_C) == 0x0007B8, "Wrong size on UForceStandUpTimerGE_C");

}

