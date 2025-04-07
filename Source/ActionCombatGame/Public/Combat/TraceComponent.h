// Magik Bear Productions

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TraceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONCOMBATGAME_API UTraceComponent : public UActorComponent
{
	GENERATED_BODY()

	USkeletalMeshComponent* SkeletalComp;

	UPROPERTY(EditAnywhere)
	FName Start;

	UPROPERTY(EditAnywhere)
	FName End;

	UPROPERTY(EditAnywhere)
	FName Rotation;

	UPROPERTY(EditAnywhere)
	double BoxCollisionLength { 30.0 };

	UPROPERTY(EditAnywhere)
	bool bDebugMode { false };

	TArray<AActor*> TargetsToIgnore;

public:	
	// Sets default values for this component's properties
	UTraceComponent();

	UPROPERTY(VisibleAnywhere)
	bool bIsAttacking { false };

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();
};
