#include <stdio.h>

// Define the function f(x)
float f(float x)
{
    return x * x;   // Example: f(x) = x^2
}

int main()
{
    float a, b, h, sum = 0, result;
    int n, i;

    printf("Simpson's 1/3 Rule\n");
    printf("------------------\n");

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    if(n % 2 != 0)
    {
        printf("Number of intervals must be even.\n");
        return 0;
    }

    h = (b - a) / n;

    sum = f(a) + f(b);

    for(i = 1; i < n; i++)
    {
        if(i % 2 == 0)
            sum += 2 * f(a + i * h);
        else
            sum += 4 * f(a + i * h);
    }

    result = (h / 3) * sum;

    printf("\nValue of integration = %.4f\n", result);

    return 0;
}