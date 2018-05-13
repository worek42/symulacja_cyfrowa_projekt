#include "BloodTransfusionEvent.h"
#include <iostream>



BloodTransfusionEvent::BloodTransfusionEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
}

void BloodTransfusionEvent::run()
{
	for (int i = 0; i < eventsAgenda->mainDonationPoint->getPatientBloodUnits(); i++)
	{
		eventsAgenda->mainDonationPoint->deleteTheOldestBlood();						//usuwanie wymaganej ilosci krwi z magazynu
		eventsAgenda->deleteUtilizationEvent();											//usuwanie wymaganej ilosci zdarzen utylizacji krwi										
	}
	eventsAgenda->mainDonationPoint->deleteFirstPatient();								//usuniecie pierwszego pacjenta
	std::cout << "Transfuzja krwi" << std::endl;
}

BloodTransfusionEvent::~BloodTransfusionEvent()
{
}
