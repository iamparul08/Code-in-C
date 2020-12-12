//print sum of elements in array

#include<stdio.h>
#include<conio.h>
#define SIZE 100

void main()
{
 int sum=0,i,n,arr[SIZE];
 clrscr();

 printf("\nHow many elements you want to enter in an array?");
 scanf("%d",&n);

 printf("\nEnter the %d elements: ",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }

 printf("\nEntered elements in array is: ");
 for(i=0;i<n;i++)
 {
  printf("%d",arr[i]);
  sum=sum+arr[i];
 }
 printf("\nSum of array element is : %d",sum);


getch();
}
