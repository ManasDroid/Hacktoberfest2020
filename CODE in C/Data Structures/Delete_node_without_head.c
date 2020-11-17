#include<stdio.h>
#include<stdlib.h>
struct linked{
	int data;
	 struct linked *next;
};
typedef struct linked l;
l *start ,*node,*temp;
void traversal()
{	l *s=start;
		printf("\nList is: ");
	while(s!=NULL)
	{
		printf("%d  ",s->data);
		s=s->next;
		
	}
	printf("\n");
}
void insert_begn(int newdata){
	node=(l*)malloc(sizeof(l));
	node->data=newdata;
	node->next=start;
	start=node;
}
void insert_end(int newdata)
{
	l *p=start;
	node=(l*)malloc(sizeof(l));
	node->data=newdata;
	node->next=NULL;
	while(p->next!=NULL)
	p=p->next;
	p->next=node;
}

void deleteNodeWithoutHead(l *pos)
{
    if (pos == NULL) // If linked list is empty 
        return; 
    else { 
  
        if (pos->next == NULL) { 
            printf("This is last node, require head, can't be freed\n"); 
            return; 
        } 
  
        temp = pos->next; 
  
        // Copy data of the next node to current node 
        pos->data = pos->next->data; 
  
        // Perform deletion 
        pos->next = pos->next->next; 
  
        free(temp); 
    } 
} 
  
int main(){
int k,r;
start=NULL;
printf("options:\n1 for traversal\n2 for insert at begin\n3 for insert at end\n4 To perform deletion without using head pointer\n");
printf("_______________\n");
int op;
do{scanf("%d",&op);
switch(op)
{
case 1:
	traversal();
		break;
case 2:
	scanf("%d",&k);
	insert_begn(k);
	traversal();
		break;
case 3:
	scanf("%d",&k);
	insert_end(k);
	traversal();
		break;
	
}
}while(op!=4);
//now delete second element without heador pass the node which u want to delete
l *del=start->next;
deleteNodeWithoutHead(del);
traversal();
return 0;
}

