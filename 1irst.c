#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
	setlocale(LC_ALL, ".1251");
	srand(time(NULL));
	        
    int N, i, j, max, min, keep[2], buf[2], sum = 0;
        
    printf("Введите размерность N матрицы:\n");
    scanf("%d", &N);
        
	int A[N][N];
		
	for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &A[i][j]);	
        }
        printf("\n");
   	}
   	
   	max = A[0][1];
   	min = A[1][0];
   	for(i=0;i<N;i++){
        for(j=0;j<N;j++) {	
            printf("%d  ",A[i][j]);
            if (i == j){
            	sum += A[i][j];
			} 
			if ((i < j) && (max < A[i][j])){
				max = A[i][j];
				keep[0] = i;
				keep[1] = j;				
			} 
			if ((i > j) && (min > A[i][j])){
				min = A[i][j];
				buf[0] = i;
				buf[1] = j;
			}
        }
        printf("\n");
   	}
   	
	printf("Сумма элементов диагонали равна %d\n", sum);
	printf("Место максимального элемента выше диагонали %d %d\n", keep[0], keep[1]);
	printf("Место минимального элемента ниже диагонали %d %d\n", buf[0], buf[1]);
	getch();
	return 0;
}

