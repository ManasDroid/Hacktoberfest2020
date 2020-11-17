//This is a program to find GCD of n numbers.

#include <bits/stdc++.h>
using namespace std;

//Writing the code for calculating GCD of two numbers.
int hcf(int a, int b){
if(a>b){
  if(b==0){return a;}
  else{return hcf(b,a%b);}
}else{
  if(a==0){return b;}
  else{return hcf(a,b%a);}
}
}

int main() {
int n,i,x,g;
cout<<"GCD of how many numbers do you want to find ?\n";
cin>>n;
vector<int> a;
cout<<"Enter the numbers now:\n";
//Taking in the values for calculating GCD.
for(i=0;i<n;i++){
    cin>>x;
    a.push_back(x);
}
//Calculating the GCD.
g = a[0];
for(i=1;i<n;i++){
    g = hcf(a[i],g);
}
//Printing out the result.
cout<<"The GCD of the given numbers is "<<g;
return 0;
}
