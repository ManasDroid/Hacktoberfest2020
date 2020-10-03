#include<iostream>
using namespace std;


class stack{
     int top;
     char arr[10];
  public:
     stack()
     {
         top=-1;
         for(int i=0;i<10;i++)
         {
             arr[i]=0;
         }

     }
      bool isempty()
      {
          if(top==-1)
            return true;
          else
            return false;
      }
      bool isfull()
      {
          if(top==9)
           return true;
        else
           return false;
      }
      void push(char item)
      {
         if(isfull())
         {
             cout<<"Stack overflow"<<endl;
         }
         else
         {
             top=top+1;
             arr[top]=item;
         }
      }
      int pop()
      {
          if(isempty())
          {
              cout<<"Stack underflow"<<endl;
          }
          else
          {
              char x=arr[top];
              top--;
              return x;
          }
      }
};

int main()
{
    stack s;
    char string[10];
    cout<<"Enter the string"<<endl;
    cin>>string;
    cout<<string<<endl;
    cout<<"After reversing"<<endl;
    for(int i=0;i<10;i++)
    {
        s.push(string[i]);
    }
    for(int i=0;i<10;i++)
    {
        string[i]=s.pop();
    }
    for(int i=0;i<10;i++)
    {
        cout<<string[i];
    }
    return 0;
}
