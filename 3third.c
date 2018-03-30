#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, ".1251");
	int i, n, max, k;
	int a[n], *p;
	p = a;

	printf("Введите количество элементов:\n");
	scanf("%d", &n);

	printf("Введите элементы:\n");

	for (i = 0; i < n; i++) 
	{
		scanf("%d", p+i);
	}
	
	max = *(p+1);
	
	for (i = 0; i < n; i++) 
	{
		if (max < *(p+i)) 
		{
			max = *(p+i);
			k = i;
		}
	}

	printf("Максимальный элемент массива %d, место в массиве %d", max, k);

	getch();
	return 0;
}
