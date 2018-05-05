#pragma hdrstop

#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{       setlocale(LC_ALL, ".1251");
    float min, max, x;
    printf("Введите диапазон чисел. \nПервое min число: ");
    scanf("%f", &min);
    printf("Введите второе max число: ");
    scanf("%f", &max);
    printf("Введите число, которое надо проверить: ");
    scanf("%f", &x);
    printf("Ваше число %f %s входит в промежуток [%f and %f]", x, ((x>=min) && (x<=max)) ? "" : "не", min, max);
   
    getch();
    return 0;
}
