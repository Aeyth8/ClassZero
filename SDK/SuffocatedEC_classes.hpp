#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuffocatedEC

#include "Basic.hpp"

#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SuffocatedEC.SuffocatedEC_C
// 0x0000 (0x0048 - 0x0048)
class USuffocatedEC_C final : public UKillCalculationBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SuffocatedEC_C">();
	}
	static class USuffocatedEC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USuffocatedEC_C>();
	}
};
static_assert(alignof(USuffocatedEC_C) == 0x000008, "Wrong alignment on USuffocatedEC_C");
static_assert(sizeof(USuffocatedEC_C) == 0x000048, "Wrong size on USuffocatedEC_C");

}

