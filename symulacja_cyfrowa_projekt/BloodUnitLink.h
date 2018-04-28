#pragma once
#include "BloodUnit.h"
class BloodUnitLink
{
	BloodUnit *bloodUnit;
	BloodUnitLink *nextBloodUnit;
public:
	BloodUnitLink(int,BloodUnitLink*);
	~BloodUnitLink();

	friend class BloodStorage;
};

