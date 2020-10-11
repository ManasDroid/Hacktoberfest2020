#include <iostream>
#include <chrono>
using namespace std;
struct node
{
    long long int data;
    struct node *next;
};
typedef struct node *nodeptr;
struct queues
{
    nodeptr front;
    nodeptr rear;
};

nodeptr getNode(long long int item)
{
    nodeptr p = (nodeptr)malloc(sizeof(struct node));
    p->data = item;
    p->next = NULL;
    return p;
}
void enqueue(long long int item, queues *q1)
{
    nodeptr p = getNode(item);
    if (p == NULL)
    {
        cout << "OVERFLOW" << endl;
    }
    else if (q1->rear == NULL)
    {
        q1->rear = p;
        q1->front = p;
    }
    else
    {
        q1->rear->next = p;
        q1->rear = p;
    }
}
void dequeue(queues *q1)
{
    long long int item;
    if (q1->front == NULL)
    {
        cout << "UNDERFLOW" << endl;
    }
    if (q1->front == q1->rear) //DELETION WHEN ONLY ONE NODE IS LEFT
    {
        item = q1->front->data;
        free(q1->front);
        q1->front = NULL;
        q1->rear = NULL;
        cout << item << " HAS BEEN DELETED" << endl;
    }
    else
    {
        nodeptr temp = q1->front;
        item = temp->data;
        q1->front = q1->front->next;
        free(temp);
        cout << item << " HAS BEEN DELETED" << endl;
    }
}
void display(queues *q1)
{
    nodeptr temp = q1->front;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    struct queues q1;
    q1.front = NULL;
    q1.rear = NULL;
    long long int choice, item, i;
    for (i = 1; i; i++)
    {
        cout << "1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "ENTER ELEMENT TO BE INSERTED: ";
            cin >> item;
            enqueue(item, &q1);
            break;
        case 2:
            dequeue(&q1);
            break;
        case 3:
            display(&q1);
            break;
        case 4:
            return 0;
            break;
        }
    }
    return 0;
}
