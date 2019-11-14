// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestInstancedClass_Base.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, EditInlineNew)
class UNREALCPLUSPLUSTEST_API UTestInstancedClass_Base : public UObject
{
	GENERATED_BODY()

public:
	UTestInstancedClass_Base();
	~UTestInstancedClass_Base();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float testFloat = 20.0f;
};
