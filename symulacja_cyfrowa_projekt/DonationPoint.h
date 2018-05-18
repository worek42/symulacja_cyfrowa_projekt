#pragma once
#include "BloodStorage.h"
#include "PatientQueue.h"
#include "NewUnitsDeliverenceEvent.h"
#include "AlertDeliverenceEvent.h"
#include "patientEvent.h"
#include "donorEvent.h"
#include "BloodTransfusionEvent.h"
#include "accidentEvent.h"
#include <conio.h>

class DonationPoint
{
	BloodStorage *bloodStorage;			//wskaznik do magazynu krwi
	PatientQueue *patienQueue;			//wskaznik do kolejki pacjentow
	double numberOfAllOrders;			//liczba wszystkich zamowien
	int numberOfAlertOrders;			//liczba zamowien awaryjnych
	bool typeOfLoop;					//typ petli

	bool alertOrderNeeded();
	bool transfusionPermition();
	bool normalOrderNeeded();

public:
	int systemTime;						//czas systemowy

	void addNewBlood(int);				//dodanie nowej jednostki krwi do magazynu
	void addNewPatient();				//dodanie nowego pacjenta do kolejki
	void addNewPatient(int);			//dodanie pacjenta z wypadku (rozszerzenie zadania A2)
	void deleteTheOldestBlood();		//usuniecie najstarszej jednostki krwi
	void changeOrder(bool);				//zmiana wartosci zmiennej Order magazynu krwi
	int getPatientBloodUnits();			//metoda zwracajaca wymagana ilosc krwi dla pierwszego pacjenta w kolejce
	void deleteFirstPatient();			//usuniecie pierwszego pacjenta z kolejki
	void start();						//petla symulacji
	int getActualBloodUnits();			//metoda zwraca aktualna liczbe jednostek krwi
	DonationPoint(bool);
	~DonationPoint();
};

