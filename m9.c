
#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[100], n, i, key, result;

    int (*ptr)(int[], int, int);

    ptr = linearSearch;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = ptr(arr, n, key);

    if(result != -1)
    {
        printf("Element found at position %d", result + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
