#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* "There are sequence of elements x1, x2 ... x. Found the greatest sum consequentive of elements" */

int main(int argc, char* argv[])
{      
    double s;
	int i, n, x;
	double sum = 0;
	printf("Input amount N of arrays:\n");
	scanf("%d", &n);
	int c[n];
	printf("Input the elements of arrays:\n");
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		c[i] = x;
	}
		
	for(i=1; i <= n; i++) 
	{
	    printf("%d ", c[i]);
	}
	
	printf("\n");
	
	int a[n], max = 0;
	
	for(i=1; i<=n-1; i++) 
	{
	    a[i] = c[i] + c[i+1];
	    if (a[i] > max) 
	    {
		    max = a[i];
	    }
	 	printf("%d ", a[i]);
	}
	printf("\n Greatest sum of two elements sequence %d ", max);
	 
    getch();
    return 0;
}





