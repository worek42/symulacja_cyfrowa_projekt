#pragma once
class donor
{
	int iD;								//ID dawcy
	static int iDHandler;				//zmienna statyczna do przyznawania nowego ID
	const int bloodForStorage=1;		//ilosc krwi oddawana przez jednego dawce

public:

	donor();
	~donor();
};

