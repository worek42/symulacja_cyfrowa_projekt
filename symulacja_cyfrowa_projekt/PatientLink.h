#pragma once
#include "Patient.h"
class PatientLink
{
	Patient *patient;				//wskaznik na pacjenta
	PatientLink *nextPatient;		//wskaznik na nastepne pole listy przechowujace pacjenta

public:
	int getPatientID();				//pozyskanie ID pacjenta
	int getBlood();					//pozyskanie ilosci krwi potrzebnej pacjentowi
	PatientLink(PatientLink*);
  PatientLink(PatientLink*, int);
	~PatientLink();

	friend class PatientQueue;
};

