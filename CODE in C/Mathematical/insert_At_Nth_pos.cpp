#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next; 
};

struct Node* head;

void Insert(int x){
	
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	struct Node* curr =head;
	if(head == NULL)
		head = temp;
	else{
		while(curr->next != NULL){
			curr=curr->next;
		}
		curr->next=temp;
	}

}


void print(){
	struct Node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void InsertAt(int pos,int num){
	struct Node* curr = head;
	struct Node* next;
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data=num;
	while((pos-1)-->1){
		curr = curr->next;
	}
	next = curr->next;
	curr->next=temp;
	temp->next=next;
}
int main(){
	
	printf("Number of elements to be taken in the linked list\n");
	int n;
	scanf("%d",&n);
	int i,x;
	printf("Enter the elements to be inserted in the linked list\n");
	for(i=0; i<n; i++){
		scanf("%d",&x);
		Insert(x);
	}
	
	print();
	printf("Position where the new node is to be inserted :");
	int pos,num;
	scanf("%d",&pos);
	InsertAt(pos,num);
	print();
	
}
