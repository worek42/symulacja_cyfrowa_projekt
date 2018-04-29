#pragma once
#include "Event.h"
class BloodTransfusionEvent :
	public Event
{
	EventsAgenda *eventsAgenda;						//wskaznik na kalendarz zdarzen
	Event *nextEvent;								//wskaznik na nastepne zdarzenie

public:
	BloodTransfusionEvent(Event*,EventsAgenda*);
	void run();										//wykonanie zdarzenia
	~BloodTransfusionEvent();
};

