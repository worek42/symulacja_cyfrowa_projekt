#pragma once
#include "Event.h"
class donorEvent :
	public Event
{
	EventsAgenda *eventsAgenda;
	Event *nextEvent;
	const static int L = 5;
	int apperanceTime;
	const static int T2 = 200;

public:
	donorEvent(Event*,EventsAgenda*);
	void run();
	~donorEvent();
};

