/*********************************************
* pilha0.c
* Leonardo Colodette
* CC3M - Ciencia da Computação - UVV
* PILHA
*******************************************/

#include <stdio.h>
#include <stdlib.h>
#include "pilha1.c"



//Funções//////////
void show(void);
///////////////////

main(){

int q = 9, op,z,w;
PILHA *p;

do{
	
	system("clear");
	show();
	printf("Digite a opcao:");
	scanf("%d",&op);
	
	switch(op){
		
		case 1:
			printf("Digite o tamanho da pilha:\n");scanf("%d",&z);
		 	p = CriarPilha(z);
		break;

		case 2:
			printf("Inserindo..\n");
			scanf("%d",&w);
			InserirPilha(p,w);
		break;

		case 3:
			printf("Valor retirado:%d\n",RetirarPilha(p));
			sleep(4);
		break;

		case 4:
			MostrarPilha(p);
			sleep(5);
		break;

		case 5:
			printf("Saindo\n");
		break;

	}

}while(op != 5);

return 0;

}

void
show(void){
	printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\t         PILHA :]          \n");
	printf("------------------------------------------\n");
	printf(" 1 - Criar uma pilha\n 2 - Inserir  \n 3 - Remover\n 4 - Mostra \n 5 - SAIR\n");
	printf("++++++++++++++++++++++++++++++++++++++++++\n");

}
