#pragma once
#include "Event.h"
class AlertDeliverenceEvent :
	public Event
{

	const static int Q = 5;							//zmienna Q z zadania
	const static int E = 5;							//zmienna E z zadania
	static double EW;								//zmienna EW^2 z zadania

public:
	AlertDeliverenceEvent(EventsAgenda*);
	void run();										//wykonanie zdarzenia
	~AlertDeliverenceEvent();
};

