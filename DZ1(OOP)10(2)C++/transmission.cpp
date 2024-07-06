#include "transmission.h"

transmission::transmission(int t)
{
	transfers = t;
}

void transmission::print3()
{
	cout << "transfers -->" << transfers << endl;
}
