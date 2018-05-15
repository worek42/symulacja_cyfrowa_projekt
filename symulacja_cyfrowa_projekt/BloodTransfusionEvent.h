#pragma once
#include "Event.h"
#include "DonationPoint.h"
class BloodTransfusionEvent :
	public Event
{

public:
	BloodTransfusionEvent(EventsAgenda*);
	void run();										//wykonanie zdarzenia
	~BloodTransfusionEvent();
};

