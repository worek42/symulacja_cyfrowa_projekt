#pragma once
#include "Event.h"
class NewUnitsDeliverenceEvent : public Event
{
	const static int Z = 10;							//zmienna Z z zadania
	const static int N = 12;							//zmienna N z zadania

public:
	NewUnitsDeliverenceEvent(EventsAgenda*);
	void run();											//wykonanie zdarzenia
	~NewUnitsDeliverenceEvent();
};

