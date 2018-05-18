#pragma once
#include "PatientLink.h"
class PatientQueue
{
	PatientLink *FirstPatient;			//wskaznik na pierwsze pole przechowujace pacjenta
	void addFirst();					//dodanie pierwszego pacjenta
	void addFirst(int);

public:
	bool isEmpty();						//metoda sprawdza, czy kolejka jest pusta
	void addPatient();					//dodanie pacjenta na koniec kolejki
	void addPatient(int);
	void deletePatient();				//usuniecie pierwszego pacjenta
	void disp();						//metoda testowa wyswietlajaca
	int getFirstPatientBlood();			//metoda zwraca ilosc krwi potrzebna pierwszemu pacjentowi
	PatientQueue();
	~PatientQueue();
};

