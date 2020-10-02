#include <stdio.h>

int main()
{
    int array[100], n, a, b, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (a = 0; a < n; a++)
        scanf("%d", &array[a]);

    int flag=0;                 //Flag is used to check whether there is swapping in one whole iteration
    for (a=0; a<n-1; a++)       //and if not than break the loop(reducing time complexity)
    {
        flag=0
        for (b=0 ; b<n-a-1; b++)
        {
            if (array[b] > array[b+1]) 
            {
                swap = array[b];
                array[b] = array[b+1];
                array[b+1] = swap;
                flag=1;
            }
        }
        if(!flag)
            break;
    }

    printf("Sorted list in ascending order:\n");

    for (a = 0; a < n; a++)
        printf("%d\n", array[a]);

    return 0;
}
