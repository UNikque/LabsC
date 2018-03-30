#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        int i, j, buf, n = 10;
        int a[n];
        int *p;
        p = a;
        printf("Enter values\n");
        
        for (i = 0; i < n; i++)
		{
        	scanf("%d", p+i);
		}
		
		for (j = 1; j < n; j++)
		{
			for (i = 0; i < n - j; i++)
			{
				if (*(p+i) < *(p+(i+1)))
				{
					buf = *(p+i);
					*(p+i) = *(p+(i+1));
					*(p+(i+1)) = buf;
				}
			}
		}
		
		for (i = 0; i < n; i++)
		{
        	printf("%d\n", *(p+i));
		}
        
        getch();
        return 0;
}
