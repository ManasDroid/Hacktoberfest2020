#include <stdio.h>

int main()
{
    int array[100], n, a, b, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (a = 0; a < n; a++)
        scanf("%d", &array[a]);

    for(a=0; a<n; a++){
        for(b=a+1; b<n; b++){
            if(array[a] > array[b]){
            swap = array[a];
            array[a] = array[b];
            array[b] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (a = 0; a < n; a++)
        printf("%d\n", array[a]);

    return 0;
}
