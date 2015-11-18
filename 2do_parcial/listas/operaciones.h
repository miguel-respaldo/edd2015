#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo);

void insertar_al_final(struct nodo *cabecera, int valor_nuevo);

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes);

void imprimir_lista(struct nodo *cabecera);

void borrar_lista(struct nodo *cabecera);

void inicializar(struct nodo *cabecera);

#endif
