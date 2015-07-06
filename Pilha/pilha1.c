/*********************************************
* pilha1.c
* Leonardo Colodette
* CC3M - Ciencia da Computação - UVV
* TAD PILHA
*******************************************/

struct pilha{
	int *v;
	int topo;
	int tamanho;
};

typedef struct pilha PILHA;

PILHA *CriarPilha(int);
void InserirPilha(PILHA*,int);
void MostrarPilha(PILHA*);
int RetirarPilha(PILHA*);

PILHA *CriarPilha(int x){
	
	PILHA *y;
	y =  (PILHA*) malloc( sizeof(PILHA));
	y->v = (int*) malloc(x * sizeof(int));
	y->topo = 0;
	y->tamanho = x;
}	

void InserirPilha(PILHA *x, int y){

    if(x->topo < x->tamanho){
	
		x->v[x->topo] = y;
		x->topo++;
	
	}

}

void MostrarPilha(PILHA *w){
	int i;
	for (i = 0; i < w->tamanho; ++i){
		printf("%d\n",w->v[i]);
	}
}


int RetirarPilha(PILHA *d){

	int r =  d->v[d->tamanho-1];
	d->tamanho--;
	return r;

}


