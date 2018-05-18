#pragma once
#include "PatientLink.h"
class PatientQueue
{
	PatientLink *FirstPatient;			//wskaznik na pierwsze pole przechowujace pacjenta

	void addFirst();					//dodanie pierwszego pacjenta
	void addFirst(int);					//dodanie pacjenta z wypadku jako jedynego wystepujacego w kolejce

public:
	bool isEmpty();						//metoda sprawdza, czy kolejka jest pusta
	void addPatient();					//dodanie pacjenta na koniec kolejki
	void addPatient(int);				//dodanie pacjenta z wypadku
	void deletePatient();				//usuniecie pierwszego pacjenta
	int getFirstPatientBlood();			//metoda zwraca liczbe jednostek krwi potrzebna pierwszemu pacjentowi
	PatientQueue();
	~PatientQueue();
};

