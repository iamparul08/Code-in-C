/*WAP to add 5 array elements*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,sum=0,a[5];
 clrscr();

 for(i=0;i<5;i++)
 {
  printf("\nEnter the value for a[%d] ",i);
  scanf("%d",&a[i]);
 }

 for(i=0;i<5;i++)
 {
  sum=sum+a[i];
 }
 printf("\nThe sum of 5 array elements is %d",sum);
 getch();
}