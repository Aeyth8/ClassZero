#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PickUpItemWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PickUpItemWI.PickUpItemWI_C
// 0x00B0 (0x0310 - 0x0260)
class UPickUpItemWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       FloatUp;                                           // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Floating;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleBG;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CirclebgFrame;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Item;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichText_ItemName;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPickupComponentBC_C*                   PickupComponent;                                   // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UContextStaticMeshComponent*            ContextStaticMesh;                                 // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                            IcontTint;                                         // 0x02B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ItemName;                                          // 0x02E0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          Override_Image;                                    // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2F9[0x7];                                      // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                OverrideImage;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                          AK_Event;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PickUpItemWI(int32 EntryPoint);
	void Construct();
	void OnEndAnimation(class UCanvasPanel* Canvas_Floating_0);
	struct FVector2D GetCentreOfViewport();
	struct FVector2D ProjectCSMToScreen(class UContextStaticMeshComponent* CSM);
	struct FVector2D ProjectActorToScreen(class AActor* Actor, const struct FVector& Offset);
	void SequenceEvent__ENTRYPOINTPickUpItemWI_0(class UCanvasPanel* Canvas_Floating_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PickUpItemWI_C">();
	}
	static class UPickUpItemWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPickUpItemWI_C>();
	}
};
static_assert(alignof(UPickUpItemWI_C) == 0x000008, "Wrong alignment on UPickUpItemWI_C");
static_assert(sizeof(UPickUpItemWI_C) == 0x000310, "Wrong size on UPickUpItemWI_C");
static_assert(offsetof(UPickUpItemWI_C, UberGraphFrame) == 0x000260, "Member 'UPickUpItemWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, FloatUp) == 0x000268, "Member 'UPickUpItemWI_C::FloatUp' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, BG) == 0x000270, "Member 'UPickUpItemWI_C::BG' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, BG_1) == 0x000278, "Member 'UPickUpItemWI_C::BG_1' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, Canvas_Floating) == 0x000280, "Member 'UPickUpItemWI_C::Canvas_Floating' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, CircleBG) == 0x000288, "Member 'UPickUpItemWI_C::CircleBG' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, CirclebgFrame) == 0x000290, "Member 'UPickUpItemWI_C::CirclebgFrame' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, Image_Item) == 0x000298, "Member 'UPickUpItemWI_C::Image_Item' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, RichText_ItemName) == 0x0002A0, "Member 'UPickUpItemWI_C::RichText_ItemName' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, PickupComponent) == 0x0002A8, "Member 'UPickUpItemWI_C::PickupComponent' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, ContextStaticMesh) == 0x0002B0, "Member 'UPickUpItemWI_C::ContextStaticMesh' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, IcontTint) == 0x0002B8, "Member 'UPickUpItemWI_C::IcontTint' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, ItemName) == 0x0002E0, "Member 'UPickUpItemWI_C::ItemName' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, Override_Image) == 0x0002F8, "Member 'UPickUpItemWI_C::Override_Image' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, OverrideImage) == 0x000300, "Member 'UPickUpItemWI_C::OverrideImage' has a wrong offset!");
static_assert(offsetof(UPickUpItemWI_C, AK_Event) == 0x000308, "Member 'UPickUpItemWI_C::AK_Event' has a wrong offset!");

}
