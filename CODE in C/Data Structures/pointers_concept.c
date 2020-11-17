#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int n=*a;
    *a= *a + *b;
    *b= n - *b;
    *b= abs(*b);
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
