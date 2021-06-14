// 3b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    float  m1, m2, b1, b2;
    cout << "Ingrese pendiente 1: " << endl;
    cin >> m1;
    cout << "Ingrese pendiente 2: " << endl;
    cin >> m2;
    cout << "Ingrese ordenada 1: " << endl;
    cin >> b1;
    cout << "Ingrese ordenada 2: " << endl;
    cin >> b2;

    if (m1 == m2 && b1 == b2) {
        cout << "Las rectas son iguales, por lo tanto la intersección es la recta." << endl;
    }
    else {
        if (m1 == m2 && b1 != b2) {
            cout << "Son paralelas, por lo tanto no hay intersección." << endl;
        }
        else {
            float px = (b1 - b2) / (m2 - m1);
            float py = (m1 * px) + b1;
            cout << "Son perpendiculares y el punto de intersección es: (" << px << ", " << py << ")" << endl;
        }
    }
}


