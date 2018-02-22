#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

"There is matrix À has N lines and M columns, that has group marks for the first semestr. Count amount 1, 2, 3 of each student." */

int i, j, n, m;

void Fun(int n, int m, int *k1, int *k2, int *k3);
    
int main(int argc, char* argv[]) {
    setlocale(LC_ALL, ".1251");
    int *k1, *k2, *k3;
   
    srand(time(NULL));
    printf("Input amount of subjects:\n");
    scanf("%d", &n);
    printf("Input amount of students:\n");
    scanf("%d", &m);
    Fun(n, m, &k1, &k2, &k3);    
    getch();
    return 0;
}

void Fun(int n, int m, int *k1, int *k2, int *k3) {
	
int A[n][m];
    *k1=0;
	*k2=0;
	*k3=0;

	for (i=0; i<n; i++) {
		
    	for (j=0; j<m; j++) {
    		
    		*(*(A+i)+j)=(rand()%10)+1;

			if (*(*(A+i)+j)==1) 
				*k1=*k1+1;
				else if (*(*(A+i)+j)==2) 
				    *k2=*k2+1;
		                else if (*(*(A+i)+j)==3)
		                    *k3=*k3+1;
		        printf("%3d", *(*(A+i)+j));
    	}
		printf("\n");
	
	}
	  
    printf("All marks 1 - %d students,\n 2 - %d students\n and 3 - %d students", *k1, *k2, *k3);  	
}







