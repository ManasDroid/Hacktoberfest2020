#include<stdio.h>
#include<stdlib.h>
struct Queue
{
int num;
struct Queue *next;
}*queueRear,*queueFront;
void addToQueue(int num)
{
struct Queue *t;
t=(struct Queue*)malloc(sizeof(struct Queue*));
t->num=num;
t->next=NULL;
if(queueRear==NULL)
{
queueRear=t;
queueFront=t;
}
else
{
queueRear->next=t;
queueRear=t;
}
printf("%d is add to queue\n",num);
}
void removeFromQueue()
{
if(queueRear==NULL)
{
printf("Yet no element add to queue\n");
return;
}
struct Queue *t;
t=queueFront;
queueFront=queueFront->next;
if(queueFront==NULL)queueRear=NULL;
printf("%d is remove from queue\n",t->num);
free(t);
}
int isQueueEmpty()
{
return queueRear==NULL;
}
void displayTheListOfElement()
{
if(queueRear==NULL)
{
printf("Yet No element add to queue\n");
return;
}
int num;
struct Queue *t;
t=queueFront;
while(t!=NULL)
{
printf("%d\n",t->num);
t=t->next;
}
}
int main()
{
queueRear=NULL;
queueFront=NULL;
int ch,num;
while(1)
{
printf("1.add to queue\n");
printf("2.remove from queue\n");
printf("3.display the element of queue\n");
printf("4.exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("Enter the number to be add to queue:");
scanf("%d",&num);
fflush(stdin);
addToQueue(num);
}
else if(ch==2)
{
removeFromQueue();
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