#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* "Arrays a and b, consisting of N elements.
Create array ñ, ñ[k]=a[k]+b[k] " */

int main(int argc, char* argv[])
{       
    int n, k;
    printf("Input amount N of arrays: \n"); 
    scanf("%d", &n);
    int a[n], b[n], c[n];
    a[0] = 0;
    b[0] = 0;
    for(k=0; k < n; k++) 
	{
        a[k] = a[k-1] + 1;
        printf("%d ", a[k]);
    }
    printf("\n");
    for(k=0; k < n; k++) 
	{
        b[k] = b[k-1] + 1;
        printf("%d ", b[k]);
    }
    printf("\n");
    for(k=0; k < n; k++) 
	{
        c[k] = a[k] + b[k];
        printf("%d ", c[k]);
    }
        
    getch();
    return 0;
}





