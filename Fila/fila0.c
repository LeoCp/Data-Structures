/*********************************************
* fila0.c
* Leonardo Colodette
* CC3M - Ciencia da Computação - UVV
* FIFO
********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fila1.c"

//Declaração de funções//
void menu();
////////////////////////////


int 
main(void){

//Variaveis//////
	FIFO *x;
	int op,y,k;
////////////////

	do{

		system("clear");
		menu();	
		printf("Digite a opção:");
		scanf("%d",&op);
		
		switch(op){
	
			case 1:
				
				system("clear");
				menu();
				printf("Digite o tamanho da fila:");scanf("%d",&y);
				x = CriarFila(y);
			
			break;

			case 2:
				system("clear");
				menu();
				printf("Insera o valor:");
				scanf("%d", &k);
				InseriFila(x,k);
			
			break;
		
			case 3:

				system("clear");
				menu();
				printf("Valor retirado: %d\n", RetirarFila(x));
				sleep(4);
			
			break;

			case 4:
				system("clear");
				menu();
				printf("Valores na fila:\n");
				MostraFila(x);
				sleep(5);			
			
			break;

			case 5:
				
				system("clear");
				printf("Saindo..\n");
			
			break;
		
			default:
			
				
			
			break;

		}
	
	}while(op != 5);

return 0;

}

///Função menu/////////////////////////////////////////////////////////////////////////////////////////////
void menu(){

	printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\tBEM VINDO A FILA DO SUS :]          \n");
	printf("------------------------------------------\n");
	printf(" 1 - Criar fila\n 2 - Inserir na fila \n 3 - Retira da fila\n 4 - Mostra Fila\n 5 - SAIR\n");
	printf("++++++++++++++++++++++++++++++++++++++++++\n");

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////

