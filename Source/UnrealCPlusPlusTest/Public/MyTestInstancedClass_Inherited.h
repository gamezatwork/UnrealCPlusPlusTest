// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestInstancedClass_Base.h"
#include "MyTestInstancedClass_Inherited.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCPLUSPLUSTEST_API UMyTestInstancedClass_Inherited : public UTestInstancedClass_Base
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float newTestFloat;
};
