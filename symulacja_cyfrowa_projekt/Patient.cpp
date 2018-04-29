#include "Patient.h"

int generator2(int average)
{
	return average;
}
	int Patient::iDHandler = 0;

	int Patient::getID()
	{
		return ID;
	}

	int Patient::getUnit()
	{
		return unitOfBloodNeeded;
	}

	Patient::Patient()
{
	ID = ++iDHandler;
	unitOfBloodNeeded = generator2(W);
}

Patient::~Patient()
{
}
