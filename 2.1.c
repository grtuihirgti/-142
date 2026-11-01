#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет периметр треугольника
 * @param side1 и side2 катеты
 * @return Рассчитанное значение
 */
double s(const double side1, const double side2);
/**
 * @brief Вычисляет площать треугольника
 * @param side1 и side2 катеты
 * @return Рассчитанное значение
 */
double ss(const double side1, const double side2);
/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что сторона - положительное число
 * @param side - считанное значение стороны квадрата
 */
void checkSide(const double side);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
 
int main()
{
    printf("Enter side: \n");
    double side1 = getDouble();
    double side2 = getDouble();
    checkSide(side1);
    checkSide(side2);
    printf("Периметр %lf\n",s(side1,side2));
    printf("Площадь %lf",ss(side1,side2));
    return 0;
}

double s(const double side1, const double side2)
{
    return  side1 + side2 + sqrt(pow(side1,2)+pow(side2,2));
}

double ss(const double side1, const double side2)
{
    return  (side1 * side2)/2;
}

double getDouble()
{
    double side1 = 0.0;
    if (scanf("%lf",&side1) != 1)
        {
            printf("Error");
            exit(1);
        }
    return side1;
}

void checkSide(const double side)
{
   if (side <= 0)
   {
       printf("Error");
       exit(1);
   }
}
