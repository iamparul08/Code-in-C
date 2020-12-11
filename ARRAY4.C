//print array in reverse order

#include<stdio.h>
#include<conio.h>
#define SIZE 10

void main()
{
 int arr[SIZE],a,i;
 clrscr();
 printf("\nHow many elements to store in array?");
 scanf("%d",&a);
 printf("\nEnter the %d elements of an array: ",a);
 for(i=0;i<a;i++)
 {
  scanf("%d",arr[i]);
 }

 printf("\nArray is: ");
 for(i=0;i<a;i++)
 {
  printf("%4d",arr[i]);
 }

 printf("\nNow reverse of array is: ");
 for(i=a-1;i>=0;i--)
 {
  printf("%4d",arr[i]);
 }

 getch();
}