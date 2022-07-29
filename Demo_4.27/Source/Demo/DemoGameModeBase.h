// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DemoGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API ADemoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	virtual void BeginPlay() override;

    //XDGCommon
	void OnXDGSDKInitSucceed(const bool, const FString&);

    void OnXDGSDKGetXDGInfoJsonCompleted(const FString&);

    //0成功，1取消，2失败
    void OnXDGSDKShareCompleted(const int32);

    void OnXDGSDKGetRegionInfoCompleted(const FString&, const FString&, const FString&, const FString&);

    //XDGAccount 
	void OnXDGSDKLoginSucceed(const FString&);

	void OnXDGSDKLoginFailed(const int32, const FString&, const FString&);

	void OnXDGSDKGetUserSucceed(const FString&);

	void OnXDGSDKGetUserFailed(const int32, const FString&);

	void OnXDGSDKUserStateChanged(const int32, const FString&);

    void OnXDGSDKBindByTypeCompleted(const bool, const int32, const FString&);

	//XDGPayment
	void OnXDGSDKPaymentSucceed(const FString&, const FString&, const FString&, const FString&);

    void OnXDGSDKPaymentFailed(const int32, const FString&);

    void OnXDGSDKQueryProductIdsSucceed(const FString&);

    void OnXDGSDKQueryProductIdsFailed(const int32, const FString&);

    void OnXDGSDKQueryRestoredPurchasesSucceed(const FString&);

    void OnXDGSDKQueryRestoredPurchasesFailed(const int32, const FString&);

    void OnXDGSDKPayWithWebCompleted(const FString&, const FString&, const int32, const FString&);

    void OnXDGSDKCheckRefundStatusSucceed(const FString&);

    void OnXDGSDKCheckRefundStatusFailed(const int32, const FString&);

};
