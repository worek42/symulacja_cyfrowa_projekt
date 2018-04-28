#include "donor.h"

int donor::iDHandler = 0;

donor::donor()
{
	iD = ++iDHandler;
}


donor::~donor()
{
}
