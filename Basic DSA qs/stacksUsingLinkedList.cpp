#include <iostream>

using namespace std;
struct node
{
    long long int value;
    struct node *prev;
};
typedef struct node *nodeptr;
nodeptr getNode(long long int item)
{
    nodeptr p = (nodeptr)malloc(sizeof(struct node));
    p->prev = NULL;
    p->value = item;
    return p;
}
nodeptr push(long long int item, nodeptr top)
{
    nodeptr p = getNode(item);
    if (p == NULL)
        cout << "OVERFLOW" << endl;
    else
    {
        p->prev = top;
        top = p;
    }
    return top;
}
nodeptr pop(nodeptr top)
{
    if (top == NULL)
        cout << "UNDERFLOW" << endl;
    else
    {
        long long int item;
        item = top->value;
        nodeptr temp = top;
        top = top->prev;
        free(temp);
        cout << item << " HAS BEEN DELETED" << endl;
    }
    return top;
}
void display(nodeptr top)
{
    nodeptr temp = top;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->prev;
    }
}
int main()
{
    nodeptr top = NULL;
    long long int choice, item, i;
    for (i = 1; i; i++)
    {
        cout << "1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "ENTER ELEMENT TO BE INSERTED: ";
            cin >> item;
            top = push(item, top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            return 0;
        }
    }
    return 0;
}
