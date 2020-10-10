#include<stdio.h>
#include<stdlib.h>
struct Stack
{
int num;
struct Stack *next;
}*stackStart;
void pushOnStack(int num)
{
struct Stack *t;
t=(struct Stack*)malloc(sizeof(struct Stack*));
t->num=num;
t->next=stackStart;
stackStart=t;
printf("%d is push on stack\n",num);
}
void popFromStack()
{
if(stackStart==NULL)
{
printf("Yet no element push on stack\n");
return;
}
struct Stack *t;
t=stackStart;
stackStart=stackStart->next;
printf("%d is pop from stack\n",t->num);
free(t);
}
int isStackEmpty()
{
return stackStart==NULL;
}
void displayTheListOfElement()
{
if(stackStart==NULL)
{
printf("Yet No element push on stack\n");
return;
}
int num;
struct Stack *t;
t=stackStart;
while(t!=NULL)
{
printf("%d\n",t->num);
t=t->next;
}
}
int main()
{
stackStart=NULL;
int ch,num;
while(1)
{
printf("1.push on stack\n");
printf("2.pop from stack\n");
printf("3.display the element of stack\n");
printf("4.exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("Enter the number to be push on stack:");
scanf("%d",&num);
fflush(stdin);
pushOnStack(num);
}
else if(ch==2)
{
popFromStack();
}
else if(ch==3)
{
displayTheListOfElement();
}
else if(ch==4)
{
break;
}
}
return 0;
} 