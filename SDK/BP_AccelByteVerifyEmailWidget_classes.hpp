#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AccelByteVerifyEmailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_AccelByteVerifyEmailWidget.BP_AccelByteVerifyEmailWidget_C
// 0x0120 (0x0380 - 0x0260)
class UBP_AccelByteVerifyEmailWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                 BodyBG;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ContinueAsGuestButton;                             // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EmailSentText;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EnterVerificationCodeTextBox;                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GoBackButton;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBG;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_414;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LoginButton_1;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LoginError;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LoginWidget;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ResendVerifyCodeButton;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                VerifyEmailButton;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             VerifyErrorText;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSubmittedRegistrationVerifyCode;                 // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 StoredDisplayName;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 StoredEmail;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 StoredPassword;                                    // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnGoBackToRegister;                                // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           ResendCodeTextColor;                               // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           GuestTextColor;                                    // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BackToRegisterTextColor;                           // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ResendTimerHandle;                                 // 0x0370(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bVerifyingFullAccount;                             // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSubmittedRegistrationVerifyCode__DelegateSignature(const class FString& VerificationCode);
	void OnClose__DelegateSignature();
	void OnGoBackToRegister__DelegateSignature();
	void ExecuteUbergraph_BP_AccelByteVerifyEmailWidget(int32 EntryPoint);
	void Construct();
	void BndEvt__CompleteRegistrationButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ContinueAsGuestButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ResendTimer();
	void BndEvt__GoBackButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GoBackButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContinueAsGuestButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContinueAsGuestButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResendVerifyCodeButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResendVerifyCodeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResendVerifyCodeButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__GoBackButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void OnSuccess_17ED0FEC486BB4C97345078694B74F5F(const class FString& Result, int32 Code);
	void OnError_17ED0FEC486BB4C97345078694B74F5F(const class FString& Result, int32 Code);
	void OnSuccess_C849F3A344AA74B56D233198C29FACB1(const class FString& Result, int32 Code);
	void OnError_C849F3A344AA74B56D233198C29FACB1(const class FString& Result, int32 Code);
	void GetVerificationCodeInputString(class FString* OutVerificationCode);
	void StoreRegisteringUserInfo(const class FString& DisplayName, const class FString& Email, const class FString& Password, bool bIsFullAccount);
	void Set_Error_Message_By_Code(const class FString& ErrorMessage, int32 ErrorCode, class UTextBlock* Text_Widget);
	void SetMessage(class UTextBlock* Text_Widget, const class FText& MessageText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AccelByteVerifyEmailWidget_C">();
	}
	static class UBP_AccelByteVerifyEmailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AccelByteVerifyEmailWidget_C>();
	}
};
static_assert(alignof(UBP_AccelByteVerifyEmailWidget_C) == 0x000008, "Wrong alignment on UBP_AccelByteVerifyEmailWidget_C");
static_assert(sizeof(UBP_AccelByteVerifyEmailWidget_C) == 0x000380, "Wrong size on UBP_AccelByteVerifyEmailWidget_C");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, UberGraphFrame) == 0x000260, "Member 'UBP_AccelByteVerifyEmailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, BodyBG) == 0x000268, "Member 'UBP_AccelByteVerifyEmailWidget_C::BodyBG' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, ContinueAsGuestButton) == 0x000270, "Member 'UBP_AccelByteVerifyEmailWidget_C::ContinueAsGuestButton' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, EmailSentText) == 0x000278, "Member 'UBP_AccelByteVerifyEmailWidget_C::EmailSentText' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, EnterVerificationCodeTextBox) == 0x000280, "Member 'UBP_AccelByteVerifyEmailWidget_C::EnterVerificationCodeTextBox' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, GoBackButton) == 0x000288, "Member 'UBP_AccelByteVerifyEmailWidget_C::GoBackButton' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, HeaderBG) == 0x000290, "Member 'UBP_AccelByteVerifyEmailWidget_C::HeaderBG' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, Image) == 0x000298, "Member 'UBP_AccelByteVerifyEmailWidget_C::Image' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, Image_6) == 0x0002A0, "Member 'UBP_AccelByteVerifyEmailWidget_C::Image_6' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, Image_414) == 0x0002A8, "Member 'UBP_AccelByteVerifyEmailWidget_C::Image_414' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, LoginButton_1) == 0x0002B0, "Member 'UBP_AccelByteVerifyEmailWidget_C::LoginButton_1' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, LoginError) == 0x0002B8, "Member 'UBP_AccelByteVerifyEmailWidget_C::LoginError' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, LoginWidget) == 0x0002C0, "Member 'UBP_AccelByteVerifyEmailWidget_C::LoginWidget' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, ResendVerifyCodeButton) == 0x0002C8, "Member 'UBP_AccelByteVerifyEmailWidget_C::ResendVerifyCodeButton' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, VerifyEmailButton) == 0x0002D0, "Member 'UBP_AccelByteVerifyEmailWidget_C::VerifyEmailButton' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, VerifyErrorText) == 0x0002D8, "Member 'UBP_AccelByteVerifyEmailWidget_C::VerifyErrorText' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, OnSubmittedRegistrationVerifyCode) == 0x0002E0, "Member 'UBP_AccelByteVerifyEmailWidget_C::OnSubmittedRegistrationVerifyCode' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, OnClose) == 0x0002F0, "Member 'UBP_AccelByteVerifyEmailWidget_C::OnClose' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, StoredDisplayName) == 0x000300, "Member 'UBP_AccelByteVerifyEmailWidget_C::StoredDisplayName' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, StoredEmail) == 0x000310, "Member 'UBP_AccelByteVerifyEmailWidget_C::StoredEmail' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, StoredPassword) == 0x000320, "Member 'UBP_AccelByteVerifyEmailWidget_C::StoredPassword' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, OnGoBackToRegister) == 0x000330, "Member 'UBP_AccelByteVerifyEmailWidget_C::OnGoBackToRegister' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, ResendCodeTextColor) == 0x000340, "Member 'UBP_AccelByteVerifyEmailWidget_C::ResendCodeTextColor' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, GuestTextColor) == 0x000350, "Member 'UBP_AccelByteVerifyEmailWidget_C::GuestTextColor' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, BackToRegisterTextColor) == 0x000360, "Member 'UBP_AccelByteVerifyEmailWidget_C::BackToRegisterTextColor' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, ResendTimerHandle) == 0x000370, "Member 'UBP_AccelByteVerifyEmailWidget_C::ResendTimerHandle' has a wrong offset!");
static_assert(offsetof(UBP_AccelByteVerifyEmailWidget_C, bVerifyingFullAccount) == 0x000378, "Member 'UBP_AccelByteVerifyEmailWidget_C::bVerifyingFullAccount' has a wrong offset!");

}
