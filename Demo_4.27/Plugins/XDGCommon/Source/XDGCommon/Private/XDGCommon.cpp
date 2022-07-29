// Copyright Epic Games, Inc. All Rights Reserved.

#include "XDGCommon.h"

#define LOCTEXT_NAMESPACE "FXDGCommonModule"

FXDGCommonModule::FXDGSDKInitSucceed FXDGCommonModule::OnXDGSDKInitSucceed;
FXDGCommonModule::FXDGSDKShareCompleted FXDGCommonModule::OnXDGSDKShareCompleted;
FXDGCommonModule::FXDGSDKGetRegionInfoCompleted FXDGCommonModule::OnXDGSDKGetRegionInfoCompleted;
FXDGCommonModule::FXDGSDKGetXDGInfoJsonCompleted FXDGCommonModule::OnXDGSDKGetXDGInfoJsonCompleted;


IMPLEMENT_MODULE(FXDGCommonModule, XDGCommon)

void FXDGCommonModule::StartupModule()
{

}

void FXDGCommonModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE
