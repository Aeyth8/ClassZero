#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UsingPowerGE

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UsingPowerGE.UsingPowerGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UUsingPowerGE_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UsingPowerGE_C">();
	}
	static class UUsingPowerGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUsingPowerGE_C>();
	}
};
static_assert(alignof(UUsingPowerGE_C) == 0x000008, "Wrong alignment on UUsingPowerGE_C");
static_assert(sizeof(UUsingPowerGE_C) == 0x0007B8, "Wrong size on UUsingPowerGE_C");

}
