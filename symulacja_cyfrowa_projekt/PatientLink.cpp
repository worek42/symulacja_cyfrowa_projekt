#include "PatientLink.h"

PatientLink::PatientLink(PatientLink *nextPatient)
{
	this->patient = new Patient();
	this->nextPatient = nextPatient;
}

PatientLink::PatientLink(PatientLink *nextPatient, int unitOfBloodNeeded)
{
	this->patient = new Patient(unitOfBloodNeeded);
	this->nextPatient = nextPatient;
}

PatientLink::~PatientLink()
{
	delete patient;
}
