// Fill out your copyright notice in the Description page of Project Settings.


#include "GamepadStatusGameInstance.h"
#include "Misc/CoreDelegates.h"

void UGamepadStatusGameInstance::Init() {
	Super::Init();
	FCoreDelegates::OnControllerConnectionChange.AddUObject(this, &UGamepadStatusGameInstance::ControllerStatusIsChanged);
}

void UGamepadStatusGameInstance::ControllerStatusIsChanged(bool Connected, int32 PlatformId, int32 UserId) {
	ControllerStatusChanged.Broadcast(Connected);
}
