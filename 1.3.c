#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет силу тяжести по формуле F=m*g, где g - ускорение свободного падения, равное 10
 * @param side масса
 * @return Рассчитанное значение
 */
double s(const double side);
/**
 * @brief Вычисляет силу веса по формуле P=m*g, где g - ускорение свободного падения, равное 10
 * @param side масса
 * @return Рассчитанное значение
 */
double ss(const double sid);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
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
    printf("Square is %lf",ss(side1));
    return 0;
}

double s(const double side)
{
    return side*10;
}

double ss(const double sid)
{
    return sid*10;
}

double getDouble()
{
    double side1 = 0.0;
    scanf("%lf",&side1);
    return side1;
}
