#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CriticalOxygenStateEffect

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CriticalOxygenStateEffect.CriticalOxygenStateEffect_C
// 0x0000 (0x07B8 - 0x07B8)
class UCriticalOxygenStateEffect_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CriticalOxygenStateEffect_C">();
	}
	static class UCriticalOxygenStateEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCriticalOxygenStateEffect_C>();
	}
};
static_assert(alignof(UCriticalOxygenStateEffect_C) == 0x000008, "Wrong alignment on UCriticalOxygenStateEffect_C");
static_assert(sizeof(UCriticalOxygenStateEffect_C) == 0x0007B8, "Wrong size on UCriticalOxygenStateEffect_C");

}

