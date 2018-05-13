#include "BloodUtilizationEvent.h"



BloodUtilizationEvent::BloodUtilizationEvent(EventsAgenda *eventsAgenda,int apperanceTime)
{
	this->eventsAgenda = eventsAgenda;
	this->apperanceTime = apperanceTime;
	utilizationEvent = true;
}


void BloodUtilizationEvent::run()
{
	eventsAgenda->mainDonationPoint->deleteTheOldestBlood();		//usuniecie najstarszej krwi
}

BloodUtilizationEvent::~BloodUtilizationEvent()
{
}
