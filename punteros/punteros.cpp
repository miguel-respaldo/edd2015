#include <stdio.h>
#include <stdlib.h>


int main()
{
	int tamano;
	int *arreglo;
	int contador;

	printf("Tamaño del arreglo: ");
	scanf("%d", &tamano);

	// Reserva el tamaño en bytes
	arreglo = (int *) malloc(tamano * sizeof(int));

	for (contador = 0; contador < tamano; contador++) {
		arreglo[contador] = contador + 1;
	}

	printf("El arreglo es: ");
	for (contador = 0; contador < tamano; contador++) {
		printf("%d, ", arreglo[contador]);
	}
	printf("\n");

	free(arreglo);
	return 0;
}
