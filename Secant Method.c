#include <stdio.h>
#include <math.h>

// Define the function f(x)
float f(float x)
{
    return x * x * x - x - 2;   // Example: x^3 - x - 2
}

int main()
{
    float x0, x1, x2, error;
    int i = 1, maxIter;

    printf("Secant Method\n");
    printf("-------------\n");

    printf("Enter first initial guess (x0): ");
    scanf("%f", &x0);

    printf("Enter second initial guess (x1): ");
    scanf("%f", &x1);

    printf("Enter allowed error: ");
    scanf("%f", &error);

    printf("Enter maximum iterations: ");
    scanf("%d", &maxIter);

    printf("\nIter\t x0\t\t x1\t\t x2\t\t f(x2)\n");

    do
    {
        if (f(x1) - f(x0) == 0)
        {
            printf("Division by zero! Method cannot continue.\n");
            return 0;
        }

        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        printf("%d\t %.6f\t %.6f\t %.6f\t %.6f\n",
               i, x0, x1, x2, f(x2));

        if (fabs(x2 - x1) < error)
            break;

        x0 = x1;
        x1 = x2;
        i++;

    } while (i <= maxIter);

    printf("\nApproximate root = %.6f\n", x2);

    return 0;
}