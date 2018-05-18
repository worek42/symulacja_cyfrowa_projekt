#pragma once
#include "Event.h"
#include "DonationPoint.h"
class accidentEvent :
	public Event
{
public:
	
	int unitOfBloodNeeded;
	accidentEvent(EventsAgenda*);
	void run();
	~accidentEvent();
};

