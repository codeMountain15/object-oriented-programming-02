// make_an_order.cpp : This example explores the include activity
//

#include <iostream>
#include "order.h"

using namespace std;

int main()
{   
    int number_of_souvlakos;

    cout << "Hi there!\n";
    cout << "How many souvlakos do you want?\n";

    cin >> number_of_souvlakos;
    
    pitogyra_num(number_of_souvlakos);
}