#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int i, j;
    
    for(i = n; i >= 1; i--){
        for( j = n; j > i; j--)
            printf("%d ", j);
        for( j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for( j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
}
