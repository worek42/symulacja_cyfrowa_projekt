#include "donor.h"
#include <iostream>

int donor::iDHandler = 0;

donor::donor()
{
	iD = ++iDHandler;
	std::cout << "Nowy dawca" << std::endl;
}


donor::~donor()
{
}
