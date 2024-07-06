#pragma once
#include "engine.h"
#include "transmission.h"
#include "wheel.h"

class car :public engine,public transmission,public wheel
{
	int volume;
	int radius;
	int transfers;
public:
	car(int v, int r, int t) :engine(v), transmission(r), wheel(t) {};
	void print0() {
		cout << "avto -->>" << endl;
	}

};

