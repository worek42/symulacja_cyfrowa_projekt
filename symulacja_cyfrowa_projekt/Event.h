#pragma once
#include "EventsAgenda.h"
#include <iostream>
//Istnieje po to aby stworzyc z niej liste wskaznikow, wskazujaca na rozne obiekty klas pochodnych
class Event
{
	

public:
	EventsAgenda * eventsAgenda;					//wskaznik do kalendarza zdarzen
	Event *nextEvent;								//wskaznik do nastepnego zdarzenia
	int apperanceTime;								//czas wystapienia zdarzenia
	bool utilizationEvent;

	virtual void run();								//wykonanie zdarzenia
	Event();
	Event(EventsAgenda*,int);
	~Event();

	friend class EventsAgenda;
};

