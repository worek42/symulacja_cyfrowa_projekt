#include "DonationPoint.h"
#include "EventsAgenda.h"
#include "Event.h"
#include "NewUnitsDeliverenceEvent.h"
#include "AlertDeliverenceEvent.h"
#include "DeliverenceEvent.h"
#include "patientEvent.h"
#include "donorEvent.h"
#include "BloodTransfusionEvent.h"
#include "accidentEvent.h"
#include <conio.h>
#include <time.h>
#include <iostream>




void DonationPoint::addNewBlood(int T2)
{
	bloodStorage->addBloodUnit(T2);
}

void DonationPoint::addNewPatient()
{
	patienQueue->addPatient();
}

void DonationPoint::deleteTheOldestBlood()
{
	bloodStorage->deleteFirst();
}

void DonationPoint::changeOrder(bool changed)
{
	bloodStorage->changeOrder(changed);
}

int DonationPoint::getPatientBloodUnits()
{
	return patienQueue->getFirstPatientBlood();
}

void DonationPoint::deleteFirstPatient()
{
	patienQueue->deletePatient();
}

void DonationPoint::start()
{
	EventsAgenda *agenda = new EventsAgenda(this);
	time = 0;
	agenda->addEvent(new DeliverenceEvent(agenda, 10, 0));
	agenda->addEvent(new patientEvent(agenda));
	agenda->addEvent(new donorEvent(agenda));
	agenda->addEvent(new accidentEvent(agenda));
	clock_t start = clock();
	while (time < 100000)
	{
		time = agenda->FirstEvent->nextEvent->apperanceTime;
		agenda->FirstEvent->nextEvent->run();
		agenda->deleteFirst();

		if (bloodStorage->orderNeeded())
		{
			NewUnitsDeliverenceEvent *temp= new NewUnitsDeliverenceEvent(agenda);
			temp->run();
			delete temp;
		}

		if ((!(patienQueue->isEmpty())) && (bloodStorage->getActualBloodUnits() < patienQueue->getFirstPatientBlood())&&(!(bloodStorage->isOrdered())))
		{
			AlertDeliverenceEvent *temp = new AlertDeliverenceEvent(agenda);
			temp->run();
			delete temp;
		}

		if ((!(patienQueue->isEmpty()))&&(bloodStorage->getActualBloodUnits() >= patienQueue->getFirstPatientBlood()) )
		{
			BloodTransfusionEvent *temp = new BloodTransfusionEvent(agenda);
			temp->run();
			delete temp;
		}
		if(typeOfLoop)
			getchar();
	}
	std::cout << "W magazynie pozostalo " << bloodStorage->getActualBloodUnits() << " jednostek krwi." << std::endl;
	delete agenda;

}

int DonationPoint::getActualBloodUnits()
{
	return bloodStorage->getActualBloodUnits();
}

DonationPoint::DonationPoint(bool type)
{
	bloodStorage = new BloodStorage();
	patienQueue = new PatientQueue();
	typeOfLoop = type;
}

DonationPoint::~DonationPoint()
{
	delete bloodStorage;
	delete patienQueue;
}
