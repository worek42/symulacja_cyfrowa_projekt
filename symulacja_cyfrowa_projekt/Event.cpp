#include "Event.h"



void Event::run()
{
	return;
}

Event::Event(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
}


Event::~Event()
{
}
