#include<stdio.h>
int reverse(int n)
{
  int r=0;
  while(n>0)
  {
    int rem =n%10;
    rev=rev*10+rem;
    n/=10;
   }
  return rev;
}


int main()
{
  int n;
  printf("%Enter the number to be checked");
  scanf("%d",&n);
  
  if(n==reverse(n))
  {
    printf("%d is a Palindrome",n);
  }
  else
  { 
    printf("%d is Not a Palindrome number",n);
  }
  return 0;
 }
