#include "BloodUnit.h"

int BloodUnit::iDHandler = 0;

int BloodUnit::getUtilizationTime()
{
	return utilizationTime;
}

BloodUnit::BloodUnit(int utilizationTime)
{
	this->utilizationTime = utilizationTime;
	ID = ++iDHandler;
}

BloodUnit::~BloodUnit()
{
}
