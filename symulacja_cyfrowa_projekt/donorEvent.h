#pragma once
#include "Event.h"
#include "DonationPoint.h"
#include "BloodUtilizationEvent.h"
class donorEvent :
	public Event
{
	const static int L = 900;					//zmienna L z zadania
	const static int T2 = 500;					//zmienna T2 z zadania

public:
	donorEvent(EventsAgenda*);
	void run();									//wykonanie zdarzenia
	~donorEvent();
};

