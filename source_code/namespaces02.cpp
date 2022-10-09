// namespaces02.cpp (a simple example with variables)

#include <iostream>
#include <string>

using namespace std;

namespace Athens{
    string x = "tyropita";
}

namespace Thessaloniki{
    string x = "mpougatsa me tyri";
}

int main1()
{
    cout << "I want " << Athens::x << " please" << endl;
    cout << "I want " << Thessaloniki::x << " please" << endl;

    return 0;
}
