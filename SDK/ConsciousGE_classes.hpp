#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsciousGE

#include "Basic.hpp"

#include "ConsciousnessBaseGE_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ConsciousGE.ConsciousGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UConsciousGE_C final : public UConsciousnessBaseGE_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsciousGE_C">();
	}
	static class UConsciousGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsciousGE_C>();
	}
};
static_assert(alignof(UConsciousGE_C) == 0x000008, "Wrong alignment on UConsciousGE_C");
static_assert(sizeof(UConsciousGE_C) == 0x0007B8, "Wrong size on UConsciousGE_C");

}

