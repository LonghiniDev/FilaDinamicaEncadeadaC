#include "tipos.h"

void desenfileirar(TFila *p)
{
	TElemento *aux;
	aux = p->inicio;
	p->inicio = p->inicio->proximo;
	free(aux);
}
