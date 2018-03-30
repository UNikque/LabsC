#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, ".1251");
	int i, n, sum = 0;
	int a[n], *p;
	p = a;

	printf("Введите количество элементов:\n");
	scanf("%d", &n);

	printf("Введите элементы:\n");

	for (i = 0; i < n; i++) 
	{
		scanf("%d", p+i);
	}

	for (i = 0; i < n; i++) 
	{
		if (i % 2 == 0) 
		{
			sum+=*(p+i);
		}
	}

	printf("Сумма равна %d", sum);

	getch();
	return 0;
}
