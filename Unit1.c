//---------------------------------------------------------------------------

#pragma hdrstop


//---------------------------------------------------------------------------

#pragma argsused
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{
        int a, b, c;
        printf("Enter length of sides of a triangle a, b, c");
        scanf("%d %d %d", &a, &b, &c);
        if (((a<=0) || (b<=0) || (c<=0)) || ((a+b<=c) || (a+c<=b) || (b+c<=a))) printf("Triangle is no");
        else if ((a==b) || (b==c) || (a==c)) printf("Triangle is isosceles");
        else printf("Triangle is not isosceles");
        getch();
        return 0;
}
//---------------------------------------------------------------------------
 
