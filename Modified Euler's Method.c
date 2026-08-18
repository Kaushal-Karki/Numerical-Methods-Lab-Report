#include <stdio.h>

// Define the differential equation dy/dx = f(x,y)
float f(float x, float y)
{
    return x + y;   // Example: dy/dx = x + y
}

int main()
{
    float x0, y0, xn, h;
    float x, y, y_predict, y_correct;
    float error = 0.0001;

    printf("Modified Euler's Method\n");
    printf("----------------------\n");

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
        // Predictor step
        y_predict = y + h * f(x, y);

        // Corrector step
        y_correct = y + (h / 2) * (f(x, y) + f(x + h, y_predict));

        // Repeat correction until convergence
        while((y_correct - y_predict) > error || 
              (y_predict - y_correct) > error)
        {
            y_predict = y_correct;
            y_correct = y + (h / 2) * 
                       (f(x, y) + f(x + h, y_predict));
        }

        y = y_correct;
        x = x + h;

        printf("%.4f\t\t%.4f\n", x, y);
    }

    printf("\nValue of y at x = %.2f is %.4f\n", xn, y);

    return 0;
}