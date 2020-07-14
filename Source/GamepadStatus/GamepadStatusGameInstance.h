// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GamepadStatusGameInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerStatusChanged, bool, IsConnected);

/**
 * 
 */
UCLASS()
class GAMEPADSTATUS_API UGamepadStatusGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category = "Gamepad info")
	FControllerStatusChanged ControllerStatusChanged;

	virtual void Init() override;
	void ControllerStatusIsChanged(bool Connected, int32 PlatformId, int32 UserId);
};
