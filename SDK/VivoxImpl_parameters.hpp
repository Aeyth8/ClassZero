#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VivoxImpl

#include "Basic.hpp"


namespace SDK::Params
{

// Function VivoxImpl.LocalSettings.SetInputDevice
// 0x0018 (0x0018 - 0x0000)
struct LocalSettings_SetInputDevice final
{
public:
	class FString                                 NewInputDeviceID;                                  // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LocalSettings_SetInputDevice) == 0x000008, "Wrong alignment on LocalSettings_SetInputDevice");
static_assert(sizeof(LocalSettings_SetInputDevice) == 0x000018, "Wrong size on LocalSettings_SetInputDevice");
static_assert(offsetof(LocalSettings_SetInputDevice, NewInputDeviceID) == 0x000000, "Member 'LocalSettings_SetInputDevice::NewInputDeviceID' has a wrong offset!");
static_assert(offsetof(LocalSettings_SetInputDevice, ReturnValue) == 0x000010, "Member 'LocalSettings_SetInputDevice::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.SetInputVolumeGain
// 0x0008 (0x0008 - 0x0000)
struct LocalSettings_SetInputVolumeGain final
{
public:
	int32                                         NewVolume;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LocalSettings_SetInputVolumeGain) == 0x000004, "Wrong alignment on LocalSettings_SetInputVolumeGain");
static_assert(sizeof(LocalSettings_SetInputVolumeGain) == 0x000008, "Wrong size on LocalSettings_SetInputVolumeGain");
static_assert(offsetof(LocalSettings_SetInputVolumeGain, NewVolume) == 0x000000, "Member 'LocalSettings_SetInputVolumeGain::NewVolume' has a wrong offset!");
static_assert(offsetof(LocalSettings_SetInputVolumeGain, ReturnValue) == 0x000004, "Member 'LocalSettings_SetInputVolumeGain::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.SetOutputDevice
// 0x0018 (0x0018 - 0x0000)
struct LocalSettings_SetOutputDevice final
{
public:
	class FString                                 NewOutputDeviceID;                                 // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LocalSettings_SetOutputDevice) == 0x000008, "Wrong alignment on LocalSettings_SetOutputDevice");
static_assert(sizeof(LocalSettings_SetOutputDevice) == 0x000018, "Wrong size on LocalSettings_SetOutputDevice");
static_assert(offsetof(LocalSettings_SetOutputDevice, NewOutputDeviceID) == 0x000000, "Member 'LocalSettings_SetOutputDevice::NewOutputDeviceID' has a wrong offset!");
static_assert(offsetof(LocalSettings_SetOutputDevice, ReturnValue) == 0x000010, "Member 'LocalSettings_SetOutputDevice::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.SetOutputGain
// 0x0008 (0x0008 - 0x0000)
struct LocalSettings_SetOutputGain final
{
public:
	int32                                         NewVolume;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LocalSettings_SetOutputGain) == 0x000004, "Wrong alignment on LocalSettings_SetOutputGain");
static_assert(sizeof(LocalSettings_SetOutputGain) == 0x000008, "Wrong size on LocalSettings_SetOutputGain");
static_assert(offsetof(LocalSettings_SetOutputGain, NewVolume) == 0x000000, "Member 'LocalSettings_SetOutputGain::NewVolume' has a wrong offset!");
static_assert(offsetof(LocalSettings_SetOutputGain, ReturnValue) == 0x000004, "Member 'LocalSettings_SetOutputGain::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.SetPushToTalk
// 0x0001 (0x0001 - 0x0000)
struct LocalSettings_SetPushToTalk final
{
public:
	bool                                          UsePushToTalk;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_SetPushToTalk) == 0x000001, "Wrong alignment on LocalSettings_SetPushToTalk");
static_assert(sizeof(LocalSettings_SetPushToTalk) == 0x000001, "Wrong size on LocalSettings_SetPushToTalk");
static_assert(offsetof(LocalSettings_SetPushToTalk, UsePushToTalk) == 0x000000, "Member 'LocalSettings_SetPushToTalk::UsePushToTalk' has a wrong offset!");

// Function VivoxImpl.LocalSettings.SetShowVoiceSettingWelcomeMessage
// 0x0001 (0x0001 - 0x0000)
struct LocalSettings_SetShowVoiceSettingWelcomeMessage final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_SetShowVoiceSettingWelcomeMessage) == 0x000001, "Wrong alignment on LocalSettings_SetShowVoiceSettingWelcomeMessage");
static_assert(sizeof(LocalSettings_SetShowVoiceSettingWelcomeMessage) == 0x000001, "Wrong size on LocalSettings_SetShowVoiceSettingWelcomeMessage");
static_assert(offsetof(LocalSettings_SetShowVoiceSettingWelcomeMessage, Show) == 0x000000, "Member 'LocalSettings_SetShowVoiceSettingWelcomeMessage::Show' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetAvailableInputDevices
// 0x0050 (0x0050 - 0x0000)
struct LocalSettings_GetAvailableInputDevices final
{
public:
	TMap<class FString, class FString>            DeviceidToName;                                    // 0x0000(0x0050)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetAvailableInputDevices) == 0x000008, "Wrong alignment on LocalSettings_GetAvailableInputDevices");
static_assert(sizeof(LocalSettings_GetAvailableInputDevices) == 0x000050, "Wrong size on LocalSettings_GetAvailableInputDevices");
static_assert(offsetof(LocalSettings_GetAvailableInputDevices, DeviceidToName) == 0x000000, "Member 'LocalSettings_GetAvailableInputDevices::DeviceidToName' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetAvailableOutputDevices
// 0x0050 (0x0050 - 0x0000)
struct LocalSettings_GetAvailableOutputDevices final
{
public:
	TMap<class FString, class FString>            DeviceidToName;                                    // 0x0000(0x0050)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetAvailableOutputDevices) == 0x000008, "Wrong alignment on LocalSettings_GetAvailableOutputDevices");
static_assert(sizeof(LocalSettings_GetAvailableOutputDevices) == 0x000050, "Wrong size on LocalSettings_GetAvailableOutputDevices");
static_assert(offsetof(LocalSettings_GetAvailableOutputDevices, DeviceidToName) == 0x000000, "Member 'LocalSettings_GetAvailableOutputDevices::DeviceidToName' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetEffectiveInputDeviceId
// 0x0010 (0x0010 - 0x0000)
struct LocalSettings_GetEffectiveInputDeviceId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetEffectiveInputDeviceId) == 0x000008, "Wrong alignment on LocalSettings_GetEffectiveInputDeviceId");
static_assert(sizeof(LocalSettings_GetEffectiveInputDeviceId) == 0x000010, "Wrong size on LocalSettings_GetEffectiveInputDeviceId");
static_assert(offsetof(LocalSettings_GetEffectiveInputDeviceId, ReturnValue) == 0x000000, "Member 'LocalSettings_GetEffectiveInputDeviceId::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetEffectiveOutputDeviceId
// 0x0010 (0x0010 - 0x0000)
struct LocalSettings_GetEffectiveOutputDeviceId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetEffectiveOutputDeviceId) == 0x000008, "Wrong alignment on LocalSettings_GetEffectiveOutputDeviceId");
static_assert(sizeof(LocalSettings_GetEffectiveOutputDeviceId) == 0x000010, "Wrong size on LocalSettings_GetEffectiveOutputDeviceId");
static_assert(offsetof(LocalSettings_GetEffectiveOutputDeviceId, ReturnValue) == 0x000000, "Member 'LocalSettings_GetEffectiveOutputDeviceId::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetInputVolumeGain
// 0x0004 (0x0004 - 0x0000)
struct LocalSettings_GetInputVolumeGain final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetInputVolumeGain) == 0x000004, "Wrong alignment on LocalSettings_GetInputVolumeGain");
static_assert(sizeof(LocalSettings_GetInputVolumeGain) == 0x000004, "Wrong size on LocalSettings_GetInputVolumeGain");
static_assert(offsetof(LocalSettings_GetInputVolumeGain, ReturnValue) == 0x000000, "Member 'LocalSettings_GetInputVolumeGain::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetOutputGain
// 0x0004 (0x0004 - 0x0000)
struct LocalSettings_GetOutputGain final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetOutputGain) == 0x000004, "Wrong alignment on LocalSettings_GetOutputGain");
static_assert(sizeof(LocalSettings_GetOutputGain) == 0x000004, "Wrong size on LocalSettings_GetOutputGain");
static_assert(offsetof(LocalSettings_GetOutputGain, ReturnValue) == 0x000000, "Member 'LocalSettings_GetOutputGain::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetPushToTalk
// 0x0001 (0x0001 - 0x0000)
struct LocalSettings_GetPushToTalk final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetPushToTalk) == 0x000001, "Wrong alignment on LocalSettings_GetPushToTalk");
static_assert(sizeof(LocalSettings_GetPushToTalk) == 0x000001, "Wrong size on LocalSettings_GetPushToTalk");
static_assert(offsetof(LocalSettings_GetPushToTalk, ReturnValue) == 0x000000, "Member 'LocalSettings_GetPushToTalk::ReturnValue' has a wrong offset!");

// Function VivoxImpl.LocalSettings.GetShowVoiceSettingWelcomeMessage
// 0x0001 (0x0001 - 0x0000)
struct LocalSettings_GetShowVoiceSettingWelcomeMessage final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LocalSettings_GetShowVoiceSettingWelcomeMessage) == 0x000001, "Wrong alignment on LocalSettings_GetShowVoiceSettingWelcomeMessage");
static_assert(sizeof(LocalSettings_GetShowVoiceSettingWelcomeMessage) == 0x000001, "Wrong size on LocalSettings_GetShowVoiceSettingWelcomeMessage");
static_assert(offsetof(LocalSettings_GetShowVoiceSettingWelcomeMessage, ReturnValue) == 0x000000, "Member 'LocalSettings_GetShowVoiceSettingWelcomeMessage::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.BlockParticipant
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_BlockParticipant final
{
public:
	class FString                                 ParticipantID;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VivoxLocalPlayer_BlockParticipant) == 0x000008, "Wrong alignment on VivoxLocalPlayer_BlockParticipant");
