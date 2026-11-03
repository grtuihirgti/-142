#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double getDouble();

double y(const double x);

int main()
{
    printf("Enter x: ");
    double x = getDouble();

    printf("y = %lf\n", y(x));

    return 0;
}

double getDouble()
{
    double value = 0.0;

    if (scanf("%lf", &value) != 1)
    {
        printf("Error");
        exit(1);
    }

    return value;
    
}

double y(const double x)
{
    if (x >= 1 && x <= 2)
    {
    return 2 * pow(x, 2 * log(x));
    }

    if (x < 1)
    {
        return 1;
    }

    if (x > 2)
    {
        return exp(2 * x) * cos(x);
    }
}
