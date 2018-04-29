#include "PatientLink.h"



int PatientLink::getPatientID()
{
	return patient->getID();
}

PatientLink::PatientLink(PatientLink *nextPatient)
{
	this->patient = new Patient();
	this->nextPatient = nextPatient;
}


PatientLink::~PatientLink()
{
}
