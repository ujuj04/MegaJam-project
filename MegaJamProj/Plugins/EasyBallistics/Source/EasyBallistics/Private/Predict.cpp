// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBarrel.h"
#include "EBBullet.h"

void UEBBarrel::PredictHit(bool &Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<class AEBBullet> BulletClass, FVector StartLocation, FVector PredictAim, float MaxTime, float Step, bool GetFullTrajectory){
	
	float time = 0;
	Trajectory = TArray<FVector>();

	FVector LocalLocation = StartLocation;
	AEBBullet* bullet = Cast<AEBBullet>(BulletClass->GetDefaultObject());
	FVector Velocity = PredictAim*(FMath::Lerp(MuzzleVelocityMultiplierMin, MuzzleVelocityMultiplierMax, 0.5)*FMath::Lerp(bullet->MuzzleVelocityMin, bullet->MuzzleVelocityMax, 0.5));

	UPrimitiveComponent* parent = Cast<UPrimitiveComponent>(GetAttachParent());

	Velocity += AdditionalVelocity;

	if (parent != nullptr) {
		if (parent->IsSimulatingPhysics()) {
			Velocity += parent->GetPhysicsLinearVelocityAtPoint(LocalLocation)*InheritVelocity;
		}
	}

	while (time < MaxTime) {
		FVector PreviousVelocity = Velocity;
		Velocity = bullet->UpdateVelocity(GetWorld(), LocalLocation, Velocity, Step);
		float TraceHitTime;
		Hit = PredTrace(GetWorld(), bullet, LocalLocation, LocalLocation + FMath::Lerp(PreviousVelocity, Velocity, 0.5f)*Step, HitLocation,TraceHitTime,HitActor);
		if (Hit) {
			if (GetFullTrajectory) {
				Trajectory.Add(HitLocation);
			}
			HitTime = time+(TraceHitTime*Step);
			return;
		}
		else {
			if (GetFullTrajectory) {
				Trajectory.Add(LocalLocation);
			}
			LocalLocation += FMath::Lerp(PreviousVelocity, Velocity, 0.5f)*Step;
			time += Step;
		}
	}

	Hit = false;
	HitTime = MaxTime;
	HitLocation = LocalLocation;
	HitActor = nullptr;
}

bool UEBBarrel::PredTrace(UWorld* World, AEBBullet* Bullet, FVector Start, FVector End, FVector &HitLocation, float &Time, AActor* &Actor) {

	FHitResult result;

	FCollisionResponseParams respParams;

	FCollisionQueryParams colParams;
	colParams.bTraceComplex = Bullet->TraceComplex;
//	colParams.bTraceAsyncScene = Bullet->TraceAsync;  //Removed in 4.22
	colParams.bReturnPhysicalMaterial = true;

	if (Bullet->SafeLaunch) {
		colParams.AddIgnoredActor(GetOwner());
	}

	bool hit = World->LineTraceSingleByChannel(result, Start, End, Bullet->TraceChannel, colParams, respParams);

	if (hit) {
		Time = result.Time;
		Actor = result.Actor.Get();
		HitLocation = result.Location;
	}
	return hit;
}