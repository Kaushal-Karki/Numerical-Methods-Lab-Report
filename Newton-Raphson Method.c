#include <stdio.h>
#include <math.h>

// Define the function f(x)
float f(float x)
{
    return x * x * x - x - 2;   // Example: x^3 - x - 2
}

// Define the derivative f'(x)
float df(float x)
{
    return 3 * x * x - 1;
}

int main()
{
    float x0, x1, error;
    int i = 1, maxIter;

    printf("Newton-Raphson Method\n");
    printf("---------------------\n");

    printf("Enter initial guess: ");
    scanf("%f", &x0);

    printf("Enter allowed error: ");
    scanf("%f", &error);

    printf("Enter maximum iterations: ");
    scanf("%d", &maxIter);

    printf("\nIter\t x0\t\t x1\t\t f(x1)\n");

    do
    {
        if (df(x0) == 0)
        {
            printf("Derivative is zero. Method cannot continue.\n");
            return 0;
        }

        x1 = x0 - f(x0) / df(x0);

        printf("%d\t %.6f\t %.6f\t %.6f\n",
               i, x0, x1, f(x1));

        if (fabs(x1 - x0) < error)
            break;

        x0 = x1;
        i++;

    } while (i <= maxIter);

    printf("\nApproximate root = %.6f\n", x1);

    return 0;
}