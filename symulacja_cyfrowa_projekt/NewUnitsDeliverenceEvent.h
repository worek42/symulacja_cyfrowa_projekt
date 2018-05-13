#pragma once
#include "Event.h"
#include "DonationPoint.h"
class NewUnitsDeliverenceEvent : public Event
{
	const static int Z = 1800;							//zmienna Z z zadania
	const static int N = 30;							//zmienna N z zadania

public:
	NewUnitsDeliverenceEvent(EventsAgenda*);
	void run();											//wykonanie zdarzenia
	~NewUnitsDeliverenceEvent();
};

