#pragma once
#include "Event.h"
#include "DeliverenceEvent.h"
#include "DonationPoint.h"
class AlertDeliverenceEvent :
	public Event
{

	const static int Q = 14;							//zmienna Q z zadania
	const static int E = 300;							//zmienna E z zadania
	static double EW;									//zmienna EW^2 z zadania

public:
	AlertDeliverenceEvent(EventsAgenda*);
	void run();										//wykonanie zdarzenia
	~AlertDeliverenceEvent();
};

