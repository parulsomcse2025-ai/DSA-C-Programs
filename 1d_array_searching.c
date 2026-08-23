#include <stdio.h>

int search(int a[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[100];
    int n, i, key, result;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = search(a, n, key);

    if (result == -1)
    {
        printf("Element not found.\n");
    }
    else
    {
        printf("Element found at position %d.\n", result + 1);
    }

    return 0;
}