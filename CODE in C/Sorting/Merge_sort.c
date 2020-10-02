#include<stdio.h>

void mergesort(int array[], int i, int j);
void merge(int array[], int i1, int j1, int i2, int j2);

int main()
{
	int array[100], n, i;
	printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

	mergesort(array, 0, n-1);

    printf("Sorted list in ascending order:\n");

	for(i=0; i <= n-1; i++)
    {
		printf("%d\n", array[i]);
    }
	return 0;
}

void mergesort(int array[], int i, int j)
{
	int mid;

	if(i < j)
	{
		mid = (i+j) / 2;
		mergesort(array, i, mid);
		mergesort(array, mid+1, j);
		merge(array, i, mid, mid+1, j);
	}
}

void merge(int array[], int i1, int j1, int i2, int j2)
{
    int swap[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;

    while(i<=j1 && j<=j2)
    {
        if(array[i] < array[j])
            swap[k++] = array[i++];
        else
            swap[k++] = array[j++];
    }

    while(i<=j1)
        swap[k++] = array[i++];

    while(j<=j2)
        swap[k++] = array[j++];

    for(i=i1, j=0; i<=j2; i++, j++)
        array[i] = swap[j];
}
