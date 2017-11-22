#pragma once

#include "ECSDefines.h"

class IECSComponent
{
public:
	virtual ComponentId GetECSComponentType() = 0;
protected:
	IECSComponent() = default;
};