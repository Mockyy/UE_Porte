// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/CGrabber.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"

// Sets default values for this component's properties
UCGrabber::UCGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	fReach = 0.f;
	PhysicsHandle = NULL;

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

	if (PhysicsHandle->GrabbedComponent)
	{
		PhysicsHandle->SetTargetLocation(GetReachLineEnd());
	}
}

FHitResult UCGrabber::GetFirstPhysicsBodyInReach()
{
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	FHitResult Hit;

	if (GetWorld()->LineTraceSingleByObjectType(Hit, GetReachLineStart(), GetReachLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParameters))
	{
		DrawDebugLine(GetWorld(), GetReachLineStart(), GetReachLineEnd(), FColor::Green, false, 5.f);
	}
	else
	{
		DrawDebugLine(GetWorld(), GetReachLineStart(), GetReachLineEnd(), FColor::Purple, false, 5.f);
	}

	return Hit;
}

void UCGrabber::FindPhysicsHandleComponent()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (ensure(PhysicsHandle))
	{
		UE_LOG(LogTemp, Warning, TEXT("Component found"));
	}
}

void UCGrabber::Handle()
{
	FHitResult Hit = GetFirstPhysicsBodyInReach();

	UPrimitiveComponent *ComponentToGrab = Hit.GetComponent();
	AActor *ActorHit = Hit.GetActor();

	if (ensure(ActorHit))
	{
		PhysicsHandle->GrabComponentAtLocation(
			ComponentToGrab, NAME_None, ComponentToGrab->GetOwner()->GetActorLocation());
	}
}

FVector UCGrabber::GetReachLineStart()
{
	FVector PlayerViewPointVector;
	FRotator PlayerViewPointRotator;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointVector, PlayerViewPointRotator);


	return PlayerViewPointVector;
}

FVector UCGrabber::GetReachLineEnd()
{
	FVector PlayerViewPointVector;
	FRotator PlayerViewPointRotator;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointVector, PlayerViewPointRotator);

	FVector LineEnd = PlayerViewPointVector + PlayerViewPointRotator.Vector() * fReach;

	return LineEnd;
}

