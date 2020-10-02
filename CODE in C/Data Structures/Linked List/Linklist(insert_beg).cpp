#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start,*np,*ptr,*save;

node *create(int value)
{
	np=(struct node*)malloc(sizeof(struct node));
	np->data=value;
	np->next=NULL;
	return np;
}

void insert_beg(node *ptr)
{
	if(start==NULL)
	start=ptr;
	else
	{
		ptr->next=start;
		start=ptr;
	}
}

void display(node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}

int main()
{
	int value;
	char ch;
	do
	{
		scanf("%d",&value);
		np=create(value);
		insert_beg(np);
		printf("Now the list is: ");
		display(start);
		printf("Wanna enter more(y/n): ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
}
