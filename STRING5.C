/*strrev()*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[10];
 clrscr();
 printf("\nEnter any string of your choice: ");
 gets(str);
 strrev(str);
 printf("\nReversed string: %s ",str);
 getch();
}