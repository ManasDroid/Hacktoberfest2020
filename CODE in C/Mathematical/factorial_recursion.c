#include<stdio.h>
long int factorial(int n){
    if (n<=1)
        return 1;
    else
    {
        return factorial(n-1)*n;
    }
    
}

int main(){
    int n;
    long int fact;
    printf("Enter number : ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("Factorial of %d is %li.\n",n,fact);
}