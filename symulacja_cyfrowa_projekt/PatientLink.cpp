#include "PatientLink.h"



int PatientLink::getPatientID()
{
	return patient->getID();
}

int PatientLink::getBlood()
{
	return patient->getUnit();
}

PatientLink::PatientLink(PatientLink *nextPatient)
{
	this->patient = new Patient();
	this->nextPatient = nextPatient;
}

PatientLink::~PatientLink()
{
}
