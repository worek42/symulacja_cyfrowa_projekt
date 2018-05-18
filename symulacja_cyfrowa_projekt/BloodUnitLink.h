#pragma once
#include "BloodUnit.h"
class BloodUnitLink
{
	BloodUnit *bloodUnit;						//wskaznik na jednostke krwi
	BloodUnitLink *nextBloodUnit;				//wskaznik na nastepny element listy

public:

	BloodUnitLink(int,BloodUnitLink*);			
	~BloodUnitLink();

	friend class BloodStorage;
};

