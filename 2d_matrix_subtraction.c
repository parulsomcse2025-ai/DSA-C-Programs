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

void subtractMatrices(int matrix1[10][10], int matrix2[10][10],
                       int result[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
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
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    printf("\nEnter elements of second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    subtractMatrices(matrix1, matrix2, result, rows, cols);

    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1, rows, cols);

    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2, rows, cols);

    printf("\nResultant Matrix (Subtraction):\n");
    displayMatrix(result, rows, cols);

    return 0;
}