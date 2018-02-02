#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{
        int x1, y1, x2, y2;
        printf("Vvedite koordinati ladzi (X1 i Y1) ot 1 do 8\n");
        scanf("%d %d", &x1, &y1);
        printf("Vvedite koordinati figuri (X2 i Y2) kab sbit ot 1 do 8\n");
        scanf("%d %d", &x2, &y2);
        if (((x1<=0) || (x1>=9)) || ((y1<=0) || (y1>=9)) || ((x2<=0) || (x2>=9)) || ((y2<=0) || (y2>=9)))
          printf("Nevernie VALUE, inaya razmetka polya: 8x8");
            else if ((x1==x2) && (y1==y2))
               printf("Takogo NEWOZMOZHNO: 2 Figuri ne mogut stoyat na odnoj kletke");
		  else if ((x1==x2) || (y1==y2)) printf("Figura sbita");
                     else printf("Figura NE sbita");
        getch();
        return 0;
}
