// resta de numeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int numero1;
	int numero2;
	cout << "Ingrese un primer numero";
	cin >> numero1;
	cout << "Ingrese un segundo numero";
	cin >> numero2;

	int resultado;
	resultado = numero1 - numero2;
	if (resultado > 0)
	{
		cout << "El resultado es positivo";
	}
	else {
		if (resultado < 0);
		cout << "El resultado es negativo";
	}
	return 0;
}

