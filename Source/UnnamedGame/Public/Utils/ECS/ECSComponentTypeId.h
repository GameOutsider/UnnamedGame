// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "ECSDefines.h"
#include "ECSComponentTypeId.generated.h"



USTRUCT(BlueprintType)
struct FECSComponentTypeId {
	GENERATED_BODY()
public:
	template<typename T>
	static const ComponentId Get() {
		static id = mCounter++;
		return id;
	}
private:
	static unsigned int mCounter;
};