#pragma once
#include "Event.h"
class patientEvent :
	public Event
{
	EventsAgenda *eventsAgenda;
	Event *nextEvent;
	const static int P = 5;

public:
	patientEvent(Event*,EventsAgenda*);
	void run();
	~patientEvent();
};

