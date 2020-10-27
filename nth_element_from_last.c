#include<stdio.h>
#include <stdlib.h> 
struct Node
{
  int data; 
  struct Node *next;
};

void print(struct Node* head)
{
	struct Node* temp;
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
		
	}
	 
}
 
void element(struct Node* head,int count){
	printf("enter the nth position:\n");
	int n,i=1;
	scanf("%d",&n);
	struct Node* temp;
	temp= head;
	if(n>count)
	{
		printf("Position is invalid.\n");
	}
	else
	{
		while(i<(count-n+1))
		{
		    temp=temp->next;	
			i++;
		}
		printf("\nData in nth node from last is:%d",temp->data);
	 		
	}
}

int main()
{
	struct Node *head,*new_node,*temp;
	int choice=1,count=0;
	head=0;
	while(choice)
	{
		new_node= (struct Node*) malloc(sizeof(struct Node));
	    printf("Enter the number data\n");
	    scanf("%d",&new_node->data);
	    new_node->next=0;
	  
	    if(head==0)
	    {
	    	head=temp=new_node;
	    }
	    else
	    {
		 temp->next= new_node;
		 temp=new_node;
	    }
	    
	    printf("Do you want to continue(1) and exit(0)\n");
	    scanf("%d",&choice);
	    count++;
	}
	
	printf("Element of link-list\n");
	printf("\n------------\n");
	print(head);
	printf("\ncount of number:%d\n",count);
	 
	element(head,count);
	
	
	    
   return 0;	 
   
}

