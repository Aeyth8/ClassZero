#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipablePower_Keycard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SCT_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EquipablePower_Keycard.EquipablePower_Keycard_C
// 0x0050 (0x0288 - 0x0238)
class AEquipablePower_Keycard_C : public AEquipablePower
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextRenderComponent*                   Description;                                       // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak;                                                // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 EffectToGrant;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPOI_OffScreenIndicatorWI_C*            OffScreenIndicatorWI;                              // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TargetScene;                                       // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKeySocket3in1BP_C*                     Threein1Socket;                                    // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EquipablePower_Keycard(int32 EntryPoint);
	void Multi_Audio_Ping();
	void Cancel_Ping();
	void Start_Pinging();
	void On_Removed_Card(class AActor* DestroyedActor);
	void Owner_Create_Off_Screen_Indicator(class APlayerController* OwningPlayer);
	void Update_Offscreen_Indicator();
	void Initialize();
	void UpdateOffScreenIndicator();
	void OFFSI_SaveRequiredReferences(class AController* Controller);
	void RemoveAllExistingKeycardOFFSI();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipablePower_Keycard_C">();
	}
	static class AEquipablePower_Keycard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEquipablePower_Keycard_C>();
	}
};
static_assert(alignof(AEquipablePower_Keycard_C) == 0x000008, "Wrong alignment on AEquipablePower_Keycard_C");
static_assert(sizeof(AEquipablePower_Keycard_C) == 0x000288, "Wrong size on AEquipablePower_Keycard_C");
static_assert(offsetof(AEquipablePower_Keycard_C, UberGraphFrame) == 0x000238, "Member 'AEquipablePower_Keycard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, Description) == 0x000240, "Member 'AEquipablePower_Keycard_C::Description' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, ParticleSystem) == 0x000248, "Member 'AEquipablePower_Keycard_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, StaticMesh) == 0x000250, "Member 'AEquipablePower_Keycard_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, Ak) == 0x000258, "Member 'AEquipablePower_Keycard_C::Ak' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, EffectToGrant) == 0x000260, "Member 'AEquipablePower_Keycard_C::EffectToGrant' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, OffScreenIndicatorWI) == 0x000268, "Member 'AEquipablePower_Keycard_C::OffScreenIndicatorWI' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, TargetScene) == 0x000270, "Member 'AEquipablePower_Keycard_C::TargetScene' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, ControlledPawn) == 0x000278, "Member 'AEquipablePower_Keycard_C::ControlledPawn' has a wrong offset!");
static_assert(offsetof(AEquipablePower_Keycard_C, Threein1Socket) == 0x000280, "Member 'AEquipablePower_Keycard_C::Threein1Socket' has a wrong offset!");

}
