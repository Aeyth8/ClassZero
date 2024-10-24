#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CM_BarLiveMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CM_BarLiveMessage.CM_BarLiveMessage_C
// 0x0020 (0x0280 - 0x0260)
class UCM_BarLiveMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USizeBox*                               CarouselSizeBox;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_92;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_MenuCarousel_C*                     WI_MenuCarousel;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CM_BarLiveMessage(int32 EntryPoint);
	void ServiceMessagesLoaded();
	void Construct();
	void ServiceMessageClicked();
	void SelectPreviousMessage();
	void SelectNextMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CM_BarLiveMessage_C">();
	}
	static class UCM_BarLiveMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCM_BarLiveMessage_C>();
	}
};
static_assert(alignof(UCM_BarLiveMessage_C) == 0x000008, "Wrong alignment on UCM_BarLiveMessage_C");
static_assert(sizeof(UCM_BarLiveMessage_C) == 0x000280, "Wrong size on UCM_BarLiveMessage_C");
static_assert(offsetof(UCM_BarLiveMessage_C, UberGraphFrame) == 0x000260, "Member 'UCM_BarLiveMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCM_BarLiveMessage_C, CarouselSizeBox) == 0x000268, "Member 'UCM_BarLiveMessage_C::CarouselSizeBox' has a wrong offset!");
static_assert(offsetof(UCM_BarLiveMessage_C, Image_92) == 0x000270, "Member 'UCM_BarLiveMessage_C::Image_92' has a wrong offset!");
static_assert(offsetof(UCM_BarLiveMessage_C, WI_MenuCarousel) == 0x000278, "Member 'UCM_BarLiveMessage_C::WI_MenuCarousel' has a wrong offset!");

}

