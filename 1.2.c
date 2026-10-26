#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет площать квадрата с заданной стороной
 * @param side сторона квадрата
 * @return Рассчитанное значение
 */
double s(const double side);
/**
 * @brief Вычисляет площать квадрата с заданной стороной
 * @param side сторона квадрата
 * @return Рассчитанное значение
 */
double ss(const double sid);
/**
 * @brief Вычисляет объем квадрата с заданной стороной
 * @param sid сторона квадрата
 * @return Рассчитанное значение
 */
double sss(const double si);
 /**
 * @brief Вычисляет площадь поверхности квадрата с заданной стороной
 * @param si сторона квадрата
 * @return Рассчитанное значение
 */
double getDouble();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    double side1 = getDouble();
    printf("Square is %lf\n",s(side1));
    printf("Square is %lf\n",ss(side1));
    printf("Square is %lf",sss(side1));
    return 0;
}

double s(const double side)
{
    return pow(side,2);
}

double ss(const double sid)
{
    return pow(sid,3);
}

double sss(const double si)
{
    return si*pow(si,2);
}

double getDouble()
{
    double side1 = 0.0;
    scanf("%lf",&side1);
    return side1;
}
