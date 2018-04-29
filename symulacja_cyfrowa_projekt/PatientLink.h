#pragma once
#include "Patient.h"
class PatientLink
{
	Patient *patient;
	PatientLink *nextPatient;

public:
	PatientLink(PatientLink*);
	~PatientLink();

	friend class PatientQueue;
};

