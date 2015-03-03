/*********************************************
* Leonardo Colodette
* CC3M - Ciencia da Computação - UVV
* FIFO
********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "fila1.c"

void menu();

int main(void){
	
	FIFO *x;
	int op,y,k;
	
	do{
		system("clear");
		menu();	
		printf("Digite a opção:");scanf("%d",&op);
		
		switch(op){
	
			case 1:
			
				printf("Digite o tamanho da fila:");scanf("%d",&y);
				x = CriarFila(y);
			
			break;

			case 2:
				
				printf("Inserindo..\n");
				scanf("%d", &k);
				InseriFila(x,k);
			
			break;
		
			case 3:

				RetirarFila(x);
				
			
			break;

			case 4:
				MostraFila(x);
				sleep(5);			
			break;

			case 5:
				
				system("clear");
				printf("Saindo..\n");
			
			break;
		
			default:
			
				printf("AHA!\n");
			
			break;

		}
	
	}while(op != 5);

return 0;
}


void 
menu(){

	printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\tBEM VINDO A FILA DO SUS :]          \n");
	printf("------------------------------------------\n");
	printf(" 1 - Criar fila\n 2 - Inserir na fila \n 3 - Retira da fila\n 4 - Mostra Fila\n 5 - SAIR\n");
	printf("++++++++++++++++++++++++++++++++++++++++++\n");

}