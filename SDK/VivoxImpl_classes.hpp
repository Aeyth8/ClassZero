#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VivoxImpl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "VivoxImpl_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class VivoxImpl.VivoxParticipantInterface
// 0x0000 (0x0028 - 0x0028)
class IVivoxParticipantInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxParticipantInterface">();
	}
	static class IVivoxParticipantInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IVivoxParticipantInterface>();
	}
};
static_assert(alignof(IVivoxParticipantInterface) == 0x000008, "Wrong alignment on IVivoxParticipantInterface");
static_assert(sizeof(IVivoxParticipantInterface) == 0x000028, "Wrong size on IVivoxParticipantInterface");

// Class VivoxImpl.LocalSettings
// 0x00B0 (0x00D8 - 0x0028)
class ULocalSettings final : public UObject
{
public:
	int32                                         InputVolumeGain;                                   // 0x0028(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OutputVolumeGain;                                  // 0x002C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SelectedInputDevice;                               // 0x0030(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SelectedOutputDevice;                              // 0x0040(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowVoiceSettingWelcomeMessage;                    // 0x0050(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PushToTalk;                                        // 0x0051(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInputDeviceAdded;                                // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnOutputDeviceAdded;                               // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnInputDeviceRemoved;                              // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnOutputDeviceRemoved;                             // 0x0088(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnInputDeviceChanged;                              // 0x0098(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnOutputDeviceChanged;                             // 0x00A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x20];                                      // 0x00B8(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool SetInputDevice(const class FString& NewInputDeviceID);
	bool SetInputVolumeGain(int32 NewVolume);
	bool SetOutputDevice(const class FString& NewOutputDeviceID);
	bool SetOutputGain(int32 NewVolume);
	void SetPushToTalk(bool UsePushToTalk);
	void SetShowVoiceSettingWelcomeMessage(const bool Show);
	void VivoxStatus();

	void GetAvailableInputDevices(TMap<class FString, class FString>* DeviceidToName) const;
	void GetAvailableOutputDevices(TMap<class FString, class FString>* DeviceidToName) const;
	class FString GetEffectiveInputDeviceId() const;
	class FString GetEffectiveOutputDeviceId() const;
	int32 GetInputVolumeGain() const;
	int32 GetOutputGain() const;
	bool GetPushToTalk() const;
	bool GetShowVoiceSettingWelcomeMessage() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalSettings">();
	}
	static class ULocalSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalSettings>();
	}
};
static_assert(alignof(ULocalSettings) == 0x000008, "Wrong alignment on ULocalSettings");
static_assert(sizeof(ULocalSettings) == 0x0000D8, "Wrong size on ULocalSettings");
static_assert(offsetof(ULocalSettings, InputVolumeGain) == 0x000028, "Member 'ULocalSettings::InputVolumeGain' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OutputVolumeGain) == 0x00002C, "Member 'ULocalSettings::OutputVolumeGain' has a wrong offset!");
static_assert(offsetof(ULocalSettings, SelectedInputDevice) == 0x000030, "Member 'ULocalSettings::SelectedInputDevice' has a wrong offset!");
static_assert(offsetof(ULocalSettings, SelectedOutputDevice) == 0x000040, "Member 'ULocalSettings::SelectedOutputDevice' has a wrong offset!");
static_assert(offsetof(ULocalSettings, ShowVoiceSettingWelcomeMessage) == 0x000050, "Member 'ULocalSettings::ShowVoiceSettingWelcomeMessage' has a wrong offset!");
static_assert(offsetof(ULocalSettings, PushToTalk) == 0x000051, "Member 'ULocalSettings::PushToTalk' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OnInputDeviceAdded) == 0x000058, "Member 'ULocalSettings::OnInputDeviceAdded' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OnOutputDeviceAdded) == 0x000068, "Member 'ULocalSettings::OnOutputDeviceAdded' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OnInputDeviceRemoved) == 0x000078, "Member 'ULocalSettings::OnInputDeviceRemoved' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OnOutputDeviceRemoved) == 0x000088, "Member 'ULocalSettings::OnOutputDeviceRemoved' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OnInputDeviceChanged) == 0x000098, "Member 'ULocalSettings::OnInputDeviceChanged' has a wrong offset!");
static_assert(offsetof(ULocalSettings, OnOutputDeviceChanged) == 0x0000A8, "Member 'ULocalSettings::OnOutputDeviceChanged' has a wrong offset!");

