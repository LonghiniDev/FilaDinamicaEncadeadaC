#include "tipos.h"

void enfileirar(TFila *p)
{
	TElemento *novo;
	
	//novo = (TElemento*) malloc(sizeof(TElemento));
	novo = new TElemento;
	
	printf("\n Informe valor: ");
	scanf("%d", &novo->valor);
	novo->proximo = NULL;
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		p->fim->proximo = novo;
		p->fim = novo;
	}
}
