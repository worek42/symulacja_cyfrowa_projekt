#pragma once
#include "Event.h"
class BloodUtilizationEvent :
	public Event
{
	EventsAgenda *eventsAgenda;
	Event *nextEvent;

public:
	BloodUtilizationEvent(Event*,EventsAgenda*);
	void run();
	~BloodUtilizationEvent();
};

