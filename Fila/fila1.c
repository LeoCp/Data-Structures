/*********************************************
* Leonardo Colodette
* CC3M - Ciencia da Computação - UVV
* TAD FIFO
********************************************/

//Estrutura////////////
struct fifo {
	
	int *conteudo;
	int inicio;
	int fim;
	int tamanho;

};
///////////////////////

//Declarando o apelido///
typedef struct fifo FIFO;
////////////////////////

//Declaração de Funções//////
FIFO *CriarFila(int);
int RetirarFila(FIFO*);
void InseriFila(FIFO*,int);
void MostraFila(FIFO*);
////////////////////////////


//Função Cria Fila///////////////////////////////
FIFO *CriarFila(int x){

	FIFO *y;
	y = (FIFO*) malloc(sizeof(FIFO));
	y->inicio = 0;
	y->fim = -1;
	y->tamanho = x;
	y->conteudo = (int*) malloc(x*sizeof(int));

	return y;

}
/////////////////////////////////////////////////


//Função Inserir Fila///////////////////////////////
void InseriFila(FIFO *z, int w){
		
		z->fim++;
		z->conteudo[z->fim] = w;	
	
}
////////////////////////////////////////////////


//Função Retirar///////////////////////////////
int RetirarFila(FIFO *y){
 		
 		int k;

 		k = y->conteudo[y->inicio];
 		y->inicio++;

 		return k;

}
//////////////////////////////////////////////

//Função Mostra//////////////////////////////
void MostraFila(FIFO *w){

	int i;
	printf("MOSTRANDO..\n");
	for(i = w->inicio; i < w->tamanho; i++){
		printf("%d\n",w->conteudo[i]);
	}
	 

}
/////////////////////////////////////////////