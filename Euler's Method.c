#include <stdio.h>

// Define the differential equation dy/dx = f(x,y)
float f(float x, float y)
{
    return x + y;   // Example: dy/dx = x + y
}

int main()
{
    float x0, y0, xn, h, x, y;

    printf("Euler's Method\n");
    printf("--------------\n");

    printf("Enter initial value of x (x0): ");
    scanf("%f", &x0);

    printf("Enter initial value of y (y0): ");
    scanf("%f", &y0);

    printf("Enter final value of x (xn): ");
    scanf("%f", &xn);

    printf("Enter step size (h): ");
    scanf("%f", &h);

    x = x0;
    y = y0;

    printf("\nX\t\tY\n");
    printf("--------------------\n");

    while(x < xn)
    {
        y = y + h * f(x, y);
        x = x + h;

        printf("%.4f\t\t%.4f\n", x, y);
    }

    printf("\nValue of y at x = %.2f is %.4f\n", xn, y);

    return 0;
}