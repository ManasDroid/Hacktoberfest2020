#include <iostream>
using namespace std;
struct Node 
{
 int data;
 struct Node *next;
};
struct Node * top = NULL;
void push(int value)
 {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = value;
   newnode->next = top;
   top = newnode;
}
void pop() 
{
   if(top==NULL) 
{
 cout<<"Stack Underflow"<<endl;
}
 else 
{
 cout<<"The popped element is "<< top->data <<endl;
   top = top->next;
   }
}
void display()
 {
  struct Node* ptr;
  if(top==NULL)
  cout<<"stack is empty";
  else 
{
   ptr = top;
   cout<<"Stack elements are: ";
   while (ptr != NULL) 
{
    cout<< ptr->data <<" ";
    ptr = ptr->next;
  }
 }
  cout<<endl;
}
int main() 
{
   int ch, value;
   cout<<"1. Push in stack"<<endl;
   cout<<"2. Pop from stack"<<endl;
   cout<<"3. Display stack"<<endl;
   cout<<"4. Exit"<<endl;
   do 
{
  cout<<"Enter choice: "<<endl;
  cin>>ch;
  switch(ch) 
{
  case 1: 
{
    cout<<"Enter value to be pushed:"<<endl;
     cin>>value;
    push(value);
    break;
     }
   case 2:
 {
       pop();
       break;
   }
   case 3: 
    {
    display();
     break;
         }
   case 4: 
{
     cout<<"Exit"<<endl;
     break;
    }
 default: 
{
   cout<<"Invalid Choice\n"<<endl;
   }
    }
  }while(ch!=4);
  return 0;
}
