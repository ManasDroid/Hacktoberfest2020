// CPP program to find sum of first 
// n natural numbers. 
#include<iostream> 
using namespace std; 

// Returns sum of first n natural 
// numbers 
int findSum(int n) 
{ 
int sum = 0; 
for (int x=1; x<=n; x++) 
	sum = sum + x; 
return sum; 
} 

// Driver code 
int main() 
{ 
int n = 5; 
cout << findSum(n); 
return 0; 
} 


// Output : 15 
