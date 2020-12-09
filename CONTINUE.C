/*Example of Continue statement. */

#include<stdio.h>
#include<conio.h>

void main()
{
 int i;
 clrscr();
 printf("\nBefore loop");

 for(i=2;i<=9;i++)
 {
  if(i==4)
  continue;
  printf("\nValue of i after continue statement is %d",i);
 }
 printf("\nOut of loop");
 getch();
}