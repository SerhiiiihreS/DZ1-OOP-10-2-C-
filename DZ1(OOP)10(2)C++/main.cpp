#include<iostream>
using namespace std;
#include "engine.h"
#include "transmission.h"
#include "wheel.h"
#include "car.h" 



int main() {

	car reno(3, 5, 4);
	reno.print0();
	cout << endl;
	reno.print1();
	cout << endl; 
	reno.print2();
	cout << endl;
	reno.print3();
}

