// namespaces04.cpp

#include <iostream>

using namespace std;
int number = 100;

namespace trick {
	int number = 200; // Avoid this in the general case!
	void print_number();
}

int main()
{
	cout << number << endl;
	cout << "The namespace number: " << trick::number << endl << endl;
	
	trick::print_number();
	
	using namespace trick;
	
	cout << "Print from main: " << ::number << endl;
	return 0;
}

void trick::print_number()
{
	cout << "Printing from print_number(): " << number << endl;
}
