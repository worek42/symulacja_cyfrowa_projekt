#include "AlertDeliverenceEvent.h"
#include <iostream>

double AlertDeliverenceEvent::EW = 0.1;

AlertDeliverenceEvent::AlertDeliverenceEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
}


void AlertDeliverenceEvent::run()
{
	Event* newEvent = new DeliverenceEvent(eventsAgenda, Q, E);
	eventsAgenda->addEvent(newEvent);												//dodaæ generator
	eventsAgenda->mainDonationPoint->changeOrder(true);								//zmiana zmiennej Order
	std::cout << "Zlecenie awaryjne" << std::endl;
}

AlertDeliverenceEvent::~AlertDeliverenceEvent()
{
}
