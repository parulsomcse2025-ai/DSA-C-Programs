#include <stdio.h>

void inputArray(int arr[], int n)
{
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void selectionSort(int arr[], int n)
{
    int minIndex, temp;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

    selectionSort(arr, n);

    printf("Sorted Array: ");
    displayArray(arr, n);

    return 0;
}