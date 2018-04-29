#include "patientEvent.h"



patientEvent::patientEvent(Event *nextEvent, EventsAgenda *eventsAgenda)
{
	this->nextEvent = nextEvent;
	this->eventsAgenda = eventsAgenda;
}

void patientEvent::run()
{
	////////////dodanie do kalendarza nowego PatienEvent////////////
	eventsAgenda->mainDonationPoint->addNewPatient();
}


patientEvent::~patientEvent()
{
}
