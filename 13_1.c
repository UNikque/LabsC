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

void spisok(void);
void seeall(void);
void overkill(void);
void newone(void); 

typedef struct sotphone
{
	char name[30];
	char num_model[30];
	char time_work[25];
	char memory_card[25];
	char release_date[25];
	char price[25];
	char amount[25];
	struct sotphone *next;
} sotphone;	

struct sotphone *tcl, *head;
	struct sotphone *start;
	struct sotphone *work;
	struct sotphone *focus;
	struct sotphone *last;
	char pole, mode;
	int sizz;

int main(int argc, char *argv[])                                                                        
{
    setlocale(LC_ALL, ".1251");
	   
    int i;
    tcl=NULL;
	head=NULL;
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
		tcl->next=(struct sotphone*)malloc(sizeof(struct sotphone));
		tcl=tcl->next;
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
		tcl = (tcl->next);
		printf("\n");
	}
	
	pole= 255;
	start = NULL;
	sizz= sizeof(struct sotphone); 
	last = focus = start = malloc(sizz);
	work =  malloc(sizz);
	mode ='s';
	char what;
	(*start).next = NULL;
	while(what != 'exit' && what != 'EXIT'){
		printf("\n r для сброса всего; \n a для добавления элеменов;");
		printf("\n f для поиска; \n j для просмотра всего списка;\n exit для выхода\n");
		printf("Введен символ %c", what);
		puts("");
		switch(what){
			case 'exit':
			case 'EXIT':
		          break;
			case 'r':
			case 'R':
				overkill();
					break;
			
		/*	case 'a':
			case 'A':
				newone();
			
					break;
		*/
			case 'j':
			case 'J':
				seeall();
			
					break;			
		
		    default:
			
				puts("Введите одну из предложенных букв");
				break;
				  	
		}
	
getchar();
	overkill();
	free(work);
	free(start);
return 0;
}}

void overkill(void){
    struct sotphone *enemy, *ss;
	enemy = (*start).next;
	(*start).next = NULL;
	while(enemy != NULL){
		ss= enemy;
		enemy= (*enemy).next;
		free(ss);
	}	
	focus = start;
	}

void seeall(void){
		struct sotphone *wtf;
		wtf = (*start).next;
		while( wtf != NULL){
			puts(" ");
			if (wtf == focus){
				printf(">>>");
			}
			else{
				printf("   ");
			}
			printf("<%s> <%s> <%s> <%s> <%s> <%s> <%s>", (*wtf).name, (*wtf).num_model, (*wtf).time_work, (*wtf).memory_card, (*wtf).release_date, (*wtf).price, (*wtf).amount);
			wtf = (*wtf).next;
		}
	}



void spisok(void)
{
	
}
/*void Sort(sotphone *a, sotphone *b, sotphone *c)
{
	sotphone tmp;
	*c = NULL;
	if (a == NULL) 
	{
		*c = b;
		return;
	}
	if (b == NULL) 
	{
		*c = a;
		return;
	}
	if (a->value < b->value) 
	{
		*c = a;
		b = b->next;
	} else
	    {
	    	*c = b;
	    	b = b->next;
	    }
	tmp.next = *c;
	while (a && b)
	{
		if (a->value < b->value) 
	    {
	        (*c)->next = a;
	        a = a->next;
	    } else
	        {
	    	    (*c)->next = b;
	    	    b = b->next;
	        }
	    (*c) = (*c)->next;
	}
	if (a) 
	{
		while (a) 
		{
			(*c)->next = a;
			(*c) = (*c)->next;
			a = a->next;
		}
	}
	if (b) 
	{
		while (b) 
		{
			(*c)->next = b;
			(*c) = (*c)->next;
			b = b->next;
		}
	}
	*c = tmp.next;
}
*/



/*	Sort(tcl->num_model, tcl->memory_card, tcl->release_date);
	
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
	
	char s[80];
 
   
    bubble(s, strlen(s));
    printf("Otsortirovannaya stroka: %s\n", s);	
    */


