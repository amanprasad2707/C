// Enter number of rows and columns for matrix A and matrix B
#include <stdio.h>
int main()
{
    int row1, row2, col1, col2;
    int sum = 0;
    int matrix_1_Elements[100][100], matrix_2_Elements[100][100];
    int result[100][100];
    printf("Enter the number of rows and column of matrix 1:\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter the number of rows and column of matrix 2:\n");
    scanf("%d%d", &row2, &col2);

    if (col1 == row2)
    {
        printf("Enter the elements of matrix 1:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                // printf("Enter the element of matrix1 at index: %d %d\n",i+1, j+1);
                scanf("%d", &matrix_1_Elements[i][j]);
            }
        }

        printf("Enter the elements of matrix 2:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                // printf("Enter the element of matrix2 at index: %d %d\n",i+1,j+1);
                scanf("%d", &matrix_2_Elements[i][j]);
            }
        }
    }
    else
    {
        printf("Sorry! We can't multiply matrix1 and matrix2..");
    }


    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            // calculate the result of the matrix
            for (int k = 0; k < col1; k++)
            {
                sum += matrix_1_Elements[i][k] * matrix_2_Elements[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("The result of the matrix is:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}