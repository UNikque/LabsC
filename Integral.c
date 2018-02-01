#include <stdio.h>
#include <math.h>
#include <conio.h>
 /* "Calculate the value of the integral f = sin (x) by the general trapezoid formula with a given number of fragmentations N" */

double F (double x)
{
	double f;
	f = sin(x);
	return f;
}

int main(int argc, char* argv[])
{
	int N;
	double S = 0, x, a, b, h;
	const double Pi = 3.14159;
	
	a = 0;
	b = Pi/2;   
	   
	printf ("Input the number of fragmentations N: \n");
	scanf ("%d", &N);
	
	h = (b - a) / N;
	
        for(x = a + h ; x < b; x = x + h)
        {  
		S = S + F(x);        
        }
    
	S = h * (S + (F(a) + F(b))/2);
	
	printf ("f = ", S);
	getch ();
	return 0;
}

