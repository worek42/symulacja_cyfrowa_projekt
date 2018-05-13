#pragma once
#include "Event.h"
class BloodUtilizationEvent :
	public Event
{


public:
	BloodUtilizationEvent(EventsAgenda*,int);	
	void run();											//wykonanie zdarzenia
	~BloodUtilizationEvent();
};

