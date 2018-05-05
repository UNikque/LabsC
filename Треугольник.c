#pragma hdrstop

#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{       setlocale(LC_ALL, ".1251");
  
    int lines;
    printf("¬ведите количество строк: ");
    scanf("%d", &lines);
    int i, j;
    for (i=0; i<lines; i++) {
    	for (j=1; j<lines-i; j++) 
    	    printf(" ");
    	/*
    	for (j=lines-i*2; j<=lines; j++)
    	    printf("^");
    	    */
    	printf("\n");
    	    
	}
    
    getch();
    return 0;
}
