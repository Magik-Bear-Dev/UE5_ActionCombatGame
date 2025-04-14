// Magik Bear Productions

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTS_PlayerDistance.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONCOMBATGAME_API UBTS_PlayerDistance : public UBTService
{
	GENERATED_BODY()

protected:
	virtual void	
		TickNode(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory,
		float DeltaSeconds
	) override;
};
