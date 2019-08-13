#include "tipos.h"

void consultar(TFila *p)
{
	int valorConsulta;
	
	printf("\n Informe valor para consulta: ");
	scanf("%d", &valorConsulta);
	
	TElemento *aux;
	aux = p->inicio;
	
	while (aux != NULL)
	{
		if (valorConsulta == aux->valor)
		{
			printf("\n Encontrou valor: %d", aux->valor);
			break;
		}
		else
		{
			aux = aux->proximo;
		}
	}
	
	if (aux == NULL)
	{
		printf("\n Valor nao encontrado!");
	}
	getch();	
}
