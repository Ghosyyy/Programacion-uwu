// ayuda 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad;
	cout << "Hola, ingresa tu edad:  ";
	cin >> edad;
	if (edad >= 18) {
		cout << "Usted tiene mas de 18 years"; 
		}
	else {
		cout << "Usted es menor de edad";
	}
	return 0;
	
	}