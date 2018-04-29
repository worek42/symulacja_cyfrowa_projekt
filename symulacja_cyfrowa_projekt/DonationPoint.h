#pragma once
#include "BloodStorage.h"
#include "PatientQueue.h"
class DonationPoint
{
	BloodStorage *bloodStorage;
	PatientQueue *patienQueue;

public:
	DonationPoint();
	~DonationPoint();
};

