#include "PatientQueue.h"
#include <iostream>



void PatientQueue::addFirst()
{
	FirstPatient = new PatientLink(nullptr);
}

void PatientQueue::addFirst(int unitOfBloodNeeded)
{
	FirstPatient = new PatientLink(nullptr, unitOfBloodNeeded);
}

bool PatientQueue::isEmpty()
{
	return FirstPatient ? false : true;
}

void PatientQueue::addPatient()
{
	if (isEmpty())
	{
		addFirst();
		return;
	}

	PatientLink *temp;
	for (temp = FirstPatient;temp->nextPatient;temp=temp->nextPatient)
	{ }
	temp->nextPatient = new PatientLink(nullptr);
}

void PatientQueue::addPatient(int unitOfBloodNeeded)
{
	if (isEmpty())
	{
		addFirst(unitOfBloodNeeded);
		return;
	}

	FirstPatient = new PatientLink(FirstPatient, unitOfBloodNeeded);
}

void PatientQueue::deletePatient()
{
	PatientLink *temp = FirstPatient->nextPatient;
	delete FirstPatient;
	FirstPatient = temp;
}

int PatientQueue::getFirstPatientBlood()
{
	return FirstPatient->patient->getUnit();
}

PatientQueue::PatientQueue()
{
}

PatientQueue::~PatientQueue()
{
	for (PatientLink *temp = FirstPatient; temp; temp = FirstPatient)
	{
		FirstPatient = FirstPatient->nextPatient;
		delete temp;
	}
}
