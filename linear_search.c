#include <stdio.h>

void inputArray(int arr[], int n)
{
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[100];
    int n, key, result;

    printf("Enter size of array: ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("\nArray: ");
    displayArray(arr, n);

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if (result != -1)
    {
        printf("Element %d found at position %d.\n", key, result + 1);
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}