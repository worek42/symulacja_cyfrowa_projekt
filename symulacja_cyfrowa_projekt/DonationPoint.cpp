#include "DonationPoint.h"



void DonationPoint::addNewBlood(int T2)
{
	bloodStorage->addBloodUnit(T2);
}

void DonationPoint::addNewPatient()
{
	patienQueue->addPatient();
}

void DonationPoint::deleteTheOldestBlood()
{
	bloodStorage->deleteFirst();
}

void DonationPoint::changeOrder(bool changed)
{
	bloodStorage->changeOrder(changed);
}

int DonationPoint::getPatientBloodUnits()
{
	return patienQueue->getFirstPatientBlood();
}

void DonationPoint::deleteFirstPatient()
{
	patienQueue->deletePatient();
}

DonationPoint::DonationPoint()
{
	bloodStorage = new BloodStorage();
	patienQueue = new PatientQueue();
}

DonationPoint::~DonationPoint()
{
}
