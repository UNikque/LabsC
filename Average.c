#pragma hdrstop

#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{       setlocale(LC_ALL, ".1251");
    float a, sum=0, x=1;
    printf("������� ������ �����.");
    while (x<=10) {
    	printf("������� �����: ");
    	scanf("%f", &a);
    	sum += a;
    	x++;  
    }
    sum /= 10;
    printf("������� �������������� ����� %f ", sum);
   
    getch();
    return 0;
}
