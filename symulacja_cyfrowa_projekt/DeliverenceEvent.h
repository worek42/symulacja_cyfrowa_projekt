#pragma once
#include "Event.h"
class DeliverenceEvent :
	public Event
{
	EventsAgenda *eventsAgenda;							//wskaznik do kalendarza zdarzen
	Event *nextEvent;									//wskaznik do nastepnego zdarzenia
	const static int T1 = 250;							//zmienna T1 z zadania
	int numberOfBloodUnits;								//ilosc przywiezionych jednostek krwi
	int apperanceTime;									//czas wystapienia zdarzenia

public:
	DeliverenceEvent(Event*,EventsAgenda*,int,int);
	void run();											//wykonanie zdarzenia
	~DeliverenceEvent();
};

