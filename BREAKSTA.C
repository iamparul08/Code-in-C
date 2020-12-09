/*Example of break statement.*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int j=0;
 clrscr();
 printf("Initial value of j is %d",j);

 printf("\nFor loop");
 for(;j<6;j++)
 if(j==4)
 break;
 printf("\n%d",j);	//o/p is 4

getch();
}