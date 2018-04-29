#pragma once
#include "EventsAgenda.h"
class Event
{
	EventsAgenda *eventsAgenda;

public:

	virtual void run();
	Event(EventsAgenda*);
	~Event();
};

