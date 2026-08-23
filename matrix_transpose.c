#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    printf("Enter elements of matrix:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transposeMatrix(int matrix[10][10], int transpose[10][10],
                     int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int matrix[10][10], transpose[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    inputMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transpose, rows, cols);

    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    printf("\nTranspose Matrix:\n");
    displayMatrix(transpose, cols, rows);

    return 0;
}