#pragma once
#include "Event.h"
#include "DonationPoint.h"
class patientEvent :
	public Event
{
	const static int P = 150;						//zmienna P z zadania

public:
	patientEvent(EventsAgenda*);
	void run();									//wykonanie zdarzenia
	~patientEvent();
};

