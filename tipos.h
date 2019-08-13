#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tipoElemento
{
	int valor;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoFila
{
	TElemento *inicio;
	TElemento *fim;
}TFila;

void enfileirar(TFila *p);
void apresentar(TFila *p);
void consultar(TFila *p);
void inicializar(TFila *p);
void desenfileirar(TFila *p);

#endif


