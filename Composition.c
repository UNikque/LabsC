#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*The development of the function l = 2 * 4 * 6 * 8 * ... * 2n for the n*/

int main(int argc, char* argv[]) { 
        int P = 1, n, i;

        printf("Input number N: \n");
        scanf("%d", &n);
        
        for (i = 1; i <= n; i++) {
            P = P * 2 * i; 
		}
		
        printf("P = ");
        printf("%d", P);
        
        getch();
        return 0;
}