static_assert(sizeof(VivoxLocalPlayer_BlockParticipant) == 0x000018, "Wrong size on VivoxLocalPlayer_BlockParticipant");
static_assert(offsetof(VivoxLocalPlayer_BlockParticipant, ParticipantID) == 0x000000, "Member 'VivoxLocalPlayer_BlockParticipant::ParticipantID' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_BlockParticipant, ReturnValue) == 0x000010, "Member 'VivoxLocalPlayer_BlockParticipant::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.IsParticipantBlocked
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_IsParticipantBlocked final
{
public:
	class FString                                 ParticipantID;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VivoxLocalPlayer_IsParticipantBlocked) == 0x000008, "Wrong alignment on VivoxLocalPlayer_IsParticipantBlocked");
static_assert(sizeof(VivoxLocalPlayer_IsParticipantBlocked) == 0x000018, "Wrong size on VivoxLocalPlayer_IsParticipantBlocked");
static_assert(offsetof(VivoxLocalPlayer_IsParticipantBlocked, ParticipantID) == 0x000000, "Member 'VivoxLocalPlayer_IsParticipantBlocked::ParticipantID' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_IsParticipantBlocked, ReturnValue) == 0x000010, "Member 'VivoxLocalPlayer_IsParticipantBlocked::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.IsParticipantMuted
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_IsParticipantMuted final
{
public:
	class FString                                 ParticipantID;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VivoxLocalPlayer_IsParticipantMuted) == 0x000008, "Wrong alignment on VivoxLocalPlayer_IsParticipantMuted");
