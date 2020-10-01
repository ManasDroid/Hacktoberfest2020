#include <stdio.h>

int reverse(int n)
{
  while(n>0)
  {
  int r=0;
  int d=n%10;
  r=r*10+d;
  n/=10;
  }
  return r;
}


int main()
{
  int n;
  scanf("%d",&n);
  
  if(n==reverse(n)
    printf("Palindrome");
  else
    printf("Not a Palindrome number");

  return 0;
 }
