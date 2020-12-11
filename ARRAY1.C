/*Input values into an array and display them*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,arr[5];
 clrscr();

 for(i=0;i<5;i++)	//for reading input
 {
  printf("\nEnter a value at arr[%d] ",i);
  scanf("%d",&arr[i]);
 }

 printf("\nThe array elements are: ");
 for(i=0;i<5;i++) 	//for displaying output
 {
  printf("%d\t",arr[i]);
 }
 getch();
}