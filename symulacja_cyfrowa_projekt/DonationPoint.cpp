#include "DonationPoint.h"

void startParameters(EventsAgenda *agenda)
{
	agenda->addEvent(new DeliverenceEvent(agenda, 10, 0));
	agenda->addEvent(new patientEvent(agenda));
	agenda->addEvent(new donorEvent(agenda));
	agenda->addEvent(new accidentEvent(agenda));
}

void doTimeEvent(EventsAgenda *agenda)
{
	agenda->FirstEvent->nextEvent->run();
	agenda->deleteFirst();
}

void doEvent(Event *temp)
{
	temp->run();
	delete temp;
}



void DonationPoint::addNewBlood(int T2)
{
	bloodStorage->addBloodUnit(T2);
}

void DonationPoint::addNewPatient()
{
	patienQueue->addPatient();
}

void DonationPoint::addNewPatient(int unitOfBloodNeeded)
{
	patienQueue->addPatient(unitOfBloodNeeded);
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
	systemTime = 0;

	startParameters(agenda);
	bool systemFlag;

	while (numberOfAllOrders < 1000)
	{
		systemTime = agenda->FirstEvent->nextEvent->apperanceTime;
		
		do
		{
			systemFlag = false;
			if (systemTime == agenda->FirstEvent->nextEvent->apperanceTime)
			{
				doTimeEvent(agenda);
				systemFlag = true;
			}

			if (alertOrderNeeded())
			{
				AlertDeliverenceEvent *temp = new AlertDeliverenceEvent(agenda);
				doEvent(temp);
				systemFlag = true;
				numberOfAllOrders++;
				numberOfAlertOrders++;
			}

			if (normalOrderNeeded())
			{
				NewUnitsDeliverenceEvent *temp = new NewUnitsDeliverenceEvent(agenda);
				doEvent(temp);
				systemFlag = true;
				numberOfAllOrders++;
			}

			if (transfusionPermition())
			{
				BloodTransfusionEvent *temp = new BloodTransfusionEvent(agenda);
				doEvent(temp);
				systemFlag = true;
			}

		} while (systemFlag);
		if (typeOfLoop)
			getchar();
	}

	double result = (numberOfAlertOrders / numberOfAllOrders)*100;
	printf("\nPrawdopodobienstwo wystapienia zamowienia awaryjnego wynosi %.2f%%\n",result);
	delete agenda;
}

int DonationPoint::getActualBloodUnits()
{
	return bloodStorage->getActualBloodUnits();
}

bool DonationPoint::alertOrderNeeded()
{
	return (!(patienQueue->isEmpty())) && (bloodStorage->getActualBloodUnits() < patienQueue->getFirstPatientBlood()) && (!(bloodStorage->isOrdered()));
}

bool DonationPoint::transfusionPermition()
{
	return (!(patienQueue->isEmpty())) && (bloodStorage->getActualBloodUnits() >= patienQueue->getFirstPatientBlood());
}

bool DonationPoint::normalOrderNeeded()
{
	return bloodStorage->normalOrderNeeded();
}

DonationPoint::DonationPoint(bool type)
{
	bloodStorage = new BloodStorage();
	patienQueue = new PatientQueue();
	typeOfLoop = type;
	numberOfAlertOrders = 0;
	numberOfAllOrders = 0.0;
}

DonationPoint::~DonationPoint()
{
	delete bloodStorage;
	delete patienQueue;
}
