// namespaces03.cpp (an example with using)

#include <iostream>
#include <string>

using namespace std;

namespace Athens {
    string x = "tyropita";
}

namespace Thessaloniki {
    string x = "mpougatsa me tyri";
}

int main()
{
    using namespace Thessaloniki;
    
    cout << "I want " << x << " please" << endl;

    return 0;
}
