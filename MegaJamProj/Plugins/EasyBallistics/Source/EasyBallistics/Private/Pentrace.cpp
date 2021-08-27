// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBullet.h"

float AEBBullet::penTrace(FVector start, FVector end, TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr> comp, bool solid, bool reverse, TEnumAsByte<ECollisionChannel> channel, FVector &exitLoc, FVector &exitNormal) {

	FCollisionQueryParams colParams;
	colParams.bTraceComplex = TraceComplex;
//	colParams.bTraceAsyncScene = TraceAsync;  //removed in 4.22

	TArray<FHitResult> results;

	bool hit;
	if (reverse) {
		hit = GetWorld()->LineTraceMultiByChannel(results, start, end, TraceChannel, colParams);
	}
	else {
		hit = GetWorld()->LineTraceMultiByChannel(results, end, start, TraceChannel, colParams);
	}

	//FVector direction = (start - end).GetSafeNormal();

	if (hit) {

		if(solid){
		//filter out wrong components;
			results = results.FilterByPredicate([comp /*,direction*/](const FHitResult& result) {
				return ( (result.Component == comp) ); // (FVector::DotProduct(direction, result.Normal) < 0.0f) &&
			});
		}

		if (results.Num() <= 0) { return 1.0f; }

		
		exitLoc = results[0].Location;

		if (reverse) {
			exitNormal = -results[0].Normal;
			return (results[0].Time);
		}
		else {
			exitNormal = results[0].Normal;
			return (1.0f - results[0].Time);
		}
	}
	else {
		return 1.0f;
	};
}