// Class VivoxImpl.VivoxLocalPlayer
// 0x0348 (0x0378 - 0x0030)
class UVivoxLocalPlayer final : public ULocalPlayerSubsystem
{
public:
	class ULocalSettings*                         LocalSettings;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnRegisterTalkerComponent;                         // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnParticipantMutedChanged;                         // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnLogin;                                           // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	ELoginRegion                                  LoggedInRegion;                                    // 0x0068(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_69[0x27];                                      // 0x0069(0x0027)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMicMuted;                                        // 0x0090(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_A0[0x10];                                      // 0x00A0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bLoggedIn;                                         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoggingIn;                                        // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LoggedInPlayerName;                                // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C8[0x2B0];                                     // 0x00C8(0x02B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool BlockParticipant(const class FString& ParticipantID);
	bool IsParticipantBlocked(const class FString& ParticipantID);
	bool IsParticipantMuted(const class FString& ParticipantID);
	bool MuteParticipant(const class FString& ParticipantID);
	void ResetParticipantMutes();
	void SetIsCommunicationDisabled(bool bInIsCommunicationDisabled);
	bool UnBlockParticipant(const class FString& ParticipantID);
	bool UnmuteParticipant(const class FString& ParticipantID);

	bool GetIsMutedMic() const;
	TArray<class UVivoxTalkerComponent*> GetRegisteredVivoxTalkerComponents(const class AGameStateBase* GameStateBase) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxLocalPlayer">();
	}
	static class UVivoxLocalPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxLocalPlayer>();
	}
};
static_assert(alignof(UVivoxLocalPlayer) == 0x000008, "Wrong alignment on UVivoxLocalPlayer");
static_assert(sizeof(UVivoxLocalPlayer) == 0x000378, "Wrong size on UVivoxLocalPlayer");
static_assert(offsetof(UVivoxLocalPlayer, LocalSettings) == 0x000030, "Member 'UVivoxLocalPlayer::LocalSettings' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, OnRegisterTalkerComponent) == 0x000038, "Member 'UVivoxLocalPlayer::OnRegisterTalkerComponent' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, OnParticipantMutedChanged) == 0x000048, "Member 'UVivoxLocalPlayer::OnParticipantMutedChanged' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, OnLogin) == 0x000058, "Member 'UVivoxLocalPlayer::OnLogin' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, LoggedInRegion) == 0x000068, "Member 'UVivoxLocalPlayer::LoggedInRegion' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, OnMicMuted) == 0x000090, "Member 'UVivoxLocalPlayer::OnMicMuted' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, bLoggedIn) == 0x0000B0, "Member 'UVivoxLocalPlayer::bLoggedIn' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, bLoggingIn) == 0x0000B1, "Member 'UVivoxLocalPlayer::bLoggingIn' has a wrong offset!");
static_assert(offsetof(UVivoxLocalPlayer, LoggedInPlayerName) == 0x0000B8, "Member 'UVivoxLocalPlayer::LoggedInPlayerName' has a wrong offset!");

// Class VivoxImpl.VivoxDiagnosticsComponent
// 0x0020 (0x00D0 - 0x00B0)
class UVivoxDiagnosticsComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B0[0x20];                                      // 0x00B0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxDiagnosticsComponent">();
	}
	static class UVivoxDiagnosticsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxDiagnosticsComponent>();
	}
};
static_assert(alignof(UVivoxDiagnosticsComponent) == 0x000008, "Wrong alignment on UVivoxDiagnosticsComponent");
static_assert(sizeof(UVivoxDiagnosticsComponent) == 0x0000D0, "Wrong size on UVivoxDiagnosticsComponent");

