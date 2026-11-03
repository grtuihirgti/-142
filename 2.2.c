#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Вычисляет периметр треугольника
 * @param side1 и side2 катеты
 * @return Рассчитанное значение
 */
double y(const double x);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
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
