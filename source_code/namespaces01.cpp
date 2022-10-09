// namespaces01.cpp : a wordy example

#include <iostream>
#include <string>

using namespace std;

namespace Athens
{
    string x = "tyropita";
    void print_cheese_pie()
    {
        cout << "I want " << x << " please" << endl;
    }
}

namespace Thessaloniki
{
    string x = "mpougatsa me tyri";
    void print_cheese_pie()
    {
        cout << "I want " << x << " please" << endl;
    }
}

int main()
{
    Athens::print_cheese_pie();
    Thessaloniki::print_cheese_pie();  

    return 0;
}
