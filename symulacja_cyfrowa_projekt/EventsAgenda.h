#pragma once
#include "DonationPoint.h"
class EventsAgenda
{
	
public:
	DonationPoint *mainDonationPoint;		//wskaznik na punkt krwiodawstwa
	EventsAgenda(DonationPoint*);
	~EventsAgenda();
};

