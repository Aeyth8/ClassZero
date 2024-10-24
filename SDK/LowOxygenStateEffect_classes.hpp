#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LowOxygenStateEffect

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LowOxygenStateEffect.LowOxygenStateEffect_C
// 0x0000 (0x07B8 - 0x07B8)
class ULowOxygenStateEffect_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LowOxygenStateEffect_C">();
	}
	static class ULowOxygenStateEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowOxygenStateEffect_C>();
	}
};
static_assert(alignof(ULowOxygenStateEffect_C) == 0x000008, "Wrong alignment on ULowOxygenStateEffect_C");
static_assert(sizeof(ULowOxygenStateEffect_C) == 0x0007B8, "Wrong size on ULowOxygenStateEffect_C");

}

