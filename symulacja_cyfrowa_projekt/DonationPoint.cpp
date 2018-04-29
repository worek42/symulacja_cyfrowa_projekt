#include "DonationPoint.h"



DonationPoint::DonationPoint()
{
	bloodStorage = new BloodStorage();
	patienQueue = new PatientQueue();
}


DonationPoint::~DonationPoint()
{
}
