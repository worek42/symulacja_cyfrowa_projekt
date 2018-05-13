#include "EventsAgenda.h"



EventsAgenda::EventsAgenda(DonationPoint *donationPoint)
{
	mainDonationPoint = donationPoint;
	FirstEvent = new Event(this, -1);
	FirstEvent->nextEvent = new Event(this, std::numeric_limits<int>::max());
}

void EventsAgenda::addEvent(Event * nextEv)
{
	Event *temp = FirstEvent;

	while (temp->nextEvent->apperanceTime < nextEv->apperanceTime)
		temp = temp->nextEvent;

	Event *tempHelper = temp->nextEvent->nextEvent;
	temp->nextEvent = nextEv;
	nextEv->nextEvent = tempHelper;
	
}

void EventsAgenda::deleteUtilizationEvent()
{
	Event *temp = FirstEvent;

	while (!(temp->nextEvent->utilizationEvent))
		temp = temp->nextEvent;

	Event *tempHelper = temp->nextEvent;
	temp->nextEvent = tempHelper->nextEvent;
	delete tempHelper;
}


EventsAgenda::~EventsAgenda()
{
	mainDonationPoint = nullptr;

	for (Event *temp = FirstEvent; temp; temp = FirstEvent)
	{
		FirstEvent = FirstEvent->nextEvent;
		delete temp;
	}
}
