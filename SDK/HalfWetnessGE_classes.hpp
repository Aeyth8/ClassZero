#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HalfWetnessGE

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HalfWetnessGE.HalfWetnessGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UHalfWetnessGE_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HalfWetnessGE_C">();
	}
	static class UHalfWetnessGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHalfWetnessGE_C>();
	}
};
static_assert(alignof(UHalfWetnessGE_C) == 0x000008, "Wrong alignment on UHalfWetnessGE_C");
static_assert(sizeof(UHalfWetnessGE_C) == 0x0007B8, "Wrong size on UHalfWetnessGE_C");

}
