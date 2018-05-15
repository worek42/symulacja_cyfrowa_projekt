#pragma once
class Patient
{
	int ID;							//ID pacjenta
	static int iDHandler;			//zmienna statyczna do przyznawania nowego ID
	int unitOfBloodNeeded;			//ilosc jednostek krwi potrzebnej pacjentowi
	const double W = 0.22;				//zmienna W z zadania

public:
	int getID();					//pozyskanie ID pacjenta
	int getUnit();					//pozyskanie jednotek krwi potrzebnych pacjentowi
	Patient();              //kontruktor do tworzenie zwyklych pacjentow
  Patient(int);           //konstruktor do tworzenia pacjentow z wykladow
	~Patient();
};

