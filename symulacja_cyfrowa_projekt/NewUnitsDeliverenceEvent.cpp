#include "NewUnitsDeliverenceEvent.h"



NewUnitsDeliverenceEvent::NewUnitsDeliverenceEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
}


void NewUnitsDeliverenceEvent::run()
{
	////////dodanie do klendarz obiektu DeliverenceEvent////////
	eventsAgenda->mainDonationPoint->changeOrder(true);					//zmiana wartosci zmiennej Order magazynu
}

NewUnitsDeliverenceEvent::~NewUnitsDeliverenceEvent()
{
}
