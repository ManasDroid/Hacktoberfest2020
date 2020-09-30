#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int t = *a; *a = *b; *b = t;
}
void reverseArray(int a[],int n)){
    if(n<=1)
        return;
    int first = a[0];
    int last = a[n-1];
    int numSwaps = n/2;
    while(numSwaps--){
        swap(&a[first++], &a[last--]);
    }
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
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

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
