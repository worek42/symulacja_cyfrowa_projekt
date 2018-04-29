#pragma once
#include "PatientLink.h"
class PatientQueue
{
	PatientLink *FirstPatient;
	void addFirst();

public:
	bool isEmpty();
	void addPatient();
	void deletePatient();
	void disp();
	PatientQueue();
	~PatientQueue();
};

