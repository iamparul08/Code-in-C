//count even and odd numbers in an array

#include<stdio.h>
#include<conio.h>
#define SIZE 100

void main()
{
 int a[SIZE],n,i,even=0,odd=0;
 clrscr();

 printf("\nHow many array elements you want to insert in an array?");
 scanf("%d",&n);

 printf("\nEnter the %d elements",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)
  even++;
  else
  odd++;
 }
 printf("\nNumbers of even numbers present in an array are %d ",even);
 printf("\nNumbers of odd numbers present in an array are %d ",odd);

 getch();
}



