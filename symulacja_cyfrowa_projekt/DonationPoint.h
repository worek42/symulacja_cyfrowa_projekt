#pragma once
#include "BloodStorage.h"
#include "PatientQueue.h"
class DonationPoint
{
	BloodStorage *bloodStorage;			//wskaznik do magazynu krwi
	PatientQueue *patienQueue;			//wskaznik do kolejki pacjentow
	double numberOfAllOrders;
	int numberOfAlertOrders;

public:
	bool typeOfLoop;
	int systemTime;						//czas systemowy
	void addNewBlood(int);				//dodanie nowej jednostki krwi do magazynu
	void addNewPatient();				//dodanie nowego pacjenta do kolejki
	void addNewPatient(int);
	void deleteTheOldestBlood();		//usuniecie najstarszej jednostki krwi
	void changeOrder(bool);				//zmiana wartosci zmiennej Order magazynu krwi
	int getPatientBloodUnits();			//metoda zwracajaca wymagana ilosc krwi dla pierwszego pacjenta w kolejce
	void deleteFirstPatient();			//usuniecie pierwszego pacjenta z kolejki
	void start();						//petla symulacji
	int getActualBloodUnits();
	bool alertOrderNeeded();
	bool transfusionPermition();
	bool normalOrderNeeded();
	DonationPoint(bool);
	~DonationPoint();
};

