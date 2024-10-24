#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DrunkTrophy

#include "Basic.hpp"

#include "TrophyBaseBP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DrunkTrophy.DrunkTrophy_C
// 0x0000 (0x02D8 - 0x02D8)
class ADrunkTrophy_C final : public ATrophyBaseBP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DrunkTrophy_C">();
	}
	static class ADrunkTrophy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADrunkTrophy_C>();
	}
};
static_assert(alignof(ADrunkTrophy_C) == 0x000008, "Wrong alignment on ADrunkTrophy_C");
static_assert(sizeof(ADrunkTrophy_C) == 0x0002D8, "Wrong size on ADrunkTrophy_C");

}

