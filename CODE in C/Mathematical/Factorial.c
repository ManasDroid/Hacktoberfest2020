#include<stdio.h>


int fact(int number)
{
   if(number>=1)
   {
       return number * fact(number-1);
   }

   else
   {
       return 1;
   }
}
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    int factorial= fact(n);
    printf("The factorial of %d is %d",n,factorial);

    return 0;
}
