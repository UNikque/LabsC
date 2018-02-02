#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*"Find the sum of terms of the series S = 1 + 1/2 + 1/4 + 1/8 + ... while more ÅÐS" */

int main(int argc, char* argv[])
{       
	int n = 1;
    float eps, x = 1.0, sum = 0;
    
	do 
	{
	    printf("Input number ESP: \n"); 
    	scanf("%f", &eps);
    
    	if ((eps <= 0) || (eps >= 1)) 
		{
        	printf("Error\n");
    	}
	} while ((eps <= 0) || (eps >= 1));
    
    while ( 1.0/x>=eps) 
	{
        sum=sum+1.0/x;    
        x*=2;             
    }
    
	printf("Sum = %f", sum);

    getch();
    return 0;
}
//---------------------------------------------------------------------------




