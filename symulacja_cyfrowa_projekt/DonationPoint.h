#pragma once
#include "BloodStorage.h"
#include "PatientQueue.h"
class DonationPoint
{
	BloodStorage *bloodStorage;			//wskaznik do magazynu krwi
	PatientQueue *patienQueue;			//wskaznik do kolejki pacjentow

public:
	void addNewBlood(int);				//dodanie nowej jednostki krwi do magazynu
	void addNewPatient();				//dodanie nowego pacjenta do kolejki
	void deleteTheOldestBlood();		//usuniecie najstarszej jednostki krwi
	void changeOrder(bool);				//zmiana wartosci zmiennej Order magazynu krwi
	int getPatientBloodUnits();			//metoda zwracajaca wymagana ilosc krwi dla pierwszego pacjenta w kolejce
	void deleteFirstPatient();			//usuniecie pierwszego pacjenta z kolejki
	DonationPoint();
	~DonationPoint();
};

