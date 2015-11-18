#ifndef _NODO_H_
#define _NODO_H_

struct nodo {
	/* Valor del Nodo */
	int val;
	/* Puntero que "apunta" al siguiente nodo */
	struct	nodo * sig;
	/* Puntero que "apunta" al nodo anterior */
	struct	nodo * ant;
};

/*
typedef int entero;
typedef struct nodo NODO;
typedef struct nodo *PNODO;

typedef struct {
	/// Valor del Nodo 
	int val;
	// Puntero que "apunta" al siguiente nodo 
	struct	nodo * sig;
	// Puntero que "apunta" al nodo anterior 
	struct	nodo * ant;
} NODO, *PNODO;

NODO lista;
PNODO plista;

NODO *plista2;
PNODO plista2;

---  nodo lista4;

entero a, b;
a = 4;
b= 5;

*/

#endif










