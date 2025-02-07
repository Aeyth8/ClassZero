#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OxygenPotionInteractionComponent

#include "Basic.hpp"

#include "SCT_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OxygenPotionInteractionComponent.OxygenPotionInteractionComponent_C
// 0x0018 (0x0230 - 0x0218)
class UOxygenPotionInteractionComponent_C final : public UInteractionComponent
{
public:
	class FText                                   MissingOxygenPotion;                               // 0x0218(0x0018)(Edit, BlueprintVisible)

public:
	bool CanActivate(const struct FInteractionPayload& Payload) const;
	class FText GetInactiveContextDescription(const struct FInteractionPayload& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OxygenPotionInteractionComponent_C">();
	}
	static class UOxygenPotionInteractionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOxygenPotionInteractionComponent_C>();
	}
};
static_assert(alignof(UOxygenPotionInteractionComponent_C) == 0x000008, "Wrong alignment on UOxygenPotionInteractionComponent_C");
static_assert(sizeof(UOxygenPotionInteractionComponent_C) == 0x000230, "Wrong size on UOxygenPotionInteractionComponent_C");
static_assert(offsetof(UOxygenPotionInteractionComponent_C, MissingOxygenPotion) == 0x000218, "Member 'UOxygenPotionInteractionComponent_C::MissingOxygenPotion' has a wrong offset!");

}

