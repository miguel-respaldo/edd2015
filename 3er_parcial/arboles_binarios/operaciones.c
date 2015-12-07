#include "operaciones.h"

void insertar(struct nodo **arbol, int valor)
{
	if (*arbol == NULL) {
		*arbol = (struct nodo*) malloc(sizeof(struct nodo) * 1);

		(*arbol)->dato = valor;
		(*arbol)->izq = NULL;
		(*arbol)->der = NULL;

		return;
	}

	if (valor < (*arbol)->dato) {
		insertar( &((*arbol)->izq), valor);
	} else {
		insertar( &((*arbol)->der), valor);
	}
}
