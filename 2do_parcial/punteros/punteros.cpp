#include <iostream>

using namespace std;

int main()
{
	int tamano;
	int *arreglo;
	int contador;

	cout << "Tamaño del arreglo: ";
	cin >> tamano;

	// Reserva el tamaño en bytes
	arreglo = new int[tamano];

	for (contador = 0; contador < tamano; contador++) {
		arreglo[contador] = contador + 1;
	}

	cout << "El arreglo es: ";
	for (contador = 0; contador < tamano; contador++) {
		cout << arreglo[contador] << ", ";
	}
	cout << endl;

	delete [] arreglo;
	return 0;
}
