#include <stdio.h>

int main()
{
    int i, j, k, n;
    float A[10][10], L[10][10] = {0}, U[10][10] = {0}, sum;

    printf("LU Decomposition Method (Doolittle)\n");
    printf("----------------------------------\n");

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }

    // LU Decomposition
    for(i = 0; i < n; i++)
    {
        // Upper Triangular Matrix
        for(j = i; j < n; j++)
        {
            sum = 0;
            for(k = 0; k < i; k++)
            {
                sum += L[i][k] * U[k][j];
            }
            U[i][j] = A[i][j] - sum;
        }

        // Lower Triangular Matrix
        for(j = i; j < n; j++)
        {
            if(i == j)
            {
                L[i][i] = 1;
            }
            else
            {
                sum = 0;
                for(k = 0; k < i; k++)
                {
                    sum += L[j][k] * U[k][i];
                }
                L[j][i] = (A[j][i] - sum) / U[i][i];
            }
        }
    }

    printf("\nLower Triangular Matrix (L):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%.2f\t", L[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper Triangular Matrix (U):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%.2f\t", U[i][j]);
        }
        printf("\n");
    }

    return 0;
}