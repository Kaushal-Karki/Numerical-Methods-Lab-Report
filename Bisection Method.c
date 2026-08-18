#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x * x * x - x - 2;
}

int main()
{
    float a, b, c, e;

    printf("Enter lower limit a: ");
    scanf("%f", &a);

    printf("Enter upper limit b: ");
    scanf("%f", &b);

    printf("Enter tolerance: ");
    scanf("%f", &e);

    if (f(a) * f(b) >= 0)
    {
        printf("Invalid interval. Root does not lie between a and b.\n");
        return 0;
    }

    do
    {
        c = (a + b) / 2;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

    } while (fabs(f(c)) > e);

    printf("Root = %.4f\n", c);

    return 0;
}