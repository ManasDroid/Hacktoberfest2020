#include <iostream>
using namespace std;

struct node{
int data;
node *next;
};
struct node*f=NULL;
struct node*r=NULL;

void enque(int x)
{
    node *t;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(f==NULL)
        f=r=t;
    else
    {
        r->next=t;
        r=t;
    }

}

int dequeue()
{
    int x;
    struct node*t;
    t=f;
    if(f==NULL)
    {
        cout<<"The Queue is empty"<<endl;
         return -1;
    }
    else
    {
        f=f->next;
        x=t->data;
        delete t;
    }
    return x;
}

void show()
{
    struct node*s=f;
    if(f==NULL)
        cout<<"Queue empty"<<endl;
    while(s!=NULL)
    {
        cout<<s->data<<" ";
        s=s->next;
    }
}

int main()
{
    int x=0,y;
    cout<<"QUEUE USING LINKED LIST"<<endl<<endl;
    cout<<"Choice of operations : "<<endl;
    cout<<"1.Insert element"<<endl;
    cout<<"2.Delete element"<<endl;
    cout<<"3.View Queue"<<endl;
    cout<<"4.Exit"<<endl;
    while(x!=4)
    {
        cout<<"Enter choice : ";
        cin>>x;
        if(x==1)
        {
            cout<<"Enter element to be added : ";
            cin>>y;
            enque(y);
        }
        else if(x==2)
        {
            y=dequeue();
            if(y!=-1)
            cout<<"The removed element is "<<y<<endl;
            else
            cout<<"Nothing to remove"<<endl;
        }
        else if(x==3)
        {
            cout<<"The queue is : ";
            show();
            cout<<endl;
        }

        else if(x==4)
            break;
        else
            cout<<"Enter a valid choice"<<endl;
    }

    cout<<"Exiting...Thank you"<<endl;

    return 0;
}
