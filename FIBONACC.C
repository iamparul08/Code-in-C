/*Fibonacci Series*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int a=0,b=1,c=0;
 clrscr();
 printf("\nFibonacci Series upto 20 is: \n");
 printf("%d\n%d",a,b);

 while(c<20)
 {
  c=a+b;
  printf("\n%d",c);
  a=b;
  b=c;
 }
 getch();
}