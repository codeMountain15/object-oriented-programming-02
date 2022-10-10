// main.cpp : this is an include version of namespaces04.cpp
// Github folder: namespaces05
//

#include <iostream>
#include "namespace.h"

using namespace std;
int number = 100;



int main()
{
	cout << number << endl;
	cout << "The namespace number: " << trick::number << endl << endl;

	trick::print_number();

	using namespace trick;

	cout << "Print from main: " << ::number << endl;
	return 0;
}
