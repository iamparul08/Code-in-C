//strcat()

#include<stdio.h>
#include<conio.h>

void main()
{
 char str1[10],str2[10];
 clrscr();
 printf("\nEnter first and second strings: ");
 //scanf("%s %s",str1,str2);
 gets(str1);
 gets(str2);
 strcat(str1,str2);
 printf("\nFirst string: %s\t Second string is: %s\n",str1,str2);
 strcat(str1,"-one");
 printf("\nNow first string is %s\n",str1);
 getch();
}