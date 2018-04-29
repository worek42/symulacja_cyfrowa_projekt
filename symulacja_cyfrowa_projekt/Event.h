#pragma once
#include "EventsAgenda.h"

//Istnieje po to aby stworzyc z niej liste wskaznikow, wskazujaca na rozne obiekty klas pochodnych
class Event
{
	

public:

	virtual void run();			//wykonanie zdarzenia
	Event();
	~Event();
};

