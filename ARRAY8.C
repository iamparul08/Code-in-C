//bubble sort

#include<stdio.h>
#include<conio.h>
#define SIZE 100

void main()
{
 int a[SIZE],i,j,n,c;
 clrscr();
 printf("\nHOw many elements to store in array?");
 scanf("%d",&n);
 printf("\nEnter the %d elements: ",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
   }
  }
 }
 printf("\n The new array after bubble sorting is=\n");
 for(i=0;i<n;i++)
 {
  printf("%4d",a[i]);
 }
 getch();
}