#pragma once
#include "Event.h"
class donorEvent :
	public Event
{
	EventsAgenda *eventsAgenda;					//wskaznik do kalendarza zdarzen
	Event *nextEvent;							//wskaznik do nastepnego zdarzenia
	const static int L = 5;						//zmienna L z zadania
	int apperanceTime;							//czas wystapienia zdarzenia
	const static int T2 = 200;					//zmienna T2 z zadania

public:
	donorEvent(Event*,EventsAgenda*);
	void run();									//wykonanie zdarzenia
	~donorEvent();
};

