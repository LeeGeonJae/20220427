// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BountyDashGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BOUNTYDASH_API ABountyDashGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABountyDashGameModeBase();
	
public:
	UPROPERTY()
	float gameSpeed;

	UPROPERTY()
	int32 gameLevel;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 numCoinsForSpeedInCrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float gameSpeedIncrease;

public:
	void CharScoreUp(unsigned int charScore);

	UFUNCTION()
		float GetInvGameSpeed();

	UFUNCTION()
		float GetGameSpeed();

	UFUNCTION()
		int32 GetGameLevel();
};