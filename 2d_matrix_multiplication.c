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

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10],
                      int result[10][10], int rows1, int cols1, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
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
    int rows1, cols1, rows2, cols2;

    printf("Enter rows of first matrix: ");
    scanf("%d", &rows1);

    printf("Enter columns of first matrix: ");
    scanf("%d", &cols1);

    printf("Enter rows of second matrix: ");
    scanf("%d", &rows2);

    printf("Enter columns of second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2)
    {
        printf("\nMatrix multiplication is not possible.\n");
        printf("Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    printf("\nEnter elements of first matrix:\n");
    inputMatrix(matrix1, rows1, cols1);

    printf("\nEnter elements of second matrix:\n");
    inputMatrix(matrix2, rows2, cols2);

    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);

    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1, rows1, cols1);

    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2, rows2, cols2);

    printf("\nResultant Matrix (Multiplication):\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}