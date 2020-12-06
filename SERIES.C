/*Print the following series
1,3,8,15,... */

#include<stdio.h>
#include<conio.h>

void main()
{
 int a=1;
 clrscr();
 printf("\n%d",a);

 while(a<=10)
 {
  a++;
  printf("%d",a*a-1);
 }
 getch();
}