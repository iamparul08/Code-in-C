/*swap two strings*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str1[10],str2[10],str3[10];
 clrscr();
 printf("\nEnter any two strings of your choice: ");
 gets(str1);
 gets(str2);

 strcpy(str3,str1);
 strcpy(str1,str2);
 strcpy(str2,str3);
 printf("\nThe first string after swapping: %s",str1);
 printf("\nThe second string after swapping: %s",str2);

 getch();
}