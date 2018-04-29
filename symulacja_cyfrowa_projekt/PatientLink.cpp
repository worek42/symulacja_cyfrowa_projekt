#include "PatientLink.h"



PatientLink::PatientLink(PatientLink *nextPatient)
{
	this->patient = new Patient();
	this->nextPatient = nextPatient;
}


PatientLink::~PatientLink()
{
}
