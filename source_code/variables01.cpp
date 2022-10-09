// variables01.cpp : int, char, string

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int birth_year;
    char ch;
    string name = "temporary";

    cout << "Write your name: \n";
    cin >> name;

    cout << "Enter your (real) year of birth: \n";
    cin >> birth_year;

    cout << "Your name is " << name << " and you are " << 2022 - birth_year << " years old\n";
    
    ch = name[0];
    cout << "Your name's first letter is: " << ch;

    return 0;
}
