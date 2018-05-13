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

accidentEvent::accidentEvent(EventsAgenda * eventsAgenda, int unitOfBloodNeeded, int deliveryTime)
{
	this->eventsAgenda = eventsAgenda;
	apperanceTime = deliveryTime;
	this->unitOfBloodNeeded = unitOfBloodNeeded;
}


void accidentEvent::run()
{
	if (unitOfBloodNeeded <= eventsAgenda->mainDonationPoint->getActualBloodUnits())
	{
		for (int i = 0; i < unitOfBloodNeeded; i++)
		{
			eventsAgenda->mainDonationPoint->deleteTheOldestBlood();						//usuwanie wymaganej ilosci krwi z magazynu
			eventsAgenda->deleteUtilizationEvent();											//usuwanie wymaganej ilosci zdarzen utylizacji krwi										
		}
		eventsAgenda->addEvent(new accidentEvent(eventsAgenda));
		std::cout << "Wypadek" << std::endl;
	}
	else
	{
		eventsAgenda->addEvent(new accidentEvent(eventsAgenda, unitOfBloodNeeded, 900));
		eventsAgenda->addEvent(new DeliverenceEvent(eventsAgenda, 30, 900));
		std::cout << "Wypadek, jednostki krwi beda dostarczone, gdy przybedzie zamowienie" << std::endl;
	}
	
}

accidentEvent::~accidentEvent()
{
}
