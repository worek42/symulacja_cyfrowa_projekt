#include "BloodStorage.h"



void BloodStorage::addSort(int utilizationTime)
{
	BloodUnitLink *temp;
	for (temp = FirstBloodUnit; temp->nextBloodUnit; temp = temp->nextBloodUnit)
	{
		if (temp->nextBloodUnit->getUtilizationTimeFromBloodUnit() > utilizationTime)
			break;
	}
	temp->nextBloodUnit = new BloodUnitLink(utilizationTime, temp->nextBloodUnit);
}

void BloodStorage::addFirst(int utilizationTime)
{
	FirstBloodUnit = new BloodUnitLink(utilizationTime, nullptr);
}

void BloodStorage::addOnFirstItem(int utilizationTime)
{
	FirstBloodUnit = new BloodUnitLink(utilizationTime, FirstBloodUnit);
}

void BloodStorage::addOnBlankSecondItem(int utilizationTime)
{
	FirstBloodUnit->nextBloodUnit = new BloodUnitLink(utilizationTime, nullptr);
}

BloodStorage::BloodStorage()
{
}

bool BloodStorage::isOrdered()
{
	return Order;
}

bool BloodStorage::isEmpty()
{
	return FirstBloodUnit ? false : true;
}

bool BloodStorage::normalOrderNeeded()
{
	return (actualBloodUnits < R) && !Order ? true : false;
}

void BloodStorage::addBloodUnit(int utilizationTime)
{
	actualBloodUnits++;
	if (isEmpty())
	{
		addFirst(utilizationTime);
		return;
	}

	if (FirstBloodUnit->getUtilizationTimeFromBloodUnit() > utilizationTime)
	{
		addOnFirstItem(utilizationTime);
		return;
	}

	if (FirstBloodUnit->nextBloodUnit)
		addSort(utilizationTime);
	else
		addOnBlankSecondItem(utilizationTime);
}

void BloodStorage::disp()
{
	for (BloodUnitLink *temp = FirstBloodUnit; temp; temp = temp->nextBloodUnit)
		std::cout << temp->getUtilizationTimeFromBloodUnit() << "\t";
	std::cout << std::endl;
}

void BloodStorage::deleteFirst()
{
	BloodUnitLink *temp = FirstBloodUnit->nextBloodUnit;
	delete FirstBloodUnit;
	FirstBloodUnit = temp;
	actualBloodUnits--;
}

void BloodStorage::changeOrder(bool changed)
{
	Order = changed;
}

int BloodStorage::getActualBloodUnits()
{
	return actualBloodUnits;
}

BloodStorage::~BloodStorage()
{
	for (BloodUnitLink *temp = FirstBloodUnit; temp; temp = FirstBloodUnit)
	{
		FirstBloodUnit = FirstBloodUnit->nextBloodUnit;
		delete temp;
	}

}
