#pragma hdrstop
#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
#include <malloc.h>

 /*
�������: "���� �������������� ���������� ������� ������� 2N. �������� ����� �������: 1  4 . ��������� ������������ ������." */
int main()                                                                        // 3  2
{
    setlocale(LC_ALL, ".1251");   
    srand(time(NULL)); 
	    
		int *a;   
        int N, i, j, keep;
        
        printf("������� ����������� N �������:\n");
        scanf("%d", &N);
        
        a = (int*)malloc(4*N*N * sizeof(int));
		   
 		printf("�������������� �������\n");
	    for(i=0;i<2*N;i++)
		{
            for(j=0;j<2*N;j++) 
			{
                *(a+i*2*N+j)=rand() % 9 + 1;	
                printf("%d  ", *(a+i*2*N+j));
            }
            printf("\n");
   		}
           
        printf("\n���������� �������\n");
        
        for(i=0;i<N;i++)
		{
            for(j=0;j<N;j++)
			{
        	    keep=*(a+i*2*N+(j+N));
        	   *(a+i*2*N+(j+N))=*(a+(i+N)*2*N+(j+N));
        	   *(a+(i+N)*2*N+(j+N))=*(a+(i+N)*2*N+j);
        	   *(a+(i+N)*2*N+j)=keep;
            }
   		}	
   	   	
     	for(i=0;i<2*N;i++)
		{
            for(j=0;j<2*N;j++)
			{
                printf("%d  ", *(a+i*2*N+j));
            }
            printf("\n");
   		}
   		free(a);
 
getchar();
return 0;
}
