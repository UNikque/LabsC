#include <stdio.h>
#include <malloc.h>
#include<string.h>
#include <locale.h>

#define MAXSIZE 20
#define MAXSIZE_QUEUE1 10 
#define MAXSIZE_QUEUE2 10  
 
/*
Лабораторная работа №14 (очереди)
Задание 2: "Объединить две целочисленных очереди в одну новую." */

typedef struct queue 
{
    int och[MAXSIZE];
    int tail;
    int head;
 
} queue;

queue q;


void push(void);
int pop(void);
void display(void);
void slot(void);

int main () 
{   
    setlocale(LC_ALL, ".1251");  

    int choice;
    int option = 1;
    q.tail = 0;
    q.head = 0;
    
    printf("Выберите операцию\n");
    while (option)
    {
    	printf("1 PUSH(добавление элемента очереди)\n");
    	printf("2 POP(удаление элемента очереди)\n");
    	printf("3 Показать все элементы очереди\n");
    	printf("4 Слияние двух очередей \n");
    	printf("5 Выйти из программы\n");
    	scanf("%d", &choice);
    	
    	switch(choice)
    	{
    		case 1:
    			push();
    			break;
    		case 2:
    			pop();
    			break;
    		case 3:
    			display();
    			break;
    		case 4:
    			slot();
    			break;
    		case 5:
    			return 0;
		}
	    //fflush(stdin);	
    	
	}
	getchar();
	return 0;
}

void push()
{
	int num;
	if (q.head == (MAXSIZE - 1))
	{
		printf("Очередь переполнена\n");
		return;
	}
	else
	{
		printf("Добавьте элемент\n");
		scanf("%d", &num);
		q.head = q.head + 1;
		q.och[q.head] = num;		
	}
	return;
}

int pop()
{
	int num;
	if (q.head == - 1)
	{
		printf("Очередь пустая\n");
		return(q.head);
	}
	else
	{
		num = q.och[q.tail];
		printf("Вынутый элемент равен %d\n", q.och[q.tail]);
		q.tail = q.tail + 1;
			
	}
return(num);
}

void display()
{
	int i;
	if (q.head == -1)
	{
		printf("Очередь пустая\n");
		return;
	}
	else
	{   
	    printf("Элементы очереди:\n");
		for(i = q.head; i >= q.tail; i--)
		{
			printf("%d\n", q.och[i]);
		}
	}
	printf("\n");
}

void slot()
{
	//
}

