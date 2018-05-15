#pragma once
#include "Event.h"
#include "DonationPoint.h"
class accidentEvent :
	public Event
{
public:
	
	int unitOfBloodNeeded;
	accidentEvent(EventsAgenda*);
	accidentEvent(EventsAgenda*, int, int);
	void run();
	~accidentEvent();
};

