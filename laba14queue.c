#include <stdio.h>
#include <malloc.h>
#include<string.h>
#include <locale.h>

#define MAXSIZE 20
#define MAXSIZE_QUEUE1 10 
#define MAXSIZE_QUEUE2 10  
 
/*
������������ ������ �14 (�������)
������� 2: "���������� ��� ������������� ������� � ���� �����." */

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
    
    printf("�������� ��������\n");
    while (option)
    {
    	printf("1 PUSH(���������� �������� �������)\n");
    	printf("2 POP(�������� �������� �������)\n");
    	printf("3 �������� ��� �������� �������\n");
    	printf("4 ������� ���� �������� \n");
    	printf("5 ����� �� ���������\n");
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
		printf("������� �����������\n");
		return;
	}
	else
	{
		printf("�������� �������\n");
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
		printf("������� ������\n");
		return(q.head);
	}
	else
	{
		num = q.och[q.tail];
		printf("������� ������� ����� %d\n", q.och[q.tail]);
		q.tail = q.tail + 1;
			
	}
return(num);
}

void display()
{
	int i;
	if (q.head == -1)
	{
		printf("������� ������\n");
		return;
	}
	else
	{   
	    printf("�������� �������:\n");
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

