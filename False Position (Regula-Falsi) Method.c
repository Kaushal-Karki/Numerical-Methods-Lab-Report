#include <stdio.h>
#include <math.h>

// Define the function f(x)
float f(float x)
{
    return x * x * x - x - 2;   // Example: x^3 - x - 2
}

int main()
{
    float a, b, c, error;
    int i = 1, maxIter;

    printf("False Position (Regula-Falsi) Method\n");
    printf("------------------------------------\n");

    printf("Enter the first guess (a): ");
    scanf("%f", &a);

    printf("Enter the second guess (b): ");
    scanf("%f", &b);

    printf("Enter the allowed error: ");
    scanf("%f", &error);

    printf("Enter maximum iterations: ");
    scanf("%d", &maxIter);

    if (f(a) * f(b) > 0)
    {
        printf("Invalid initial guesses! f(a) and f(b) must have opposite signs.\n");
        return 0;
    }

    printf("\nIter\t a\t\t b\t\t c\t\t f(c)\n");

    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        printf("%d\t %.6f\t %.6f\t %.6f\t %.6f\n",
               i, a, b, c, f(c));

        if (fabs(f(c)) < error)
            break;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        i++;

    } while (i <= maxIter);

    printf("\nApproximate root = %.6f\n", c);

    return 0;
}