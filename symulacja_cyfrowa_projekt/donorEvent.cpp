#include "donorEvent.h"
int generator1(int averrage)
{
	return averrage;
}

donorEvent::donorEvent(Event *nextEvent,EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
	this->nextEvent = nextEvent;
	apperanceTime = generator1(L);
}

void donorEvent::run()
{
	///////////dodanie do EventsAgenda nastepnego donorEvent//////////
	eventsAgenda->mainDonationPoint->addNewBlood(T2);						//dodanie nowej jednostki krwi do magazynu
	////aktualizacja jednostek krwi w metodzie obiektu bloodStorage/////
}

donorEvent::~donorEvent()
{
}
