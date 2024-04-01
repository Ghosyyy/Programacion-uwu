// mayor a 100 o no.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int numero1;
	int numero2;
	cout << "Ingrese un 1er numero";
	cin >> numero1;
	cout << "Ingrese un 2do numero";
	cin >> numero2;

	int resultado;
	resultado = numero1 * numero2;
	if (resultado > 100)
	{
		cout << "El resultado es mayor a 100";
	}
	else {
		cout << "El resultado es menor a 100";
	}
	return 0;
}