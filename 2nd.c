#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, ".1251");
	srand(time(NULL));
	        
    int N, i, j, k, buf;
        
    printf("¬ведите размерность N матрицы:\n");
    scanf("%d", &N);
        
	int A[N][N];
		
	for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &A[i][j]);	
        }
        printf("\n");
   	}
   	
	for (k = 0; k < N; k++)     
    {  
    	for(i = 0; i < N; i++)   
		{    
			for (j = N - 1; j > i; j--)    
			if (A[k][j] < A[k][j-1])    
			{    
				buf = A[k][j]; 
        		A[k][j] = A[k][j-1];    
        		A[k][j-1] = buf;
			}
        	printf("%d\t", A[k][i]);  
    	}  
  	printf("\n");  
 	} 	
   
 	getch();
	return 0;
}



