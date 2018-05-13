#pragma once
#include "Event.h"
class donorEvent :
	public Event
{
	const static int L = 5;						//zmienna L z zadania
	const static int T2 = 200;					//zmienna T2 z zadania

public:
	donorEvent(EventsAgenda*);
	void run();									//wykonanie zdarzenia
	~donorEvent();
};

