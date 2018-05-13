#pragma once
#include "DonationPoint.h"
#include "Event.h"
#include <limits>
#include <iostream>
class EventsAgenda
{
	
public:
	DonationPoint *mainDonationPoint;		//wskaznik na punkt krwiodawstwa
	Event *FirstEvent;

	EventsAgenda(DonationPoint*);
	void addEvent(Event*);					//dodanie zdarzenia do kalendarza
	void deleteUtilizationEvent();			//usuniecie zdarzenia utylizacji krwi przy wykorzystaniu jej 
											//przez pacjenta lub przez wypadek

	~EventsAgenda();
};

