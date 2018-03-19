#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

 /*"Дана действительная квадратная матрица порядка 2N. Получите новую матрицу 1  4 " */
                                                                          //  2  3 

int main() {                                                                       
setlocale(LC_ALL, ".1251");   
srand(time(NULL));        
        int N, i, j, keep;
        
        printf("Введите размерность N матрицы:\n");
        scanf("%d", &N);
        
	int A[2*N][2*N];
		   
 	printf("Первоначальная матрица\n");
	for(i=0;i<2*N;i++){
        	for(j=0;j<2*N;j++){
               		A[i][j]=rand() % 9 + 1;	
                	printf("%d  ",A[i][j]);
            	}
        	printf("\n");
  	}
           
        printf("\nПолученная матрица\n");
        
        for(i=0;i<N;i++){
             for(j=0;j<N;j++){
        	    keep=A[i][j+N];
        	    A[i][j+N]=A[i+N][j+N];
        	    A[i+N][j+N]=A[i+N][j];
        	    A[i+N][j]=keep;
            }
   	}	
   	   	
     	for(i=0;i<2*N;i++){
            for(j=0;j<2*N;j++){
                printf("%d  ",A[i][j]);
            }
            printf("\n");
   	}
 
getchar();
return 0;
 }
