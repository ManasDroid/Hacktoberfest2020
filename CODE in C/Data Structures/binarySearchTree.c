#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  node *left;
  node *right;
} node;

node *newNode(int value){
  node *n = (node*) malloc(sizeof(node));
  n->left = NULL;
  n->right = NULL;
  n->data = value;
  return n;
}

node* insert(node *n, int data){
  if(!n){
    return newNode(data);
  }
  if(n->data > data){
    node->left = insert(n->left, data);
  }
  else if(n->data > data){
    node->right = insert(n->right, data);
  }
  return n;
}
void inorder(node *n){
  if(n){
    inorder(n->left);
    printf("%d ",n->data);
    inorder(n->right);
  }
}


void main(){
  node *root = NULL;
  for(int i=0;i<10;i++){
    root = insert(root, rand()%200);
  } 
  printf("The inorder traversal of the tree is ");
  inorder(root);
}







