/*WAP input n elements in array and print sum of even and odd numbers. */

#include<stdio.h>
#include<conio.h>
#define SIZE 100

void main()
{
 int arr[SIZE],i,n,sum=0,sum1=0;
 clrscr();
 printf("\nHow many elements you want to insert in an array?");
 scanf("%d",&n);

 printf("\nEnter the %d elements",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }

 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  {
   sum=sum+arr[i];
  }
  else
  { sum1=sum1+arr[i]; }
 }
 printf("\n The sum of even and odd numbers are: %d and %d ",sum,sum1);


 getch();

}