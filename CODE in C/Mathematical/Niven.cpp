#include <bits/stdc++.h> 
using namespace std; 

// A Niven number is one in which the sum of the digits is divisible by n  
bool checkNiven(int n) 
{ 
    // calculate sum of digits 
    int sum = 0; 
    for (int temp = n; temp > 0; temp /= 10) 
        sum += temp % 10; 
  
    // Return true if it is a Niven number
    return (n % sum == 0); 
} 
  
int main() 
{ 
    int n;
    cout<<"Program to check if it is a Niven number \nEnter a number : ";
        cin>>n;
    bool result = checkNiven(n);
    if(result)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0; 
} 