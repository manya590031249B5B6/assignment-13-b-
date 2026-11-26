
#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int largest, smallest;
    int *ptr;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    largest = *ptr;
    smallest = *ptr;

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }

        if(*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
