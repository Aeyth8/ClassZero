#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurveilanceCameraSCTBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SurveilanceCameraSCTBP.SurveilanceCameraSCTBP_C
// 0x0088 (0x02B8 - 0x0230)
class ASurveilanceCameraSCTBP_C final : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                   XrayBillboard;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   XrayMesh;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*            MaterialBillboard;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       EditorPreview;                                     // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CameraPoint;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Body;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Arm;                                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Pan_NewTrack_0_7078ED9346BAE90B46D151BB77F44C91;   // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Pan__Direction_7078ED9346BAE90B46D151BB77F44C91;   // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_275[0x3];                                      // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Pan;                                               // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TargetActor;                                       // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrentLookAt;                                     // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldPan;                                         // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_295[0x3];                                      // 0x0295(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ViewStart;                                         // 0x0298(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ViewEnd;                                           // 0x02A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PanTime;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PanPauseTime;                                      // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SurveilanceCameraSCTBP(int32 EntryPoint);
	void FlipStartEndView();
	void StartPan();
	void ReversePan();
	void ReceiveBeginPlay();
	void StopFollowTarget();
	void FollowTarget(class AActor* ViewTarget);
	void ReceiveTick(float DeltaSeconds);
	void Pan__UpdateFunc();
	void Pan__FinishedFunc();
	void UserConstructionScript();
	void SetViewTarget(const struct FVector& Target);
	void SwapVectors();
	void CameraActive();
	void CameraInactive();
	void RenderXray(bool On);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SurveilanceCameraSCTBP_C">();
	}
	static class ASurveilanceCameraSCTBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASurveilanceCameraSCTBP_C>();
	}
};
static_assert(alignof(ASurveilanceCameraSCTBP_C) == 0x000008, "Wrong alignment on ASurveilanceCameraSCTBP_C");
static_assert(sizeof(ASurveilanceCameraSCTBP_C) == 0x0002B8, "Wrong size on ASurveilanceCameraSCTBP_C");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, UberGraphFrame) == 0x000230, "Member 'ASurveilanceCameraSCTBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, XrayBillboard) == 0x000238, "Member 'ASurveilanceCameraSCTBP_C::XrayBillboard' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, XrayMesh) == 0x000240, "Member 'ASurveilanceCameraSCTBP_C::XrayMesh' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, MaterialBillboard) == 0x000248, "Member 'ASurveilanceCameraSCTBP_C::MaterialBillboard' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, EditorPreview) == 0x000250, "Member 'ASurveilanceCameraSCTBP_C::EditorPreview' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, CameraPoint) == 0x000258, "Member 'ASurveilanceCameraSCTBP_C::CameraPoint' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, Body) == 0x000260, "Member 'ASurveilanceCameraSCTBP_C::Body' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, Arm) == 0x000268, "Member 'ASurveilanceCameraSCTBP_C::Arm' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, Pan_NewTrack_0_7078ED9346BAE90B46D151BB77F44C91) == 0x000270, "Member 'ASurveilanceCameraSCTBP_C::Pan_NewTrack_0_7078ED9346BAE90B46D151BB77F44C91' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, Pan__Direction_7078ED9346BAE90B46D151BB77F44C91) == 0x000274, "Member 'ASurveilanceCameraSCTBP_C::Pan__Direction_7078ED9346BAE90B46D151BB77F44C91' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, Pan) == 0x000278, "Member 'ASurveilanceCameraSCTBP_C::Pan' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, TargetActor) == 0x000280, "Member 'ASurveilanceCameraSCTBP_C::TargetActor' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, CurrentLookAt) == 0x000288, "Member 'ASurveilanceCameraSCTBP_C::CurrentLookAt' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, ShouldPan) == 0x000294, "Member 'ASurveilanceCameraSCTBP_C::ShouldPan' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, ViewStart) == 0x000298, "Member 'ASurveilanceCameraSCTBP_C::ViewStart' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, ViewEnd) == 0x0002A4, "Member 'ASurveilanceCameraSCTBP_C::ViewEnd' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, PanTime) == 0x0002B0, "Member 'ASurveilanceCameraSCTBP_C::PanTime' has a wrong offset!");
static_assert(offsetof(ASurveilanceCameraSCTBP_C, PanPauseTime) == 0x0002B4, "Member 'ASurveilanceCameraSCTBP_C::PanPauseTime' has a wrong offset!");

}
