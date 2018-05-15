#include "accidentEvent.h"
#include "DeliverenceEvent.h"
#include <iostream>

int gen1()
{
	return 15000;
}

int gen2()
{
	return 15;
}

accidentEvent::accidentEvent(EventsAgenda* eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
	apperanceTime = gen1();
	unitOfBloodNeeded = gen2();
}

accidentEvent::accidentEvent(EventsAgenda * eventsAgenda, int unitOfBloodNeeded, int deliveryTime)
{
	this->eventsAgenda = eventsAgenda;
	apperanceTime = deliveryTime;
	this->unitOfBloodNeeded = unitOfBloodNeeded;
}


void accidentEvent::run()
{
  eventsAgenda->addEvent(new accidentEvent(eventsAgenda));
  eventsAgenda->mainDonationPoint->addNewPatient(unitOfBloodNeeded);
  std::cout << "Wypadek" << std::endl;
}

accidentEvent::~accidentEvent()
{
}
