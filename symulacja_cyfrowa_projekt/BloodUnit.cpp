#include "BloodUnit.h"
#include <iostream>

int BloodUnit::iDHandler = 0;

int BloodUnit::getUtilizationTime()
{
	return utilizationTime;
}

BloodUnit::BloodUnit(int utilizationTime)
{
	this->utilizationTime = utilizationTime;
	ID = ++iDHandler;
	std::cout << "Nowa jednostka krwi" << std::endl;
}

BloodUnit::~BloodUnit()
{
}
