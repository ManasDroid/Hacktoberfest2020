#include <stdio.h>
void swap(int * a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int array[100], n, a, b, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (a = 0; a < n; a++)
        scanf("%d", &array[a]);

    for (a=0; a<n-1; a++)
    {
        for (b=0 ; b<n-a-1; b++)
        {
            if (array[b] > array[b+1]) 
            {
                swap(&array[b],&array[b+1]);
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (a = 0; a < n; a++)
        printf("%d\n", array[a]);

    return 0;
}