// Class VivoxImpl.VivoxGameInstance
// 0x0010 (0x0040 - 0x0030)
class UVivoxGameInstance final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxGameInstance">();
	}
	static class UVivoxGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxGameInstance>();
	}
};
static_assert(alignof(UVivoxGameInstance) == 0x000008, "Wrong alignment on UVivoxGameInstance");
static_assert(sizeof(UVivoxGameInstance) == 0x000040, "Wrong size on UVivoxGameInstance");

// Class VivoxImpl.VivoxInputComponent
// 0x0028 (0x00D8 - 0x00B0)
class UVivoxInputComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             OnPushToTalkSharedChannel;                         // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPushToTalkPersonoidChannel;                      // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_D0[0x8];                                       // 0x00D0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void PushToTalkPersonoidPressed(bool IgnorePTTSetting);
	void PushToTalkPersonoidReleased(bool IgnorePTTSetting);
	void PushToTalkSharedChannelPressed();
	void PushToTalkSharedChannelReleased();
	void ToggleAllChannelsMuted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxInputComponent">();
	}
	static class UVivoxInputComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxInputComponent>();
	}
};
static_assert(alignof(UVivoxInputComponent) == 0x000008, "Wrong alignment on UVivoxInputComponent");
static_assert(sizeof(UVivoxInputComponent) == 0x0000D8, "Wrong size on UVivoxInputComponent");
static_assert(offsetof(UVivoxInputComponent, OnPushToTalkSharedChannel) == 0x0000B0, "Member 'UVivoxInputComponent::OnPushToTalkSharedChannel' has a wrong offset!");
static_assert(offsetof(UVivoxInputComponent, OnPushToTalkPersonoidChannel) == 0x0000C0, "Member 'UVivoxInputComponent::OnPushToTalkPersonoidChannel' has a wrong offset!");

// Class VivoxImpl.VivoxMuteUserWidget
// 0x0010 (0x0270 - 0x0260)
class UVivoxMuteUserWidget : public UUserWidget
{
public:
	class FString                                 ParticipantID;                                     // 0x0260(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool IsMuted();
	void OnMuteChanged(bool IsMuted);
	void ToggleMuted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxMuteUserWidget">();
	}
	static class UVivoxMuteUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxMuteUserWidget>();
	}
};
static_assert(alignof(UVivoxMuteUserWidget) == 0x000008, "Wrong alignment on UVivoxMuteUserWidget");
static_assert(sizeof(UVivoxMuteUserWidget) == 0x000270, "Wrong size on UVivoxMuteUserWidget");
static_assert(offsetof(UVivoxMuteUserWidget, ParticipantID) == 0x000260, "Member 'UVivoxMuteUserWidget::ParticipantID' has a wrong offset!");

