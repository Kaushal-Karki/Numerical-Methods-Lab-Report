#include <stdio.h>
#include <math.h>

// Define the function f(x)
float f(float x)
{
    return x * x;   // Example: f(x) = x^2
}

int main()
{
    float a, b, h, sum = 0, result;
    int n, i;

    printf("Trapezoidal Rule\n");
    printf("----------------\n");

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    h = (b - a) / n;

    sum = f(a) + f(b);

    for(i = 1; i < n; i++)
    {
        sum += 2 * f(a + i * h);
    }

    result = (h / 2) * sum;

    printf("\nValue of integration = %.4f\n", result);

    return 0;
}