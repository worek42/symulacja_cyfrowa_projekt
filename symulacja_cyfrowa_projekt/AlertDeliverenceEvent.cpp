#include "AlertDeliverenceEvent.h"

double AlertDeliverenceEvent::EW = 0.2;

AlertDeliverenceEvent::AlertDeliverenceEvent(Event* nextEvent, EventsAgenda *eventsAgenda)
{
	this->nextEvent = nextEvent;
	this->eventsAgenda = eventsAgenda;
}


void AlertDeliverenceEvent::run()
{
	////////////dodaj do kalendarza (EventsAgenda) obiekt DeliverenceEvent////////
	eventsAgenda->mainDonationPoint->changeOrder(true);								//zmiana zmiennej Order
}

AlertDeliverenceEvent::~AlertDeliverenceEvent()
{
}
