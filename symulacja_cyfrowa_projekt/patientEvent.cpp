#include "patientEvent.h"

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
	eventsAgenda->mainDonationPoint->addNewPatient();					//dodanie nowego pacjenta do kolejki
}


patientEvent::~patientEvent()
{
}
