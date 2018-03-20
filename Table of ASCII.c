#pragma hdrstop
#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Недосекин Никита 51392 Вариант 21
Лабораторная работа №9
Задание 1: "Вывести таблицу ASCII " */

int main(int argc, char* argv[]) {
  setlocale(LC_ALL, ".1251");
    unsigned char i;
    int j;
    for (j=0; j<256; j++) {
    	printf("%3d - %c \n", i, i);
    	i++;
    	//if (i==255) break;
	}

    getch();
    return 0;
}








