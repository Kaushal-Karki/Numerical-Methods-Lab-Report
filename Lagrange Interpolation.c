#include <stdio.h>

int main()
{
    int i, j, n;
    float x[10], y[10], xp, yp = 0, p;

    printf("Lagrange Interpolation Method\n");
    printf("-----------------------------\n");

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("Enter the values of x and y:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }

    printf("Enter the value of x for interpolation: ");
    scanf("%f", &xp);

    for(i = 0; i < n; i++)
    {
        p = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }

        yp = yp + p * y[i];
    }

    printf("\nInterpolated value at x = %.2f is %.4f\n", xp, yp);

    return 0;
}