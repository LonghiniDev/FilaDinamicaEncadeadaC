#include "tipos.h"

void apresentar(TFila *p)
{
	TElemento *aux;
	aux = p->inicio;
	
	while (aux != NULL)
	{
		printf("\n Valor: %d", aux->valor);
		aux = aux->proximo;
	}
	getch();
}
