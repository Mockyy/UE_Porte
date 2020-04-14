// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/CGrabber.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UCGrabber::UCGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	fReach = 0.f;

	// ...
}


// Called when the game starts
void UCGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FHitResult UCGrabber::GetFirstPhysicsBodyInReach()
{
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	FHitResult Hit;
	FVector PlayerViewPointVector;
	FRotator PlayerViewPointRotator;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointVector, PlayerViewPointRotator);

	FVector LineEnd = PlayerViewPointVector + PlayerViewPointRotator.Vector() * fReach;

	DrawDebugLine(GetWorld(), PlayerViewPointVector, LineEnd, FColor::Purple, false, 5.f);

	GetWorld()->LineTraceSingleByObjectType(Hit, PlayerViewPointVector, LineEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParameters);

	return Hit;
}

