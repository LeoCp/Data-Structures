/*****************************
* Leonardo Colodette
* Linked Lists
****************************/
#include <stdio.h>
#include <stdlib.h>

struct node{
  int value;
  struct node *next;
  struct node *prev;
};

typedef struct node Node;

//Functions
Node *newNode(int);
Node *addNode(Node*,Node*);
void showNode(Node*);
void showList(Node*);
void removeNode(Node*,int,int);
void alterNode (Node*,int,int);
void design (int);

main(){

  int m,v,s,r;
  Node *n = NULL;

  while(m != 5){
    system("clear");design(1);
    printf("Opção: ");scanf("%d",&m);

    switch (m) {

      case 1:
        system("clear");design(2);
        printf("Valor: ");scanf("%d",&v);
        n = addNode(n,newNode(v));
      break;

      case 2:
        system("clear");design(3);
        showList(n);design(4);
        printf("Sair[0/1]: ");scanf("%d",&s);
      break;

      case 3:

        system("clear");design(5);
        showList(n);design(4);
        printf("Qual valor? ");scanf("%d",&s);
        printf("Qual indice? ");scanf("%d",&r);

      break;

      case 4:
        printf("op 4\n");
      break;
      case 5:
        printf("Bey\n");
      break;
    }
  }


}

Node *newNode(int number){
  Node *x = (Node*) malloc (sizeof(Node));
  x->value = number;
  x->next = NULL;
  x->prev = NULL;
  return x;
}

Node *addNode(Node *root, Node *next){
  Node *y;
  if(root == NULL) return next;

  y = root;
  while(y->next != NULL){
    y = y->next;
  }
  y->next = next;
  next->prev = y;
  return root;
}

void showNode(Node *node){
  printf("| %d             |\n",node->value);
}

void showList(Node *z){
  if(z != NULL){
    showNode(z);
    showList(z->next);
  }
}
void removeNode(Node *f,int number, int inde){
}
void alterNode (Node *h ,int ant,int nov ){}

void design (int x){
  switch (x) {
    case 1:
      printf("-----------------\n");
      printf("|      Menu     |\n");
      printf("|---------------|\n");
      printf("| 1 - Adicionar |\n");
      printf("| 2 - Mostrar   |\n");
      printf("| 3 - Remover   |\n");
      printf("| 4 - Alterar   |\n");
      printf("| 5 - Sair      |\n");
      printf("-----------------\n");
    break;

    case 2:
      printf("-----------------\n");
      printf("|    Cadastar   |\n");
      printf("-----------------\n");
    break;

    case 3:
    printf("-----------------\n");
    printf("|     Lista     |\n");
    printf("-----------------\n");


    break;
    case 4:
    printf("-----------------\n");
    break;

    case 5:
    printf("-----------------\n");
    printf("|     Remover   |\n");
    printf("-----------------\n");
    break;
  }
}
