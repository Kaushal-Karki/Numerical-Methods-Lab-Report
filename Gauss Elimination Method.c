#include <stdio.h>

int main()
{
    int i, j, k, n;
    float a[10][10], x[10], factor, sum;

    printf("Gauss Elimination Method\n");
    printf("------------------------\n");

    printf("Enter the number of variables: ");
    scanf("%d", &n);

    printf("Enter the augmented matrix coefficients:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    // Forward Elimination
    for(i = 0; i < n - 1; i++)
    {
        for(k = i + 1; k < n; k++)
        {
            factor = a[k][i] / a[i][i];

            for(j = i; j <= n; j++)
            {
                a[k][j] = a[k][j] - factor * a[i][j];
            }
        }
    }

    // Back Substitution
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];

    for(i = n - 2; i >= 0; i--)
    {
        sum = 0;

        for(j = i + 1; j < n; j++)
        {
            sum += a[i][j] * x[j];
        }

        x[i] = (a[i][n] - sum) / a[i][i];
    }

    printf("\nSolution:\n");
    for(i = 0; i < n; i++)
    {
        printf("x%d = %.4f\n", i + 1, x[i]);
    }

    return 0;
}