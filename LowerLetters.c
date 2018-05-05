#pragma hdrstop
#pragma argsused
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>
/* "The program replaces in text all CAPTAL Latin letters on lower..." */

 
int main(int argc, char *argv[]) 
{
 setlocale(LC_ALL, ".1251");
 int i=0;
 char s[100];
 
printf("Enter some line in English:\n");
 
gets(s);
 
  do
  {
    if (s[i]>='A' && s[i]<='Z') 
	  s[i]=tolower(s[i]);
    putchar(s[i]); 
	i++; 
  }	while (s[i]!='\0');
 
getch();
return 0;
}
