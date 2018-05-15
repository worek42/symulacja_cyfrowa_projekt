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

PatientLink::PatientLink(PatientLink *nextPatient, int unitsOfBlood)
{
  this->nextPatient = nextPatient;
  this->patient = new Patient(unitsOfBlood);
}

PatientLink::~PatientLink()
{
	delete patient;
}
