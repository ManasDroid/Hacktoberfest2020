// this program is an implementation of stacks using arrays.
#include <iostream>
#include <stdio.h>
using namespace std;

class stac {
    int top;
    int st[5];

public:
        stac () {
        top = -1;
        }

        void push();  //pushes element into stack
        void pop();   //pops last element from stack
        void display(); //displays all the elements from stack
};
void stac::push(){
    int element;
    if(top == 4 ){
        cout << "Stack Overflow";
        return;
    }
    cout << "Enter the element: ";
    cin >> element;
    st[++top] = element;
}
void stac::pop(){
    int element;
    if(top == -1){
        cout << "Stack Underflow";
        return;
    }
    cout << st[top--] << endl;
}
void stac::display() {
    int ele;
    for(int i = 0; i<= top; i++){
        cout << st[i]<< "\t";
    }
    cout << endl;
}
int main(){
    stac s;
    int ch;
    do {
    cout << "1. Push \t 2. Pop \t 3.Display \t 0.Exit" << endl;

    cin >> ch;
    switch(ch){
        case 1: s.push(); break;
        case 2: s.pop(); break;
        case 3: s.display(); break;
        case 0: break;
        default: cout<< "ERROR";
    }

    } while (ch != 0);
}
