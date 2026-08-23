#include <stdio.h>

void inputArray(int arr[], int n)
{
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
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

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }
}

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    inputArray(arr1, n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    inputArray(arr2, n2);

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("\nFirst Array: ");
    displayArray(arr1, n1);

    printf("Second Array: ");
    displayArray(arr2, n2);

    printf("Merged Array: ");
    displayArray(merged, n1 + n2);

    return 0;
}