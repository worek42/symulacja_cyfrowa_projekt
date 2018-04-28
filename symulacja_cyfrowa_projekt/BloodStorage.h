#pragma once
#include "BloodUnitLink.h"
class BloodStorage
{
	const static int R = 1;
	const int minimalBloodUnits = R;
	int actualBloodUnits;
	bool isOrdered;
	BloodUnitLink *FirstBloodUnit;

public:
	BloodStorage();
	bool isEmpty();
	void addBloodUnit(int utilizationTime);
	~BloodStorage();
};

