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

DonationPoint::DonationPoint()
{
	bloodStorage = new BloodStorage();
	patienQueue = new PatientQueue();
}



DonationPoint::~DonationPoint()
{
}
