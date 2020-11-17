#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n>=0) cout<<"Factorial of number is "<<fact(n)<<endl;
    else cout<<"There is no factorial for negative numbers"<<endl;
}