static_assert(sizeof(VivoxLocalPlayer_IsParticipantMuted) == 0x000018, "Wrong size on VivoxLocalPlayer_IsParticipantMuted");
static_assert(offsetof(VivoxLocalPlayer_IsParticipantMuted, ParticipantID) == 0x000000, "Member 'VivoxLocalPlayer_IsParticipantMuted::ParticipantID' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_IsParticipantMuted, ReturnValue) == 0x000010, "Member 'VivoxLocalPlayer_IsParticipantMuted::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.MuteParticipant
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_MuteParticipant final
{
public:
	class FString                                 ParticipantID;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VivoxLocalPlayer_MuteParticipant) == 0x000008, "Wrong alignment on VivoxLocalPlayer_MuteParticipant");
static_assert(sizeof(VivoxLocalPlayer_MuteParticipant) == 0x000018, "Wrong size on VivoxLocalPlayer_MuteParticipant");
static_assert(offsetof(VivoxLocalPlayer_MuteParticipant, ParticipantID) == 0x000000, "Member 'VivoxLocalPlayer_MuteParticipant::ParticipantID' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_MuteParticipant, ReturnValue) == 0x000010, "Member 'VivoxLocalPlayer_MuteParticipant::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.SetIsCommunicationDisabled
// 0x0001 (0x0001 - 0x0000)
struct VivoxLocalPlayer_SetIsCommunicationDisabled final
{
public:
	bool                                          bInIsCommunicationDisabled;                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxLocalPlayer_SetIsCommunicationDisabled) == 0x000001, "Wrong alignment on VivoxLocalPlayer_SetIsCommunicationDisabled");
