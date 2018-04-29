#pragma once
#include "Event.h"
class patientEvent :
	public Event
{
	EventsAgenda *eventsAgenda;					//wskaznik do kalendarza zdarzen
	Event *nextEvent;							//wskaznik do nastepnego elementu 
	const static int P = 5;						//zmienna P z zadania
	int apperanceTime;							//czas wykonania zdarzenia

public:
	patientEvent(Event*,EventsAgenda*);
	void run();									//wykonanie zdarzenia
	~patientEvent();
};

