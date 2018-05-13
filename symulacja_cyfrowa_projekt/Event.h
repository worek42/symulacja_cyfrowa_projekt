#pragma once
#include "EventsAgenda.h"
#include <iostream>
//Istnieje po to aby stworzyc z niej liste wskaznikow, wskazujaca na rozne obiekty klas pochodnych
class Event
{
public:
	EventsAgenda *eventsAgenda;						//wskaznik do kalendarza zdarzen
	Event *nextEvent;								//wskaznik do nastepnego zdarzenia
	int apperanceTime;								//czas wystapienia zdarzenia
	bool utilizationEvent;

	Event();
	Event(EventsAgenda*, int);
	virtual void run();								//wykonanie zdarzenia

	~Event();

	friend class EventsAgenda;
};

