#include "PatientQueue.h"
#include <iostream>



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

	PatientLink *temp;
	for (temp = FirstPatient;temp->nextPatient;temp=temp->nextPatient)
	{ }
	temp->nextPatient = new PatientLink(nullptr);
	
}

void PatientQueue::deletePatient()
{
	PatientLink *temp = FirstPatient->nextPatient;
	delete FirstPatient;
	FirstPatient = temp;
}

void PatientQueue::disp()
{
	for (PatientLink *temp = FirstPatient; temp; temp = temp->nextPatient)
		std::cout << temp->getPatientID() << "\t";
	std::cout << std::endl;
}

int PatientQueue::getFirstPatientBlood()
{
	return FirstPatient->getBlood();
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
