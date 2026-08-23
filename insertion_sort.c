#include <stdio.h>

void inputArray(int arr[], int n)
{
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
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
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("\nOriginal Array: ");
    displayArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted Array: ");
    displayArray(arr, n);

    return 0;
}