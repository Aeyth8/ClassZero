#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FCT

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FCT_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class FCT.ClientEntryGM
// 0x0000 (0x02C0 - 0x02C0)
class AClientEntryGM : public AGameModeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientEntryGM">();
	}
	static class AClientEntryGM* GetDefaultObj()
	{
		return GetDefaultObjImpl<AClientEntryGM>();
	}
};
static_assert(alignof(AClientEntryGM) == 0x000008, "Wrong alignment on AClientEntryGM");
static_assert(sizeof(AClientEntryGM) == 0x0002C0, "Wrong size on AClientEntryGM");

// Class FCT.ClientEntryPC
// 0x0048 (0x05B8 - 0x0570)
class AClientEntryPC : public APlayerController
{
public:
	bool                                          UseAWSLocal;                                       // 0x0570(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseDebugFindGame;                                  // 0x0571(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseDevQueue;                                      // 0x0572(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePrivateQueue34;                                // 0x0573(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseForce2Player;                                  // 0x0574(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseForce4Player;                                  // 0x0575(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePrivateQueue49;                                // 0x0576(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePrivateQueue51;                                // 0x0577(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePrivateQueue77;                                // 0x0578(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePrivateQueue90;                                // 0x0579(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RegionSet;                                         // 0x057A(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DesireChinaRegion;                                 // 0x057B(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_57C[0x4];                                      // 0x057C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DesiredRegionChangedDelegate;                      // 0x0580(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                 EndPointOverride;                                  // 0x0590(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A0[0x18];                                     // 0x05A0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_OnApplicationResume();
	bool RegionSelectionAllowed();
	bool SetDesiredRegion(const bool InChinaRegion);
	void SetUseAWSLocal(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClientEntryPC">();
	}
	static class AClientEntryPC* GetDefaultObj()
	{
		return GetDefaultObjImpl<AClientEntryPC>();
	}
};
static_assert(alignof(AClientEntryPC) == 0x000008, "Wrong alignment on AClientEntryPC");
static_assert(sizeof(AClientEntryPC) == 0x0005B8, "Wrong size on AClientEntryPC");
static_assert(offsetof(AClientEntryPC, UseAWSLocal) == 0x000570, "Member 'AClientEntryPC::UseAWSLocal' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, UseDebugFindGame) == 0x000571, "Member 'AClientEntryPC::UseDebugFindGame' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUseDevQueue) == 0x000572, "Member 'AClientEntryPC::bUseDevQueue' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUsePrivateQueue34) == 0x000573, "Member 'AClientEntryPC::bUsePrivateQueue34' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUseForce2Player) == 0x000574, "Member 'AClientEntryPC::bUseForce2Player' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUseForce4Player) == 0x000575, "Member 'AClientEntryPC::bUseForce4Player' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUsePrivateQueue49) == 0x000576, "Member 'AClientEntryPC::bUsePrivateQueue49' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUsePrivateQueue51) == 0x000577, "Member 'AClientEntryPC::bUsePrivateQueue51' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUsePrivateQueue77) == 0x000578, "Member 'AClientEntryPC::bUsePrivateQueue77' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, bUsePrivateQueue90) == 0x000579, "Member 'AClientEntryPC::bUsePrivateQueue90' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, RegionSet) == 0x00057A, "Member 'AClientEntryPC::RegionSet' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, DesireChinaRegion) == 0x00057B, "Member 'AClientEntryPC::DesireChinaRegion' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, DesiredRegionChangedDelegate) == 0x000580, "Member 'AClientEntryPC::DesiredRegionChangedDelegate' has a wrong offset!");
static_assert(offsetof(AClientEntryPC, EndPointOverride) == 0x000590, "Member 'AClientEntryPC::EndPointOverride' has a wrong offset!");

