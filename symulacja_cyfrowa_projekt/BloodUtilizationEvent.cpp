#include "BloodUtilizationEvent.h"
#include <iostream>


BloodUtilizationEvent::BloodUtilizationEvent(EventsAgenda *eventsAgenda,int apperanceTime)
{
	this->eventsAgenda = eventsAgenda;
	this->apperanceTime = apperanceTime;
	utilizationEvent = true;
}


void BloodUtilizationEvent::run()
{
	eventsAgenda->mainDonationPoint->deleteTheOldestBlood();		//usuniecie najstarszej krwi
	std::cout << "Utylizacja krwi" << std::endl;
}

BloodUtilizationEvent::~BloodUtilizationEvent()
{
}
