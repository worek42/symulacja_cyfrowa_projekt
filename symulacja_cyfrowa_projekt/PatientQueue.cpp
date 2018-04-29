#include "PatientQueue.h"



void PatientQueue::addFirst()
{
	FirstPatient = new PatientLink(nullptr);
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

	
	
}

void PatientQueue::deletePatient()
{
	PatientLink *temp = FirstPatient->nextPatient;
	delete FirstPatient;
	FirstPatient = temp;
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