// Class FCT.FCTGameViewportClient
// 0x0010 (0x0370 - 0x0360)
class UFCTGameViewportClient final : public UGameViewportClient
{
public:
	uint8                                         Pad_360[0x10];                                     // 0x0360(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FCTGameViewportClient">();
	}
	static class UFCTGameViewportClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFCTGameViewportClient>();
	}
};
static_assert(alignof(UFCTGameViewportClient) == 0x000008, "Wrong alignment on UFCTGameViewportClient");
static_assert(sizeof(UFCTGameViewportClient) == 0x000370, "Wrong size on UFCTGameViewportClient");

// Class FCT.Door
// 0x0020 (0x0240 - 0x0220)
class ADoor : public AActor
{
public:
	bool                                          Proximity;                                         // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoClose;                                         // 0x0221(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDoorUnlockMode                               UnlockMode;                                        // 0x0222(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_223[0x1];                                      // 0x0223(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AutoCloseDelay;                                    // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CooldownOnFailToUnlock;                            // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseLevelStreaming;                                // 0x022C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22D[0x3];                                      // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   LoadStreamingLevel;                                // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   UnloadStreamingLevel;                              // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Door">();
	}
	static class ADoor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADoor>();
	}
};
static_assert(alignof(ADoor) == 0x000008, "Wrong alignment on ADoor");
static_assert(sizeof(ADoor) == 0x000240, "Wrong size on ADoor");
static_assert(offsetof(ADoor, Proximity) == 0x000220, "Member 'ADoor::Proximity' has a wrong offset!");
static_assert(offsetof(ADoor, AutoClose) == 0x000221, "Member 'ADoor::AutoClose' has a wrong offset!");
static_assert(offsetof(ADoor, UnlockMode) == 0x000222, "Member 'ADoor::UnlockMode' has a wrong offset!");
static_assert(offsetof(ADoor, AutoCloseDelay) == 0x000224, "Member 'ADoor::AutoCloseDelay' has a wrong offset!");
static_assert(offsetof(ADoor, CooldownOnFailToUnlock) == 0x000228, "Member 'ADoor::CooldownOnFailToUnlock' has a wrong offset!");
static_assert(offsetof(ADoor, bUseLevelStreaming) == 0x00022C, "Member 'ADoor::bUseLevelStreaming' has a wrong offset!");
static_assert(offsetof(ADoor, LoadStreamingLevel) == 0x000230, "Member 'ADoor::LoadStreamingLevel' has a wrong offset!");
static_assert(offsetof(ADoor, UnloadStreamingLevel) == 0x000238, "Member 'ADoor::UnloadStreamingLevel' has a wrong offset!");

// Class FCT.DoorFactory
// 0x0000 (0x0220 - 0x0220)
class ADoorFactory final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DoorFactory">();
	}
	static class ADoorFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADoorFactory>();
	}
};
static_assert(alignof(ADoorFactory) == 0x000008, "Wrong alignment on ADoorFactory");
static_assert(sizeof(ADoorFactory) == 0x000220, "Wrong size on ADoorFactory");

// Class FCT.FCTGameEngine
// 0x0000 (0x0E30 - 0x0E30)
class UFCTGameEngine final : public UGameEngine
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FCTGameEngine">();
	}
	static class UFCTGameEngine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFCTGameEngine>();
	}
};
static_assert(alignof(UFCTGameEngine) == 0x000008, "Wrong alignment on UFCTGameEngine");
static_assert(sizeof(UFCTGameEngine) == 0x000E30, "Wrong size on UFCTGameEngine");

// Class FCT.FCTGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UFCTGameplayStatics final : public UGameplayStatics
{
public:
	static void PlayMenuApplyChangeSound(class UObject* WorldContextObject);
	static void PlayMenuClickSound(class UObject* WorldContextObject);
	static void PlayMenuHoveredSound(class UObject* WorldContextObject);
	static void PlayMenuPressedSound(class UObject* WorldContextObject);
	static void PlayMenuReleasedSound(class UObject* WorldContextObject);
	static void PlayMenuTypeLetterDudSound(class UObject* WorldContextObject);
	static void PlayMenuTypeLetterSound(class UObject* WorldContextObject);
	static void PlayMenuUnhoveredSound(class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FCTGameplayStatics">();
	}
	static class UFCTGameplayStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFCTGameplayStatics>();
	}
};
static_assert(alignof(UFCTGameplayStatics) == 0x000008, "Wrong alignment on UFCTGameplayStatics");
static_assert(sizeof(UFCTGameplayStatics) == 0x000028, "Wrong size on UFCTGameplayStatics");

