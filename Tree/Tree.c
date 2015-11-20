/********************************
* Leonardo Colodette
* SCIENCE COMPUTER - UVV - 2015
* Example of the tree in c 
*********************************/
#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *father;
	struct node *left;
	struct node *right;
};

typedef struct node Node;

//Functions
Node* newNode(int);
Node* addNode(Node*,Node*);
void showNode(Node*);
void showTree(Node*);
int height(Node*);
int weight(Node*);

main(){
	Node *x = NULL;
	int y;
	
	scanf("%d",&y);
	while(y != 0){
		x = addNode(x,newNode(y));
		scanf("%d",&y);
	}
	showTree(x);
}

Node* newNode(int value){
	Node *n = (Node*) malloc (sizeof(Node));
	n->value = value;
	n->father = NULL;
	n->left = NULL;
	n->right = NULL;	
	return n;
}

Node* addNode(Node *root ,Node *new){
	if(root == NULL) return new;
	
	if(root->value > new->value){
		new = addNode(root->left,new);
		root->left = new;
	}else{
		new = addNode(root->right,new);
		root->right = new;
	}	

	new->father = root;
	return root; 
}

void showNode(Node *root){
	printf("%d\n",root->value);
}

void showTree(Node *root){
	if(root != NULL){
		showTree(root->left);
		showNode(root);
		showTree(root->right);
	}

}
int height(Node*);
int weight(Node*);
