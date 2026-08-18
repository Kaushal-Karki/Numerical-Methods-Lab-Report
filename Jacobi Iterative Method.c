#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, iter, maxIter;
    float a[10][10], b[10], x[10], xNew[10], error, maxError;

    printf("Jacobi Iterative Method\n");
    printf("-----------------------\n");

    printf("Enter the number of variables: ");
    scanf("%d", &n);

    printf("Enter the coefficient matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter the constant terms:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &b[i]);
    }

    printf("Enter the initial guesses:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    printf("Enter the allowed error: ");
    scanf("%f", &error);

    printf("Enter maximum iterations: ");
    scanf("%d", &maxIter);

    printf("\nIter");

    for(i = 0; i < n; i++)
        printf("\tx%d", i + 1);

    printf("\n");

    for(iter = 1; iter <= maxIter; iter++)
    {
        maxError = 0;

        for(i = 0; i < n; i++)
        {
            float sum = 0;

            for(j = 0; j < n; j++)
            {
                if(i != j)
                    sum += a[i][j] * x[j];
            }

            xNew[i] = (b[i] - sum) / a[i][i];

            if(fabs(xNew[i] - x[i]) > maxError)
                maxError = fabs(xNew[i] - x[i]);
        }

        printf("%d", iter);

        for(i = 0; i < n; i++)
        {
            printf("\t%.4f", xNew[i]);
            x[i] = xNew[i];
        }

        printf("\n");

        if(maxError < error)
            break;
    }

    printf("\nApproximate Solution:\n");
    for(i = 0; i < n; i++)
    {
        printf("x%d = %.4f\n", i + 1, x[i]);
    }

    return 0;
}