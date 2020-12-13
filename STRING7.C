/*String is palindrome*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str1[10],str2[10];
 clrscr();

 printf("\nEnter any string to check if it's palindrome or not: ");
 gets(str1);

 strcpy(str2,str1);
 strrev(str2);

 if(strcmp(str1,str2)==0)
 printf("\nString is palindrome.");
 else
 printf("\nString is not palindrome.");
 getch();
}