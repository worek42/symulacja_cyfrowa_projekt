#pragma once
#include "Event.h"
#include "DonationPoint.h"
class BloodUtilizationEvent :
	public Event
{


public:
	BloodUtilizationEvent(EventsAgenda*,int);	
	void run();											//wykonanie zdarzenia
	~BloodUtilizationEvent();
};

