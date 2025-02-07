#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bp_ac_AkVolumetricStaticMeshEmitter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass bp_ac_AkVolumetricStaticMeshEmitter.bp_ac_AkVolumetricStaticMeshEmitter_C
// 0x0090 (0x02B0 - 0x0220)
class Abp_ac_AkVolumetricStaticMeshEmitter_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                           AkComponent;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Hidden_In_Game;                                    // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_242[0x6];                                      // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Ak_Event_Emitter;                                  // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   State_Group;                                       // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   State_Inside;                                      // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   State_Outside;                                     // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Occ_Refresh_Interval;                              // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max_Range_Fade_Distance;                           // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Dot_Value;                                         // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Ak_Emitter_Location;                               // 0x0274(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timer_Lazy;                                        // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Lazy;                                           // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_285[0x3];                                      // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Static_Mesh_Location_Closest_To_Player;            // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Inside_Static_Mesh;                             // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Mesh;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleInEditor;                                   // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseAreaFade;                                       // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A2[0x2];                                      // 0x02A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                EmitterXOffset;                                    // 0x02A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_bp_ac_AkVolumetricStaticMeshEmitter(int32 EntryPoint);
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void UpdateEmitterLocationProxy();
	void Update_Emitter_Slowly();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void GetControlledPawnLocation(class AActor** PlayerReference, struct FVector* PlayerLocation);
	void GetPlayerControllerCameraRotation(struct FRotator* PlayerControllerCameraRotation);
	void GetDistanceToPlayerFromClosestPointOnMesh(float* DistanceToPlayerFromClosestSplinePoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_ac_AkVolumetricStaticMeshEmitter_C">();
	}
	static class Abp_ac_AkVolumetricStaticMeshEmitter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abp_ac_AkVolumetricStaticMeshEmitter_C>();
	}
};
static_assert(alignof(Abp_ac_AkVolumetricStaticMeshEmitter_C) == 0x000008, "Wrong alignment on Abp_ac_AkVolumetricStaticMeshEmitter_C");
static_assert(sizeof(Abp_ac_AkVolumetricStaticMeshEmitter_C) == 0x0002B0, "Wrong size on Abp_ac_AkVolumetricStaticMeshEmitter_C");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, UberGraphFrame) == 0x000220, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, AkComponent) == 0x000228, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::AkComponent' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, StaticMesh) == 0x000230, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, DefaultSceneRoot) == 0x000238, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Debug) == 0x000240, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Debug' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Hidden_In_Game) == 0x000241, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Hidden_In_Game' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Ak_Event_Emitter) == 0x000248, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Ak_Event_Emitter' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, State_Group) == 0x000250, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::State_Group' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, State_Inside) == 0x000258, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::State_Inside' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, State_Outside) == 0x000260, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::State_Outside' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Occ_Refresh_Interval) == 0x000268, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Occ_Refresh_Interval' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Max_Range_Fade_Distance) == 0x00026C, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Max_Range_Fade_Distance' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Dot_Value) == 0x000270, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Dot_Value' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Ak_Emitter_Location) == 0x000274, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Ak_Emitter_Location' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Timer_Lazy) == 0x000280, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Timer_Lazy' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Is_Lazy) == 0x000284, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Is_Lazy' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Static_Mesh_Location_Closest_To_Player) == 0x000288, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Static_Mesh_Location_Closest_To_Player' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Is_Inside_Static_Mesh) == 0x000294, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Is_Inside_Static_Mesh' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, Mesh) == 0x000298, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::Mesh' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, VisibleInEditor) == 0x0002A0, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::VisibleInEditor' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, UseAreaFade) == 0x0002A1, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::UseAreaFade' has a wrong offset!");
static_assert(offsetof(Abp_ac_AkVolumetricStaticMeshEmitter_C, EmitterXOffset) == 0x0002A4, "Member 'Abp_ac_AkVolumetricStaticMeshEmitter_C::EmitterXOffset' has a wrong offset!");

}

