#pragma hdrstop
#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <malloc.h>

 /*
Лабораторная работа №13 (списки)
Задание 1: "Сотовый телефон характеризуется названием производителя, номером модели (может содержать цифры и буквы), временем работы аккумулятора, 
            наличием и максимальной ёмкостью карты памяти, датой выпуска на рынок, стоимость в рублях и количеством экземпляров, имеющихся в наличии.
			Поиск и сортировка - по номеру модели, объему памяти на карте, дате выпуска на рынок." */

struct sotphone 
{
	char name[30];
	char num_model[30];
	char time_work[10];
	char memory_card[10];
	char release_date[10];
	char price[10];
	char amount[10];
	struct sotphone *phone;
};	

void bubble(char *x, int n)
{
  int a, b;
  char t;
 
  for(a=0; a < n; a++)
    for(b=n-1; b >= a; b--) 
    {
      if(x[b-1] > x[b]) 
      {
        t = x[b-1];
        x[b-1] = x[b];
        x[b] = t;
      }
    }
    
}

void Sort()
{
    
}


int main(int argc, char *argv[])                                                                        
{
    setlocale(LC_ALL, ".1251");
	   
    int i;
	struct sotphone *tcl=NULL, *head=NULL;
	tcl=(struct sotphone*)malloc(sizeof(struct sotphone));
	head=tcl;
	printf("Введите:\n 1. Название производителя мобильного телефона \n 2. Номер его модели \n 3. Время работы аккумулятора \n ");
	printf("4. Наличие и максимальная емкость карты памяти \n 5. Дату выпуска на рынок \n 6. Стоимость в рублях \n 7. Количество в экземплярах. \n");
	printf("Ввод характеристик: \n");
	for(i=1;i<=2;i++)
	{   
	    printf(" %d-я модель: \n", i);
	    printf("1. ");
		gets(tcl->name);
		printf("2. ");
		gets(tcl->num_model);
		printf("3. ");
		gets(tcl->time_work);
		printf("4. ");
		gets(tcl->memory_card);
		printf("5. ");
		gets(tcl->release_date);
		printf("6. ");
		gets(tcl->price);
		printf("7. ");
		gets(tcl->amount);
		tcl->phone=(struct sotphone*)malloc(sizeof(struct sotphone));
		tcl=tcl->phone;
	}
	printf("\n");
	tcl = head;
	for(i=1;i<=2;i++)
	{
		printf("%10s",tcl->name);
		printf("%10s",tcl->num_model);
		printf("%10s",tcl->time_work);
		printf("%10s",tcl->memory_card);
		printf("%10s",tcl->release_date);
		printf("%10s",tcl->price);
		printf("%10s",tcl->amount);
		tcl = (tcl->phone);
		printf("\n");
	}
	
	int usl;
	int a, b, n;
    char t;
	printf("Выберите нужный поиск и сортировку: \n 1. по номеру модели \n 2. объему памяти на карте \n 3. дате выпуска на рынок.");
    switch (usl)
	{
        case 1:
            for(a=0; a < n; a++)
              for(b=n-1; b >= a; b--) 
              {
                if(tcl->num_model[b-1] > tcl->num_model[b]) 
                {
                  t = tcl->num_model[b-1];
                  tcl->num_model[b-1] = tcl->num_model[b];
                  tcl->num_model[b] = t;
                }
              }
            printf("%10s",tcl->num_model);
            break;
		case 2:
            for(a=0; a < n; a++)
              for(b=n-1; b >= a; b--) 
              {
                if(tcl->memory_card[b-1] > tcl->memory_card[b]) 
                {
                  t = tcl->memory_card[b-1];
                  tcl->memory_card[b-1] = tcl->memory_card[b];
                  tcl->memory_card[b] = t;
                }
              }
            printf("%10s",tcl->memory_card);
			break;
		case 3:
            for(a=0; a < n; a++)
              for(b=n-1; b >= a; b--) 
              {
                if(tcl->release_date[b-1] > tcl->release_date[b]) 
                {
                  t = tcl->release_date[b-1];
                  tcl->release_date[b-1] = tcl->release_date[b];
                  tcl->release_date[b] = t;
                }
              }
            printf("%10s",tcl->release_date);
			break;	
	}	
	
	/*char s[80];
 
   
    bubble(s, strlen(s));
    printf("Otsortirovannaya stroka: %s\n", s);	
    */
getchar();
return 0;
}
