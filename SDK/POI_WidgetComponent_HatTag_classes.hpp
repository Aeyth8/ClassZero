#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: POI_WidgetComponent_HatTag

#include "Basic.hpp"

#include "POI_WidgetComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass POI_WidgetComponent_HatTag.POI_WidgetComponent_HatTag_C
// 0x0000 (0x05A0 - 0x05A0)
class UPOI_WidgetComponent_HatTag_C final : public UPOI_WidgetComponent_C
{
public:
	void SetVisibilityState(bool Visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"POI_WidgetComponent_HatTag_C">();
	}
	static class UPOI_WidgetComponent_HatTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPOI_WidgetComponent_HatTag_C>();
	}
};
static_assert(alignof(UPOI_WidgetComponent_HatTag_C) == 0x000010, "Wrong alignment on UPOI_WidgetComponent_HatTag_C");
static_assert(sizeof(UPOI_WidgetComponent_HatTag_C) == 0x0005A0, "Wrong size on UPOI_WidgetComponent_HatTag_C");

}
