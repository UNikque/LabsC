#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* "Output the table of ASCII " */

int main(int argc, char* argv[]) {
  setlocale(LC_ALL, ".1251");
    unsigned char i;
    int j;
    for (j=0; j<256; j++) {
    	printf("%3d - %c \n", i, i);
    	i++;
   
	}

    getch();
    return 0;
}








