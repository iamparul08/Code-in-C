// strlen() function

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[10];
 clrscr();

 printf("\nEnter a string: ");
 gets(str);
 printf("\nLength of the string is : %d ",strlen(str));
 getch();
}

