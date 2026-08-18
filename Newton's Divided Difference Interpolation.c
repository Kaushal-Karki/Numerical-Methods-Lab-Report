#include <stdio.h>

int main()
{
    int i, j, n;
    float x[10], y[10][10], xp, sum, product;

    printf("Newton's Divided Difference Interpolation\n");
    printf("-----------------------------------------\n");

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x and y:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i][0]);
    }

    // Construct Divided Difference Table
    for(j = 1; j < n; j++)
    {
        for(i = 0; i < n - j; i++)
        {
            y[i][j] = (y[i + 1][j - 1] - y[i][j - 1]) /
                      (x[i + j] - x[i]);
        }
    }

    printf("\nDivided Difference Table:\n");
    for(i = 0; i < n; i++)
    {
        printf("%.2f\t", x[i]);
        for(j = 0; j < n - i; j++)
        {
            printf("%.4f\t", y[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the value of x for interpolation: ");
    scanf("%f", &xp);

    sum = y[0][0];

    for(i = 1; i < n; i++)
    {
        product = 1;
        for(j = 0; j < i; j++)
        {
            product *= (xp - x[j]);
        }
        sum += product * y[0][i];
    }

    printf("\nInterpolated value at x = %.2f is %.4f\n", xp, sum);

    return 0;
}