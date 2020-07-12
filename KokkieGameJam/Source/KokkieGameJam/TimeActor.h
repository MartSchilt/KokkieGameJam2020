// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeActor.generated.h"

UCLASS()
class KOKKIEGAMEJAM_API ATimeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Gameloop variables
	void Timer();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int Seconds;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int Minutes;

	FTimerHandle MemberTimerHandle;

};
