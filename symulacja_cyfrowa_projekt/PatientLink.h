#pragma once
#include "Patient.h"
class PatientLink
{
	Patient *patient;
	PatientLink *nextPatient;

public:
	int getPatientID();
	PatientLink(PatientLink*);
	~PatientLink();

	friend class PatientQueue;
};

