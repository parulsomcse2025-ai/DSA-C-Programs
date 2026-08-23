#include <stdio.h>

void inputArray(int arr[], int n)
{
    printf("Enter %d elements in sorted order:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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

    result = binarySearch(arr, n, key);

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