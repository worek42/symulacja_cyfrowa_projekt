#pragma once
#include <limits>
class Event;
class DonationPoint;
class EventsAgenda
{
	
public:
	DonationPoint *mainDonationPoint;		//wskaznik na punkt krwiodawstwa
	Event *FirstEvent;

	EventsAgenda(DonationPoint*);
	void addEvent(Event*);					//dodanie zdarzenia do kalendarza
	void deleteUtilizationEvent();			//usuniecie zdarzenia utylizacji krwi
	void deleteFirst();

	~EventsAgenda();
};

