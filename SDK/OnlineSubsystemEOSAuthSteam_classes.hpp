#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemEOSAuthSteam

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class OnlineSubsystemEOSAuthSteam.EOSNativePlatformSteam
// 0x0008 (0x0030 - 0x0028)
class UEOSNativePlatformSteam final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EOSNativePlatformSteam">();
	}
	static class UEOSNativePlatformSteam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEOSNativePlatformSteam>();
	}
};
static_assert(alignof(UEOSNativePlatformSteam) == 0x000008, "Wrong alignment on UEOSNativePlatformSteam");
static_assert(sizeof(UEOSNativePlatformSteam) == 0x000030, "Wrong size on UEOSNativePlatformSteam");

}

