// File namespace.cpp

#include <iostream>
#include "namespace.h"

using namespace std;

int trick::number = 200;

void trick::print_number()
{
	cout << "Printing from print_number(): " << number << endl;
}
