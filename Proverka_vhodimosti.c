#pragma hdrstop

#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{       setlocale(LC_ALL, ".1251");
    float min, max, x;
    printf("������� �������� �����. \n������ min �����: ");
    scanf("%f", &min);
    printf("������� ������ max �����: ");
    scanf("%f", &max);
    printf("������� �����, ������� ���� ���������: ");
    scanf("%f", &x);
    printf("���� ����� %f %s ������ � ���������� [%f and %f]", x, ((x>=min) && (x<=max)) ? "" : "��", min, max);
   
    getch();
    return 0;
}
