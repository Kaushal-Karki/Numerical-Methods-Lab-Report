#include <stdio.h>

// Define the differential equation dy/dx = f(x,y)
float f(float x, float y)
{
    return x + y;   // Example: dy/dx = x + y
}

int main()
{
    float x0, y0, xn, h;
    float k1, k2, k3, k4, x, y;

    printf("Runge-Kutta Method (4th Order)\n");
    printf("------------------------------\n");

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
        k1 = h * f(x, y);
        k2 = h * f(x + h/2, y + k1/2);
        k3 = h * f(x + h/2, y + k2/2);
        k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6;
        x = x + h;

        printf("%.4f\t\t%.4f\n", x, y);
    }

    printf("\nValue of y at x = %.2f is %.4f\n", xn, y);

    return 0;
}