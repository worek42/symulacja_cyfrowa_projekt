#pragma once
#include "Event.h"
class NewUnitsDeliverenceEvent : public Event
{
	EventsAgenda *eventsAgenda;							//wskaznik na kalendarz zdarzen
	Event *nextEvent;									//wskaznik na nastepne zdarzenie
	const static int Z = 10;							//zmienna Z z zadania
	const static int N = 12;							//zmienna N z zadania

public:
	NewUnitsDeliverenceEvent(Event*,EventsAgenda*);
	void run();											//wykonanie zdarzenia
	~NewUnitsDeliverenceEvent();
};

