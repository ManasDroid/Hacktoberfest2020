#include<stdio.h>

int main(){
    int i, n, array[25];

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    quicksort(array,0,n-1);

    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n-1; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}

void quicksort(int array[25], int first, int last){
   int i, j, pivot, swap;

    if(first < last){
        pivot = first;
        i = first;
        j = last;

        while(i<j){
            while(array[i] <= array[pivot] && i<last)
                i++;

            while(array[j] > array[pivot])
                j--;

            if(i < j){
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }

        swap = array[pivot];
        array[pivot] = array[j];
        array[j] = swap;
        quicksort(array, first, j-1);
        quicksort(array, j+1, last);
    }
}