#include "Patient.h"
#include <iostream>

int generator2(double average)
{
	return 1.0/average;
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
	std::cout << "Nowy pacjent" << std::endl;
}

	Patient::Patient(int unitOfBloodNeeded)
	{
		ID = ++iDHandler;
		this->unitOfBloodNeeded = unitOfBloodNeeded;
		std::cout << "Nowy pacjent" << std::endl;
	}

Patient::~Patient()
{
}
