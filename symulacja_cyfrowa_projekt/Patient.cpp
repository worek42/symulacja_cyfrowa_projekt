#include "Patient.h"

int generator(int average)
{
	return average;
}

int Patient::iDHandler = 0;
int Patient::averageW = 5;

Patient::Patient()
{
	ID = ++iDHandler;
	unitOfBloodNeeded = generator(averageW);
}

Patient::~Patient()
{
}
