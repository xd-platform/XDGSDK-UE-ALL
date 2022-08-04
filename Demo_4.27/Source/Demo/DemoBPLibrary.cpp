// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoBPLibrary.h"
#include "Engine.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TapUEMoment.h"
#include "TUMomentType.h"


UDemoBPLibrary::UDemoBPLibrary(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
}

void UDemoBPLibrary::OpenMoment(){
   TapUEMoment::Open(TUMomentType::Orientation::LANDSCAPE);   
}