static_assert(sizeof(VivoxLocalPlayer_SetIsCommunicationDisabled) == 0x000001, "Wrong size on VivoxLocalPlayer_SetIsCommunicationDisabled");
static_assert(offsetof(VivoxLocalPlayer_SetIsCommunicationDisabled, bInIsCommunicationDisabled) == 0x000000, "Member 'VivoxLocalPlayer_SetIsCommunicationDisabled::bInIsCommunicationDisabled' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.UnBlockParticipant
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_UnBlockParticipant final
{
public:
	class FString                                 ParticipantID;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VivoxLocalPlayer_UnBlockParticipant) == 0x000008, "Wrong alignment on VivoxLocalPlayer_UnBlockParticipant");
static_assert(sizeof(VivoxLocalPlayer_UnBlockParticipant) == 0x000018, "Wrong size on VivoxLocalPlayer_UnBlockParticipant");
static_assert(offsetof(VivoxLocalPlayer_UnBlockParticipant, ParticipantID) == 0x000000, "Member 'VivoxLocalPlayer_UnBlockParticipant::ParticipantID' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_UnBlockParticipant, ReturnValue) == 0x000010, "Member 'VivoxLocalPlayer_UnBlockParticipant::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.UnmuteParticipant
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_UnmuteParticipant final
{
public:
	class FString                                 ParticipantID;                                     // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(VivoxLocalPlayer_UnmuteParticipant) == 0x000008, "Wrong alignment on VivoxLocalPlayer_UnmuteParticipant");
static_assert(sizeof(VivoxLocalPlayer_UnmuteParticipant) == 0x000018, "Wrong size on VivoxLocalPlayer_UnmuteParticipant");
static_assert(offsetof(VivoxLocalPlayer_UnmuteParticipant, ParticipantID) == 0x000000, "Member 'VivoxLocalPlayer_UnmuteParticipant::ParticipantID' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_UnmuteParticipant, ReturnValue) == 0x000010, "Member 'VivoxLocalPlayer_UnmuteParticipant::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.GetIsMutedMic
// 0x0001 (0x0001 - 0x0000)
struct VivoxLocalPlayer_GetIsMutedMic final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxLocalPlayer_GetIsMutedMic) == 0x000001, "Wrong alignment on VivoxLocalPlayer_GetIsMutedMic");
static_assert(sizeof(VivoxLocalPlayer_GetIsMutedMic) == 0x000001, "Wrong size on VivoxLocalPlayer_GetIsMutedMic");
static_assert(offsetof(VivoxLocalPlayer_GetIsMutedMic, ReturnValue) == 0x000000, "Member 'VivoxLocalPlayer_GetIsMutedMic::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxLocalPlayer.GetRegisteredVivoxTalkerComponents
// 0x0018 (0x0018 - 0x0000)
struct VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents final
{
public:
	const class AGameStateBase*                   GameStateBase;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVivoxTalkerComponent*>          ReturnValue;                                       // 0x0008(0x0010)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents) == 0x000008, "Wrong alignment on VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents");
static_assert(sizeof(VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents) == 0x000018, "Wrong size on VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents");
static_assert(offsetof(VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents, GameStateBase) == 0x000000, "Member 'VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents::GameStateBase' has a wrong offset!");
static_assert(offsetof(VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents, ReturnValue) == 0x000008, "Member 'VivoxLocalPlayer_GetRegisteredVivoxTalkerComponents::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxInputComponent.PushToTalkPersonoidPressed
// 0x0001 (0x0001 - 0x0000)
struct VivoxInputComponent_PushToTalkPersonoidPressed final
{
public:
	bool                                          IgnorePTTSetting;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxInputComponent_PushToTalkPersonoidPressed) == 0x000001, "Wrong alignment on VivoxInputComponent_PushToTalkPersonoidPressed");
static_assert(sizeof(VivoxInputComponent_PushToTalkPersonoidPressed) == 0x000001, "Wrong size on VivoxInputComponent_PushToTalkPersonoidPressed");
static_assert(offsetof(VivoxInputComponent_PushToTalkPersonoidPressed, IgnorePTTSetting) == 0x000000, "Member 'VivoxInputComponent_PushToTalkPersonoidPressed::IgnorePTTSetting' has a wrong offset!");

// Function VivoxImpl.VivoxInputComponent.PushToTalkPersonoidReleased
// 0x0001 (0x0001 - 0x0000)
struct VivoxInputComponent_PushToTalkPersonoidReleased final
{
public:
	bool                                          IgnorePTTSetting;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxInputComponent_PushToTalkPersonoidReleased) == 0x000001, "Wrong alignment on VivoxInputComponent_PushToTalkPersonoidReleased");
static_assert(sizeof(VivoxInputComponent_PushToTalkPersonoidReleased) == 0x000001, "Wrong size on VivoxInputComponent_PushToTalkPersonoidReleased");
static_assert(offsetof(VivoxInputComponent_PushToTalkPersonoidReleased, IgnorePTTSetting) == 0x000000, "Member 'VivoxInputComponent_PushToTalkPersonoidReleased::IgnorePTTSetting' has a wrong offset!");

// Function VivoxImpl.VivoxMuteUserWidget.IsMuted
// 0x0001 (0x0001 - 0x0000)
struct VivoxMuteUserWidget_IsMuted final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxMuteUserWidget_IsMuted) == 0x000001, "Wrong alignment on VivoxMuteUserWidget_IsMuted");
static_assert(sizeof(VivoxMuteUserWidget_IsMuted) == 0x000001, "Wrong size on VivoxMuteUserWidget_IsMuted");
static_assert(offsetof(VivoxMuteUserWidget_IsMuted, ReturnValue) == 0x000000, "Member 'VivoxMuteUserWidget_IsMuted::ReturnValue' has a wrong offset!");

