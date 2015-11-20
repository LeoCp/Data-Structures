/*************************************
* Leonardo Colodette
* SinglyLinkedList + SelectionSort
************************************/
#include <stdio.h>
#include <stdlib.h>

struct node{
  int value;
  struct node *next;
};

typedef struct node Node;

//Functions
Node *newNode(int);
Node *addNode(Node*,Node*);
void showNode(Node*);
void showList(Node*);
void selectionSort(Node*);
//removeNode
//alterNode
//searchNode

main(){

  Node *x = NULL;
  int y;

  scanf("%d",&y);
  while(y != 0){
    x = addNode(x,newNode(y));
    scanf("%d",&y);
  }

showList(x);
}

Node *newNode(int number){
  Node *x = (Node*) malloc (sizeof(Node));
  x->value = number;
  x->next = NULL;
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
  return root;
}

void showNode(Node *node){
  printf("%d\n",node->value);
}

void showList(Node *z){
  if(z != NULL){
    showNode(z);
    showList(z->next);
  }
}

void selectionSort(Node *s){
/*CODE*/

}
