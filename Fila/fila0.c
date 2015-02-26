/*********************************************
* Leonardo Colodette
* CC3M - Ciencia da Computação - UVV
* FIFO
********************************************/
#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int
main(void){

	FIFO *x;
	int y;
	printf("\t BEM VINDO :)\n");
	printf("Digite o tamanho da fila:");scanf("%d",&y);
	x = CriarFila(y);
	


return 0;
}