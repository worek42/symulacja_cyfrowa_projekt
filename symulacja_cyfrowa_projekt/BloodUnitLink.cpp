#include "BloodUnitLink.h"



BloodUnitLink::BloodUnitLink(int utilizationTime,BloodUnitLink *nextBloodUnitLinkHandler)
{
	bloodUnit = new BloodUnit(utilizationTime);
	nextBloodUnit = nextBloodUnitLinkHandler;
}


BloodUnitLink::~BloodUnitLink()
{
}
