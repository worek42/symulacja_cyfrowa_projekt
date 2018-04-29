#include "BloodUtilizationEvent.h"



BloodUtilizationEvent::BloodUtilizationEvent(Event *nextEvent, EventsAgenda *eventsAgenda,int apperanceTime)
{
	this->nextEvent = nextEvent;
	this->eventsAgenda = eventsAgenda;
	this->apperanceTime = apperanceTime;
}


void BloodUtilizationEvent::run()
{
	eventsAgenda->mainDonationPoint->deleteTheOldestBlood();		//usuniecie najstarszej krwi
}

BloodUtilizationEvent::~BloodUtilizationEvent()
{
}
