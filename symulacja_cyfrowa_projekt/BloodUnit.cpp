#include "BloodUnit.h"

int BloodUnit::iDHandler = 0;

BloodUnit::BloodUnit(int utilizationTime)
{
	this->utilizationTime = utilizationTime;
	ID = ++iDHandler;
}


BloodUnit::~BloodUnit()
{
}