// Class FCT.FCTInputKeySelector
// 0x0060 (0x0760 - 0x0700)
class UFCTInputKeySelector final : public UInputKeySelector
{
public:
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x0700(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x0710(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0720(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0730(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>         ActionMappings;                                    // 0x0740(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FInputAxisKeyMapping>           AxisMappings;                                      // 0x0750(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)

public:
	TArray<struct FInputActionKeyMapping> ActionMappingsByName(class FName Name_0);
	TArray<struct FInputAxisKeyMapping> AxisMappingsByName(class FName Name_0);
	void Hovered();
	void KeySelectingChanged();
	bool LoadPlayerInputConfig();
	void MyKeySelected(const struct FInputChord& Key);
	void OnIKSHoveredEvent__DelegateSignature();
	void OnIKSPressedEvent__DelegateSignature();
	void OnIKSReleasedEvent__DelegateSignature();
	void OnIKSUnhoveredEvent__DelegateSignature();
	void Pressed();
	void Released();
	bool SetActionInput(const struct FInputActionKeyMapping& OldMapping, const struct FInputChord& Key);
	bool SetAxisInput(const struct FInputAxisKeyMapping& OldMapping, const struct FInputChord& Key);
	void Unhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FCTInputKeySelector">();
	}
	static class UFCTInputKeySelector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFCTInputKeySelector>();
	}
};
static_assert(alignof(UFCTInputKeySelector) == 0x000008, "Wrong alignment on UFCTInputKeySelector");
static_assert(sizeof(UFCTInputKeySelector) == 0x000760, "Wrong size on UFCTInputKeySelector");
static_assert(offsetof(UFCTInputKeySelector, OnPressed) == 0x000700, "Member 'UFCTInputKeySelector::OnPressed' has a wrong offset!");
static_assert(offsetof(UFCTInputKeySelector, OnReleased) == 0x000710, "Member 'UFCTInputKeySelector::OnReleased' has a wrong offset!");
static_assert(offsetof(UFCTInputKeySelector, OnHovered) == 0x000720, "Member 'UFCTInputKeySelector::OnHovered' has a wrong offset!");
static_assert(offsetof(UFCTInputKeySelector, OnUnhovered) == 0x000730, "Member 'UFCTInputKeySelector::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UFCTInputKeySelector, ActionMappings) == 0x000740, "Member 'UFCTInputKeySelector::ActionMappings' has a wrong offset!");
static_assert(offsetof(UFCTInputKeySelector, AxisMappings) == 0x000750, "Member 'UFCTInputKeySelector::AxisMappings' has a wrong offset!");

// Class FCT.FCT_GIS
// 0x0000 (0x0030 - 0x0030)
class UFCT_GIS final : public UGameInstanceSubsystem
{
public:
	class FString GetInstallID() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FCT_GIS">();
	}
	static class UFCT_GIS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFCT_GIS>();
	}
};
static_assert(alignof(UFCT_GIS) == 0x000008, "Wrong alignment on UFCT_GIS");
static_assert(sizeof(UFCT_GIS) == 0x000030, "Wrong size on UFCT_GIS");

// Class FCT.GamepadScrollUtility
// 0x0018 (0x0278 - 0x0260)
class UGamepadScrollUtility : public UUserWidget
{
public:
	uint8                                         Pad_260[0x18];                                     // 0x0260(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnGamepadScroll(float ScrollValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GamepadScrollUtility">();
	}
	static class UGamepadScrollUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGamepadScrollUtility>();
	}
};
static_assert(alignof(UGamepadScrollUtility) == 0x000008, "Wrong alignment on UGamepadScrollUtility");
static_assert(sizeof(UGamepadScrollUtility) == 0x000278, "Wrong size on UGamepadScrollUtility");

