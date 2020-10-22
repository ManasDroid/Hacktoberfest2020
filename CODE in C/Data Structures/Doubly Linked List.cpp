#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}node;

node* alloc(int val){//Allocate node for Doubly Linked List
    node* newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->data = val;
    return newnode;
}

node* push(node* head,int val){//Push in to the front of list
    if(head == NULL){//Handle case for first insertion
        node* newnode = alloc(val);
        head = newnode;
    }
    else{//Push into the front and readjust head after pointing previous of head to newnode
        node* newnode = alloc(val);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    return head;
}

void traverse(node* head){//Traverse the list until NULL
    node* current = head;
    if(head==NULL){//If no node present
        cout<<"Underflow - no nodes present"<<endl;
        return;
    }
    cout<<"The current stack is "<<endl;
    while(current!=NULL){//While not NULL traverse the list
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}

node* pop(node* head){
    if(head==NULL){//Handle when no nodes present
        cout<<"Underflow -  no nodes present"<<endl;
    }
    else if(head->next==NULL){//Handle when only one node present
        node* temp = head;
        head = NULL;
        free(temp);
    }
    else{//Else move the head by one node
        node* temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    return head;
}

void peek(node* head){//Show the topmost element
    if(head==NULL){//When no node present
        cout<<"Underflow -  no nodes present"<<endl;
    }
    else {//Show the data of head
        cout<<"The topmost element of the stack is : "<<head->data<<endl;
    }
}

int main(){
    node* head=NULL;
    long int i,n,k;
    cout<<"-------- Choose any number from the below sequence -------------"<<endl;
    cout<<" 1. Insert into stack "<<endl;
    cout<<" 2. Delete from stack "<<endl;
    cout<<" 3. Peek "<<endl;
    cout<<" 0. exit"<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    while(true){
        cout<<"Enter next choice : ";
        cin>>i;
        switch(i){
            case 0:
                break;
            case 1:
                cout<<"Enter a value to push into stack : ";
                cin>>n;
                head = push(head,n);
                traverse(head);
                break;
            case 2:
                head = pop(head);
                traverse(head);
                break;
            case 3:
                peek(head);
                break;
            default:
                cout<<"Enter a valid choice"<<endl;
        }
        if(i==0)
            break;
    }
return 0;
}
