#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    printf("Enter the elements into the array\n");
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int temp,ip=0,fp=num-1;
    while(ip < fp )
    {
        temp=arr[ip];
        arr[ip]=arr[fp];
        arr[fp]=temp;
        ip++;
        fp--;
    }
    printf("Reversed array is: \n");

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    //removing the dynamically allocated memory
    free(arr);
    return 0;
}
