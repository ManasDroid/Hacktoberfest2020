#include <stdio.h>

int main(void)
{
    int n;
    // size of array
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // rotating the array
    int prev = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        arr[i] = prev;
        prev = temp;
    }
    arr[0] = prev;
    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