// Function VivoxImpl.VivoxMuteUserWidget.OnMuteChanged
// 0x0001 (0x0001 - 0x0000)
struct VivoxMuteUserWidget_OnMuteChanged final
{
public:
	bool                                          IsMuted;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxMuteUserWidget_OnMuteChanged) == 0x000001, "Wrong alignment on VivoxMuteUserWidget_OnMuteChanged");
static_assert(sizeof(VivoxMuteUserWidget_OnMuteChanged) == 0x000001, "Wrong size on VivoxMuteUserWidget_OnMuteChanged");
static_assert(offsetof(VivoxMuteUserWidget_OnMuteChanged, IsMuted) == 0x000000, "Member 'VivoxMuteUserWidget_OnMuteChanged::IsMuted' has a wrong offset!");

// Function VivoxImpl.VivoxTalkerComponent.HandleTalkingLocalEvent
// 0x0002 (0x0002 - 0x0000)
struct VivoxTalkerComponent_HandleTalkingLocalEvent final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyControlled;                               // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxTalkerComponent_HandleTalkingLocalEvent) == 0x000001, "Wrong alignment on VivoxTalkerComponent_HandleTalkingLocalEvent");
static_assert(sizeof(VivoxTalkerComponent_HandleTalkingLocalEvent) == 0x000002, "Wrong size on VivoxTalkerComponent_HandleTalkingLocalEvent");
static_assert(offsetof(VivoxTalkerComponent_HandleTalkingLocalEvent, IsTalking) == 0x000000, "Member 'VivoxTalkerComponent_HandleTalkingLocalEvent::IsTalking' has a wrong offset!");
static_assert(offsetof(VivoxTalkerComponent_HandleTalkingLocalEvent, IsLocallyControlled) == 0x000001, "Member 'VivoxTalkerComponent_HandleTalkingLocalEvent::IsLocallyControlled' has a wrong offset!");

// Function VivoxImpl.VivoxTalkerComponent.HandleTalkingPersonoidEvent
// 0x0002 (0x0002 - 0x0000)
struct VivoxTalkerComponent_HandleTalkingPersonoidEvent final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyControlled;                               // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxTalkerComponent_HandleTalkingPersonoidEvent) == 0x000001, "Wrong alignment on VivoxTalkerComponent_HandleTalkingPersonoidEvent");
static_assert(sizeof(VivoxTalkerComponent_HandleTalkingPersonoidEvent) == 0x000002, "Wrong size on VivoxTalkerComponent_HandleTalkingPersonoidEvent");
static_assert(offsetof(VivoxTalkerComponent_HandleTalkingPersonoidEvent, IsTalking) == 0x000000, "Member 'VivoxTalkerComponent_HandleTalkingPersonoidEvent::IsTalking' has a wrong offset!");
static_assert(offsetof(VivoxTalkerComponent_HandleTalkingPersonoidEvent, IsLocallyControlled) == 0x000001, "Member 'VivoxTalkerComponent_HandleTalkingPersonoidEvent::IsLocallyControlled' has a wrong offset!");