// Class VivoxImpl.VivoxNetworkComponent
// 0x0060 (0x0110 - 0x00B0)
class UVivoxNetworkComponent final : public UActorComponent
{
public:
	uint8                                         Pad_B0[0x10];                                      // 0x00B0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LocalChannelGuid;                                  // 0x00C0(0x0010)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  PersonoidChannelGuid;                              // 0x00D0(0x0010)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  SpectatorChannelGuid;                              // 0x00E0(0x0010)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  StageMicChannelGuid;                               // 0x00F0(0x0010)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                           TimerHandle_BeginPlay;                             // 0x0100(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_108[0x8];                                      // 0x0108(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void JoinSpectatorChannel();
	void JoinStageMicChannel();
	void LeaveSpectatorChannel();
	void LeaveStageMicChannel();
	void OnMatchEnd();
	void OnRep_LocalChannelGuid();
	void OnRep_PersonoidChannelGuid();
	void OnRep_SpectatorChannelGuid();
	void OnRep_StageMicChannelGuid();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxNetworkComponent">();
	}
	static class UVivoxNetworkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxNetworkComponent>();
	}
};
static_assert(alignof(UVivoxNetworkComponent) == 0x000008, "Wrong alignment on UVivoxNetworkComponent");
static_assert(sizeof(UVivoxNetworkComponent) == 0x000110, "Wrong size on UVivoxNetworkComponent");
static_assert(offsetof(UVivoxNetworkComponent, LocalChannelGuid) == 0x0000C0, "Member 'UVivoxNetworkComponent::LocalChannelGuid' has a wrong offset!");
static_assert(offsetof(UVivoxNetworkComponent, PersonoidChannelGuid) == 0x0000D0, "Member 'UVivoxNetworkComponent::PersonoidChannelGuid' has a wrong offset!");
static_assert(offsetof(UVivoxNetworkComponent, SpectatorChannelGuid) == 0x0000E0, "Member 'UVivoxNetworkComponent::SpectatorChannelGuid' has a wrong offset!");
static_assert(offsetof(UVivoxNetworkComponent, StageMicChannelGuid) == 0x0000F0, "Member 'UVivoxNetworkComponent::StageMicChannelGuid' has a wrong offset!");
static_assert(offsetof(UVivoxNetworkComponent, TimerHandle_BeginPlay) == 0x000100, "Member 'UVivoxNetworkComponent::TimerHandle_BeginPlay' has a wrong offset!");

// Class VivoxImpl.VivoxTalkerComponent
// 0x0088 (0x0138 - 0x00B0)
class UVivoxTalkerComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             OnTalkingLocalChannel;                             // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnTalkingPersonoidChannel;                         // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnTalkingSpectaorChannel;                          // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                   ParticipantName;                                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVivoxLocalPlayer*                      VivoxLocalPlayer;                                  // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                           PositionUpdateTimerHandle;                         // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_F8[0x40];                                      // 0x00F8(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleTalkingLocalEvent(bool IsTalking, bool IsLocallyControlled);
	void HandleTalkingPersonoidEvent(bool IsTalking, bool IsLocallyControlled);
	void HandleTalkingSpectatorEvent(bool IsTalking, bool IsLocallyControlled);
	void K2_TalkingLocalEvent(bool IsTalking, bool IsLocallyControlled);
	void K2_TalkingPersonoidEvent(bool IsTalking, bool IsLocallyControlled);
	void K2_TalkingSpectatorEvent(bool IsTalking, bool IsLocallyControlled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VivoxTalkerComponent">();
	}
	static class UVivoxTalkerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVivoxTalkerComponent>();
	}
};
static_assert(alignof(UVivoxTalkerComponent) == 0x000008, "Wrong alignment on UVivoxTalkerComponent");
static_assert(sizeof(UVivoxTalkerComponent) == 0x000138, "Wrong size on UVivoxTalkerComponent");
static_assert(offsetof(UVivoxTalkerComponent, OnTalkingLocalChannel) == 0x0000B0, "Member 'UVivoxTalkerComponent::OnTalkingLocalChannel' has a wrong offset!");
static_assert(offsetof(UVivoxTalkerComponent, OnTalkingPersonoidChannel) == 0x0000C0, "Member 'UVivoxTalkerComponent::OnTalkingPersonoidChannel' has a wrong offset!");
static_assert(offsetof(UVivoxTalkerComponent, OnTalkingSpectaorChannel) == 0x0000D0, "Member 'UVivoxTalkerComponent::OnTalkingSpectaorChannel' has a wrong offset!");
static_assert(offsetof(UVivoxTalkerComponent, ParticipantName) == 0x0000E0, "Member 'UVivoxTalkerComponent::ParticipantName' has a wrong offset!");
static_assert(offsetof(UVivoxTalkerComponent, VivoxLocalPlayer) == 0x0000E8, "Member 'UVivoxTalkerComponent::VivoxLocalPlayer' has a wrong offset!");
static_assert(offsetof(UVivoxTalkerComponent, PositionUpdateTimerHandle) == 0x0000F0, "Member 'UVivoxTalkerComponent::PositionUpdateTimerHandle' has a wrong offset!");

}

