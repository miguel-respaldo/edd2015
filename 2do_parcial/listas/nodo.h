#ifndef _NODO_H_
#define _NODO_H_

struct nodo {
	/* Valor del Nodo */
	int val;
	/* Puntero que "apunta" al siguiente nodo */
	struct	nodo * sig;
};

#endif
