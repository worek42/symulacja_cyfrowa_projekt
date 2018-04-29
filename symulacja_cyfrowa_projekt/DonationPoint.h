#pragma once
#include "BloodStorage.h"
#include "PatientQueue.h"
class DonationPoint
{
	BloodStorage *bloodStorage;
	PatientQueue *patienQueue;

public:
	void addNewBlood(int);
	void addNewPatient();
	void deleteTheOldestBlood();
	DonationPoint();
	~DonationPoint();
};