// Class FCT.GameSessionFCT
// 0x0030 (0x0268 - 0x0238)
class AGameSessionFCT final : public AGameSession
{
public:
	int32                                         MaxEvilPlayers;                                    // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23C[0x2C];                                     // 0x023C(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameSessionFCT">();
	}
	static class AGameSessionFCT* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameSessionFCT>();
	}
};
static_assert(alignof(AGameSessionFCT) == 0x000008, "Wrong alignment on AGameSessionFCT");
static_assert(sizeof(AGameSessionFCT) == 0x000268, "Wrong size on AGameSessionFCT");
static_assert(offsetof(AGameSessionFCT, MaxEvilPlayers) == 0x000238, "Member 'AGameSessionFCT::MaxEvilPlayers' has a wrong offset!");

// Class FCT.StaticInteractableMesh
// 0x0098 (0x02C8 - 0x0230)
class AStaticInteractableMesh : public AStaticMeshActor
{
public:
	class FText                                   InteractionDescription;                            // 0x0230(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector                                ContextMenuLocation;                               // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   CollisionProfileNameAvailable;                     // 0x0254(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   CollisionProfileNameUnavailable;                   // 0x025C(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInteractionLocal;                                // 0x0268(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          bIsAvaliable;                                      // 0x0278(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInteractionServer;                               // 0x0280(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnInteractionOther;                                // 0x0290(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	EInteractiveEvent                             EventSetup;                                        // 0x02A0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HoldToCompleteTime;                                // 0x02A4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A8[0x10];                                     // 0x02A8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  PressingPawnServer;                                // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2C0[0x8];                                      // 0x02C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AbortPressByServerLocal();
	void Calculate();
	void ClickedServer(class APawn* PressingPawn);
	void ClickLocal();
	void K2_AbortPressLocal();
	void K2_AbortReleaseLocal();
	void K2_Calculate();
	void K2_ClickedLocal();
	void K2_ClickedOther(class APawn* PerformingPawn);
	void K2_ClickedServer(class APawn* PerformingPawn);
	void K2_HoldCompleteLocal(class APawn* PerformingPawn);
	void K2_HoldCompleteOther(class APawn* PerformingPawn);
	void K2_HoldCompleteServer(class APawn* PerformingPawn);
	void K2_OnRep_SetIsAvailable();
	void K2_PressedLocal();
	void K2_PressedOther();
	void K2_PressedServer(class APawn* PerformingPawn);
	void K2_ReleasedLocal(float TargetCenterNormalized);
	void K2_ReleasedOther(float TargetCenterNormalized);
	void K2_ReleasedServer(class APawn* PerformingPawn);
	void MulticastClick(class APawn* PressingPawn);
	void MulticastCompleted(class APawn* ReleasingPawn);
	void MulticastReleased(class APawn* ReleasingPawn, float TargetCenterNormalized);
	void OnRep_SetIsAvailable();
	void PressLocal(float LocalPressStamp);
	void PressOther();
	void PressServer(class APawn* PressingPawn, float LocalPressTimeStamp, uint8 Ping);
	void ReleaseLocal(float LocalReleaseStamp);
	void ReleaseServer(float LocalReleaseTimeStamp);
	void SetIsAvailable(bool NewIsAvailable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StaticInteractableMesh">();
	}
	static class AStaticInteractableMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStaticInteractableMesh>();
	}
};
static_assert(alignof(AStaticInteractableMesh) == 0x000008, "Wrong alignment on AStaticInteractableMesh");
static_assert(sizeof(AStaticInteractableMesh) == 0x0002C8, "Wrong size on AStaticInteractableMesh");
static_assert(offsetof(AStaticInteractableMesh, InteractionDescription) == 0x000230, "Member 'AStaticInteractableMesh::InteractionDescription' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, ContextMenuLocation) == 0x000248, "Member 'AStaticInteractableMesh::ContextMenuLocation' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, CollisionProfileNameAvailable) == 0x000254, "Member 'AStaticInteractableMesh::CollisionProfileNameAvailable' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, CollisionProfileNameUnavailable) == 0x00025C, "Member 'AStaticInteractableMesh::CollisionProfileNameUnavailable' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, OnInteractionLocal) == 0x000268, "Member 'AStaticInteractableMesh::OnInteractionLocal' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, bIsAvaliable) == 0x000278, "Member 'AStaticInteractableMesh::bIsAvaliable' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, OnInteractionServer) == 0x000280, "Member 'AStaticInteractableMesh::OnInteractionServer' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, OnInteractionOther) == 0x000290, "Member 'AStaticInteractableMesh::OnInteractionOther' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, EventSetup) == 0x0002A0, "Member 'AStaticInteractableMesh::EventSetup' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, HoldToCompleteTime) == 0x0002A4, "Member 'AStaticInteractableMesh::HoldToCompleteTime' has a wrong offset!");
static_assert(offsetof(AStaticInteractableMesh, PressingPawnServer) == 0x0002B8, "Member 'AStaticInteractableMesh::PressingPawnServer' has a wrong offset!");

