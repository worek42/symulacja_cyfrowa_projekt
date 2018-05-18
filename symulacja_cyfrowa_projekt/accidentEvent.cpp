#include "accidentEvent.h"
#include "DeliverenceEvent.h"

int gen1()
{
	return 15000;
}

int gen2()
{
	return 15;
}

accidentEvent::accidentEvent(EventsAgenda* eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
	apperanceTime = gen1();
	unitOfBloodNeeded = gen2();
}

void accidentEvent::run()
{
	eventsAgenda->addEvent(new accidentEvent(eventsAgenda));
	eventsAgenda->mainDonationPoint->addNewPatient(unitOfBloodNeeded);
}

accidentEvent::~accidentEvent()
{
}
