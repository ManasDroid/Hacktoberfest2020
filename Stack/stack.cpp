#include <iostream>
#include <stack>
using namespace std;
void sort_stack(stack<int> &s)
{
    int v0, v1, min;
    stack<int> t, t1;
    v0 = s.top();
    s.pop();
    if(s.empty())
  {                                                         
                                        // do not need sort if one element 
         s.push(v0);
        return;
    }

s.push(v0);
while(!s.empty())
{
v0 = s.top();
s.pop();
t.push(v0);
    }
 while(!t.empty())
  {
        min = t.top();
        t.pop();
        t1.push(min);

        while(!t.empty())
         {
            v0  = t.top();
            t.pop();

            if(v0 < min)
           {
                min = v0;
            }

        t1.push(v0);                                  // reserve a copy
        }

 while(!t1.empty())
{
 v0 = t1.top();
  t1.pop();  
    if(min == v0)
   {
     s.push(v0);
       }
else
{
   t.push(v0);
  }
      }
   }
}

void sort_stack1(stack<int> &s)
{
    int v, min;
    stack<int> t;
    while(!s.empty())
     {
        v = s.top();
        s.pop();
        t.push(v);
    }
    while(!t.empty())
    {
        min = t.top();
        t.pop();

        while((!s.empty()) && (s.top() > min))
          {
            v = s.top();
            s.pop();
            t.push(v);
      }
    s.push(min);
    }
}

int main(int argc, char* argv[])
{
 stack<int> s;
int n,p;
cout<<"ENTER TILL THE AMOUNT OF NUMBERS YOU WANT TO SORT:"<<endl;
cin>>n;
for(int i=0;i<n;i++)  
{
 cout<<"Enter the number:"<<endl;
cin>>p;
s.push(p);
 }
sort_stack1(s);
while(!s.empty())
{
        int v;
        v = s.top();
        s.pop();
       cout << v << endl;
 }
 return 0;
}
