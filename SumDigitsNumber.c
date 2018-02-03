#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* "There is natural number Ð. Found sum digits of this number P." */

int sum(int P)
{
	int s=0;
    do 
	{
        s += (P%10);
    	P /= 10;
    } while (P!=0);	
    return s;
} 

int main(int argc, char* argv[])
{       
    int P;    
    printf("Inpur number P:\n");
    scanf("%d", &P);
    printf("Sum of digits %d", sum(P));
    getch();
    return 0;
}




