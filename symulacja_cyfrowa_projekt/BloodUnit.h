#pragma once
struct BloodUnit
{
	int utilizationTime;			//czas utylizacji jednostki krwi
	int ID;							//ID jednostki krwi
	static int iDHandler;			//zmienna statyczna do przyznawania nowego ID
public:
	int getUtilizationTime();		//metoda zwracajaca czas utylizacji krwi
	BloodUnit(int);
	~BloodUnit();
};