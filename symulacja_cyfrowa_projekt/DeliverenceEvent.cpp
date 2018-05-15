#include "DeliverenceEvent.h"
#include "BloodUtilizationEvent.h"
#include <iostream>


DeliverenceEvent::DeliverenceEvent(EventsAgenda *eventsAgenda,int numberOfBloodUnits,int apperanceTime)
{
	this->eventsAgenda = eventsAgenda;
	this->numberOfBloodUnits = numberOfBloodUnits;
	this->apperanceTime = apperanceTime;
}


void DeliverenceEvent::run()
{
	for (int i = 0; i < numberOfBloodUnits; i++)
	{
		eventsAgenda->mainDonationPoint->addNewBlood(T1);				//dodanie odpowiedniej ilosci jednostek krwi do magazynu
		eventsAgenda->addEvent(new BloodUtilizationEvent(eventsAgenda, T1));
	}
	eventsAgenda->mainDonationPoint->changeOrder(false);				//zmiana zmiennej Order
	std::cout << "Dostarczenie jednostek krwi" << std::endl;
}

DeliverenceEvent::~DeliverenceEvent()
{
}