// Class FCT.InteractiveButtonScreen
// 0x0000 (0x02C8 - 0x02C8)
class AInteractiveButtonScreen final : public AStaticInteractableMesh
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveButtonScreen">();
	}
	static class AInteractiveButtonScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteractiveButtonScreen>();
	}
};
static_assert(alignof(AInteractiveButtonScreen) == 0x000008, "Wrong alignment on AInteractiveButtonScreen");
static_assert(sizeof(AInteractiveButtonScreen) == 0x0002C8, "Wrong size on AInteractiveButtonScreen");

// Class FCT.InteractiveKeySlot
// 0x0000 (0x02C8 - 0x02C8)
class AInteractiveKeySlot final : public AStaticInteractableMesh
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveKeySlot">();
	}
	static class AInteractiveKeySlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteractiveKeySlot>();
	}
};
static_assert(alignof(AInteractiveKeySlot) == 0x000008, "Wrong alignment on AInteractiveKeySlot");
static_assert(sizeof(AInteractiveKeySlot) == 0x0002C8, "Wrong size on AInteractiveKeySlot");

// Class FCT.InteractiveSabotage
// 0x0000 (0x02C8 - 0x02C8)
class AInteractiveSabotage final : public AStaticInteractableMesh
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"InteractiveSabotage">();
	}
	static class AInteractiveSabotage* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteractiveSabotage>();
	}
};
static_assert(alignof(AInteractiveSabotage) == 0x000008, "Wrong alignment on AInteractiveSabotage");
static_assert(sizeof(AInteractiveSabotage) == 0x0002C8, "Wrong size on AInteractiveSabotage");

// Class FCT.LanguageData
// 0x0058 (0x0088 - 0x0030)
class ULanguageData final : public UPrimaryDataAsset
{
public:
	TMap<class FString, struct FLanguageDatum>    Languages;                                         // 0x0030(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x8];                                       // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetKeyAt(int32 Index_0);
	int32 GetKeyIndex(const class FString& Key);
	void PopuplateComboBoxString(class UComboBoxString* InComboBoxString);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LanguageData">();
	}
	static class ULanguageData* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULanguageData>();
	}
};
static_assert(alignof(ULanguageData) == 0x000008, "Wrong alignment on ULanguageData");
static_assert(sizeof(ULanguageData) == 0x000088, "Wrong size on ULanguageData");
static_assert(offsetof(ULanguageData, Languages) == 0x000030, "Member 'ULanguageData::Languages' has a wrong offset!");

// Class FCT.MenuButton
// 0x0000 (0x0428 - 0x0428)
class UMenuButton final : public UButton
{
public:
	void OnMenuButtonHovered();
	void OnMenuButtonPressed();
	void OnMenuButtonReleased();
	void OnMenuButtonUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MenuButton">();
	}
	static class UMenuButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuButton>();
	}
};
static_assert(alignof(UMenuButton) == 0x000008, "Wrong alignment on UMenuButton");
static_assert(sizeof(UMenuButton) == 0x000428, "Wrong size on UMenuButton");

