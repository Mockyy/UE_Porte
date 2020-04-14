// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CGrabber.generated.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTE_API UCGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Hit Component")
		FHitResult GetFirstPhysicsBodyInReach();

	void FindPhysicsHandleComponent();

	UFUNCTION(BlueprintCallable, Category = "Hit Component")
	void Handle();

private:

	UPROPERTY(EditAnyWhere)
		float fReach;

	UPhysicsHandleComponent *PhysicsHandle;

	FVector GetReachLineStart();

	FVector GetReachLineEnd();
};