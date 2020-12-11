// strcmp()

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str1[10],str2[10];
 clrscr();

 printf("\nEnter first string: ");
 gets(str1);
 printf("\nEnter second string: ");
 gets(str2);

 if(strcmp(str1,str2)==0)
 { printf("\nStrings are same.");  }
 else
 { printf("\nStrings are not same.");  }
 getch();
}