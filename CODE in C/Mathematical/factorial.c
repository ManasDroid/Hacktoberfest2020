#include<stdio.h>
int factorial(int n)
{
    if(n==0)
        return 1;
    else if(n==1)
    {
        return 1;
    }
    else return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("Factorial of %d is %d ",n,fact);
    return 0;
}
