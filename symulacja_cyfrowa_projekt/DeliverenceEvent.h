#pragma once
#include "Event.h"
class DeliverenceEvent :
	public Event
{
	const static int T1 = 250;							//zmienna T1 z zadania
	int numberOfBloodUnits;								//ilosc przywiezionych jednostek krwi

public:
	DeliverenceEvent(EventsAgenda*,int,int);
	void run();											//wykonanie zdarzenia
	~DeliverenceEvent();
};

