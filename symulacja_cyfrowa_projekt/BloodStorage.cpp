#include "BloodStorage.h"



BloodStorage::BloodStorage()
{
}

bool BloodStorage::isEmpty()
{
	return FirstBloodUnit ? false : true;
}

void BloodStorage::addBloodUnit(int utilizationTime)
{
	if (isEmpty())
	{
		FirstBloodUnit = new BloodUnitLink(utilizationTime, nullptr);
		return;
	}
}


BloodStorage::~BloodStorage()
{
	for (BloodUnitLink *temp = FirstBloodUnit; temp; temp = FirstBloodUnit)
	{
		FirstBloodUnit = FirstBloodUnit->nextBloodUnit;
		delete temp;
	}

}
