#include "patientEvent.h"
#include <iostream>

int generator(int averrage)
{
	return averrage;
}

patientEvent::patientEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
	apperanceTime = generator(P);
}

void patientEvent::run()
{
	////////////dodanie do kalendarza nowego PatienEvent////////////
	eventsAgenda->addEvent(new patientEvent(eventsAgenda));
	eventsAgenda->mainDonationPoint->addNewPatient();					//dodanie nowego pacjenta do kolejki
	std::cout << "Zlecenie nowego pacjenta" << std::endl;
}


patientEvent::~patientEvent()
{
}
