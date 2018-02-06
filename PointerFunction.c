#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>

/* "Result of dividing a natural number M by natural number N is a finite decimal fraction or an infinite decimal fraction.
If the fraction is infinite, then count all digits to the first digit and digits of the period." */

void Division(double m, double n, double *res);
void Rounding(int i, double *res);

double *res, adoub, aint;
int r, i;
double m, n;

int main(int argc, char* argv[]) 
{    
    Division(m, n, &res);
    Rounding(i, &res);
    getch();
    return 0;
}

void Division(double m, double n, double *res) 
{
	printf("Input natural numbers M and N:\n");
	scanf("%lf %lf", &m, &n);
    *res = m / n;
    printf("Result of division is %lf", *res);
}

void Rounding(int i, double *res) 
{
	char mass[6];
	double y;
	*res=y;
	adoub=modf(y, &aint);
    adoub*=1000000;
    adoub = (int) adoub;
    i=adoub;
    itoa (i, mass, 10);
    printf("\nDecimal part is %s\n", mass);
    if ((mass[0]==mass[1]) && (mass[2]==mass[3]) && (mass[1]==mass[3])) 
	    printf("The Period is %lf", round(i/100000));
      else if ((mass[1]==mass[2]) && (mass[3]==mass[4]) && (mass[2]==mass[3])) 
	           printf("After first symbol Period is %d", mass[2]); 
	         else if ((mass[0]==mass[2]) && (mass[1]==mass[3])) 
			          printf("The Period is %lf", round(i/10000));
			        else if ((mass[0]==mass[3]) && (mass[1]==mass[4]) && (mass[2]==mass[5])) 
				             printf("The Period is %lf", round(i/1000));
}

