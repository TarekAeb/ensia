#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &r1);
    while (getchar() != '\n')
    {
    }

    printf("Enter the number of columns of the first matrix: ");
    scanf("%d", &c1);
    while (getchar() != '\n')
    {
    }

    // Input dimensions for the second matrix
    printf("Enter the number of rows of the second matrix: ");
    scanf("%d", &r2);
    while (getchar() != '\n')
    {
    }

    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &c2);
    while (getchar() != '\n')
    {
    }

    // Check if multiplication is possible
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible. The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 0;
    }

    // Declare matrices
    int A1[r1][c1], A2[r2][c2], result[r1][c2];

    // Initialize the result matrix to 0
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("A1[%d][%d]: ", i, j);
            scanf("%d", &A1[i][j]);
            while (getchar() != '\n')
            {
            }
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("A2[%d][%d]: ", i, j);
            scanf("%d", &A2[i][j]);
            while (getchar() != '\n')
            {
            }
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += A1[i][k] * A2[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
