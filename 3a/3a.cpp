// 3a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float km;
    cout << "Ingrese la velocidad en km/h" << endl;
    cin >> km;

    cout << "La velocidad en m/s es: " << (km * 1000) / 3600 << endl;
}


