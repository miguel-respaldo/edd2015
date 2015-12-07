#ifndef _NODO_H_
#define _NODO_H_

struct nodo {
	/* Valor del Nodo  es una cadena*/
	char val[10];
	/* Puntero que "apunta" al siguiente nodo */
	struct	nodo * sig;
};

#endif
