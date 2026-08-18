#include <stdio.h>

// Define the function f(x)
float f(float x)
{
    return x * x;   // Example: f(x) = x^2
}

int main()
{
    float a, b, h, sum, result;
    int n, i;

    printf("Simpson's 3/8 Rule\n");
    printf("------------------\n");

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    // n must be a multiple of 3
    if(n % 3 != 0)
    {
        printf("Number of intervals must be a multiple of 3.\n");
        return 0;
    }

    h = (b - a) / n;

    sum = f(a) + f(b);

    for(i = 1; i < n; i++)
    {
        if(i % 3 == 0)
            sum = sum + 2 * f(a + i * h);
        else
            sum = sum + 3 * f(a + i * h);
    }

    result = (3 * h / 8) * sum;

    printf("\nValue of integration = %.4f\n", result);

    return 0;
}