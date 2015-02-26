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

//Declaração de Funções//
int *CriarFila(int);
void LerFila(FIFO*);
////////////////////////


//Função Cria Fila///////////////////////////////
int *CriarFila(int x){

	FIFO *y;
	y = (FIFO*) malloc(sizeof(FIFO));
	y->inicio = -1;
	y->fim = 0;
	y->tamanho = x;
	y->conteudo = (int*) malloc(x*sizeof(int));

}
/////////////////////////////////////////////////

//Função Ler Fila///////////////////////////////

void LerFila(FIFO *z){

}/*********************************************
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

//Declaração de Funções//
int *CriarFila(int);
void LerFila(FIFO*);
////////////////////////


//Função Cria Fila///////////////////////////////
int *CriarFila(int x){

	FIFO *y;
	y = (FIFO*) malloc(sizeof(FIFO));
	y->inicio = -1;
	y->fim = 0;
	y->tamanho = x;
	y->conteudo = (int*) malloc(x*sizeof(int));

}
/////////////////////////////////////////////////

//Função Ler Fila///////////////////////////////

void LerFila(FIFO *z){

}