// Function VivoxImpl.VivoxTalkerComponent.HandleTalkingSpectatorEvent
// 0x0002 (0x0002 - 0x0000)
struct VivoxTalkerComponent_HandleTalkingSpectatorEvent final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyControlled;                               // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxTalkerComponent_HandleTalkingSpectatorEvent) == 0x000001, "Wrong alignment on VivoxTalkerComponent_HandleTalkingSpectatorEvent");
static_assert(sizeof(VivoxTalkerComponent_HandleTalkingSpectatorEvent) == 0x000002, "Wrong size on VivoxTalkerComponent_HandleTalkingSpectatorEvent");
static_assert(offsetof(VivoxTalkerComponent_HandleTalkingSpectatorEvent, IsTalking) == 0x000000, "Member 'VivoxTalkerComponent_HandleTalkingSpectatorEvent::IsTalking' has a wrong offset!");
static_assert(offsetof(VivoxTalkerComponent_HandleTalkingSpectatorEvent, IsLocallyControlled) == 0x000001, "Member 'VivoxTalkerComponent_HandleTalkingSpectatorEvent::IsLocallyControlled' has a wrong offset!");

// Function VivoxImpl.VivoxTalkerComponent.K2_TalkingLocalEvent
// 0x0002 (0x0002 - 0x0000)
struct VivoxTalkerComponent_K2_TalkingLocalEvent final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyControlled;                               // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxTalkerComponent_K2_TalkingLocalEvent) == 0x000001, "Wrong alignment on VivoxTalkerComponent_K2_TalkingLocalEvent");
static_assert(sizeof(VivoxTalkerComponent_K2_TalkingLocalEvent) == 0x000002, "Wrong size on VivoxTalkerComponent_K2_TalkingLocalEvent");
static_assert(offsetof(VivoxTalkerComponent_K2_TalkingLocalEvent, IsTalking) == 0x000000, "Member 'VivoxTalkerComponent_K2_TalkingLocalEvent::IsTalking' has a wrong offset!");
static_assert(offsetof(VivoxTalkerComponent_K2_TalkingLocalEvent, IsLocallyControlled) == 0x000001, "Member 'VivoxTalkerComponent_K2_TalkingLocalEvent::IsLocallyControlled' has a wrong offset!");

// Function VivoxImpl.VivoxTalkerComponent.K2_TalkingPersonoidEvent
// 0x0002 (0x0002 - 0x0000)
struct VivoxTalkerComponent_K2_TalkingPersonoidEvent final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyControlled;                               // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxTalkerComponent_K2_TalkingPersonoidEvent) == 0x000001, "Wrong alignment on VivoxTalkerComponent_K2_TalkingPersonoidEvent");
static_assert(sizeof(VivoxTalkerComponent_K2_TalkingPersonoidEvent) == 0x000002, "Wrong size on VivoxTalkerComponent_K2_TalkingPersonoidEvent");
static_assert(offsetof(VivoxTalkerComponent_K2_TalkingPersonoidEvent, IsTalking) == 0x000000, "Member 'VivoxTalkerComponent_K2_TalkingPersonoidEvent::IsTalking' has a wrong offset!");
static_assert(offsetof(VivoxTalkerComponent_K2_TalkingPersonoidEvent, IsLocallyControlled) == 0x000001, "Member 'VivoxTalkerComponent_K2_TalkingPersonoidEvent::IsLocallyControlled' has a wrong offset!");

// Function VivoxImpl.VivoxTalkerComponent.K2_TalkingSpectatorEvent
// 0x0002 (0x0002 - 0x0000)
struct VivoxTalkerComponent_K2_TalkingSpectatorEvent final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsLocallyControlled;                               // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VivoxTalkerComponent_K2_TalkingSpectatorEvent) == 0x000001, "Wrong alignment on VivoxTalkerComponent_K2_TalkingSpectatorEvent");
static_assert(sizeof(VivoxTalkerComponent_K2_TalkingSpectatorEvent) == 0x000002, "Wrong size on VivoxTalkerComponent_K2_TalkingSpectatorEvent");
static_assert(offsetof(VivoxTalkerComponent_K2_TalkingSpectatorEvent, IsTalking) == 0x000000, "Member 'VivoxTalkerComponent_K2_TalkingSpectatorEvent::IsTalking' has a wrong offset!");
static_assert(offsetof(VivoxTalkerComponent_K2_TalkingSpectatorEvent, IsLocallyControlled) == 0x000001, "Member 'VivoxTalkerComponent_K2_TalkingSpectatorEvent::IsLocallyControlled' has a wrong offset!");

}

