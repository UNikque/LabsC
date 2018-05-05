#pragma hdrstop
#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
/*Недосекин Никита 51392 Вариант 21
Лабораторная работа №10
Задание: "Отсортировать строки массива целых чисел по убыванию. Шейкерная сортировка." */

void Sort_Sheker(double *m, int n) 
{	
  int left=0;
  int right=n;
  int i, k=n-1; 
  char flag;  
  double buf; 
  
  do 
  {
  	
  	flag=0;
  	
    for (i=left; i<right; i++) 
      if (m[i]<m[i+1]) 
	  {          
        buf=m[i];
        m[i]=m[i+1];
        m[i+1]=buf;
        k=n-1;
        flag=1;     
      }
    right=k-1;
    
    for (i=right; i>left; i--) 
      if (m[i-1]<m[i]) 
	  {           
        buf=m[i];
        m[i]=m[i-1];
        m[i-1]=buf;
        flag=1; 
		k=i;  
      }
    left=k;
    
   } while ((left<right) && flag>0);
} 

int main(int argc, char* argv[]) {
  setlocale(LC_ALL, ".1251");
    int i, n;
    double arr[10];
    
    printf("Введите элементы массива:\n");
    
    for (i=0; i<10; i++) {
        printf("arr[%d]=", i);
    	scanf("%lf", &arr[i]);
    }
    
    Sort_Sheker(arr, 10); 
    
    for (i=0; i<10; i++)
        printf("%.2lf ", arr[i]);
    
	getchar();
    return 0;
}

