#pragma once
class Patient
{
	int ID;							//ID pacjenta
	static int iDHandler;			//zmienna statyczna do przyznawania nowego ID
	int unitOfBloodNeeded;			//ilosc jednostek krwi potrzebnej pacjentowi
	const int W = 5;				//zmienna W z zadania

public:
	int getID();
	Patient();
	~Patient();
};

