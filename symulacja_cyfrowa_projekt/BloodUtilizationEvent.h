#pragma once
#include "Event.h"
class BloodUtilizationEvent :
	public Event
{
	EventsAgenda *eventsAgenda;							//wskaznik do kalendarza zdarzen
	Event *nextEvent;									//wskaznik do nastepnego zdarzenia
	int apperanceTime;									//czas wystapienia zdarzenia

public:
	BloodUtilizationEvent(Event*,EventsAgenda*,int);	
	void run();											//wykonanie zdarzenia
	~BloodUtilizationEvent();
};

