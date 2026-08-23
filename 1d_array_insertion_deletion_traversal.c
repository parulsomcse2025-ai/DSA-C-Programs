#include <stdio.h>

void insert(int a[], int n, int pos, int value)
{
    int i;

    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = value;
}

void deleteElement(int a[], int n, int pos)
{
    int i;

    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
}

void traverse(int a[], int n)
{
    int i;

    printf("Array elements are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

int main()
{
    int a[100];
    int n, i;
    int choice, pos, value;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n1. Insertion");
    printf("\n2. Deletion");
    printf("\n3. Traversal");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter position (0 to %d): ", n);
        scanf("%d", &pos);

        printf("Enter value: ");
        scanf("%d", &value);

        if (pos >= 0 && pos <= n)
        {
            insert(a, n, pos, value);
            n++;

            printf("Array after insertion:\n");
            traverse(a, n);
        }
        else
        {
            printf("Invalid position.\n");
        }
    }
    else if (choice == 2)
    {
        printf("Enter position (0 to %d): ", n - 1);
        scanf("%d", &pos);

        if (pos >= 0 && pos < n)
        {
            deleteElement(a, n, pos);
            n--;

            printf("Array after deletion:\n");
            traverse(a, n);
        }
        else
        {
            printf("Invalid position.\n");
        }
    }
    else if (choice == 3)
    {
        traverse(a, n);
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}