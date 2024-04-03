// Swtiches.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ponga un numero: ";
    cin >> numero;

    switch (numero) {
    case 1:
    case 3:
        cout << "Area comun" << endl;
        break;
    case 5:
    case 7:
        cout << "Area especifica" << endl;
        break;
    default:
        cout << "No nos encontramos en ese semestre" << endl;
        break;
    }

    return 0;
}


