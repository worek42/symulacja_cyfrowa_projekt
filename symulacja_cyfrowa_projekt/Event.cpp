#include "Event.h"



Event::Event()
{
	nextEvent = nullptr;
	utilizationEvent = false;
}

void Event::run()
{
	if (apperanceTime == -1)
		std::cout << "Poczatke listy" << std::endl;
	else
		std::cout << "Koniec listy" << std::endl;
}

Event::Event(EventsAgenda *eventsAgenda,int appTime)
{
	nextEvent = nullptr;
	this->eventsAgenda = eventsAgenda;
	apperanceTime = appTime;
	utilizationEvent = false;
}


Event::~Event()
{
	eventsAgenda = nullptr;
	nextEvent = nullptr;
}