// Class FCT.MenuData
// 0x0040 (0x0068 - 0x0028)
class UMenuData final : public UObject
{
public:
	class UUserWidget*                            Menu;                                              // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UMenuFocusWidget*                       MenuFocusWidget;                                   // 0x0040(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x10];                                      // 0x0048(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMenuData*>                      ChildMenuData;                                     // 0x0058(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MenuData">();
	}
	static class UMenuData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuData>();
	}
};
static_assert(alignof(UMenuData) == 0x000008, "Wrong alignment on UMenuData");
static_assert(sizeof(UMenuData) == 0x000068, "Wrong size on UMenuData");
static_assert(offsetof(UMenuData, Menu) == 0x000028, "Member 'UMenuData::Menu' has a wrong offset!");
static_assert(offsetof(UMenuData, MenuFocusWidget) == 0x000040, "Member 'UMenuData::MenuFocusWidget' has a wrong offset!");
static_assert(offsetof(UMenuData, ChildMenuData) == 0x000058, "Member 'UMenuData::ChildMenuData' has a wrong offset!");

// Class FCT.MenuControllerGIS
// 0x0028 (0x0058 - 0x0030)
class UMenuControllerGIS final : public UGameInstanceSubsystem
{
public:
	TArray<class UMenuData*>                      MenuStack;                                         // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMenuData*                              CurrentOverlayDialog;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x10];                                      // 0x0048(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UPanelSlot* AddChildMenu(class UUserWidget* Menu, class UUserWidget* ParentMenu, bool NonInteractable, bool SetFocus);
	void AddMenu(class UUserWidget* Menu, int32 ZOrder, bool NonInteractable, bool SetFocus);
	void ClearCurrentFocus();
	bool IsWidgetInActiveMenu(class UWidget* Widget);
	bool IsWidgetInAnyMenu(class UWidget* Widget);
	void OnLevelRemovedFromWorld(class ULevel* InLevel, class UWorld* InWorld);
	void RemoveMenu(class UUserWidget* Menu);
	void SetOverlayDialog(class UUserWidget* Menu, int32 ZOrder, bool NonInteractable);
	void UpdateMenus();
	void UpdateMenuStates();
	bool UpdateUserWidgetFocus(bool SetNewFocus);

	class UObject* GetWorldContextObjectFromMenus() const;
	bool HasMenus() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MenuControllerGIS">();
	}
	static class UMenuControllerGIS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuControllerGIS>();
	}
};
static_assert(alignof(UMenuControllerGIS) == 0x000008, "Wrong alignment on UMenuControllerGIS");
static_assert(sizeof(UMenuControllerGIS) == 0x000058, "Wrong size on UMenuControllerGIS");
static_assert(offsetof(UMenuControllerGIS, MenuStack) == 0x000030, "Member 'UMenuControllerGIS::MenuStack' has a wrong offset!");
static_assert(offsetof(UMenuControllerGIS, CurrentOverlayDialog) == 0x000040, "Member 'UMenuControllerGIS::CurrentOverlayDialog' has a wrong offset!");

// Class FCT.MenuFocusWidget
// 0x0000 (0x0260 - 0x0260)
class UMenuFocusWidget : public UUserWidget
{
public:
	class UWidget* GetLastFocusedWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MenuFocusWidget">();
	}
	static class UMenuFocusWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuFocusWidget>();
	}
};
static_assert(alignof(UMenuFocusWidget) == 0x000008, "Wrong alignment on UMenuFocusWidget");
static_assert(sizeof(UMenuFocusWidget) == 0x000260, "Wrong size on UMenuFocusWidget");

