/*WAP to pass array elements to a function*/

#include<stdio.h>
#include<conio.h>

void check(int);	//fn prototype
void main()
{
 int i,a[10],num;
 clrscr();

 for(i=0;i<10;i++)          //reading the input
 {
  printf("\nEnter value at a[%d] : ",i);
  scanf("%d",&a[i]);
  check(a[i]);
 }

printf("OVER!");
getch();
}

 void check(int num)
{
 if(num%2==0)
 {
  printf("%d is even\n",num);
 }
 else
 {
  printf("%d is odd\n",num);
 }
}