#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsciousnessBaseGE

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ConsciousnessBaseGE.ConsciousnessBaseGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UConsciousnessBaseGE_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsciousnessBaseGE_C">();
	}
	static class UConsciousnessBaseGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsciousnessBaseGE_C>();
	}
};
static_assert(alignof(UConsciousnessBaseGE_C) == 0x000008, "Wrong alignment on UConsciousnessBaseGE_C");
static_assert(sizeof(UConsciousnessBaseGE_C) == 0x0007B8, "Wrong size on UConsciousnessBaseGE_C");

}

