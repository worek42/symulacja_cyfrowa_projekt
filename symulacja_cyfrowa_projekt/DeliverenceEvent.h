#pragma once
#include "Event.h"
class DeliverenceEvent :
	public Event
{
	EventsAgenda *eventsAgenda;
	Event *nextEvent;

public:
	DeliverenceEvent();
	~DeliverenceEvent();
};

