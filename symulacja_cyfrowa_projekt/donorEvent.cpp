#include "donorEvent.h"
int generator(int averrage)
{
	return averrage;
}

donorEvent::donorEvent(Event *nextEvent,EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
	this->nextEvent = nextEvent;
	apperanceTime = generator(L);
}

void donorEvent::run()
{
	///////////dodanie do EventsAgenda nastepnego donorEvent//////////
	eventsAgenda->mainDonationPoint->addNewBlood(T2);
	////aktualizacja jednostek krwi w metodzie obiektu bloodStorage/////
}

donorEvent::~donorEvent()
{
}
