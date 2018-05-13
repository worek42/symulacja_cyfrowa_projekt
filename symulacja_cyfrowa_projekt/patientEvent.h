#pragma once
#include "Event.h"
class patientEvent :
	public Event
{
	const static int P = 5;						//zmienna P z zadania

public:
	patientEvent(EventsAgenda*);
	void run();									//wykonanie zdarzenia
	~patientEvent();
};

