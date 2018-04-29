#pragma once
#include "BloodUnit.h"
class BloodUnitLink
{
	BloodUnit *bloodUnit;						//wskaznik na jednostke krwi
	BloodUnitLink *nextBloodUnit;				//wskaznik na nastepny element listy

public:

	int getUtilizationTimeFromBloodUnit();		//metoda zwracajaca czas utylizacji jednostki krwi
	BloodUnitLink(int,BloodUnitLink*);			
	~BloodUnitLink();

	friend class BloodStorage;
};