// Class FCT.MyBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMyBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void FindScreenEdgeLocationForWorldLocation(class UObject* WorldContextObject, const struct FVector& WorldLocation, const int32 CenterWeight, bool* OnTheEdge, struct FVector2D* ScreenPosition, float* Angle);
	static TSubclassOf<class AActor> GetRandomWeighted(const TMap<TSubclassOf<class AActor>, int32>& ActorToWeightMap);
	static uint8 GetRandomWeightedEnum(const TMap<uint8, int32>& EnumToWeightMap);
	static bool GetSonyEnterButtonSwapped();
	static ESonyRegion GetSonyRegion();
	static TArray<class AActor*> GetSortedActorsDescending(const TMap<class AActor*, int32>& MyMap);
	static struct FVector2D GetWidgetLocation(class UWidget* InParentWidget, class UWidget* InWidget);
	static bool IsConsolePlatform();
	static bool IsDevConsolePlatform();
	static bool IsPlatformRequestingIntroSkip();
	static bool IsPS4Platform();
	static bool IsPS5Platform();
	static bool IsWinGDKPlatform();
	static bool IsXboxOneGDKPlatform();
	static bool IsXboxPlatform();
	static bool IsXSXPlatform();
	static void SetMenuWorldRenderingDisabled(class UObject* WorldContextObject, bool bIsDisabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MyBlueprintFunctionLibrary">();
	}
	static class UMyBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UMyBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UMyBlueprintFunctionLibrary");
static_assert(sizeof(UMyBlueprintFunctionLibrary) == 0x000028, "Wrong size on UMyBlueprintFunctionLibrary");

// Class FCT.SaveControllerGIS
// 0x0190 (0x01C0 - 0x0030)
class USaveControllerGIS final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInitialLoadComplete;                             // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPreloadComplete;                                 // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnSaveComplete;                                    // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x158];                                     // 0x0068(0x0158)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool DoInitialLoad(const TArray<class FString>& SlotsToLoad);
	bool GetAnySaveInProgress();
	bool GetInitialLoadComplete();
	bool GetSaveExists(const class FString& SlotName);
	bool GetSaveInProgress(const class FString& SlotName);
	bool GetSaveLoaded(const class FString& SlotName);
	class USaveGame* Load(const class FString& SlotName);
	void LogOutXboxUser();
	void Preload(const class FString& SlotName);
	bool ResetSaveController();
	bool Save(const class FString& SlotName, class USaveGame* SaveGame);
	bool SaveWithMetaData(const class FString& SlotName, class USaveGame* SaveGame, const class FText& DisplayName, const class FText& DisplaySubtitle, const class FText& DisplayDescription, const class FString& IconPath, int32 MaxBytes, bool KeepMetaData);
	void SetSaveMetadata(const class FString& SlotName, const class FText& DisplayName, const class FText& DisplaySubtitle, const class FText& DisplayDescription, const class FString& IconPath, int32 MaxBytes);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SaveControllerGIS">();
	}
	static class USaveControllerGIS* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveControllerGIS>();
	}
};
static_assert(alignof(USaveControllerGIS) == 0x000008, "Wrong alignment on USaveControllerGIS");
static_assert(sizeof(USaveControllerGIS) == 0x0001C0, "Wrong size on USaveControllerGIS");
static_assert(offsetof(USaveControllerGIS, OnInitialLoadComplete) == 0x000038, "Member 'USaveControllerGIS::OnInitialLoadComplete' has a wrong offset!");
static_assert(offsetof(USaveControllerGIS, OnPreloadComplete) == 0x000048, "Member 'USaveControllerGIS::OnPreloadComplete' has a wrong offset!");
static_assert(offsetof(USaveControllerGIS, OnSaveComplete) == 0x000058, "Member 'USaveControllerGIS::OnSaveComplete' has a wrong offset!");

// Class FCT.WorldSettingsFCT
// 0x0000 (0x03A0 - 0x03A0)
class AWorldSettingsFCT final : public AWorldSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WorldSettingsFCT">();
	}
	static class AWorldSettingsFCT* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWorldSettingsFCT>();
	}
};
static_assert(alignof(AWorldSettingsFCT) == 0x000008, "Wrong alignment on AWorldSettingsFCT");
static_assert(sizeof(AWorldSettingsFCT) == 0x0003A0, "Wrong size on AWorldSettingsFCT");

}
