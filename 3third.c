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

	printf("������� ���������� ���������:\n");
	scanf("%d", &n);

	printf("������� ��������:\n");

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

	printf("������������ ������� ������� %d, ����� � ������� %d", max, k);

	getch();
	return 0;
}
