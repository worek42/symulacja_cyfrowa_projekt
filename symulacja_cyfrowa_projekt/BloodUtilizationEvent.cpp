#include "BloodUtilizationEvent.h"



BloodUtilizationEvent::BloodUtilizationEvent(Event *nextEvent, EventsAgenda *eventsAgenda)
{
	this->nextEvent = nextEvent;
	this->eventsAgenda = eventsAgenda;
}


void BloodUtilizationEvent::run()
{
	eventsAgenda->mainDonationPoint->deleteTheOldestBlood();
}

BloodUtilizationEvent::~BloodUtilizationEvent()
{
}
