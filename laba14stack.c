#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

#define MAXSIZE 10 

/* 
Вариант 21 Задание 1: "Сформировать стек из N чисел. Найти сумму первых N чисел и результат поместить в стек."*/

typedef struct stack 
{
    int stk[MAXSIZE];
    int top;
 
} stack;

stack s;


void push(void);
int pop(void);
void display(void);
int sum(void);
//void push_sum(void);

int main () 
{   
    setlocale(LC_ALL, ".1251");  

    int choice;
    int option = 1;
    s.top = -1;
    
    printf("Выберите операцию\n");
    while (option)
    {
    	printf("1 PUSH(добавление элемента стека)\n");
    	printf("2 POP(удаление элемента стека)\n");
    	printf("3 Показать все элементы стека\n");
    	printf("4 Сумма всех элементов стека\n");
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
    			sum();
    		//	push_sum();
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
	if (s.top == (MAXSIZE - 1))
	{
		printf("Cтек переполнен\n");
		return;
	}
	else
	{
		printf("Добавьте элемент\n");
		scanf("%d", &num);
		s.top = s.top + 1;
		s.stk[s.top] = num;		
	}
	return;
}

int pop()
{
	int num;
	if (s.top == - 1)
	{
		printf("Cтек пустой\n");
		return(s.top);
	}
	else
	{
		num = s.stk[s.top];
		printf("Вынутый элемент равен %d\n", s.stk[s.top]);
		s.top = s.top - 1;
			
	}
return(num);
}

void display()
{
	int i;
	if (s.top == -1)
	{
		printf("Cтек пустой\n");
		return;
	}
	else
	{   
	    printf("Элементы стека:\n");
		for(i = s.top; i >= 0; i--)
		{
			printf("%d\n", s.stk[i]);
		}
	}
	printf("\n");
}

int sum()
{
	int i, summa = 0;
	if (s.top == -1)
	{
		printf("Cтек пустой\n");
		return;
	}
	else
	{
		for(i = s.top; i >= 0; i--)
		{   
		    summa = summa + s.stk[i];
			
		}
		printf("Сумма элементов стека равна %d\n", summa);
	}
	if (s.top == (MAXSIZE - 1))
	{
		printf("Cтек переполнен, нельзя добавить сумму элементов, освободите место для этого элемента\n");
		return;
	}
	else
	{
		s.top = s.top + 1;
		s.stk[s.top] = summa;		
	}
	return summa;
}

/*void push_sum()
{
	int num;
	int sum();
	int summa;
	if (s.top == (MAXSIZE - 1))
	{
		printf("Cтек переполнен, нельзя добавить сумму элементов, освободите место для этого элемента\n");
		return;
	}
	else
	{
		s.top = s.top + 1;
		s.stk[s.top] = summa;		
	}
	return;
}*/
