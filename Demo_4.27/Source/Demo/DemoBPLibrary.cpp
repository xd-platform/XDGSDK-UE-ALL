// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoBPLibrary.h"
#include "Engine.h"

#include "CoreMinimal.h"
#include "TapUELogin.h"
#include "GameFramework/GameModeBase.h"
#include "TapUEMoment.h"
#include "TUDebuger.h"
#include "TUJsonHelper.h"
#include "TUMomentType.h"


UDemoBPLibrary::UDemoBPLibrary(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
}

void UDemoBPLibrary::OpenMoment(){
   TapUEMoment::Open(TUMomentType::Orientation::LANDSCAPE);   
}

void UDemoBPLibrary::GetTestQualification(){
   TapUELogin::GetTestQualification([](bool IsQualified, const FTUError& Error) {
       if (IsQualified) {
          TUDebuger::DisplayShow("Is Qualified");
          GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("GetTestQualification: true"));
       } else {
          TUDebuger::DisplayShow("Is Not Qualified");
          TUDebuger::WarningShow(TUJsonHelper::GetJsonString(Error));
          GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("GetTestQualification: false"));
       }
    });
}

