#include <stdio.h>
int main() {
    printf("Enter two numbers: \n");
    int a,b,rest;
    scanf("%d %d",&a,&b);
    int guardaA = a, guardaB = b;
    
    while(a % b > 0){
        rest = a%b;
        a = b;
        b = rest;
    }
    
    printf("GCD of %d and %d is %d",guardaA,guardaB,b);
    
}