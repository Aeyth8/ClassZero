#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WetnessReductionGE

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WetnessReductionGE.WetnessReductionGE_C
// 0x0000 (0x07B8 - 0x07B8)
class UWetnessReductionGE_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WetnessReductionGE_C">();
	}
	static class UWetnessReductionGE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWetnessReductionGE_C>();
	}
};
static_assert(alignof(UWetnessReductionGE_C) == 0x000008, "Wrong alignment on UWetnessReductionGE_C");
static_assert(sizeof(UWetnessReductionGE_C) == 0x0007B8, "Wrong size on UWetnessReductionGE_C");

}
