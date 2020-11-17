#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int arr[num];
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

    for(i = 0; i < num-1; i++)
        printf("%d ", *(arr + i));
    printf("%d",*(arr+num-1));
    return 0;
}
