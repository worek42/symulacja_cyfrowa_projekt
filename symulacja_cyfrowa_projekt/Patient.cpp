#include "Patient.h"

int generator(int average)
{
	return average;
}
	int Patient::iDHandler = 0;

	int Patient::getID()
	{
		return ID;
	}

	Patient::Patient()
{
	ID = ++iDHandler;
	unitOfBloodNeeded = generator(W);
}

Patient::~Patient()
{
}
