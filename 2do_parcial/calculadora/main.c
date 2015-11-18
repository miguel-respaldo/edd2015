#include <stdio.h>
#include "funciones.h"

enum operaciones {
	SUMA = 1,
	RESTA,
	MULTIPLICACION,
	DIVISION
};

void imprime_menu()
{
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicación\n");
	printf("4. División\n");
	printf("5. Salir\n\n");
	printf("Opcion: ");
}

void introducir_datos(float *num1, float *num2)
{
	float num;
	printf("Introduce el primer numero: ");
	scanf("%f", &num);
	*num1 = num;
	printf("Introduce el segundo numero: ");
	scanf("%f", &num);
	*num2 = num;
}

void imprimir_resultado(float res)
{
	printf("El resultado es: %5.2f\n\n",res);
}

int main()
{
	int opcion;
	float numero1;
	float numero2;
	float resultado;
	printf("Programa calculadora\n");
	do {
		imprime_menu();
		scanf("%d",&opcion);
		switch(opcion) {
			case SUMA:
				introducir_datos(&numero1, &numero2);
				resultado = suma(numero1, numero2);
				imprimir_resultado(resultado);
				break;
			case RESTA:
				break;
			case MULTIPLICACION:
				break;
			case DIVISION:
				break;
			default:
				break;
		}

	} while (opcion != 5);
	return 0;
}






