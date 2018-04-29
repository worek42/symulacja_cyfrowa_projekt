#include "DeliverenceEvent.h"



DeliverenceEvent::DeliverenceEvent(Event *nextEvent, EventsAgenda *eventsAgenda,int numberOfBloodUnits,int apperanceTime)
{
	this->nextEvent = nextEvent;
	this->eventsAgenda = eventsAgenda;
	this->numberOfBloodUnits = numberOfBloodUnits;
	this->apperanceTime = apperanceTime;
}


void DeliverenceEvent::run()
{
	for (int i = 0; i < numberOfBloodUnits; i++)
		eventsAgenda->mainDonationPoint->addNewBlood(T1);				//dodanie odpowiedniej ilosci jednostek krwi do magazynu
	eventsAgenda->mainDonationPoint->changeOrder(false);				//zmiana zmiennej Order
}

DeliverenceEvent::~DeliverenceEvent()
{
}
