#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i, j, a, b, abAND=0, abOR=0, abXOR=0; int A=0, B=0, C=0; 
  for(i=1; i<n; i++)
  {
      a=i;
      for(j=i+1; j<=n; j++)
      {
          b=j;
          abAND=a&b;
          abOR=a|b;
          abXOR=a^b;
          if(abAND<k && abAND>A)
            A=abAND;
          if(abOR<k && abOR>B)
            B=abOR;
          if(abXOR<k && abXOR>C)
            C=abXOR;   
      }
         
  }
  printf("%ld\n%ld\n%ld",A,B,C);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
