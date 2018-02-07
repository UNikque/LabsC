#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*"In one-dimensional array of N int numbers need to find sum average of all negative arrays elements." */

int main(int argc, char* argv[]) {
  setlocale(LC_ALL, ".1251");
    int i, n, x, k=0;
    double aver, sum=0;
    printf("Input count arrays:\n");
    scanf("%d", &n);
    int arr[n], *p;
    p=arr;
    printf("Input element:\n");
    for (i=1; i<=n; i++) {
    	scanf("%d", p+i);
    	if (*(p+i)<0) {
		    sum+=*(p+i);
		    k++;
		}
    }
    if (k==0) {
    	printf ("Division by zero");
	} else {
	    printf("Average of all negative arrays elements:\n%2.lf / %d = %lf ", sum, k, aver=sum/k);     
	}
    getch();
    return 0;
}





