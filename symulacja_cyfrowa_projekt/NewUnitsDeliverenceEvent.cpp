#include "NewUnitsDeliverenceEvent.h"
#include "DeliverenceEvent.h"
#include <iostream>


NewUnitsDeliverenceEvent::NewUnitsDeliverenceEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
}


void NewUnitsDeliverenceEvent::run()
{
	////////dodanie do klendarz obiektu DeliverenceEvent////////
	eventsAgenda->addEvent(new DeliverenceEvent(eventsAgenda, N, Z));
	eventsAgenda->mainDonationPoint->changeOrder(true);					//zmiana wartosci zmiennej Order magazynu
	std::cout << "Zlecenie na nowe jednostki krwi" << std::endl;
}

NewUnitsDeliverenceEvent::~NewUnitsDeliverenceEvent()
{
}
