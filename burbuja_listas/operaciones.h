#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void insertar_al_principio(struct nodo *cabecera, float valor_nuevo);

void insertar_al_final(struct nodo *cabecera, float valor_nuevo);

void insertar_despues_de(struct nodo *cabecera, float valor_nuevo, float valor_antes);

void imprimir_lista(struct nodo *cabecera);

void borrar_lista(struct nodo *cabecera);

void inicializar(struct nodo *cabecera);

void borrar(struct nodo *cabecera, float valor_borrar);

void ordenar_burbuja(struct nodo *cabecera);

#endif
