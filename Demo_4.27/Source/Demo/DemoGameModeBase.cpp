// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoGameModeBase.h"
#include "XDGCommon.h"
#include "XDGAccount.h"
#include "XDGPayment.h"
#include <string.h>

void ADemoGameModeBase::BeginPlay(){
    //XDGCommon
    FXDGCommonModule::OnXDGSDKInitSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKInitSucceed);
    FXDGCommonModule::OnXDGSDKShareCompleted.AddUObject(this, &ADemoGameModeBase::OnXDGSDKShareCompleted);
    FXDGCommonModule::OnXDGSDKGetRegionInfoCompleted.AddUObject(this, &ADemoGameModeBase::OnXDGSDKGetRegionInfoCompleted);
    FXDGCommonModule::OnXDGSDKGetXDGInfoJsonCompleted.AddUObject(this, &ADemoGameModeBase::OnXDGSDKGetXDGInfoJsonCompleted);

    //XDGAccount
    FXDGAccountModule::OnXDGSDKLoginSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKLoginSucceed);
    FXDGAccountModule::OnXDGSDKLoginFailed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKLoginFailed);
    FXDGAccountModule::OnXDGSDKGetUserSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKGetUserSucceed);
    FXDGAccountModule::OnXDGSDKGetUserFailed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKGetUserFailed);
    FXDGAccountModule::OnXDGSDKUserStateChanged.AddUObject(this, &ADemoGameModeBase::OnXDGSDKUserStateChanged);
    FXDGAccountModule::OnXDGSDKBindByTypeCompleted.AddUObject(this, &ADemoGameModeBase::OnXDGSDKBindByTypeCompleted);

    //XDGPayment
    FXDGPaymentModule::OnXDGSDKPaymentSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKPaymentSucceed);
    FXDGPaymentModule::OnXDGSDKPaymentFailed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKPaymentFailed);
    
    FXDGPaymentModule::OnXDGSDKQueryProductIdsSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKQueryProductIdsSucceed);
    FXDGPaymentModule::OnXDGSDKQueryProductIdsFailed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKQueryProductIdsFailed);

    FXDGPaymentModule::OnXDGSDKQueryRestoredPurchasesSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKQueryRestoredPurchasesSucceed);
    FXDGPaymentModule::OnXDGSDKQueryRestoredPurchasesFailed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKQueryRestoredPurchasesFailed);
    FXDGPaymentModule::OnXDGSDKPayWithWebCompleted.AddUObject(this, &ADemoGameModeBase::OnXDGSDKPayWithWebCompleted);
    FXDGPaymentModule::OnXDGSDKCheckRefundStatusSucceed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKCheckRefundStatusSucceed);
    FXDGPaymentModule::OnXDGSDKCheckRefundStatusFailed.AddUObject(this, &ADemoGameModeBase::OnXDGSDKCheckRefundStatusFailed);

    UE_LOG(LogTemp, Log, TEXT("playingsgm"));
}

//XDGCommon
void ADemoGameModeBase::OnXDGSDKInitSucceed(const bool success, const FString& result){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKInitSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKInitSucceed: " + FString::FromInt(success) + result));
}

void ADemoGameModeBase::OnXDGSDKGetXDGInfoJsonCompleted(const FString& result){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKGetXDGInfoJsonCompleted"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKGetXDGInfoJsonCompleted: " +  result));
}

void ADemoGameModeBase::OnXDGSDKShareCompleted(const int32 code){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKShareCompleted"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKShareCompleted: " + FString::FromInt(code)));
}

void ADemoGameModeBase::OnXDGSDKGetRegionInfoCompleted(const FString& countryCode, const FString& city, const FString& timeZone, const FString& locationInfoType){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKGetRegionInfoCompleted"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKGetRegionInfoCompleted: " + countryCode + city + timeZone + locationInfoType));
}


//XDGAccount
void ADemoGameModeBase::OnXDGSDKLoginSucceed(const FString& userJson){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKLoginSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKLoginSucceed: " + userJson));
}

void ADemoGameModeBase::OnXDGSDKLoginFailed(const int32 code, const FString& msg, const FString& data){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKLoginFailed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("code: " + FString::FromInt(code) + " msg: " + msg + " data: " + data));
}

void ADemoGameModeBase::OnXDGSDKGetUserSucceed(const FString& userJson){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKGetUserSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKGetUserSucceed: " + userJson));
}

void ADemoGameModeBase::OnXDGSDKGetUserFailed(const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKGetUserFailed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKGetUserFailed: " + msg));
}

void ADemoGameModeBase::OnXDGSDKUserStateChanged(const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKUserStateChanged"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKUserStateChanged: " + FString::FromInt(code) + "  msg:" + msg));
}

void ADemoGameModeBase::OnXDGSDKBindByTypeCompleted(const bool success, const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKBindByTypeCompleted"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKBindByTypeCompleted: " + FString::FromInt(success) + "  code:" + FString::FromInt(code) + "  msg:" + msg));
}


//XDGPayment
void ADemoGameModeBase::OnXDGSDKPaymentSucceed(const FString& orderId, const FString& productId, const FString& serverId, const FString& roleId){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKPaymentSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKPaymentSucceed: "));
}

void ADemoGameModeBase::OnXDGSDKPaymentFailed(const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKPaymentFailed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKPaymentFailed: " + msg));
}

void ADemoGameModeBase::OnXDGSDKQueryProductIdsSucceed(const FString& resultJson){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKQueryProductIdsSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKQueryProductIdsSucceed: " + resultJson));
}

void ADemoGameModeBase::OnXDGSDKQueryProductIdsFailed(const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKQueryProductIdsFailed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKQueryProductIdsFailed: " + msg));
}

void ADemoGameModeBase::OnXDGSDKQueryRestoredPurchasesSucceed(const FString& resultJson){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKQueryRestoredPurchasesSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKQueryRestoredPurchasesSucceed: " + resultJson));
}

void ADemoGameModeBase::OnXDGSDKQueryRestoredPurchasesFailed(const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKQueryRestoredPurchasesFailed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKQueryRestoredPurchasesFailed: " + msg));
}

void ADemoGameModeBase::OnXDGSDKPayWithWebCompleted(const FString& serverId, const FString& roleId, const int32 code,  const FString& errorMsg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKPayWithWebCompleted"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKPayWithWebCompleted: "));
}

void ADemoGameModeBase::OnXDGSDKCheckRefundStatusSucceed(const FString& resultJson){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKCheckRefundStatusSucceed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKCheckRefundStatusSucceed: " + resultJson));
}

void ADemoGameModeBase::OnXDGSDKCheckRefundStatusFailed(const int32 code, const FString& msg){
    UE_LOG(LogTemp, Log, TEXT("点击了 OnXDGSDKCheckRefundStatusFailed"));
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnXDGSDKCheckRefundStatusFailed: " + msg));
}

