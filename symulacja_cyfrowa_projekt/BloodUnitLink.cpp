#include "BloodUnitLink.h"



int BloodUnitLink::getUtilizationTimeFromBloodUnit()
{
	return bloodUnit->getUtilizationTime();
}

BloodUnitLink::BloodUnitLink(int utilizationTime,BloodUnitLink *nextBloodUnitLinkHandler)
{
	bloodUnit = new BloodUnit(utilizationTime);
	nextBloodUnit = nextBloodUnitLinkHandler;
}


BloodUnitLink::~BloodUnitLink()
{
	delete bloodUnit;
}
