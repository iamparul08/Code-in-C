//strcpy()

#include<stdio.h>
#include<conio.h>

void main()
{
 int str1[10],str2[10];
 clrscr();

 printf("\nEnter the second string: ");
 gets(str2);
 strcpy(str1,str2);
 printf("\nString which is being copied is: %s",str1);
 strcpy(str1,"\nJonathan Byers");
 strcpy(str2,"Nancy Wheelers");
 printf("\nNew Strings are %s and %s ",str1,str2);

 getch();
}