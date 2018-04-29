#pragma once
#include "BloodUnitLink.h"
#include <iostream>
class BloodStorage
{
	const int R = 1;					//zmienna R z zadania
	const int minimalBloodUnits = R;	//minimalna ilosc jednostek krwi
	int actualBloodUnits;				//aktualna ilosc jednostek krwi
	bool Order;							//zmienna oznaczajaca zlozenie zamowienia
	BloodUnitLink *FirstBloodUnit;		//wskaznik na pierwszy element listy
	void addSort(int);					//dodawanie obiektu krwi do listy w trybie posortowanym
	void addFirst(int);					//dodawanie obiektu krwi do listy na pierwsze miejsce, gdy lista jest pusta
	void addOnFirstItem(int);			//dodawanie obiektu krwi do listy na pierwsze miejsce, gdy istnieja na liscie obiekty
	void addOnBlankSecondItem(int);		//dodawanie obiektu krwi do listy na druga pozycje, gdy ta jest rowna nullptr

public:

	BloodStorage();
	bool isOrdered();					//metoda zwracajaca zajetosc zamowienia
	bool isEmpty();						//metoda sprawdzania czy lista jest pusta
	void addBloodUnit(int);				//dodanie obiektu krwi do listy
	void disp();						//sprawdzanie dzialania listy
	~BloodStorage();
};

