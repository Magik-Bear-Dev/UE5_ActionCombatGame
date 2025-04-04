// Magik Bear Productions

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONCOMBATGAME_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentVelocity { 0.0f };

	UFUNCTION(BlueprintCallable)
	void UpdateVelocity();
};
