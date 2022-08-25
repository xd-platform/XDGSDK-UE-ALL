// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DemoBPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API UDemoBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

    //打开动态 
	UFUNCTION(BlueprintCallable, Category = "XDGDemo")
    static void OpenMoment();

	//篝火接口测试
	UFUNCTION(BlueprintCallable, Category = "XDGDemo")
	static void GetTestQualification();


};
