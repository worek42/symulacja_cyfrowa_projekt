#include "BloodTransfusionEvent.h"



BloodTransfusionEvent::BloodTransfusionEvent(EventsAgenda *eventsAgenda)
{
	this->eventsAgenda = eventsAgenda;
}

void BloodTransfusionEvent::run()
{
	for (int i = 0; i < eventsAgenda->mainDonationPoint->getPatientBloodUnits(); i++)
		eventsAgenda->mainDonationPoint->deleteTheOldestBlood();						//usuwanie wymaganej ilosci krwi z magazynu
	eventsAgenda->mainDonationPoint->deleteFirstPatient();								//usuniecie pierwszego pacjenta
}

BloodTransfusionEvent::~BloodTransfusionEvent()
{
}
