#include "donorEvent.h"
#include <iostream>
int generator1(int averrage)
{
	return averrage;
}

donorEvent::donorEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
	apperanceTime = generator1(L);
}

void donorEvent::run()
{
	///////////dodanie do EventsAgenda nastepnego donorEvent//////////
	eventsAgenda->addEvent(new donorEvent(eventsAgenda));
	eventsAgenda->mainDonationPoint->addNewBlood(T2);						//dodanie nowej jednostki krwi do magazynu
	eventsAgenda->addEvent(new BloodUtilizationEvent(eventsAgenda, T2));
	////aktualizacja jednostek krwi w metodzie obiektu bloodStorage/////
	std::cout << "Zdarzenie nowego dawcy" << std::endl;
}

donorEvent::~donorEvent()
{
}
